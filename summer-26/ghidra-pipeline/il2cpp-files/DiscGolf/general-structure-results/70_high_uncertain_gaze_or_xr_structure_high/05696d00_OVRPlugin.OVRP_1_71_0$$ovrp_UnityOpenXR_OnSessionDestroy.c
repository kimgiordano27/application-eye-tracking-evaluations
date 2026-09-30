/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 05696d00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(long param_1)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x21 + 0x38);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_056551ac(uVar1,unaff_w20,unaff_w19,0);
  return;
}


