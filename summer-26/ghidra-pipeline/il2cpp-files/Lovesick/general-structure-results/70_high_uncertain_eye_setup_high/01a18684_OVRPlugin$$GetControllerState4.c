/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 01a18684
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetControllerState4(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  long unaff_x23;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  float unaff_s8;
  float fVar12;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar13;
  float unaff_s12;
  float fVar14;
  float fVar15;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  
  if (*(int *)(**(long **)(param_1 + 0x3b8) + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (unaff_x23 != 0) {
    iVar3 = (int)*(ulong *)(unaff_x23 + 0x18);
    if (iVar3 != 0) {
      fVar15 = unaff_s8 + unaff_s11;
      fVar14 = unaff_s9 + unaff_s12;
      fVar13 = unaff_s10 + unaff_s15;
      fVar10 = (fStack000000000000000c - fVar13) * (fStack000000000000000c - fVar13);
      fVar6 = SQRT(fVar10 + (fStack0000000000000008 - fVar15) * (fStack0000000000000008 - fVar15) +
                            (in_stack_00000000._4_4_ - fVar14) * (in_stack_00000000._4_4_ - fVar14))
              - unaff_s14;
      *(float *)(unaff_x23 + 0x20) = fVar6;
      puVar1 = StringLiteral_6259;
      if (1 < iVar3) {
        lVar4 = (*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) - 1;
        pfVar5 = (float *)(unaff_x23 + 0x24);
        do {
          fVar8 = *pfVar5;
          if (*pfVar5 <= fVar6) {
            fVar8 = fVar6;
          }
          fVar6 = fVar8;
          lVar4 = lVar4 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar4 != 0);
      }
      if (fVar6 < unaff_s14) {
        fVar8 = unaff_s14 * unaff_s14;
        fVar12 = SQRT(fVar8 - fVar6 * fVar6);
        fVar6 = (float)FUN_026877e4();
        fVar15 = fVar15 - fVar12 * fVar6;
        fVar14 = fVar14 - fVar12 * fVar8;
        fVar13 = fVar13 - fVar12 * fVar10;
      }
      uVar9 = (ulong)(uint)fVar14;
      uVar11 = (ulong)(uint)fVar13;
      FUN_01a17f28(&stack0x00000030);
      uVar2 = uStack0000000000000040;
      uVar7 = FUN_01a1882c(fVar15,uVar9,uVar11);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02666aac(uVar7,uVar9,uVar11,uStack000000000000003c,uVar2,
                   uStack0000000000000044 & 0xffffffff,uStack0000000000000044._4_4_,&stack0x00000050
                   ,0);
      FUN_01a1895c(&stack0x00000010);
      unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *unaff_x19 = in_stack_00000010;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


