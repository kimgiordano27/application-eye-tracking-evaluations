/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 05709a60
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x9;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 *unaff_x21;
  undefined *puVar5;
  
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if ((*(int *)(in_x9 + 0x30) != 1) && (*(long *)(unaff_x20 + 0x108) != 0)) {
    *unaff_x21 = 1;
    FUN_0570d124();
    return;
  }
  lVar2 = (**(code **)(param_1 + 0x18))
                    (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  if (lVar2 == 0) {
    cVar1 = *(char *)(unaff_x20 + 0x2a);
    lVar2 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_055b5920(0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
    puVar5 = PTR_DAT_06d57c58;
    if (cVar1 == '\0') {
      puVar5 = PTR_DAT_06d57c50;
    }
    uVar4 = thunk_FUN_02f239f0(puVar5);
    FUN_056f1630(uVar4,uVar3,uVar6);
    uVar3 = FUN_05692378();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d57c60);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar3,uVar6);
  }
  *unaff_x21 = 0;
  return;
}


