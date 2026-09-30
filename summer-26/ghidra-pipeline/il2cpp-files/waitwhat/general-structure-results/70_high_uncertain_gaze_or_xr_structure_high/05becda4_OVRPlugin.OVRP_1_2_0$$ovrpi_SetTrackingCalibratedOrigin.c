/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 05becda4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(void)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x78);
  while ((plVar2 = (long *)FUN_05974b90(lVar4), plVar2 == (long *)0x0 || (*plVar2 == *unaff_x22))) {
    lVar3 = FUN_031c05a4((long *)(unaff_x20 + 0x78),plVar2,lVar4);
    bVar1 = lVar3 == lVar4;
    lVar4 = lVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058(plVar2);
}


