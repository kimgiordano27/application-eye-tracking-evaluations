/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 04edd3cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 156
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04edd604) */

long OVREyeGaze__PrepareHeadDirection(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x19;
  long *unaff_x20;
  long lVar12;
  undefined8 *unaff_x24;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  float in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  float in_stack_000000e8;
  undefined8 in_stack_000000f8;
  
  puVar1 = System_Action<BaseVisualElementPanel>_TypeInfo;
  uVar14 = **(undefined8 **)(*param_1 + 0xb8);
  uVar15 = *(undefined4 *)(*(undefined8 **)(*param_1 + 0xb8) + 1);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar12 = *(long *)puVar1;
  lVar9 = *(long *)(lVar12 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar9 = *(long *)(lVar12 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218();
  }
  puVar7 = System_Action<Collider>_TypeInfo;
  puVar6 = System_Action<ClimbProvider>_TypeInfo;
  puVar5 = System_Action<BaseRuntimePanel>_TypeInfo;
  puVar4 = System_Action<AutoMoveTowardsTarget>_TypeInfo;
  puVar3 = System_Action<AutoCompletePathVisitor>_TypeInfo;
  puVar2 = System_Action<AsyncOperation>_TypeInfo;
  puVar1 = PTR_DAT_06312520;
  if ((long *)**(long **)(lVar9 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  (**(code **)(*(long *)**(long **)(lVar9 + 0xb8) + 0x198))(&stack0x000000d0);
  in_stack_000000c0 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
  in_stack_000000b8 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
  in_stack_000000b0 = in_stack_000000d0;
  FUN_04aed12c(&stack0x00000050,&stack0x000000b0,*(undefined8 *)puVar5);
  in_stack_00000048 = &stack0x00000090;
  in_stack_00000040 = 0;
  in_stack_00000098 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000050;
  in_stack_000000a8 = in_stack_00000068;
  in_stack_000000a0 = in_stack_00000060;
  fVar13 = 3.4028235e+38;
  lVar9 = 0;
LAB_04edd4f8:
  do {
    do {
      uVar10 = FUN_047e3f3c(&stack0x00000090,*(undefined8 *)puVar3);
      lVar12 = in_stack_00000040;
      if ((uVar10 & 1) == 0) {
        FUN_047e41f8(&stack0x00000090,*(undefined8 *)puVar2);
        if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cabc(lVar12);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05c8c45c(lVar9,0,0);
        if ((uVar10 & 1) == 0) {
          fVar13 = *(float *)(unaff_x19 + 0x25);
        }
        uVar11 = *(undefined8 *)puVar7;
        *(float *)(unaff_x19 + 0x35) =
             *(float *)(unaff_x19 + 0x30) + fVar13 * *(float *)((long)unaff_x19 + 0x19c);
        unaff_x19[0x34] =
             CONCAT44((float)((ulong)unaff_x19[0x2f] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x194) >> 0x20) * fVar13,
                      (float)unaff_x19[0x2f] +
                      (float)*(undefined8 *)((long)unaff_x19 + 0x194) * fVar13);
        lVar12 = thunk_FUN_02b79644(uVar11);
        FUN_04dbdb8c(lVar12,0);
        *(long *)(lVar12 + 0x10) = lVar9;
        thunk_FUN_02bb0e9c((long *)(lVar12 + 0x10),lVar9);
        *(undefined8 *)(lVar12 + 0x18) = uVar14;
        *(undefined4 *)(lVar12 + 0x20) = uVar15;
        unaff_x19[0x26] = lVar12;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x26,lVar12);
        return lVar9;
      }
      lVar12 = FUN_047e3de4(&stack0x00000090,*(undefined8 *)puVar4);
      in_stack_000000f8._4_4_ = (undefined4)unaff_x19[0x25];
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      in_stack_00000028 = *(undefined8 *)((long)unaff_x19 + 0x1d4);
      in_stack_00000020 = *(undefined8 *)((long)unaff_x19 + 0x1cc);
      in_stack_00000030 = *(undefined8 *)((long)unaff_x19 + 0x1dc);
      uVar10 = FUN_04edc980(lVar12,&stack0x00000020,&stack0x00000070,(long)&stack0x000000f8 + 4,0);
    } while ((uVar10 & 1) == 0);
    if (*(float *)((long)unaff_x19 + 300) <= ABS(in_stack_00000088 - fVar13)) goto LAB_04edd594;
    iVar8 = (**(code **)(*unaff_x19 + 0x548))();
  } while (iVar8 < 1);
  goto LAB_04edd59c;
LAB_04edd594:
  if (in_stack_00000088 < fVar13) {
LAB_04edd59c:
    fVar13 = in_stack_00000088;
    uStack00000000000000d8 = in_stack_00000078;
    in_stack_000000d0 = in_stack_00000070;
    in_stack_000000e8 = in_stack_00000088;
    uStack00000000000000e0 = in_stack_00000080;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_03add1c4(&stack0x00000050,&stack0x000000d0,*(undefined8 *)puVar6);
    unaff_x24[1] = in_stack_00000058;
    *unaff_x24 = in_stack_00000050;
    unaff_x24[3] = in_stack_00000068;
    unaff_x24[2] = in_stack_00000060;
    lVar9 = lVar12;
    uVar14 = in_stack_00000070;
    uVar15 = in_stack_00000078;
  }
  goto LAB_04edd4f8;
}


