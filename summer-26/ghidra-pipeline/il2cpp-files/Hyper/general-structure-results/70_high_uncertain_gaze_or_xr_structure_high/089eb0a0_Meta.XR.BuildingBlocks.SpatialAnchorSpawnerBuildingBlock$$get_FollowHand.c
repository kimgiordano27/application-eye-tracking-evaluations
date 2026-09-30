/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$get_FollowHand
ENTRY_POINT: 089eb0a0
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_FollowHand(void)

{
  long unaff_x20;
  
  FUN_088ef30c();
  FUN_088ee35c(*(undefined4 *)(unaff_x20 + 0x20));
  if (*(float *)(unaff_x20 + 0x24) != 0.0) {
    FUN_088ef30c();
    FUN_088ee35c(*(undefined4 *)(unaff_x20 + 0x24));
  }
  if (*(char *)(unaff_x20 + 0x28) != '\0') {
    FUN_088ef30c();
    FUN_088ee800();
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    FUN_088ef30c();
    FUN_088eebec();
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId();
    return;
  }
  return;
}


