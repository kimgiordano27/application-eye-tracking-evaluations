/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 04f1ef98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x24;
  
  puVar1 = DG_Tweening_Core_DOSetter<float>_TypeInfo;
  if ((param_1 & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x38));
    uVar2 = FUN_02b3c908(*unaff_x22,4);
    FUN_04cac0f0(uVar2,*(undefined8 *)puVar1,0);
    if (4 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40),uVar2);
      *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20) = unaff_x19;
      thunk_FUN_02bb0e9c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


