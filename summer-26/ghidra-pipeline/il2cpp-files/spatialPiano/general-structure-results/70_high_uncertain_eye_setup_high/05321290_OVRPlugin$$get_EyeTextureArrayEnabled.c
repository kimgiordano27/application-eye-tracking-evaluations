/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 05321290
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_EyeTextureArrayEnabled(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  uint in_w8;
  long lVar7;
  float *pfVar8;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  float fVar9;
  undefined4 uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar14;
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
  
  if (in_w8 != 0) {
    fVar14 = unaff_s10 + unaff_s12;
    fVar12 = (float)unaff_d11 + (float)unaff_d13;
    fVar13 = (float)((ulong)unaff_d11 >> 0x20) + (float)((ulong)unaff_d13 >> 0x20);
    fVar9 = SQRT((in_stack_00000000 - fVar13) * (in_stack_00000000 - fVar13) +
                 (unaff_s8 - fVar14) * (unaff_s8 - fVar14) +
                 (in_stack_00000010 - fVar12) * (in_stack_00000010 - fVar12)) - unaff_s9;
    *(float *)(unaff_x23 + 0x20) = fVar9;
    puVar1 = PTR_DAT_067c9790;
    if (1 < (int)in_w8) {
      lVar7 = (ulong)in_w8 - 1;
      pfVar8 = (float *)(unaff_x23 + 0x24);
      do {
        fVar6 = *pfVar8;
        if (*pfVar8 <= fVar9) {
          fVar6 = fVar9;
        }
        fVar9 = fVar6;
        lVar7 = lVar7 + -1;
        pfVar8 = pfVar8 + 1;
      } while (lVar7 != 0);
    }
    if (fVar9 < unaff_s9) {
      fVar9 = SQRT(unaff_s9 * unaff_s9 - fVar9 * fVar9);
      fVar14 = fVar14 - fVar9 * *(float *)(unaff_x22 + 0xc);
      fVar12 = fVar12 - (float)*(undefined8 *)(unaff_x22 + 0x10) * fVar9;
      fVar13 = fVar13 - (float)((ulong)*(undefined8 *)(unaff_x22 + 0x10) >> 0x20) * fVar9;
    }
    uVar11 = CONCAT44(fVar13,fVar12);
    FUN_05320b6c(&stack0x00000020 + 4);
    uVar5 = uStack000000000000003c;
    uVar4 = uStack0000000000000038;
    uVar3 = uStack0000000000000034;
    uVar2 = uStack0000000000000030;
    uVar10 = FUN_05321400(fVar14,uVar11,fVar13);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060fda18(uVar10,uVar11 & 0xffffffff,fVar13,uVar2,uVar3,uVar4,uVar5,&stack0x00000040,0);
    FUN_05321528(&stack0x00000020 + 4);
    unaff_x19[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
    *unaff_x19 = in_stack_00000020._4_8_;
    *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


