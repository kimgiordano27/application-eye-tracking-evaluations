/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$Invoke
ENTRY_POINT: 03382f9c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


bool OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__Invoke(void)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *unaff_x19;
  uint unaff_w20;
  undefined2 *unaff_x21;
  long unaff_x25;
  long *plVar10;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  puVar4 = StringLiteral_513;
  plVar10 = *(long **)(unaff_x25 + 0xac8);
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)puVar4);
  }
  puVar4 = StringLiteral_1208;
  uVar7 = FUN_033a9ee8();
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    in_stack_00000018 = FUN_0337c22c();
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0337a1d4(&stack0x00000018,(long)&stack0x00000008 + 4,&stack0x00000008,
               (long)&stack0x00000000 + 4);
  lVar8 = *plVar10;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar8 = *plVar10;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
  uVar6 = FUN_0337b0b4(&stack0x00000018);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_03383274:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar9 = *(long *)(*(long *)(*plVar10 + 0xb8) + 0x18);
    if (lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x18) <= iStack0000000000000008 - 1U) goto LAB_03383274;
      lVar8 = *(long *)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar9 + (long)(int)(iStack0000000000000008 - 1U) * 8 + 0x20);
        uVar5 = FUN_03271744(lVar8,0,0);
        *unaff_x21 = uVar5;
        uVar5 = FUN_03271744(lVar8,1,0);
        unaff_x21[1] = uVar5;
        uVar5 = FUN_03271744(lVar8,2,0);
        unaff_x21[2] = uVar5;
        *(undefined4 *)(unaff_x21 + 3) = 0x20002c;
        unaff_x21[5] = (short)(in_stack_00000000._4_4_ / 10) + 0x30;
        unaff_x21[6] = (short)(in_stack_00000000._4_4_ % 10) + 0x30;
        unaff_x21[7] = 0x20;
        if (lVar9 != 0) {
          uVar5 = FUN_03271744(lVar9,0,0);
          unaff_x21[8] = uVar5;
          uVar5 = FUN_03271744(lVar9,1,0);
          unaff_x21[9] = uVar5;
          uVar5 = FUN_03271744(lVar9,2,0);
          unaff_x21[10] = uVar5;
          unaff_x21[0xb] = 0x20;
          sVar1 = (short)(uStack000000000000000c / 100);
          sVar2 = (short)(uStack000000000000000c / 1000);
          unaff_x21[0xc] = sVar2 + 0x30;
          unaff_x21[0xf] = (short)(uStack000000000000000c % 10) + 0x30;
          unaff_x21[0xe] = (short)(uStack000000000000000c / 10) + sVar1 * -10 + 0x30;
          unaff_x21[0xd] = sVar1 + sVar2 * -10 + 0x30;
          unaff_x21[0x10] = 0x20;
          uVar7 = FUN_0337b1a8(&stack0x00000018);
          sVar1 = (short)((uVar7 & 0xffffffff) / 10);
          unaff_x21[0x11] = sVar1 + 0x30;
          unaff_x21[0x12] = (short)uVar7 + sVar1 * -10 + 0x30;
          unaff_x21[0x13] = 0x3a;
          uVar7 = FUN_0337b398(&stack0x00000018);
          sVar1 = (short)((uVar7 & 0xffffffff) / 10);
          unaff_x21[0x14] = sVar1 + 0x30;
          unaff_x21[0x15] = (short)uVar7 + sVar1 * -10 + 0x30;
          unaff_x21[0x16] = 0x3a;
          uVar7 = FUN_0337b654(&stack0x00000018);
          uVar3 = DAT_00baeed8;
          sVar1 = (short)((uVar7 & 0xffffffff) / 10);
          unaff_x21[0x17] = sVar1 + 0x30;
          unaff_x21[0x18] = (short)uVar7 + sVar1 * -10 + 0x30;
          *(undefined8 *)(unaff_x21 + 0x19) = uVar3;
          *unaff_x19 = 0x1d;
          return 0x1c < unaff_w20;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


