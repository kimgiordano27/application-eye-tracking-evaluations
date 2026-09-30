/*
FUNCTION_NAME: OVRPlugin$$get_eyeHeight
ENTRY_POINT: 060cda64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_eyeHeight(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  float fVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  undefined8 *unaff_x19;
  float *unaff_x22;
  undefined8 *unaff_x23;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  FUN_060cc248(&stack0x00000040 + 4);
  fVar2 = fStack0000000000000058;
  in_stack_000000c8 = uStack0000000000000054;
  uStack00000000000000cc = uStack0000000000000050;
  uStack000000000000003c = uStack000000000000005c;
  fVar19 = fStack0000000000000058;
  fStack0000000000000034 = (float)FUN_060cc92c();
  fVar17 = fVar19;
  fStack000000000000002c = param_3;
  fVar7 = (float)FUN_060ccb9c();
  fStack000000000000000c = unaff_x22[2];
  fVar21 = unaff_x22[3];
  fVar23 = *unaff_x22;
  fVar24 = unaff_x22[1];
  fVar22 = unaff_x22[4];
  fVar20 = unaff_x22[5];
  fVar8 = (float)FUN_060cc9e4();
  fVar11 = *unaff_x22;
  fStack000000000000001c = unaff_x22[3];
  uVar12 = *(undefined8 *)(unaff_x22 + 1);
  uVar13 = *(undefined8 *)(unaff_x22 + 4);
  lVar3 = FUN_03642a4c(*unaff_x23,1);
  if (DAT_07ed78be == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed78be = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (lVar3 != 0) {
    iVar4 = (int)*(ulong *)(lVar3 + 0x18);
    if (iVar4 != 0) {
      fVar9 = param_3 * fVar20 + fVar7 * fVar21 + fVar17 * fVar22;
      fVar15 = 1.0 / (fVar9 * fVar9 + -1.0);
      fVar18 = param_3 * (fStack000000000000002c - fStack000000000000000c) +
               fVar7 * (fStack0000000000000034 - fVar23) + fVar17 * (fVar19 - fVar24);
      fVar20 = (fStack000000000000002c - fStack000000000000000c) * fVar20 +
               (fStack0000000000000034 - fVar23) * fVar21 + (fVar19 - fVar24) * fVar22;
      fVar21 = (fVar18 * fVar9 - fVar20) * fVar15;
      fVar15 = (fVar18 - fVar9 * fVar20) * fVar15;
      fVar11 = fVar11 + fStack000000000000001c * fVar21;
      fVar20 = (float)uVar12 + (float)uVar13 * fVar21;
      fVar21 = (float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar13 >> 0x20) * fVar21;
      uVar14 = CONCAT44(fVar21,fVar20);
      fVar7 = (fStack0000000000000034 + fVar7 * fVar15) - fVar11;
      fVar17 = (fVar19 + fVar17 * fVar15) - fVar20;
      fVar19 = (fStack000000000000002c + param_3 * fVar15) - fVar21;
      fVar17 = SQRT(fVar19 * fVar19 + fVar7 * fVar7 + fVar17 * fVar17) - fVar8;
      *(float *)(lVar3 + 0x20) = fVar17;
      puVar1 = PTR_DAT_079fd258;
      if (1 < iVar4) {
        lVar5 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
        pfVar6 = (float *)(lVar3 + 0x24);
        do {
          fVar19 = *pfVar6;
          if (*pfVar6 <= fVar17) {
            fVar19 = fVar17;
          }
          fVar17 = fVar19;
          lVar5 = lVar5 + -1;
          pfVar6 = pfVar6 + 1;
        } while (lVar5 != 0);
      }
      if (fVar17 < fVar8) {
        fVar17 = SQRT(fVar8 * fVar8 - fVar17 * fVar17);
        fVar11 = fVar11 - fVar17 * unaff_x22[3];
        uVar14 = CONCAT44(fVar21 - (float)((ulong)*(undefined8 *)(unaff_x22 + 4) >> 0x20) * fVar17,
                          fVar20 - (float)*(undefined8 *)(unaff_x22 + 4) * fVar17);
      }
      uVar16 = (undefined4)(uVar14 >> 0x20);
      uVar10 = FUN_060cd534(fVar11,uVar14,uVar14 >> 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ce4a0(uVar10,uVar14 & 0xffffffff,uVar16,uStack00000000000000cc,in_stack_000000c8,fVar2,
                   uStack000000000000003c,&stack0x00000060,0);
      FUN_060cdd44(&stack0x00000040 + 4);
      unaff_x19[1] = CONCAT44(uStack0000000000000050,in_stack_00000040._12_4_);
      *unaff_x19 = in_stack_00000040._4_8_;
      *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack000000000000005c,fStack0000000000000058);
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


