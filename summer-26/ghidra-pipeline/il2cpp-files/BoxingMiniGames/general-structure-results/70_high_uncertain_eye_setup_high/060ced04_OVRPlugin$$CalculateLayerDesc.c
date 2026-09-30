/*
FUNCTION_NAME: OVRPlugin$$CalculateLayerDesc
ENTRY_POINT: 060ced04
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


undefined8 OVRPlugin__CalculateLayerDesc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *unaff_x19;
  float *unaff_x22;
  long unaff_x23;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  undefined8 unaff_d9;
  float unaff_s10;
  float fVar16;
  float unaff_s11;
  undefined8 uVar17;
  float fVar18;
  undefined8 unaff_d12;
  undefined8 uVar19;
  float in_stack_00000000;
  float in_stack_00000010;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  *(undefined1 *)(unaff_x23 + 0xa98) = 1;
  puVar1 = PTR_DAT_079f4d38;
  fVar18 = (float)unaff_d9;
  fVar15 = (float)((ulong)unaff_d9 >> 0x20);
  fVar11 = fVar15 * fVar15 + unaff_s10 * unaff_s10 + fVar18 * fVar18;
  if (**(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) <= fVar11) {
    fVar14 = (in_stack_00000000 - (float)((ulong)unaff_d12 >> 0x20)) * fVar15 +
             (unaff_s8 - unaff_s11) * unaff_s10 + (in_stack_00000010 - (float)unaff_d12) * fVar18;
    fVar16 = (unaff_s10 * fVar14) / fVar11;
    uVar17 = CONCAT44((fVar15 * fVar14) / fVar11,(fVar18 * fVar14) / fVar11);
  }
  else {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    fVar16 = **(float **)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
    uVar17 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 1);
  }
  fVar18 = *unaff_x22;
  uVar19 = *(undefined8 *)(unaff_x22 + 1);
  fVar11 = (float)FUN_060ce7c0();
  lVar7 = FUN_03642a4c(*(undefined8 *)puVar1,1);
  if (DAT_07ed78be == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed78be = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (lVar7 != 0) {
    iVar8 = (int)*(ulong *)(lVar7 + 0x18);
    if (iVar8 != 0) {
      fVar16 = fVar16 + fVar18;
      fVar14 = (float)uVar17 + (float)uVar19;
      fVar15 = (float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar19 >> 0x20);
      fVar18 = SQRT((in_stack_00000000 - fVar15) * (in_stack_00000000 - fVar15) +
                    (unaff_s8 - fVar16) * (unaff_s8 - fVar16) +
                    (in_stack_00000010 - fVar14) * (in_stack_00000010 - fVar14)) - fVar11;
      *(float *)(lVar7 + 0x20) = fVar18;
      puVar1 = PTR_DAT_079fd258;
      if (1 < iVar8) {
        lVar9 = (*(ulong *)(lVar7 + 0x18) & 0xffffffff) - 1;
        pfVar10 = (float *)(lVar7 + 0x24);
        do {
          fVar6 = *pfVar10;
          if (*pfVar10 <= fVar18) {
            fVar6 = fVar18;
          }
          fVar18 = fVar6;
          lVar9 = lVar9 + -1;
          pfVar10 = pfVar10 + 1;
        } while (lVar9 != 0);
      }
      if (fVar18 < fVar11) {
        fVar11 = SQRT(fVar11 * fVar11 - fVar18 * fVar18);
        fVar16 = fVar16 - fVar11 * unaff_x22[3];
        fVar14 = fVar14 - (float)*(undefined8 *)(unaff_x22 + 4) * fVar11;
        fVar15 = fVar15 - (float)((ulong)*(undefined8 *)(unaff_x22 + 4) >> 0x20) * fVar11;
      }
      uVar13 = CONCAT44(fVar15,fVar14);
      FUN_060ce6ec(&stack0x00000020 + 4);
      uVar5 = uStack000000000000003c;
      uVar4 = uStack0000000000000038;
      uVar3 = uStack0000000000000034;
      uVar2 = uStack0000000000000030;
      uVar12 = FUN_060cef90(fVar16,uVar13,fVar15);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ce4a0(uVar12,uVar13 & 0xffffffff,fVar15,uVar2,uVar3,uVar4,uVar5,&stack0x00000040,0);
      FUN_060cf0b8(&stack0x00000020 + 4);
      unaff_x19[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
      *unaff_x19 = in_stack_00000020._4_8_;
      *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


