/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 0905f1f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  FUN_08c82ec4(param_1,*unaff_x23,0);
  if (4 < *(uint *)(unaff_x21 + -0x20)) {
    *(undefined8 *)(unaff_x19 + 0x40) = param_1;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x40),param_1);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20) = unaff_x19;
    thunk_FUN_049ee3d8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


