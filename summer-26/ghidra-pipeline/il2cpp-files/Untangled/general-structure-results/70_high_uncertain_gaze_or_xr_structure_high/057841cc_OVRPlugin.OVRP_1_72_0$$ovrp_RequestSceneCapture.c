/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 057841cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(ulong param_1,undefined8 param_2)

{
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d5a000);
    *(undefined1 *)(unaff_x20 + 0x938) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0578420c(param_2);
  FUN_057754f8();
  return;
}


