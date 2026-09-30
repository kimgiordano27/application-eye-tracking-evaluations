/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 052bb264
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(void)

{
  ulong uVar1;
  long unaff_x19;
  
  uVar1 = FUN_066cd30c();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_052d04f0(0x3e800000,*(long *)(unaff_x19 + 0x40),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


