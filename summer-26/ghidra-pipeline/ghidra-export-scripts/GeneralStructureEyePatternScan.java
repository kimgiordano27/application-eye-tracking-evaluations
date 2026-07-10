// GeneralStructureEyePatternScan.java
//
// General structure-first Ghidra scanner for possible eye-tracking functionality.
// This does NOT require eye/gaze names to match.
// It scores functions based on behavior:
//   1) sensor/state retrieval or availability checks
//   2) validity/confidence/enabled/null checks
//   3) pose/vector extraction
//   4) use sinks: raycast, UI interaction, logging, telemetry, foveation, rendering
//   5) frame/update timing behavior
//
// Output:
//   - candidate .c files grouped by label
//   - structure_scan_report.csv
//   - structure_scan_report.json
//   - _scan_summary.txt
//   - _failed_decompiles.txt

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class GeneralStructureEyePatternScan extends GhidraScript {
    
    // ============================================================
    // V2 pattern strategy
    //
    // The old scanner gave too much credit to generic Unity patterns:
    // Vector3, x/y/z fields, Update(), Material/Shader, StringBuilder,
    // Append(), UI dropdowns, render pipelines, and InputSystem layouts.
    //
    // V2 separates:
    //   - strong eye/gaze API anchors
    //   - weak XR/input/render context
    //   - true sinks vs weak string/UI/render operations
    //   - known Unity-engine false-positive families
    //
    // Eye/gaze words still are not strictly required, but a "near certain"
    // label now requires either a strong eye anchor OR a very specific ordered
    // structure: source/state -> validity/confidence -> pose/ray -> sink.
    // ============================================================

    // Strong API/name anchors for actual eye/gaze implementations.
    // Include Meta/Quest, OpenXR, Unity InputSystem/OpenXR, and common VR SDKs.
    private static final Pattern[] STRONG_EYE_SOURCE_PATTERNS = new Pattern[] {
        Pattern.compile("(OVREyeGaze|OVRPlugin|OVRManager|Meta\\.XR|EyeGaze|EyeTracking|EyeTracked|EyeGazesState|EyeTrackingState)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(GetEyeGazesState|GetEyeGaze|TryGetEye|TryGetGaze|GetGaze|ReadGaze|UpdateGaze|PollGaze)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(XR_EXT_eye_gaze_interaction|eye_gaze_interaction|gaze_ext|/user/eyes_ext/input/gaze_ext/pose)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(XrEyeGaze|EyeGazeSampleTime|xrLocateSpace|xrGetActionStatePose)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(OculusFoveation|FoveationEyeTracked|EyeTrackedFoveatedRendering|xrGetFoveationEyeTrackedStateMETA|ovrp_(Get|Set)FoveationEyeTracked)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(PXR_Eye|Pico.*Eye|SRanipal|ViveSR.*Eye|Tobii.*XR|Varjo.*Eye|pupil|leftEye|rightEye)", Pattern.CASE_INSENSITIVE)
    };

    // Eye words as a smaller boost. This is broad, so do not let it decide alone.
    private static final Pattern EYE_KEYWORD_RE = Pattern.compile(
        "(eye|gaze|EyeGaze|OVREye|EyeTracking|EyeTracked|leftEye|rightEye|pupil|fovea|foveation|XR_EXT_eye_gaze_interaction|OculusFoveation)",
        Pattern.CASE_INSENSITIVE
    );

    // Weak context: useful only when it appears near stronger structure.
    private static final Pattern[] WEAK_XR_SOURCE_PATTERNS = new Pattern[] {
        Pattern.compile("(OpenXR|OVRPlugin|OVRManager|XRInput|XRSettings|InputDevice|FeatureValue|ActionState|ActionSet|TrackingOrigin|TrackedPose)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(Get|TryGet|Query|Read|Update|Poll)[A-Za-z0-9_$]*(State|Pose|Data|Input|Sensor|Tracking|Feature|Permission|Enabled)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(TrackingEnabled|isTracked|IsTracked|available|supported|active|permission|enabled)", Pattern.CASE_INSENSITIVE)
    };

    // Generic validity / confidence / gating checks.
    private static final Pattern[] VALIDITY_PATTERNS = new Pattern[] {
        Pattern.compile("(confidence|minConfidence|threshold|TrackingConfidence|TrackingState|IsDataValid|valid|isValid|IsValid|isTracked|IsTracked|TrackingEnabled|hasPermission|permission)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("if\\s*\\([^\\)]*(==\\s*0|!=\\s*0|<|<=|>|>=)[^\\)]*\\)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("\\*\\(long \\*\\)\\([^\\)]*\\)\\s*(==|!=)\\s*0"),
        Pattern.compile("\\*\\(float \\*\\)\\([^\\)]*\\)\\s*(<|<=|>|>=)\\s*[^;\\n]+")
    };

    // Strong pose/ray construction indicators.
    private static final Pattern[] STRONG_POSE_VECTOR_PATTERNS = new Pattern[] {
        Pattern.compile("(UnityEngine_Transform__get_(position|rotation|forward|up|right)|get_(position|rotation|forward|up|right)\\s*\\()", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(Vector2|Vector3|Vector4|Quaternion|Pose|Ray)\\b", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(Normalize|normalized|Magnitude|TransformDirection|InverseTransformPoint|WorldToScreenPoint|WorldToViewportPoint)\\s*\\(", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(origin|direction|forward|position|rotation|ray)\\b", Pattern.CASE_INSENSITIVE)
    };

    // Weak vector indicators. These should never make a result strong by themselves.
    private static final Pattern[] WEAK_VECTOR_PATTERNS = new Pattern[] {
        Pattern.compile("(x|y|z|w)\\s*=|\\.x|\\.y|\\.z|\\.w"),
        Pattern.compile("(Distance|Angle)\\s*\\(", Pattern.CASE_INSENSITIVE)
    };

    // Ray/object interaction sinks.
    private static final Pattern[] RAY_INTERACTION_PATTERNS = new Pattern[] {
        Pattern.compile("(Internal_)?(Raycast|SphereCast|CapsuleCast|BoxCast)[A-Za-z0-9_]*(_Injected)?", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(RaycastHit|PhysicsScene|Physics|Collider|collision|hitInfo|hitObject|layerMask)", Pattern.CASE_INSENSITIVE)
    };

    // UI/gameplay sinks that could represent gaze interaction, but are weak without an eye source.
    private static final Pattern[] UI_GAMEPLAY_SINK_PATTERNS = new Pattern[] {
        Pattern.compile("(GetComponent|GetComponentInParent|GetComponentInChildren)\\s*\\(", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(SetActive|set_enabled|set_color|SetColor|set_material|SetMaterial|LineRenderer|Renderer|Material)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(set_fillAmount|set_value|set_normalizedValue|onClick|Invoke|Submit|Confirm|OnSelect|Selectable|Button|Slider)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(dwell|timer|hover|selection|reticle|cursor|focus)", Pattern.CASE_INSENSITIVE)
    };

    // Strong local collection sinks. Do not count generic Append/StringBuilder as collection.
    private static final Pattern[] STRONG_FILE_LOGGING_PATTERNS = new Pattern[] {
        Pattern.compile("(StreamWriter|BinaryWriter|TextWriter|FileStream|File\\.Write|File\\.Append|WriteLine|WriteAllText|AppendAllText|Flush|Close)\\s*\\(?", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(persistentDataPath|temporaryCachePath|\\.csv|\\.json|\\.txt)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(get_time|get_frameCount|get_realtimeSinceStartup|get_unscaledTime|DateTime|Now)\\s*\\(", Pattern.CASE_INSENSITIVE)
    };

    // Weak string-building signs. Useful only if a strong sink exists nearby.
    private static final Pattern[] WEAK_STRING_BUILD_PATTERNS = new Pattern[] {
        Pattern.compile("(Append|AppendLine|AppendFormat|StringBuilder|Concat|Format|ToString)\\s*\\(", Pattern.CASE_INSENSITIVE)
    };

    // Network / telemetry / analytics sinks.
    private static final Pattern[] TELEMETRY_PATTERNS = new Pattern[] {
        Pattern.compile("(Telemetry|Analytics|SendEvent|LogEvent|TrackEvent|Upload|Post|Request|UnityWebRequest|HttpClient|WebRequest|UploadHandlerRaw)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(Serialize|JsonUtility|ToJson|payload|eventName|session)", Pattern.CASE_INSENSITIVE)
    };

    // Strong foveation indicators. Generic Shader/Material alone is no longer enough.
    private static final Pattern[] STRONG_FOVEATION_PATTERNS = new Pattern[] {
        Pattern.compile("(Foveation|Foveated|SetFoveation|foveationLevel|EyeTrackedFoveatedRendering|OculusFoveation|FoveationEyeTracked|xrGetFoveationEyeTrackedStateMETA|ovrp_(Get|Set)FoveationEyeTracked)", Pattern.CASE_INSENSITIVE)
    };

    // Functionality-specific classifiers.
    // These do not replace the score. They explain what the function appears to be doing.
    private static final Pattern[] FUNCTIONALITY_PERMISSION_PATTERNS = new Pattern[] {
        Pattern.compile("(Permission|Permissions|HasEyeTrackingPermissions|SetHasEyeTrackingPermissions|GetHasEyeTrackingPermissions|RequestUserPermissions|OnPermissionGranted|StartEyeTracking|StopEyeTracking)", Pattern.CASE_INSENSITIVE)
    };

    private static final Pattern[] FUNCTIONALITY_GAZE_RETRIEVAL_PATTERNS = new Pattern[] {
        Pattern.compile("(OVREyeGaze|EyeGaze|EyeGazesState|EyeGazeState|EyeTrackingState|GetEyeGazesState|GetEyeGazesStateRaw|GetEyeGaze|TryGetEye|TryGetGaze|GetGaze|ReadGaze|UpdateGaze|PollGaze)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(get_Confidence|ConfidenceThreshold|minConfidence|confidence|TrackingConfidence)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(get_EyeTrackingEnabled|EyeTrackingEnabled|TrackingEnabled|IsTracked|isTracked|valid|isValid|IsValid)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(gazeOrigin|gazeDirection|gazePose|origin|direction|forward|WorldSpace|HeadSpace|TrackingSpace)", Pattern.CASE_INSENSITIVE)
    };

    private static final Pattern[] FUNCTIONALITY_INTERACTION_PATTERNS = new Pattern[] {
        Pattern.compile("(Raycast|RaycastHit|TryGetCurrent3DRaycastHit|TryGetHitInfo|Collider|get_collider|hitInfo|SnapVolume)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(SetColor|set_color|set_material|SetMaterial|SetActive|set_enabled|Renderer|Material|LineRenderer|Debug_DrawRay)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(Button|Selectable|Submit|Invoke|OnSelect|hover|dwell|reticle|cursor|focus|selection)", Pattern.CASE_INSENSITIVE)
    };

    private static final Pattern[] FUNCTIONALITY_COLLECTION_PATTERNS = new Pattern[] {
        Pattern.compile("(StreamWriter|TextWriter|BinaryWriter|FileStream|WriteLine|WriteAllText|AppendAllText|File_Write|File_Append|Flush|Close)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(persistentDataPath|temporaryCachePath|\\.csv|\\.json|\\.txt)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(Telemetry|Analytics|SendEvent|LogEvent|TrackEvent|UnityWebRequest|Upload|Post|Request|payload|session)", Pattern.CASE_INSENSITIVE)
    };

    private static final Pattern[] FUNCTIONALITY_BIOMETRIC_PATTERNS = new Pattern[] {
        Pattern.compile("(pupil|pupilDiameter|pupilDilation|iris|blink|blinkRate|saccade|fixation|vergence|convergence)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(attention|engagement|fatigue|emotion|stress|cognitive|biometric|identity|authentication)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(FaceExpression|OVRFaceExpressions|eyeOpenness|leftEye|rightEye)", Pattern.CASE_INSENSITIVE)
    };

    // Generic rendering terms. These mostly become negatives unless paired with strong foveation.
    private static final Pattern[] GENERIC_RENDER_PATTERNS = new Pattern[] {
        Pattern.compile("(SetVector|SetFloat|SetTexture|PropertyToID|Shader|Material|RenderTexture|Renderer|RenderPipeline|GPUResident|ProbeReferenceVolume|MeshRenderer|LODGroup)", Pattern.CASE_INSENSITIVE)
    };

    // Timing / repeated frame behavior.
    private static final Pattern[] FRAME_PATTERNS = new Pattern[] {
        Pattern.compile("(Update|LateUpdate|FixedUpdate|OnBeforeRender|OnApplicationPause|OnEnable|Start)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(get_deltaTime|get_frameCount|get_time|get_realtimeSinceStartup|get_unscaledTime)", Pattern.CASE_INSENSITIVE)
    };

    // Known false-positive families observed during manual review.
    private static final Pattern KNOWN_UNITY_FALSE_POSITIVE_RE = Pattern.compile(
        "(TMP_Dropdown|TextMeshPro|UnityEngine\\.UI\\.Dropdown|UnityEngine_UI_Dropdown|VisualTreeDataBindingsUpdater|RegisterControlLayout|ResetDevice|GPUResidentDrawer|ProbeReferenceVolume|UniversalRenderPipeline|UniversalRenderer|AdditionalLightsShadowCasterPass|MaterialPropertyBlock|RenderSingleCamera|InputManager__RegisterControlLayout|System\\.Array::UnsafeMov|MonoPInvokeCallback|marshal|marshaling|IL2CPP)",
        Pattern.CASE_INSENSITIVE
    );

    private static final Pattern GENERIC_PHYSICS_HELPER_RE = Pattern.compile(
        "UnityEngine\\.PhysicsScene::Internal_(Raycast|RaycastTest|RaycastNonAlloc|SphereCast|SphereCastNonAlloc|CapsuleCast|BoxCast).*_Injected",
        Pattern.CASE_INSENSITIVE
    );

    private static final Pattern GENERIC_UI_ONLY_RE = Pattern.compile(
        "(Dropdown|TMP_Dropdown|Button|Selectable|VisualTreeDataBindingsUpdater|DataBindingManager|BindingUpdater)",
        Pattern.CASE_INSENSITIVE
    );

    private static final Pattern GENERIC_RENDER_ONLY_RE = Pattern.compile(
        "(GPUResidentDrawer|ProbeReferenceVolume|RenderPipeline|Renderer|MeshRenderer|LODGroup|ShadowCaster|Material|Shader|RenderTexture)",
        Pattern.CASE_INSENSITIVE
    );

    // ============================================================
    // V3 attempted-use and false-positive context layer
    //
    // This layer separates:
    //   - framework/support code that ships with Unity/OpenXR/URP/InputSystem
    //   - attempted use such as permission requests or feature enables
    //   - active use where gaze state is retrieved and flows to a sink
    // ============================================================

    // Namespaces/classes that often appear because Unity, OpenXR, URP, XRI, or .NET ship support code.
    // These should be downweighted unless we also see active gaze retrieval or a project/app-level hint.
    private static final Pattern FRAMEWORK_SUPPORT_NAMESPACE_RE = Pattern.compile(
        "^(UnityEngine[._]|Unity[._]XR|Unity[._]VR|Unity[._]Collections|Unity[._]InputSystem|Unity[._]Rendering|System[._]|Microsoft[._]|Mono[._]|TMPro[._]|OpenXRInput[._])",
        Pattern.CASE_INSENSITIVE
    );

    // Heuristic app/custom-script hints. Keep this broad but not too generic.
    // This does not prove eye tracking; it just prevents project scripts from being treated like engine defaults.
    private static final Pattern APP_LEVEL_HINT_RE = Pattern.compile(
        "(SimpleEyeGaze|EyeGazeCube|GazeRaycaster|GazeLogger|GazeRecorder|GazeInteraction|GazeData|EyeData|EyeTrackingManager|PermissionsManager|AdvancedGrab|GameManager|Player|Reticle|Cursor|Cube|Scene|FruitBlade|AimAssault|Ragmans|ACE)",
        Pattern.CASE_INSENSITIVE
    );

    // Attempted eye-tracking use: permission requests, enable calls, gaze classes, or eye-tracked foveation setup.
    // This catches apps that try to use eye tracking even when active gaze retrieval is not visible in the same function.
    private static final Pattern[] ATTEMPTED_EYE_USE_PATTERNS = new Pattern[] {
        Pattern.compile("(RequestUserPermissions|RequestPermission|HasEyeTrackingPermissions|SetHasEyeTrackingPermissions|GetHasEyeTrackingPermissions)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(StartEyeTracking|StopEyeTracking|EyeTrackingEnabled|set_EyeTrackingEnabled|get_EyeTrackingEnabled|SetEyeTrackingEnabled|GetEyeTrackingEnabled)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(OVREyeGaze|EyeGaze|XRGazeInteractor|XR_EXT_eye_gaze_interaction|eye_gaze_interaction|/user/eyes_ext/input/gaze_ext/pose)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(EyeTrackedFoveatedRendering|FoveationEyeTracked|OculusFoveation|ConfigureFoveatedRendering|SetFoveation|GetFoveation)", Pattern.CASE_INSENSITIVE)
    };

    // Active gaze retrieval: these imply the code is trying to obtain gaze state/pose/sample data.
    // To become confirmed active use, this still needs validity/confidence and pose/sink structure.
    private static final Pattern[] ACTIVE_GAZE_RETRIEVAL_PATTERNS = new Pattern[] {
        Pattern.compile("(GetEyeGazesState|GetEyeGazesStateRaw|GetEyeGaze|TryGetEye|TryGetGaze|ReadGaze|PollGaze|UpdateGaze|GetGaze)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(gazeOrigin|gazeDirection|gazePose|EyeGazeState|EyeGazesState|EyeTrackingState|TrackingConfidence|Confidence)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(xrLocateSpace|xrGetActionStatePose|XrEyeGaze|EyeGazeSampleTime)", Pattern.CASE_INSENSITIVE),
        Pattern.compile("(leftEye|rightEye|pupil|EyeOpenness|FaceExpression|OVRFaceExpressions)", Pattern.CASE_INSENSITIVE)
    };

    // System/data helpers create many false positives. They are only meaningful if actual gaze values flow into them.
    private static final Pattern GENERIC_SYSTEM_DATA_HELPER_RE = Pattern.compile(
        "^(System[._]IO|System[._]Runtime[._]Serialization|System[._]Text|UnityEngine[._]JsonUtility|UnityEngine_JsonUtility|System_IO|System_Runtime_Serialization)",
        Pattern.CASE_INSENSITIVE
    );

    // Generic field access, used to detect two adjacent sensor/state references.
    private static final Pattern FIELD_PTR_RE = Pattern.compile(
        "\\*\\(long \\*\\)\\(\\s*([A-Za-z_][A-Za-z0-9_]*)\\s*\\+\\s*(0x[0-9a-fA-F]+)\\s*\\)"
    );

    private static class FieldHit {
        int pos;
        String base;
        long offset;

        FieldHit(int pos, String base, long offset) {
            this.pos = pos;
            this.base = base;
            this.offset = offset;
        }
    }

    private static class ScoreResult {
        int score = 0;
        String label = "below_threshold";
        String eyeTrackingDecision = "no"; // yes, uncertain, no
        String useClassification = "unrelated";
        String frameworkContext = "unknown";
        List<String> functionality = new ArrayList<String>();
        List<String> evidence = new ArrayList<String>();
        List<String> modules = new ArrayList<String>();
    }

    private static class ResultRow {
        String functionName;
        String entryPoint;
        int score;
        String label;
        String eyeTrackingDecision;
        String useClassification;
        String frameworkContext;
        List<String> functionality;
        List<String> modules;
        List<String> evidence;
        String filePath;
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();

        if (args.length < 1) {
            throw new Exception("Usage: GeneralStructureEyePatternScan.java <output_dir> <min_review_score> <export_all>");
        }

        File outRoot = new File(args[0]);

        int minReviewScore = 35;
        if (args.length >= 2) {
            minReviewScore = Integer.parseInt(args[1]);
        }

        boolean exportAll = false;
        if (args.length >= 3) {
            exportAll = Boolean.parseBoolean(args[2]);
        }

        outRoot.mkdirs();

        File reportJson = new File(outRoot, "structure_scan_report.json");
        File reportCsv = new File(outRoot, "structure_scan_report.csv");
        File summaryFile = new File(outRoot, "_scan_summary.txt");
        File failedFile = new File(outRoot, "_failed_decompiles.txt");

        println("General structure scan starting...");
        println("Output: " + outRoot.getAbsolutePath());
        println("Minimum review score: " + minReviewScore);
        println("Export all: " + exportAll);

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);

        FunctionIterator funcs = currentProgram.getFunctionManager().getFunctions(true);

        List<ResultRow> rows = new ArrayList<ResultRow>();

        int totalFunctions = 0;
        int failedDecompiles = 0;
        int exported = 0;

        PrintWriter failedWriter = new PrintWriter(failedFile);

        while (funcs.hasNext() && !monitor.isCancelled()) {
            Function func = funcs.next();
            totalFunctions++;

            String funcName = func.getName();
            String entry = func.getEntryPoint().toString();

            try {
                DecompileResults res = ifc.decompileFunction(func, 60, monitor);

                if (!res.decompileCompleted() || res.getDecompiledFunction() == null) {
                    failedDecompiles++;
                    failedWriter.println(entry + " " + funcName + " : decompile did not complete");
                    continue;
                }

                String cText = res.getDecompiledFunction().getC();

                if (cText == null || cText.trim().length() == 0) {
                    failedDecompiles++;
                    failedWriter.println(entry + " " + funcName + " : empty output");
                    continue;
                }

                ScoreResult scored = scoreFunction(funcName, cText);

                if (exportAll || scored.score >= minReviewScore) {
                    String tier = tierName(scored.score);
                    String folderName = tier + "_" + scored.label;

                    File labelDir = new File(outRoot, folderName);
                    labelDir.mkdirs();

                    String fileName = entry.replace(":", "_") + "_" + safeName(funcName) + ".c";
                    File outFile = new File(labelDir, fileName);

                    PrintWriter w = new PrintWriter(outFile);
                    w.println("/*");
                    w.println("FUNCTION_NAME: " + funcName);
                    w.println("ENTRY_POINT: " + entry);
                    w.println("PROGRAM: " + currentProgram.getName());
                    w.println("SCORE: " + scored.score);
                    w.println("LABEL: " + scored.label);
                    w.println("EYE_TRACKING_DECISION: " + scored.eyeTrackingDecision);
                    w.println("USE_CLASSIFICATION: " + scored.useClassification);
                    w.println("FRAMEWORK_CONTEXT: " + scored.frameworkContext);
                    w.println("FUNCTIONALITY: " + join(scored.functionality, ";"));
                    w.println("MODULES: " + join(scored.modules, ";"));
                    w.println("EVIDENCE: " + join(scored.evidence, ";"));
                    w.println("*/");
                    w.println();
                    w.println(cText);
                    w.close();

                    ResultRow row = new ResultRow();
                    row.functionName = funcName;
                    row.entryPoint = entry;
                    row.score = scored.score;
                    row.label = folderName;
                    row.eyeTrackingDecision = scored.eyeTrackingDecision;
                    row.useClassification = scored.useClassification;
                    row.frameworkContext = scored.frameworkContext;
                    row.functionality = scored.functionality;
                    row.modules = scored.modules;
                    row.evidence = scored.evidence;
                    row.filePath = outFile.getAbsolutePath();
                    rows.add(row);

                    exported++;
                }

                if (totalFunctions % 10000 == 0) {
                    println("Scanned " + totalFunctions + " functions. Exported so far: " + exported);
                }
            }
            catch (Exception e) {
                failedDecompiles++;
                failedWriter.println(entry + " " + funcName + " : exception");
                failedWriter.println(e.toString());
                failedWriter.println();
            }
        }

        failedWriter.close();

        writeCsv(reportCsv, rows);
        writeJson(reportJson, rows);

        PrintWriter summary = new PrintWriter(summaryFile);
        summary.println("Program: " + currentProgram.getName());
        summary.println("Total functions scanned: " + totalFunctions);
        summary.println("Exported functions: " + exported);
        summary.println("Decompile failures: " + failedDecompiles);
        summary.println("Minimum review score: " + minReviewScore);
        summary.println("Export all: " + exportAll);
        summary.println("Report CSV: " + reportCsv.getAbsolutePath());
        summary.println("Report JSON: " + reportJson.getAbsolutePath());
        summary.close();

        println("General structure scan complete.");
        println("Total functions scanned: " + totalFunctions);
        println("Exported functions: " + exported);
        println("Decompile failures: " + failedDecompiles);
        println("Report CSV: " + reportCsv.getAbsolutePath());
        println("Report JSON: " + reportJson.getAbsolutePath());
    }

    private ScoreResult scoreFunction(String funcName, String cText) {
        ScoreResult r = new ScoreResult();

        String text = "FUNCTION_NAME: " + funcName + "\n" + cText;

        int strongEyeHits = countAny(STRONG_EYE_SOURCE_PATTERNS, text);
        int weakSourceHits = countAny(WEAK_XR_SOURCE_PATTERNS, text);
        int validityHits = countAny(VALIDITY_PATTERNS, text);
        int strongPoseHits = countAny(STRONG_POSE_VECTOR_PATTERNS, text);
        int weakVectorHits = countAny(WEAK_VECTOR_PATTERNS, text);
        int rayHits = countAny(RAY_INTERACTION_PATTERNS, text);
        int uiGameplayHits = countAny(UI_GAMEPLAY_SINK_PATTERNS, text);
        int fileHits = countAny(STRONG_FILE_LOGGING_PATTERNS, text);
        int weakStringHits = countAny(WEAK_STRING_BUILD_PATTERNS, text);
        int telemetryHits = countAny(TELEMETRY_PATTERNS, text);
        int foveationHits = countAny(STRONG_FOVEATION_PATTERNS, text);
        int genericRenderHits = countAny(GENERIC_RENDER_PATTERNS, text);
        int frameHits = countAny(FRAME_PATTERNS, text);

        boolean hasEyeKeyword = EYE_KEYWORD_RE.matcher(text).find();
        boolean hasConsecutiveFields = hasNearbyConsecutiveFieldAccesses(text);
        boolean hasRepeatedPoseGetters = hasRepeatedPoseGetterCalls(text);

        boolean hasRaySink = rayHits >= 1;
        boolean hasUiSink = uiGameplayHits >= 2;
        boolean hasFileSink = fileHits >= 2;
        boolean hasTelemetrySink = telemetryHits >= 1;
        boolean hasFoveationSink = foveationHits >= 1;
        boolean hasStrongSink = hasRaySink || hasFileSink || hasTelemetrySink || hasFoveationSink || hasUiSink;

        boolean hasStrongEyeSource = strongEyeHits > 0;
        boolean hasAnySource = hasStrongEyeSource || weakSourceHits > 0;
        boolean hasPose = strongPoseHits > 0 || hasRepeatedPoseGetters;
        boolean hasOrderedEyeCollection = hasOrderedStructure(
            STRONG_EYE_SOURCE_PATTERNS,
            VALIDITY_PATTERNS,
            STRONG_POSE_VECTOR_PATTERNS,
            joinPatternGroups(STRONG_FILE_LOGGING_PATTERNS, TELEMETRY_PATTERNS),
            text,
            9000
        );
        boolean hasOrderedEyeInteraction = hasOrderedStructure(
            STRONG_EYE_SOURCE_PATTERNS,
            VALIDITY_PATTERNS,
            STRONG_POSE_VECTOR_PATTERNS,
            joinPatternGroups(RAY_INTERACTION_PATTERNS, UI_GAMEPLAY_SINK_PATTERNS),
            text,
            9000
        );

        boolean knownUnityFalsePositive = KNOWN_UNITY_FALSE_POSITIVE_RE.matcher(text).find();
        boolean genericPhysicsHelper = GENERIC_PHYSICS_HELPER_RE.matcher(text).find();
        boolean genericUiOnly = GENERIC_UI_ONLY_RE.matcher(text).find();
        boolean genericRenderOnly = GENERIC_RENDER_ONLY_RE.matcher(text).find();
        boolean genericSystemDataHelper = GENERIC_SYSTEM_DATA_HELPER_RE.matcher(funcName).find();

        boolean frameworkSupportNamespace = FRAMEWORK_SUPPORT_NAMESPACE_RE.matcher(funcName).find();
        boolean appLevelHint = APP_LEVEL_HINT_RE.matcher(funcName).find();
        boolean attemptedEyeUse = hasAny(ATTEMPTED_EYE_USE_PATTERNS, text);
        boolean activeGazeRetrieval = hasAny(ACTIVE_GAZE_RETRIEVAL_PATTERNS, text) && validityHits > 0 && hasPose;
        boolean activeGazeInteraction = activeGazeRetrieval && (hasRaySink || hasUiSink);
        boolean activeGazeCollection = activeGazeRetrieval && (hasFileSink || hasTelemetrySink);
        boolean possibleBiometricUse = activeGazeRetrieval && hasAny(FUNCTIONALITY_BIOMETRIC_PATTERNS, text);
        boolean dynamicFoveationPossible = attemptedEyeUse && hasFoveationSink;

        r.frameworkContext = frameworkSupportNamespace
            ? (appLevelHint ? "framework_namespace_with_project_hint" : "framework_or_engine_namespace")
            : "app_or_custom_namespace";

        // Strong positive anchors.
        if (strongEyeHits > 0) {
            add(r, 32 + Math.min(strongEyeHits, 4) * 6, "strong_eye_source_hits_" + strongEyeHits, "eye_source");
        }

        // Weak XR/source context gets small credit only. This avoids InputManager, OpenXR settings,
        // and generic controller/camera code jumping too high.
        if (weakSourceHits > 0) {
            add(r, 5 + Math.min(weakSourceHits, 3) * 2, "weak_xr_or_state_hits_" + weakSourceHits, "weak_source_state");
        }

        if (validityHits > 0) {
            add(r, 10 + Math.min(validityHits, 4) * 3, "validity_or_gating_hits_" + validityHits, "validity_gate");
        }

        if (strongPoseHits > 0) {
            add(r, 12 + Math.min(strongPoseHits, 4) * 4, "strong_pose_or_ray_construction_hits_" + strongPoseHits, "pose_vector");
        }

        // Weak x/y/z vectors are common in rendering/UI. Give only tiny support.
        if (weakVectorHits > 0 && hasStrongEyeSource) {
            add(r, Math.min(weakVectorHits, 3), "weak_vector_component_hits_" + weakVectorHits, "weak_pose_support");
        }

        if (hasConsecutiveFields && hasStrongEyeSource) {
            add(r, 12, "paired_field_refs_with_eye_source", "paired_state_refs");
        }
        else if (hasConsecutiveFields && hasPose && hasStrongSink) {
            add(r, 6, "paired_field_refs_with_structure_only", "paired_state_refs");
        }

        if (hasRepeatedPoseGetters) {
            add(r, 10, "repeated_pose_getters", "pose_vector");
        }

        if (hasRaySink) {
            add(r, 12 + Math.min(rayHits, 3) * 4, "ray_or_cast_sink_hits_" + rayHits, "ray_interaction");
        }

        if (hasUiSink) {
            add(r, 8 + Math.min(uiGameplayHits, 3) * 3, "ui_or_gameplay_sink_hits_" + uiGameplayHits, "ui_interaction");
        }

        if (hasFileSink) {
            add(r, 20 + Math.min(fileHits, 4) * 4, "strong_file_logging_hits_" + fileHits, "data_collection");
        }

        if (weakStringHits > 0 && hasFileSink) {
            add(r, 4, "weak_string_building_near_file_sink_" + weakStringHits, "weak_data_support");
        }

        if (hasTelemetrySink) {
            add(r, 22 + Math.min(telemetryHits, 3) * 5, "telemetry_or_network_hits_" + telemetryHits, "telemetry");
        }

        if (hasFoveationSink) {
            add(r, 22 + Math.min(foveationHits, 3) * 5, "strong_foveation_hits_" + foveationHits, "foveation_rendering");
        }

        if (frameHits > 0 && (hasStrongEyeSource || hasPose || hasStrongSink)) {
            add(r, 6, "frame_or_lifecycle_behavior", "frame_behavior");
        }

        // Structural combinations. These are the strongest evidence.
        if (hasAnySource && validityHits > 0 && hasPose && hasStrongSink) {
            add(r, 18, "source_validity_pose_sink_structure", "structure_combo");
        }

        if (hasStrongEyeSource && validityHits > 0 && hasPose && hasStrongSink) {
            add(r, 25, "strong_eye_source_validity_pose_sink_structure", "structure_combo");
        }

        if (hasOrderedEyeCollection) {
            add(r, 35, "ordered_eye_source_validity_pose_collection_sink", "ordered_structure");
        }

        if (hasOrderedEyeInteraction) {
            add(r, 30, "ordered_eye_source_validity_pose_interaction_sink", "ordered_structure");
        }

        // Keyword support is deliberately small.
        if (hasEyeKeyword && strongEyeHits == 0) {
            add(r, 8, "eye_or_gaze_keyword_boost_only", "keyword_support");
        }

        // Foveation setup without gaze pose should be reviewable, but it is not collection.
        boolean foveationPermissionOnly = hasFoveationSink && !hasPose && (validityHits > 0 || weakSourceHits > 0);

        // V3 attempted/active-use scoring. This gives credit for attempts, but reserves the
        // strongest labels for actual gaze retrieval flowing into a sink.
        if (attemptedEyeUse) {
            add(r, 14, "attempted_eye_tracking_permission_or_feature_enable", "attempted_use");
        }

        if (activeGazeRetrieval) {
            add(r, 34, "active_gaze_state_retrieval_with_validity_and_pose", "active_gaze_retrieval");
        }

        if (activeGazeInteraction) {
            add(r, 24, "active_gaze_values_flow_to_interaction_sink", "active_gaze_interaction");
        }

        if (activeGazeCollection) {
            add(r, 28, "active_gaze_values_flow_to_collection_or_telemetry_sink", "active_gaze_collection");
        }

        if (possibleBiometricUse) {
            add(r, 20, "possible_biometric_feature_from_active_eye_context", "possible_biometrics");
        }

        if (dynamicFoveationPossible) {
            add(r, 18, "attempted_eye_tracking_with_foveated_rendering_path", "dynamic_foveation_possible");
        }

        // Negatives from false positives seen in manual review.
        if (knownUnityFalsePositive && !hasStrongEyeSource) {
            r.score -= 70;
            r.evidence.add("negative_known_unity_or_il2cpp_false_positive_family");
        }

        if (genericPhysicsHelper && !hasStrongEyeSource && weakSourceHits == 0) {
            r.score -= 35;
            r.evidence.add("negative_generic_physics_helper_without_sensor_source");
        }

        if (genericUiOnly && !hasStrongEyeSource && !hasFileSink && !hasTelemetrySink) {
            r.score -= 45;
            r.evidence.add("negative_generic_ui_only_without_eye_source_or_collection");
        }

        if (genericRenderOnly && !hasFoveationSink && !hasStrongEyeSource) {
            r.score -= 55;
            r.evidence.add("negative_generic_rendering_without_foveation_or_eye_source");
        }

        if (genericRenderHits >= 3 && foveationHits == 0 && !hasStrongEyeSource) {
            r.score -= 30;
            r.evidence.add("negative_generic_render_terms_without_foveation");
        }

        if (weakStringHits >= 2 && !hasFileSink && !hasTelemetrySink) {
            r.score -= 25;
            r.evidence.add("negative_string_building_without_real_collection_sink");
        }

        if (hasStrongSink && !hasAnySource && validityHits == 0 && !hasPose) {
            r.score -= 35;
            r.evidence.add("negative_sink_without_sensor_structure");
        }

        // V3 false-positive controls. These address common system/default-code hits:
        // generic transform raycasts, URP render helpers, InputSystem events, and System.IO/serialization.
        if (frameworkSupportNamespace && !appLevelHint && !activeGazeRetrieval && !activeGazeCollection) {
            if (attemptedEyeUse || hasFoveationSink || hasStrongEyeSource) {
                r.score -= 20;
                r.evidence.add("negative_framework_support_context_without_confirmed_app_level_gaze_flow");
            }
            else {
                r.score -= 45;
                r.evidence.add("negative_framework_namespace_without_eye_use_flow");
            }
        }

        if (genericSystemDataHelper && !activeGazeCollection && !activeGazeRetrieval) {
            r.score -= 60;
            r.evidence.add("negative_system_io_serialization_or_json_helper_without_gaze_flow");
        }

        if (!hasStrongEyeSource && !attemptedEyeUse && hasRaySink && hasPose) {
            r.score -= 40;
            r.evidence.add("negative_generic_transform_raycast_without_eye_source_or_attempt");
        }

        if (frameworkSupportNamespace && hasFoveationSink && !activeGazeRetrieval) {
            r.evidence.add("framework_foveation_support_not_confirmed_dynamic_eye_tracking");
        }

        // Prevent "near certain" from generic structure alone.
        if (r.score >= 90 && !hasStrongEyeSource && !hasOrderedEyeCollection && !hasOrderedEyeInteraction && !foveationPermissionOnly) {
            r.score = 89;
            r.evidence.add("cap_below_near_certain_without_eye_anchor_or_ordered_structure");
        }

        if (r.score < 0) {
            r.score = 0;
        }

        classifyFunctionality(r, funcName, cText);
        classifyUseClassification(
            r,
            activeGazeRetrieval,
            activeGazeInteraction,
            activeGazeCollection,
            possibleBiometricUse,
            attemptedEyeUse,
            dynamicFoveationPossible,
            frameworkSupportNamespace,
            appLevelHint,
            knownUnityFalsePositive,
            genericPhysicsHelper,
            genericUiOnly,
            genericRenderOnly,
            genericSystemDataHelper,
            hasFoveationSink,
            hasStrongEyeSource
        );

        r.label = chooseLabelV2(
            r.score,
            hasStrongEyeSource,
            hasOrderedEyeCollection,
            hasOrderedEyeInteraction,
            hasFileSink,
            hasTelemetrySink,
            hasRaySink,
            hasUiSink,
            hasFoveationSink,
            foveationPermissionOnly,
            hasPose,
            validityHits,
            genericPhysicsHelper,
            knownUnityFalsePositive
        );

        r.label = refineLabelWithFunctionality(r);

        return r;
    }

    private void classifyFunctionality(ScoreResult r, String funcName, String cText) {
        String text = "FUNCTION_NAME: " + funcName + "\n" + cText;

        boolean hasEyeApi = hasAny(STRONG_EYE_SOURCE_PATTERNS, text);
        boolean hasEyeKeyword = EYE_KEYWORD_RE.matcher(text).find();
        boolean hasFoveation = hasAny(STRONG_FOVEATION_PATTERNS, text);
        boolean hasPermission = hasAny(FUNCTIONALITY_PERMISSION_PATTERNS, text);
        boolean hasGazeRetrieval = hasAny(FUNCTIONALITY_GAZE_RETRIEVAL_PATTERNS, text);
        boolean hasInteraction = hasAny(FUNCTIONALITY_INTERACTION_PATTERNS, text);
        boolean hasCollection = hasAny(FUNCTIONALITY_COLLECTION_PATTERNS, text);
        boolean hasBiometric = hasAny(FUNCTIONALITY_BIOMETRIC_PATTERNS, text);
        boolean hasPoseOrVector = hasAny(STRONG_POSE_VECTOR_PATTERNS, text) || hasRepeatedPoseGetterCalls(text);

        int eyeApiHits = countAny(STRONG_EYE_SOURCE_PATTERNS, text);
        int retrievalHits = countAny(FUNCTIONALITY_GAZE_RETRIEVAL_PATTERNS, text);
        int interactionHits = countAny(FUNCTIONALITY_INTERACTION_PATTERNS, text);
        int collectionHits = countAny(FUNCTIONALITY_COLLECTION_PATTERNS, text);
        int biometricHits = countAny(FUNCTIONALITY_BIOMETRIC_PATTERNS, text);

        // Permission / setup: direct eye permission or foveation permission wrappers.
        if ((hasEyeApi || hasFoveation) && hasPermission) {
            addFunctionality(r, "permission_setup");
            r.evidence.add("functionality_permission_setup");
        }

        // Foveated rendering is eye-tracking-related, but it is not raw gaze collection by itself.
        if (hasFoveation) {
            addFunctionality(r, "foveated_rendering");
            r.evidence.add("functionality_foveated_rendering");
        }

        // Gaze retrieval requires an eye/gaze source plus state/confidence/pose-like extraction.
        if (hasEyeApi && hasGazeRetrieval && (hasPoseOrVector || retrievalHits >= 2)) {
            addFunctionality(r, "gaze_retrieval");
            r.evidence.add("functionality_gaze_retrieval_or_extraction");
        }

        // Gaze interaction: gaze/eye source or explicit gaze class plus pose/ray/collider/UI use.
        if ((hasEyeApi || funcName.toLowerCase().contains("gaze")) && hasPoseOrVector && hasInteraction) {
            addFunctionality(r, "gaze_interaction");
            r.evidence.add("functionality_gaze_interaction_hits_" + interactionHits);
        }

        // Data collection / telemetry: only count as eye-related when paired with an eye/gaze source,
        // explicit gaze function name, or extracted gaze-like pose/state.
        if ((hasEyeApi || funcName.toLowerCase().contains("gaze") || (hasGazeRetrieval && hasPoseOrVector)) && hasCollection) {
            addFunctionality(r, "data_collection_or_telemetry");
            r.evidence.add("functionality_data_collection_or_telemetry_hits_" + collectionHits);
        }

        // Possible biometrics: keep conservative. It must be paired with eye/gaze context.
        if ((hasEyeApi || hasEyeKeyword || funcName.toLowerCase().contains("gaze")) && hasBiometric) {
            addFunctionality(r, "possible_biometrics");
            r.evidence.add("functionality_possible_biometrics_hits_" + biometricHits);
        }

        if (hasEyeApi && r.functionality.size() == 0) {
            addFunctionality(r, "setup_only");
            r.evidence.add("functionality_eye_api_context_without_clear_sink_hits_" + eyeApiHits);
        }

        // Final decision.
        // "yes" means the function is directly eye-tracking related.
        // "uncertain" means foveation/gaze naming or structure is present, but direct sensor use is not proven.
        if (hasEyeApi &&
            (containsFunctionality(r, "permission_setup")
             || containsFunctionality(r, "gaze_retrieval")
             || containsFunctionality(r, "gaze_interaction")
             || containsFunctionality(r, "data_collection_or_telemetry")
             || containsFunctionality(r, "possible_biometrics"))) {
            r.eyeTrackingDecision = "yes";
        }
        else if (hasFoveation || funcName.toLowerCase().contains("gaze") || (hasEyeKeyword && hasPoseOrVector)) {
            r.eyeTrackingDecision = "uncertain";
        }
        else {
            r.eyeTrackingDecision = "no";
        }
    }

    private void classifyUseClassification(
        ScoreResult r,
        boolean activeGazeRetrieval,
        boolean activeGazeInteraction,
        boolean activeGazeCollection,
        boolean possibleBiometricUse,
        boolean attemptedEyeUse,
        boolean dynamicFoveationPossible,
        boolean frameworkSupportNamespace,
        boolean appLevelHint,
        boolean knownUnityFalsePositive,
        boolean genericPhysicsHelper,
        boolean genericUiOnly,
        boolean genericRenderOnly,
        boolean genericSystemDataHelper,
        boolean hasFoveationSink,
        boolean hasStrongEyeSource
    ) {
        // This is the most important V3 output field.
        // It is more conservative than eyeTrackingDecision because it distinguishes default support code
        // from attempted use and active app-level functionality.
        if (activeGazeCollection) {
            r.useClassification = "active_eye_tracking_data_collection";
            r.eyeTrackingDecision = "yes";
            addFunctionality(r, "data_collection_or_telemetry");
            return;
        }

        if (possibleBiometricUse) {
            r.useClassification = "possible_eye_biometrics";
            r.eyeTrackingDecision = "yes";
            addFunctionality(r, "possible_biometrics");
            return;
        }

        if (activeGazeInteraction) {
            r.useClassification = "active_eye_tracking_gaze_interaction";
            r.eyeTrackingDecision = "yes";
            addFunctionality(r, "gaze_interaction");
            return;
        }

        if (activeGazeRetrieval) {
            r.useClassification = "active_eye_tracking_runtime_retrieval";
            r.eyeTrackingDecision = "yes";
            addFunctionality(r, "gaze_retrieval");
            return;
        }

        if (knownUnityFalsePositive || genericPhysicsHelper || genericUiOnly || genericRenderOnly || genericSystemDataHelper) {
            if (!hasStrongEyeSource && !attemptedEyeUse && !hasFoveationSink) {
                r.useClassification = "likely_false_positive";
                r.eyeTrackingDecision = "no";
                return;
            }
        }

        if (dynamicFoveationPossible) {
            if (frameworkSupportNamespace && !appLevelHint) {
                r.useClassification = "framework_foveated_rendering_support_or_attempt";
                r.eyeTrackingDecision = "uncertain";
            }
            else {
                r.useClassification = "attempted_or_possible_dynamic_eye_tracked_foveation";
                r.eyeTrackingDecision = "yes";
            }
            addFunctionality(r, "attempted_eye_tracked_foveated_rendering");
            return;
        }

        if (attemptedEyeUse) {
            if (frameworkSupportNamespace && !appLevelHint) {
                r.useClassification = "framework_eye_tracking_support_or_permission_path";
                r.eyeTrackingDecision = "uncertain";
            }
            else {
                r.useClassification = "eye_tracking_attempted_permission_or_feature";
                r.eyeTrackingDecision = "yes";
            }
            addFunctionality(r, "attempted_eye_tracking_use");
            return;
        }

        if (hasStrongEyeSource || hasFoveationSink) {
            r.useClassification = frameworkSupportNamespace
                ? "framework_support_only"
                : "eye_tracking_capability_present";
            r.eyeTrackingDecision = "uncertain";
            return;
        }

        r.useClassification = "unrelated_or_generic_structure";
    }

    private String refineLabelWithFunctionality(ScoreResult r) {
        String suffix = labelSuffix(r.score);

        // V3 labels based on attempted-vs-active use classification.
        if ("active_eye_tracking_data_collection".equals(r.useClassification)) {
            return "confirmed_eye_data_collection" + suffix;
        }
        else if ("possible_eye_biometrics".equals(r.useClassification)) {
            return "possible_eye_biometrics" + suffix;
        }
        else if ("active_eye_tracking_gaze_interaction".equals(r.useClassification)) {
            return "confirmed_gaze_interaction" + suffix;
        }
        else if ("active_eye_tracking_runtime_retrieval".equals(r.useClassification)) {
            return "confirmed_gaze_retrieval" + suffix;
        }
        else if ("attempted_or_possible_dynamic_eye_tracked_foveation".equals(r.useClassification)) {
            return "attempted_dynamic_eye_tracked_foveation" + suffix;
        }
        else if ("framework_foveated_rendering_support_or_attempt".equals(r.useClassification)) {
            return "framework_foveated_rendering_support_or_attempt" + suffix;
        }
        else if ("eye_tracking_attempted_permission_or_feature".equals(r.useClassification)) {
            return "attempted_eye_tracking_permission_or_feature" + suffix;
        }
        else if ("framework_eye_tracking_support_or_permission_path".equals(r.useClassification)) {
            return "framework_eye_tracking_support_or_permission_path" + suffix;
        }
        else if ("framework_support_only".equals(r.useClassification)) {
            return "framework_support_only" + suffix;
        }
        else if ("likely_false_positive".equals(r.useClassification)) {
            return "likely_false_positive" + suffix;
        }

        if ("yes".equals(r.eyeTrackingDecision)) {
            if (containsFunctionality(r, "data_collection_or_telemetry")) {
                return "confirmed_eye_data_collection" + suffix;
            }
            else if (containsFunctionality(r, "possible_biometrics")) {
                return "possible_eye_biometrics" + suffix;
            }
            else if (containsFunctionality(r, "gaze_interaction")) {
                return "confirmed_gaze_interaction" + suffix;
            }
            else if (containsFunctionality(r, "gaze_retrieval")) {
                return "confirmed_gaze_retrieval" + suffix;
            }
            else if (containsFunctionality(r, "permission_setup")) {
                return "confirmed_eye_permission_setup" + suffix;
            }
            else if (containsFunctionality(r, "foveated_rendering")) {
                return "eye_related_foveated_rendering" + suffix;
            }
        }
        else if ("uncertain".equals(r.eyeTrackingDecision)) {
            if (containsFunctionality(r, "foveated_rendering")) {
                return "uncertain_foveated_rendering" + suffix;
            }
            else if (containsFunctionality(r, "gaze_interaction")) {
                return "uncertain_gaze_interaction" + suffix;
            }
            else if (containsFunctionality(r, "setup_only")) {
                return "uncertain_eye_setup" + suffix;
            }
            else {
                return "uncertain_gaze_or_xr_structure" + suffix;
            }
        }

        return r.label;
    }

    private String labelSuffix(int score) {
        if (score >= 90) {
            return "_near_certain";
        }
        else if (score >= 70) {
            return "_high";
        }
        else if (score >= 50) {
            return "_likely";
        }
        else if (score >= 35) {
            return "_borderline";
        }
        else {
            return "_below_threshold";
        }
    }

    private void addFunctionality(ScoreResult r, String value) {
        if (!r.functionality.contains(value)) {
            r.functionality.add(value);
        }
    }

    private boolean containsFunctionality(ScoreResult r, String value) {
        return r.functionality.contains(value);
    }

    private boolean hasAny(Pattern[] patterns, String text) {
        for (Pattern p : patterns) {
            if (p.matcher(text).find()) {
                return true;
            }
        }

        return false;
    }

    private Pattern[] joinPatternGroups(Pattern[] a, Pattern[] b) {
        Pattern[] out = new Pattern[a.length + b.length];

        for (int i = 0; i < a.length; i++) {
            out[i] = a[i];
        }

        for (int i = 0; i < b.length; i++) {
            out[a.length + i] = b[i];
        }

        return out;
    }

    private boolean hasOrderedStructure(Pattern[] source, Pattern[] gate, Pattern[] pose, Pattern[] sink, String text, int maxDistance) {
        int s = firstAny(source, text, 0);
        if (s < 0) {
            return false;
        }

        int g = firstAny(gate, text, s);
        if (g < 0 || g - s > maxDistance) {
            return false;
        }

        int p = firstAny(pose, text, g);
        if (p < 0 || p - g > maxDistance) {
            return false;
        }

        int k = firstAny(sink, text, p);
        return k >= 0 && k - p <= maxDistance;
    }

    private int firstAny(Pattern[] patterns, String text, int start) {
        int best = -1;

        for (Pattern p : patterns) {
            Matcher m = p.matcher(text);
            if (start > 0) {
                m.region(Math.min(start, text.length()), text.length());
            }

            if (m.find()) {
                if (best < 0 || m.start() < best) {
                    best = m.start();
                }
            }
        }

        return best;
    }

    private String chooseLabelV2(
        int score,
        boolean hasStrongEyeSource,
        boolean hasOrderedEyeCollection,
        boolean hasOrderedEyeInteraction,
        boolean hasFileSink,
        boolean hasTelemetrySink,
        boolean hasRaySink,
        boolean hasUiSink,
        boolean hasFoveationSink,
        boolean foveationPermissionOnly,
        boolean hasPose,
        int validityHits,
        boolean genericPhysicsHelper,
        boolean knownUnityFalsePositive
    ) {
        String base;

        if (knownUnityFalsePositive && !hasStrongEyeSource) {
            base = "likely_false_positive";
        }
        else if (genericPhysicsHelper && !hasStrongEyeSource) {
            base = "generic_physics_helper_review";
        }
        else if ((hasOrderedEyeCollection || (hasStrongEyeSource && hasPose && (hasFileSink || hasTelemetrySink)))) {
            base = "eye_data_collection_review";
        }
        else if ((hasOrderedEyeInteraction || (hasStrongEyeSource && hasPose && (hasRaySink || hasUiSink)))) {
            base = "eye_interaction_review";
        }
        else if (hasFoveationSink && foveationPermissionOnly) {
            base = "eye_tracked_foveation_setup_review";
        }
        else if (hasFoveationSink) {
            base = "foveation_rendering_review";
        }
        else if (hasStrongEyeSource && validityHits > 0) {
            base = "eye_permission_or_state_setup_review";
        }
        else if (hasStrongEyeSource) {
            base = "eye_keyword_supported_review";
        }
        else {
            base = "general_structure_review";
        }

        if (score >= 90) {
            return base + "_near_certain";
        }
        else if (score >= 70) {
            return base + "_high";
        }
        else if (score >= 50) {
            return base + "_likely";
        }
        else if (score >= 35) {
            return base + "_borderline";
        }
        else {
            return "below_threshold";
        }
    }

    private void add(ScoreResult r, int points, String evidence, String module) {
        r.score += points;
        r.evidence.add(evidence);

        if (!r.modules.contains(module)) {
            r.modules.add(module);
        }
    }

    private String chooseLabel(
        int score,
        int rayHits,
        int loggingHits,
        int telemetryHits,
        int foveationHits,
        int uiHits,
        int sourceHits,
        int validityHits,
        int poseHits,
        boolean hasEyeKeyword
    ) {
        boolean collection = loggingHits >= 2 || telemetryHits >= 1;
        boolean interaction = rayHits >= 2 || uiHits >= 2;
        boolean foveation = foveationHits >= 1;
        boolean setup = sourceHits > 0 && validityHits > 0 && poseHits == 0;

        String base;

        if (collection && poseHits > 0) {
            base = "collection_review";
        }
        else if (foveation) {
            base = "foveation_rendering_review";
        }
        else if (interaction && poseHits > 0) {
            base = "interaction_review";
        }
        else if (setup) {
            base = "setup_permission_review";
        }
        else if (hasEyeKeyword) {
            base = "keyword_supported_review";
        }
        else {
            base = "general_structure_review";
        }

        if (score >= 90) {
            return base + "_near_certain";
        }
        else if (score >= 70) {
            return base + "_high";
        }
        else if (score >= 50) {
            return base + "_likely";
        }
        else if (score >= 35) {
            return base + "_borderline";
        }
        else {
            return "below_threshold";
        }
    }

    private String tierName(int score) {
        if (score >= 90) {
            return "90_plus";
        }
        else if (score >= 70) {
            return "70_high";
        }
        else if (score >= 50) {
            return "50_likely";
        }
        else if (score >= 35) {
            return "35_borderline";
        }
        else {
            return "00_low";
        }
    }

    private int countAny(Pattern[] patterns, String text) {
        int count = 0;

        for (Pattern p : patterns) {
            Matcher m = p.matcher(text);
            while (m.find()) {
                count++;
                if (count > 20) {
                    return count;
                }
            }
        }

        return count;
    }

    private boolean hasRepeatedPoseGetterCalls(String text) {
        Pattern p = Pattern.compile("get_(position|rotation|forward|up|right)\\s*\\(", Pattern.CASE_INSENSITIVE);
        Matcher m = p.matcher(text);

        int first = -1;
        int count = 0;

        while (m.find()) {
            if (first < 0) {
                first = m.start();
            }

            count++;

            if (count >= 2 && m.start() - first <= 2000) {
                return true;
            }
        }

        return false;
    }

    private boolean hasNearbyConsecutiveFieldAccesses(String text) {
        ArrayList<FieldHit> hits = new ArrayList<FieldHit>();
        Matcher m = FIELD_PTR_RE.matcher(text);

        while (m.find()) {
            String base = m.group(1);
            long off = parseHex(m.group(2));
            hits.add(new FieldHit(m.start(), base, off));

            if (hits.size() > 200) {
                break;
            }
        }

        for (int i = 0; i < hits.size(); i++) {
            FieldHit a = hits.get(i);

            for (int j = i + 1; j < hits.size() && j < i + 12; j++) {
                FieldHit b = hits.get(j);

                boolean nearby = b.pos - a.pos <= 1600;
                boolean sameBase = a.base.equals(b.base);
                boolean commonPointerSpacing = Math.abs(a.offset - b.offset) == 8 || Math.abs(a.offset - b.offset) == 16;

                if (nearby && sameBase && commonPointerSpacing) {
                    return true;
                }
            }
        }

        return false;
    }

    private long parseHex(String s) {
        String cleaned = s.toLowerCase();

        if (cleaned.startsWith("0x")) {
            cleaned = cleaned.substring(2);
        }

        return Long.parseLong(cleaned, 16);
    }

    private String safeName(String name) {
        String safe = name.replaceAll("[^A-Za-z0-9_$\\.\\-]+", "_");

        if (safe.length() > 180) {
            safe = safe.substring(0, 180);
        }

        return safe;
    }

    private String join(List<String> items, String sep) {
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < items.size(); i++) {
            if (i > 0) {
                sb.append(sep);
            }

            sb.append(items.get(i));
        }

        return sb.toString();
    }

    private void writeCsv(File file, List<ResultRow> rows) throws Exception {
        PrintWriter w = new PrintWriter(file);

        w.println("function_name,entry_point,score,label,eye_tracking_decision,use_classification,framework_context,functionality,modules,evidence,file_path");

        for (ResultRow r : rows) {
            w.println(
                csv(r.functionName) + "," +
                csv(r.entryPoint) + "," +
                csv("" + r.score) + "," +
                csv(r.label) + "," +
                csv(r.eyeTrackingDecision) + "," +
                csv(r.useClassification) + "," +
                csv(r.frameworkContext) + "," +
                csv(join(r.functionality, ";")) + "," +
                csv(join(r.modules, ";")) + "," +
                csv(join(r.evidence, ";")) + "," +
                csv(r.filePath)
            );
        }

        w.close();
    }

    private void writeJson(File file, List<ResultRow> rows) throws Exception {
        PrintWriter w = new PrintWriter(file);

        w.println("[");

        for (int i = 0; i < rows.size(); i++) {
            ResultRow r = rows.get(i);

            w.println("  {");
            w.println("    \"function_name\": " + json(r.functionName) + ",");
            w.println("    \"entry_point\": " + json(r.entryPoint) + ",");
            w.println("    \"score\": " + r.score + ",");
            w.println("    \"label\": " + json(r.label) + ",");
            w.println("    \"eye_tracking_decision\": " + json(r.eyeTrackingDecision) + ",");
            w.println("    \"use_classification\": " + json(r.useClassification) + ",");
            w.println("    \"framework_context\": " + json(r.frameworkContext) + ",");
            w.println("    \"functionality\": " + jsonList(r.functionality) + ",");
            w.println("    \"modules\": " + jsonList(r.modules) + ",");
            w.println("    \"evidence\": " + jsonList(r.evidence) + ",");
            w.println("    \"file_path\": " + json(r.filePath));
            w.print("  }");

            if (i < rows.size() - 1) {
                w.println(",");
            }
            else {
                w.println();
            }
        }

        w.println("]");
        w.close();
    }

    private String csv(String s) {
        if (s == null) {
            s = "";
        }

        return "\"" + s.replace("\"", "\"\"") + "\"";
    }

    private String json(String s) {
        if (s == null) {
            s = "";
        }

        return "\"" +
            s.replace("\\", "\\\\")
             .replace("\"", "\\\"")
             .replace("\n", "\\n")
             .replace("\r", "\\r") +
            "\"";
    }

    private String jsonList(List<String> items) {
        StringBuilder sb = new StringBuilder();
        sb.append("[");

        for (int i = 0; i < items.size(); i++) {
            if (i > 0) {
                sb.append(", ");
            }

            sb.append(json(items.get(i)));
        }

        sb.append("]");
        return sb.toString();
    }
}