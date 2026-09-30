/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 053079f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
               (long param_1)

{
  uint uVar1;
  int *in_x10;
  
  uVar1 = (**(code **)(param_1 + (long)(*in_x10 + 5) * 0x10 + 0x138))();
  FUN_03e688b4(uVar1 & 1,*(undefined8 *)PTR_DAT_06d3e1b0);
  return;
}


