/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 0569694c
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


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(void)

{
  long *unaff_x23;
  long unaff_x24;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Predicate<NavMeshModifier>_TypeInfo);
  FUN_02d965b8(System_Predicate<NavMeshModifierVolume>_TypeInfo);
  FUN_02d965b8(System_Predicate<NameValueHeaderValue>_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x7f6) = 1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0569675c();
  return;
}


