/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 072f4c18
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long *unaff_x24;
  
  FUN_07591f7c();
  lVar1 = *unaff_x24;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


