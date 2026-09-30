/*
FUNCTION_NAME: OVRPlugin$$SetKeyboardOverlayUV
ENTRY_POINT: 090addc0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetKeyboardOverlayUV(long *param_1,float param_2,undefined8 param_3)

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
  
  puVar1 = PTR_DAT_0ac0ef88;
  fVar11 = (float)((ulong)param_3 >> 0x20) + param_2 + (float)param_3;
  if (**(float **)(*param_1 + 0xb8) <= fVar11) {
    fVar15 = (float)((ulong)unaff_d9 >> 0x20);
    fVar18 = (in_stack_00000000 - (float)((ulong)unaff_d12 >> 0x20)) * fVar15 +
             (unaff_s8 - unaff_s11) * unaff_s10 +
             (in_stack_00000010 - (float)unaff_d12) * (float)unaff_d9;
    fVar16 = (unaff_s10 * fVar18) / fVar11;
    uVar17 = CONCAT44((fVar15 * fVar18) / fVar11,((float)unaff_d9 * fVar18) / fVar11);
  }
  else {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    fVar16 = **(float **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    uVar17 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 1);
  }
  fVar18 = *unaff_x22;
  uVar19 = *(undefined8 *)(unaff_x22 + 1);
  fVar11 = (float)FUN_090ad864();
  lVar7 = FUN_04947fd0(*(undefined8 *)puVar1,1);
  if (DAT_0b32413d == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32413d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
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
      puVar1 = PTR_DAT_0ac401c0;
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
      FUN_090ad790(&stack0x00000020 + 4);
      uVar5 = uStack000000000000003c;
      uVar4 = uStack0000000000000038;
      uVar3 = uStack0000000000000034;
      uVar2 = uStack0000000000000030;
      uVar12 = FUN_090ae034(fVar16,uVar13,fVar15);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0a188128(uVar12,uVar13 & 0xffffffff,fVar15,uVar2,uVar3,uVar4,uVar5,&stack0x00000040,0);
      FUN_090ae15c(&stack0x00000020 + 4);
      unaff_x19[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
      *unaff_x19 = in_stack_00000020._4_8_;
      *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


