/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 0321d6ac
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_possible_biometrics_hits_2
*/


undefined1  [16]
OVRPlugin__IsWideMotionModeHandPosesEnabled(undefined1 param_1 [16],uint param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined8 uVar11;
  double in_stack_00000008;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uVar11 = param_1._8_8_;
  dVar10 = param_1._0_8_;
  if ((bRam0000000007237e4c & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    bRam0000000007237e4c = 1;
  }
  puVar1 = PTR_DAT_06e1a840;
  if (0xf < param_2) {
    thunk_FUN_0159f088(PTR_DAT_06df0bd0);
    uVar11 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar4 = thunk_FUN_0159f088(PTR_DAT_06e08fa0);
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e06ae8);
    FUN_028f5dac(uVar11,uVar4,uVar5,0);
    uVar4 = thunk_FUN_0159f088(PTR_DAT_06dcba90);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar11,uVar4);
  }
  if (1 < param_3) {
    uStack0000000000000018 = param_3;
    uVar11 = thunk_FUN_0159f088(PTR_DAT_06d9a678);
    uVar11 = thunk_FUN_015d01b0(uVar11,&stack0x00000018);
    uVar4 = thunk_FUN_0159f088(PTR_DAT_06e3f2a0);
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06dbaf28);
    uVar11 = FUN_02d8efe4(uVar4,uVar11,uVar5,0);
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar4 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e00978);
    FUN_028f287c(uVar4,uVar11,uVar5,0);
    uVar11 = thunk_FUN_0159f088(PTR_DAT_06dcba90);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar4,uVar11);
  }
  lVar3 = *(long *)PTR_DAT_06e1a840;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *(long *)puVar1;
  }
  pdVar6 = *(double **)(lVar3 + 0xb8);
  if (*pdVar6 <= ABS(dVar10)) goto LAB_0321d82c;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *(long *)puVar1;
    pdVar6 = *(double **)(lVar3 + 0xb8);
  }
  dVar7 = pdVar6[1];
  if (dVar7 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(uint *)((long)dVar7 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  dVar7 = *(double *)((long)dVar7 + (long)(int)param_2 * 8 + 0x20);
  dVar10 = dVar7 * dVar10;
  in_stack_00000008 = dVar10;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (param_3 == 1) {
    dVar8 = modf(dVar10,&stack0x00000008);
    dVar10 = in_stack_00000008;
    if (0.5 <= ABS(dVar8)) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar2 = FUN_0321cf90(dVar8);
      in_stack_00000008 = dVar10 + (double)iVar2;
    }
  }
  else {
    dVar8 = modf(dVar10,(double *)&stack0x00000018);
    if (0.0 <= dVar10) {
      if (dVar8 == 0.5) {
        dVar10 = 1.0;
        goto LAB_0321d7f8;
      }
      in_stack_00000008 = (double)(long)(dVar10 + 0.5);
    }
    else if (dVar8 == -0.5) {
      dVar10 = -1.0;
LAB_0321d7f8:
      in_stack_00000008 = (double)CONCAT44(uStack000000000000001c,uStack0000000000000018);
      if (((long)in_stack_00000008 & 1U) != 0) {
        in_stack_00000008 = in_stack_00000008 + dVar10;
      }
    }
    else {
      in_stack_00000008 = (double)(long)(dVar10 + -0.5);
    }
  }
  dVar10 = in_stack_00000008 / dVar7;
  uVar11 = 0;
LAB_0321d82c:
  auVar9._8_8_ = uVar11;
  auVar9._0_8_ = dVar10;
  return auVar9;
}


