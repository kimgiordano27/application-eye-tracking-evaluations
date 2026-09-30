/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 060356d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  puVar1 = PTR_DAT_075d9930;
  if ((*(byte *)(unaff_x19 + 0xc26) & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d9930);
    *(undefined1 *)(unaff_x19 + 0xc26) = 1;
  }
  uVar2 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_06035404();
  return uVar2;
}


