/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 076f6820
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation(ulong param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f2faf0);
    *(undefined1 *)(unaff_x21 + 0xf3c) = 1;
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    FUN_076f19b0(10,*(undefined8 *)PTR_DAT_09f2faf0);
    return;
  }
  *(undefined4 *)(unaff_x20 + 0x58) = unaff_w19;
  FUN_076f1a60();
  return;
}


