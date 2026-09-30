/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$GetRaycastRay
ENTRY_POINT: 04ab3388
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__GetRaycastRay(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *in_x9;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x22;
  
  uVar5 = *in_x9;
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
  }
  uVar1 = thunk_FUN_02b79644(param_1);
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  FUN_0404fb4c(uVar1,uVar5,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar2 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18) = uVar1;
  lVar2 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  thunk_FUN_02bb0e9c(*(long *)(lVar2 + 0xb8) + 0x18,uVar1);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_031819b0(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x80);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar2 = thunk_FUN_02b79644(lVar3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_0404b324(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x20) = lVar2;
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    thunk_FUN_02bb0e9c(*(long *)(lVar3 + 0xb8) + 0x20,lVar2);
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0317e224(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


