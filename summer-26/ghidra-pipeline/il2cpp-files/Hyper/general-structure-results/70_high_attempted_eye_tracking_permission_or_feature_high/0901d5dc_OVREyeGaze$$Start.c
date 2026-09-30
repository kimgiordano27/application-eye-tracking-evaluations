/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 0901d5dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0901d7e8) */

long OVREyeGaze__Start(void)

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
  long lVar11;
  undefined8 uVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  float fVar13;
  undefined8 unaff_d8;
  undefined4 unaff_s9;
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
  
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_04980b34();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_04980b34();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_04980b34();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_04980b34();
  }
  puVar7 = PTR_DAT_0ac76c18;
  puVar6 = PTR_DAT_0ac76c10;
  puVar5 = PTR_DAT_0ac76bf8;
  puVar4 = PTR_DAT_0ac76bf0;
  puVar3 = PTR_DAT_0ac76be8;
  puVar2 = PTR_DAT_0ac76be0;
  puVar1 = PTR_DAT_0ac09788;
  if ((long *)**(long **)(lVar9 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*(long *)**(long **)(lVar9 + 0xb8) + 0x198))(&stack0x000000d0);
  in_stack_000000c0 = CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
  in_stack_000000b8 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
  in_stack_000000b0 = in_stack_000000d0;
  FUN_06680488(&stack0x00000050,&stack0x000000b0,*(undefined8 *)puVar5);
  in_stack_00000048 = &stack0x00000090;
  in_stack_00000040 = 0;
  in_stack_00000098 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000050;
  in_stack_000000a8 = in_stack_00000068;
  in_stack_000000a0 = in_stack_00000060;
  fVar13 = 3.4028235e+38;
  lVar9 = 0;
LAB_0901d6dc:
  do {
    do {
      uVar10 = FUN_060b9fb0(&stack0x00000090,*(undefined8 *)puVar3);
      lVar11 = in_stack_00000040;
      if ((uVar10 & 1) == 0) {
        FUN_060ba26c(&stack0x00000090,*(undefined8 *)puVar2);
        if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04948184(lVar11);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar10 = FUN_0a17b398(lVar9,0,0);
        if ((uVar10 & 1) == 0) {
          fVar13 = *(float *)(unaff_x19 + 0x25);
        }
        uVar12 = *(undefined8 *)puVar7;
        *(float *)(unaff_x19 + 0x35) =
             *(float *)(unaff_x19 + 0x30) + fVar13 * *(float *)((long)unaff_x19 + 0x19c);
        unaff_x19[0x34] =
             CONCAT44((float)((ulong)unaff_x19[0x2f] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x194) >> 0x20) * fVar13,
                      (float)unaff_x19[0x2f] +
                      (float)*(undefined8 *)((long)unaff_x19 + 0x194) * fVar13);
        lVar11 = thunk_FUN_04983f60(uVar12);
        FUN_08dbf2f0(lVar11,0);
        *(long *)(lVar11 + 0x10) = lVar9;
        thunk_FUN_049ee3d8((long *)(lVar11 + 0x10),lVar9);
        *(undefined8 *)(lVar11 + 0x18) = unaff_d8;
        *(undefined4 *)(lVar11 + 0x20) = unaff_s9;
        unaff_x19[0x26] = lVar11;
        thunk_FUN_049ee3d8(unaff_x19 + 0x26,lVar11);
        return lVar9;
      }
      lVar11 = FUN_060b9e58(&stack0x00000090,*(undefined8 *)puVar4);
      in_stack_000000f8._4_4_ = (undefined4)unaff_x19[0x25];
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000028 = *(undefined8 *)((long)unaff_x19 + 0x1d4);
      in_stack_00000020 = *(undefined8 *)((long)unaff_x19 + 0x1cc);
      in_stack_00000030 = *(undefined8 *)((long)unaff_x19 + 0x1dc);
      uVar10 = FUN_0901cb64(lVar11,&stack0x00000020,&stack0x00000070,(long)&stack0x000000f8 + 4,0);
    } while ((uVar10 & 1) == 0);
    if (*(float *)((long)unaff_x19 + 300) <= ABS(in_stack_00000088 - fVar13)) goto LAB_0901d778;
    iVar8 = (**(code **)(*unaff_x19 + 0x548))();
  } while (iVar8 < 1);
  goto LAB_0901d780;
LAB_0901d778:
  if (in_stack_00000088 < fVar13) {
LAB_0901d780:
    fVar13 = in_stack_00000088;
    uStack00000000000000d8 = in_stack_00000078;
    in_stack_000000d0 = in_stack_00000070;
    in_stack_000000e8 = in_stack_00000088;
    uStack00000000000000e0 = in_stack_00000080;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    FUN_06fcad04(&stack0x00000050,&stack0x000000d0,*(undefined8 *)puVar6);
    unaff_x24[1] = in_stack_00000058;
    *unaff_x24 = in_stack_00000050;
    unaff_x24[3] = in_stack_00000068;
    unaff_x24[2] = in_stack_00000060;
    lVar9 = lVar11;
    unaff_d8 = in_stack_00000070;
    unaff_s9 = in_stack_00000078;
  }
  goto LAB_0901d6dc;
}


