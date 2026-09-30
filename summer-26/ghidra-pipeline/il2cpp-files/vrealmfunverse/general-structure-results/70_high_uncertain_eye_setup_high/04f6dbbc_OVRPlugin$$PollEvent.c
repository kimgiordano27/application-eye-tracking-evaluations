/*
FUNCTION_NAME: OVRPlugin$$PollEvent
ENTRY_POINT: 04f6dbbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__PollEvent(float param_1,float param_2,float param_3)

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
  undefined8 *unaff_x23;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  undefined8 unaff_d9;
  float unaff_s10;
  float unaff_s11;
  float fVar17;
  undefined8 unaff_d12;
  undefined8 uVar18;
  float in_stack_00000000;
  float in_stack_00000010;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  fVar16 = (float)((ulong)unaff_d9 >> 0x20);
  fVar13 = (param_3 - (float)((ulong)unaff_d12 >> 0x20)) * fVar16 +
           (unaff_s8 - unaff_s11) * unaff_s10 + (param_2 - (float)unaff_d12) * (float)unaff_d9;
  fVar17 = *unaff_x22;
  uVar18 = *(undefined8 *)(unaff_x22 + 1);
  fVar11 = (float)FUN_04f6d5f8();
  lVar7 = FUN_02b3c908(*unaff_x23,1);
  if (DAT_066c1d99 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    DAT_066c1d99 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (lVar7 != 0) {
    iVar8 = (int)*(ulong *)(lVar7 + 0x18);
    if (iVar8 != 0) {
      fVar17 = (unaff_s10 * fVar13) / param_1 + fVar17;
      fVar15 = ((float)unaff_d9 * fVar13) / param_1 + (float)uVar18;
      fVar16 = (fVar16 * fVar13) / param_1 + (float)((ulong)uVar18 >> 0x20);
      fVar13 = SQRT((in_stack_00000000 - fVar16) * (in_stack_00000000 - fVar16) +
                    (unaff_s8 - fVar17) * (unaff_s8 - fVar17) +
                    (in_stack_00000010 - fVar15) * (in_stack_00000010 - fVar15)) - fVar11;
      *(float *)(lVar7 + 0x20) = fVar13;
      puVar1 = PTR_DAT_063185a8;
      if (1 < iVar8) {
        lVar9 = (*(ulong *)(lVar7 + 0x18) & 0xffffffff) - 1;
        pfVar10 = (float *)(lVar7 + 0x24);
        do {
          fVar6 = *pfVar10;
          if (*pfVar10 <= fVar13) {
            fVar6 = fVar13;
          }
          fVar13 = fVar6;
          lVar9 = lVar9 + -1;
          pfVar10 = pfVar10 + 1;
        } while (lVar9 != 0);
      }
      if (fVar13 < fVar11) {
        fVar11 = SQRT(fVar11 * fVar11 - fVar13 * fVar13);
        fVar17 = fVar17 - fVar11 * unaff_x22[3];
        fVar15 = fVar15 - (float)*(undefined8 *)(unaff_x22 + 4) * fVar11;
        fVar16 = fVar16 - (float)((ulong)*(undefined8 *)(unaff_x22 + 4) >> 0x20) * fVar11;
      }
      uVar14 = CONCAT44(fVar16,fVar15);
      FUN_04f6d524(&stack0x00000020 + 4);
      uVar5 = uStack000000000000003c;
      uVar4 = uStack0000000000000038;
      uVar3 = uStack0000000000000034;
      uVar2 = uStack0000000000000030;
      uVar12 = FUN_04f6ddc8(fVar17,uVar14,fVar16);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c99d80(uVar12,uVar14 & 0xffffffff,fVar16,uVar2,uVar3,uVar4,uVar5,&stack0x00000040,0);
      FUN_04f6def0(&stack0x00000020 + 4);
      unaff_x19[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
      *unaff_x19 = in_stack_00000020._4_8_;
      *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


