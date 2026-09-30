/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 01a436a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(undefined8 param_1)

{
  long lVar1;
  int in_w9;
  long *unaff_x19;
  
  if (in_w9 == 0) {
    thunk_FUN_00d32864();
    param_1 = *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18);
  }
  FUN_01a432c4(param_1);
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar1 = *unaff_x19;
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = 0;
  return;
}


