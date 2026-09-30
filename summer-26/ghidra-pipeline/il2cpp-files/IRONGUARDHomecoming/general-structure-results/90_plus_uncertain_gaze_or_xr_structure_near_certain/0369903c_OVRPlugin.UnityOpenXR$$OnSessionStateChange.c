/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 0369903c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16] OVRPlugin_UnityOpenXR__OnSessionStateChange(long param_1,long param_2)

{
  long in_x9;
  int unaff_w19;
  int unaff_w20;
  undefined1 auVar1 [16];
  float unaff_s8;
  
  if (*(float *)(param_1 + in_x9 * unaff_w20 * 4 + 0x20) < unaff_s8) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    auVar1 = FUN_0369911c(unaff_w19 + -2,unaff_w20);
    return auVar1;
  }
  return ZEXT416(0x3f000000);
}


