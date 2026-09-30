/*
FUNCTION_NAME: OVRPlugin$$set_eyeHeight
ENTRY_POINT: 060cdab4
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


undefined8 OVRPlugin__set_eyeHeight(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  float *unaff_x22;
  undefined8 *unaff_x23;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack000000000000000c;
  float fStack000000000000001c;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  fStack000000000000000c = unaff_x22[2];
  fVar17 = unaff_x22[3];
  fVar19 = *unaff_x22;
  fVar20 = unaff_x22[1];
  fVar18 = unaff_x22[4];
  fVar16 = unaff_x22[5];
  fVar6 = (float)FUN_060cc9e4();
  fVar9 = *unaff_x22;
  fStack000000000000001c = unaff_x22[3];
  uVar10 = *(undefined8 *)(unaff_x22 + 1);
  uVar11 = *(undefined8 *)(unaff_x22 + 4);
  lVar2 = FUN_03642a4c(*unaff_x23,1);
  if (DAT_07ed78be == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed78be = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (lVar2 != 0) {
    iVar3 = (int)*(ulong *)(lVar2 + 0x18);
    if (iVar3 != 0) {
      fVar7 = param_3 * fVar16 + unaff_s8 * fVar17 + param_2 * fVar18;
      fVar13 = 1.0 / (fVar7 * fVar7 + -1.0);
      fVar15 = param_3 * (in_stack_00000028._4_4_ - fStack000000000000000c) +
               unaff_s8 * (fStack0000000000000034 - fVar19) +
               param_2 * (fStack0000000000000030 - fVar20);
      fVar16 = (in_stack_00000028._4_4_ - fStack000000000000000c) * fVar16 +
               (fStack0000000000000034 - fVar19) * fVar17 +
               (fStack0000000000000030 - fVar20) * fVar18;
      fVar17 = (fVar15 * fVar7 - fVar16) * fVar13;
      fVar13 = (fVar15 - fVar7 * fVar16) * fVar13;
      fVar9 = fVar9 + fStack000000000000001c * fVar17;
      fVar18 = (float)uVar10 + (float)uVar11 * fVar17;
      fVar17 = (float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar11 >> 0x20) * fVar17;
      uVar12 = CONCAT44(fVar17,fVar18);
      fVar16 = (fStack0000000000000034 + unaff_s8 * fVar13) - fVar9;
      fVar19 = (fStack0000000000000030 + param_2 * fVar13) - fVar18;
      fVar20 = (in_stack_00000028._4_4_ + param_3 * fVar13) - fVar17;
      fVar16 = SQRT(fVar20 * fVar20 + fVar16 * fVar16 + fVar19 * fVar19) - fVar6;
      *(float *)(lVar2 + 0x20) = fVar16;
      puVar1 = PTR_DAT_079fd258;
      if (1 < iVar3) {
        lVar4 = (*(ulong *)(lVar2 + 0x18) & 0xffffffff) - 1;
        pfVar5 = (float *)(lVar2 + 0x24);
        do {
          fVar19 = *pfVar5;
          if (*pfVar5 <= fVar16) {
            fVar19 = fVar16;
          }
          fVar16 = fVar19;
          lVar4 = lVar4 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar4 != 0);
      }
      if (fVar16 < fVar6) {
        fVar6 = SQRT(fVar6 * fVar6 - fVar16 * fVar16);
        fVar9 = fVar9 - fVar6 * unaff_x22[3];
        uVar12 = CONCAT44(fVar17 - (float)((ulong)*(undefined8 *)(unaff_x22 + 4) >> 0x20) * fVar6,
                          fVar18 - (float)*(undefined8 *)(unaff_x22 + 4) * fVar6);
      }
      uVar14 = (undefined4)(uVar12 >> 0x20);
      uVar8 = FUN_060cd534(fVar9,uVar12,uVar12 >> 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ce4a0(uVar8,uVar12 & 0xffffffff,uVar14,uStack00000000000000cc,uStack00000000000000c8,
                   uStack0000000000000040,in_stack_00000038._4_4_,&stack0x00000060,0);
      FUN_060cdd44((undefined1 *)((long)&stack0x00000040 + 4));
      unaff_x19[1] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *unaff_x19 = uStack0000000000000044;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000058;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


