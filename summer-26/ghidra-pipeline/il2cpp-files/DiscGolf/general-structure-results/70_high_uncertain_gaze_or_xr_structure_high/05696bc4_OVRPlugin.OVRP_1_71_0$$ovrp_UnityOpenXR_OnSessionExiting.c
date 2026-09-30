/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 05696bc4
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


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(void)

{
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar1;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_02d965b8(System_Predicate<OVRSpaceUser>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x7f9) = 1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_056550a4(uVar1,unaff_w19,0);
  return;
}


