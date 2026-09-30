/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth
ENTRY_POINT: 0770308c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosToLinearDepth(void)

{
  uint uVar1;
  long unaff_x19;
  long lVar2;
  uint unaff_w22;
  
  FUN_094c1400();
  if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x20), lVar2 != 0)) {
    uVar1 = FUN_094c134c(lVar2,0);
    FUN_094c1400(lVar2,uVar1 | unaff_w22,0);
    if ((*(long *)(unaff_x19 + 200) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 200) + 0x20), lVar2 != 0)) {
      uVar1 = FUN_094c134c(lVar2,0);
      FUN_094c1400(lVar2,uVar1 | unaff_w22,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


