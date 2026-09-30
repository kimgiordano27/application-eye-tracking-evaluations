/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 0696abd4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR_DAT_084b7050;
  if ((*(byte *)(unaff_x20 + 0xd7) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7050);
    *(undefined1 *)(unaff_x20 + 0xd7) = 1;
  }
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_0679343c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}


