/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.SaveSceneToJsonDelegate$$Invoke
ENTRY_POINT: 04dd89e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_SaveSceneToJsonDelegate__Invoke(void)

{
  uint uVar1;
  
  uVar1 = FUN_04dd87cc();
  return (uVar1 ^ 0xffffffff) & 1;
}


