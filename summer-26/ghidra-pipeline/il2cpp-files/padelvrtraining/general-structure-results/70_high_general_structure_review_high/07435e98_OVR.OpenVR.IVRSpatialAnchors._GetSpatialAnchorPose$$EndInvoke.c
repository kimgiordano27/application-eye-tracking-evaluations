/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 07435e98
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a1c98);
    FUN_03d2d2b0(PTR_DAT_091a0d00);
    FUN_03d2d2b0(PTR_DAT_091a4d68);
    FUN_03d2d2b0(PTR_DAT_091a4d98);
    FUN_03d2d2b0(PTR_DAT_091a4da0);
    *(undefined1 *)(unaff_x20 + 0x6c1) = 1;
  }
  lVar2 = *(long *)(unaff_x19 + 0x38);
  if (lVar2 == 0) goto LAB_07436098;
  if (*(int *)(unaff_x19 + 0x40) == *(int *)(lVar2 + 0x18)) {
    lVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a0d00);
    FUN_08a51460(lVar2,0);
    if ((lVar2 == 0) || (lVar2 = FUN_04f82d4c(lVar2,*(undefined8 *)PTR_DAT_091a1c98), lVar2 == 0))
    goto LAB_07436098;
    UnityEngine_Yoga_YogaNode__set_FlexShrink(*(undefined4 *)(unaff_x19 + 0x30),lVar2,0);
    UnityEngine_Yoga_YogaNode__set_FlexBasis(*(undefined4 *)(unaff_x19 + 0x30),lVar2,0);
    FUN_08a1de64(lVar2,2,0);
    FUN_08a206ac(lVar2,*(undefined8 *)(unaff_x19 + 0x28),0);
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 == 0) goto LAB_07436098;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)PTR_DAT_091a4d68;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_07436098;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = lVar2;
      thunk_FUN_03d1023c(plVar5,lVar2);
    }
    else {
      FUN_05a39734(lVar3,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
    lVar2 = FUN_05a39464(lVar2,*(int *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_091a4da0);
  }
  *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
  if (lVar2 != 0) {
    FUN_08a200c4(lVar2,1,0);
    FUN_08a1dea8(lVar2,0,0);
    FUN_08a1dea8(lVar2,1,0);
    FUN_08a1dc5c(lVar2,0);
    UnityEngine_Yoga_YogaNode__set_MinWidth(lVar2,0);
    return;
  }
LAB_07436098:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


