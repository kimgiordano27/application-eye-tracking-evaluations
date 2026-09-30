/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 05fcde18
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  
  iVar1 = FUN_06e6db64(param_1,0);
  if (param_2 != 0) {
    FUN_06e59c44(param_2,0 < iVar1,0);
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar2 = FUN_06e550fc(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
      FUN_06e59c44(lVar2,*(char *)(unaff_x19 + 0x68) == '\0',0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


