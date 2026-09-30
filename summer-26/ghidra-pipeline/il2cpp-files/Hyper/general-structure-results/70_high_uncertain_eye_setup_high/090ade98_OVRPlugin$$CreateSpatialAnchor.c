/*
FUNCTION_NAME: OVRPlugin$$CreateSpatialAnchor
ENTRY_POINT: 090ade98
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


undefined8 OVRPlugin__CreateSpatialAnchor(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  float fVar10;
  undefined4 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar15;
  undefined8 unaff_d11;
  float unaff_s12;
  undefined8 unaff_d13;
  float in_stack_00000000;
  float in_stack_00000010;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x830));
  *(undefined1 *)(unaff_x25 + 0x13d) = unaff_w24;
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (unaff_x23 != 0) {
    iVar7 = (int)*(ulong *)(unaff_x23 + 0x18);
    if (iVar7 != 0) {
      fVar15 = unaff_s10 + unaff_s12;
      fVar13 = (float)unaff_d11 + (float)unaff_d13;
      fVar14 = (float)((ulong)unaff_d11 >> 0x20) + (float)((ulong)unaff_d13 >> 0x20);
      fVar10 = SQRT((in_stack_00000000 - fVar14) * (in_stack_00000000 - fVar14) +
                    (unaff_s8 - fVar15) * (unaff_s8 - fVar15) +
                    (in_stack_00000010 - fVar13) * (in_stack_00000010 - fVar13)) - unaff_s9;
      *(float *)(unaff_x23 + 0x20) = fVar10;
      puVar1 = PTR_DAT_0ac401c0;
      if (1 < iVar7) {
        lVar8 = (*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) - 1;
        pfVar9 = (float *)(unaff_x23 + 0x24);
        do {
          fVar6 = *pfVar9;
          if (*pfVar9 <= fVar10) {
            fVar6 = fVar10;
          }
          fVar10 = fVar6;
          lVar8 = lVar8 + -1;
          pfVar9 = pfVar9 + 1;
        } while (lVar8 != 0);
      }
      if (fVar10 < unaff_s9) {
        fVar10 = SQRT(unaff_s9 * unaff_s9 - fVar10 * fVar10);
        fVar15 = fVar15 - fVar10 * *(float *)(unaff_x22 + 0xc);
        fVar13 = fVar13 - (float)*(undefined8 *)(unaff_x22 + 0x10) * fVar10;
        fVar14 = fVar14 - (float)((ulong)*(undefined8 *)(unaff_x22 + 0x10) >> 0x20) * fVar10;
      }
      uVar12 = CONCAT44(fVar14,fVar13);
      FUN_090ad790(&stack0x00000020 + 4);
      uVar5 = uStack000000000000003c;
      uVar4 = uStack0000000000000038;
      uVar3 = uStack0000000000000034;
      uVar2 = uStack0000000000000030;
      uVar11 = FUN_090ae034(fVar15,uVar12,fVar14);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0a188128(uVar11,uVar12 & 0xffffffff,fVar14,uVar2,uVar3,uVar4,uVar5,&stack0x00000040,0);
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


