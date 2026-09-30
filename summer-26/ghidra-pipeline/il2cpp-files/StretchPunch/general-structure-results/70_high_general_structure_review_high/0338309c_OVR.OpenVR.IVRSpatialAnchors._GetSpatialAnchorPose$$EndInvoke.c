/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 0338309c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


bool OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(long param_1)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  int in_w9;
  undefined4 *unaff_x19;
  uint unaff_w20;
  undefined2 *unaff_x21;
  long lVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar6 = *(long *)(param_1 + (long)in_w9 * 8 + 0x20);
                    /* try { // try from 033830ac to 034830bb has its CatchHandler @ 033830bc */
  uVar4 = FUN_03271744();
  *unaff_x21 = uVar4;
                    /* catch() { ... } // from try @ 03383048 with catch @ 033830bc
                       catch() { ... } // from try @ 033830ac with catch @ 033830bc */
                    /* try { // try from 033830c0 to 034830cf has its CatchHandler @ 033830d8 */
  uVar4 = FUN_03271744();
  unaff_x21[1] = uVar4;
  uVar4 = FUN_03271744();
  unaff_x21[2] = uVar4;
  *(undefined4 *)(unaff_x21 + 3) = 0x20002c;
  unaff_x21[5] = (short)(in_stack_00000000._4_4_ / 10) + 0x30;
  unaff_x21[6] = (short)(in_stack_00000000._4_4_ % 10) + 0x30;
  unaff_x21[7] = 0x20;
  if (lVar6 != 0) {
    uVar4 = FUN_03271744(lVar6,0,0);
    unaff_x21[8] = uVar4;
    uVar4 = FUN_03271744(lVar6,1,0);
    unaff_x21[9] = uVar4;
    uVar4 = FUN_03271744(lVar6,2,0);
    unaff_x21[10] = uVar4;
    unaff_x21[0xb] = 0x20;
    sVar1 = (short)(in_stack_00000008._4_4_ / 100);
    sVar2 = (short)(in_stack_00000008._4_4_ / 1000);
    unaff_x21[0xc] = sVar2 + 0x30;
    unaff_x21[0xf] = (short)(in_stack_00000008._4_4_ % 10) + 0x30;
    unaff_x21[0xe] = (short)(in_stack_00000008._4_4_ / 10) + sVar1 * -10 + 0x30;
    unaff_x21[0xd] = sVar1 + sVar2 * -10 + 0x30;
    unaff_x21[0x10] = 0x20;
    uVar5 = FUN_0337b1a8(&stack0x00000018);
    sVar1 = (short)((uVar5 & 0xffffffff) / 10);
    unaff_x21[0x11] = sVar1 + 0x30;
    unaff_x21[0x12] = (short)uVar5 + sVar1 * -10 + 0x30;
    unaff_x21[0x13] = 0x3a;
    uVar5 = FUN_0337b398(&stack0x00000018);
    sVar1 = (short)((uVar5 & 0xffffffff) / 10);
    unaff_x21[0x14] = sVar1 + 0x30;
    unaff_x21[0x15] = (short)uVar5 + sVar1 * -10 + 0x30;
    unaff_x21[0x16] = 0x3a;
    uVar5 = FUN_0337b654(&stack0x00000018);
    uVar3 = DAT_00baeed8;
    sVar1 = (short)((uVar5 & 0xffffffff) / 10);
    unaff_x21[0x17] = sVar1 + 0x30;
    unaff_x21[0x18] = (short)uVar5 + sVar1 * -10 + 0x30;
    *(undefined8 *)(unaff_x21 + 0x19) = uVar3;
    *unaff_x19 = 0x1d;
    return 0x1c < unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


