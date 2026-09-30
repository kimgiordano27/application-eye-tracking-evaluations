/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 07a39b8c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__UpdateExternalCamera
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
          float *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack000000000000000c;
  float fStack000000000000001c;
  float fStack000000000000002c;
  float fStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined1 in_stack_00000040 [16];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack00000000000000cc;
  
  puVar1 = PTR_DAT_09286860;
  if ((DAT_09895280 & 1) == 0) {
    FUN_04077588(PTR_DAT_092b7110);
    FUN_04077588(PTR_DAT_09286860);
    DAT_09895280 = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  FUN_07a383f8(&stack0x00000040 + 4,param_4,param_7);
  fVar3 = fStack0000000000000058;
  uVar2 = uStack0000000000000054;
  uStack00000000000000cc = uStack0000000000000050;
  uStack000000000000003c = uStack000000000000005c;
  fVar20 = fStack0000000000000058;
  fStack0000000000000034 = (float)FUN_07a38adc(param_4,param_7);
  fVar18 = fVar20;
  fStack000000000000002c = param_3;
  fVar8 = (float)FUN_07a38d4c(param_4,param_7);
  fStack000000000000000c = param_5[2];
  fVar22 = param_5[3];
  fVar24 = *param_5;
  fVar25 = param_5[1];
  fVar23 = param_5[4];
  fVar21 = param_5[5];
  fVar9 = (float)FUN_07a38b94(param_4,param_7);
  fVar12 = *param_5;
  fStack000000000000001c = param_5[3];
  uVar13 = *(undefined8 *)(param_5 + 1);
  uVar14 = *(undefined8 *)(param_5 + 4);
  lVar4 = FUN_04077674(*(undefined8 *)puVar1,1);
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (lVar4 != 0) {
    iVar5 = (int)*(ulong *)(lVar4 + 0x18);
    if (iVar5 != 0) {
      fVar10 = param_3 * fVar21 + fVar8 * fVar22 + fVar18 * fVar23;
      fVar16 = 1.0 / (fVar10 * fVar10 + -1.0);
      fVar19 = param_3 * (fStack000000000000002c - fStack000000000000000c) +
               fVar8 * (fStack0000000000000034 - fVar24) + fVar18 * (fVar20 - fVar25);
      fVar21 = (fStack000000000000002c - fStack000000000000000c) * fVar21 +
               (fStack0000000000000034 - fVar24) * fVar22 + (fVar20 - fVar25) * fVar23;
      fVar22 = (fVar19 * fVar10 - fVar21) * fVar16;
      fVar16 = (fVar19 - fVar10 * fVar21) * fVar16;
      fVar12 = fVar12 + fStack000000000000001c * fVar22;
      fVar21 = (float)uVar13 + (float)uVar14 * fVar22;
      fVar22 = (float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar14 >> 0x20) * fVar22;
      uVar15 = CONCAT44(fVar22,fVar21);
      fVar8 = (fStack0000000000000034 + fVar8 * fVar16) - fVar12;
      fVar18 = (fVar20 + fVar18 * fVar16) - fVar21;
      fVar20 = (fStack000000000000002c + param_3 * fVar16) - fVar22;
      fVar18 = SQRT(fVar20 * fVar20 + fVar8 * fVar8 + fVar18 * fVar18) - fVar9;
      *(float *)(lVar4 + 0x20) = fVar18;
      puVar1 = PTR_DAT_092b7110;
      if (1 < iVar5) {
        lVar6 = (*(ulong *)(lVar4 + 0x18) & 0xffffffff) - 1;
        pfVar7 = (float *)(lVar4 + 0x24);
        do {
          fVar20 = *pfVar7;
          if (*pfVar7 <= fVar18) {
            fVar20 = fVar18;
          }
          fVar18 = fVar20;
          lVar6 = lVar6 + -1;
          pfVar7 = pfVar7 + 1;
        } while (lVar6 != 0);
      }
      if (fVar18 < fVar9) {
        fVar18 = SQRT(fVar9 * fVar9 - fVar18 * fVar18);
        fVar12 = fVar12 - fVar18 * param_5[3];
        uVar15 = CONCAT44(fVar22 - (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) * fVar18,
                          fVar21 - (float)*(undefined8 *)(param_5 + 4) * fVar18);
      }
      uVar17 = (undefined4)(uVar15 >> 0x20);
      uVar11 = FUN_07a396b8(fVar12,uVar15,uVar15 >> 0x20,param_4,param_7);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_089d99f0(uVar11,uVar15 & 0xffffffff,uVar17,uStack00000000000000cc,uVar2,fVar3,
                   uStack000000000000003c,&stack0x00000060,0);
      FUN_07a39ec8(&stack0x00000040 + 4,param_4,&stack0x00000060,param_7);
      param_6[1] = CONCAT44(uStack0000000000000050,in_stack_00000040._12_4_);
      *param_6 = in_stack_00000040._4_8_;
      *(ulong *)((long)param_6 + 0x14) = CONCAT44(uStack000000000000005c,fStack0000000000000058);
      *(ulong *)((long)param_6 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


