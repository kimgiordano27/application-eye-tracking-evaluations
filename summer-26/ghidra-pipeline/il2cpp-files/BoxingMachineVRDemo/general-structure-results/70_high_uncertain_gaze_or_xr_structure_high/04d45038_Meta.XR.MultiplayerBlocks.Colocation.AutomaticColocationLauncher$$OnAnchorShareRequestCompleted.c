/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 04d45038
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (void)

{
  long lVar1;
  short *unaff_x19;
  
  lVar1 = FUN_02d9a2e0();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  return *unaff_x19 == 0;
}


