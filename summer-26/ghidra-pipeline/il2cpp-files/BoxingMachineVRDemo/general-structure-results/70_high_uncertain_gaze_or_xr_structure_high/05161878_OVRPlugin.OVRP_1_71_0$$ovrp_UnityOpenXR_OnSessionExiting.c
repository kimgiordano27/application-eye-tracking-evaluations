/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 05161878
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(ulong param_1)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0677d900);
    *(undefined1 *)(unaff_x20 + 0xe5c) = 1;
  }
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x19;
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}


