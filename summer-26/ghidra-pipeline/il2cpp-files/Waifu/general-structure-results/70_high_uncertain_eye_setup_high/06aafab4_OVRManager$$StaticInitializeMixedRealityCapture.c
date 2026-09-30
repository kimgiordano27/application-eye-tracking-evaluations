/*
FUNCTION_NAME: OVRManager$$StaticInitializeMixedRealityCapture
ENTRY_POINT: 06aafab4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticInitializeMixedRealityCapture
               (undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],
               undefined4 param_4)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  char unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  ulong uVar4;
  long unaff_x25;
  long unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  float fVar11;
  ulong unaff_d11;
  ulong unaff_d12;
  undefined4 uVar12;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  
  uStack000000000000003c = param_2;
  uStack0000000000000040 = param_4;
  do {
    uVar12 = *unaff_x20;
    uVar4 = (ulong)(uint)unaff_x20[1];
    uVar9 = (ulong)(uint)unaff_x20[2];
    if (*(int *)(DAT_083d1cc0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar5 = (float)FUN_06ab0148(uVar12,uVar4,uVar9,uStack0000000000000040,uStack000000000000003c);
    if (*(char *)(unaff_x25 + 0xcc9) == '\0') {
      FUN_0335b6c8();
      DataMemoryBarrier(2,3);
      *(char *)(unaff_x25 + 0xcc9) = unaff_w22;
    }
    if (*(int *)(*(long *)(unaff_x27 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar1 = *unaff_x23;
    if (lVar1 == 0) goto LAB_06aafd90;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x29) goto LAB_06aafd8c;
    lVar1 = lVar1 + unaff_x28;
    *(float *)(lVar1 + 0x20) = in_stack_00000038 * fVar5;
    *(float *)(lVar1 + 0x24) = fStack0000000000000034 * (float)uVar4;
    *(float *)(lVar1 + 0x28) = fStack0000000000000030 * (float)uVar9;
    lVar1 = *unaff_x23;
    if (lVar1 == 0) goto LAB_06aafd90;
    if (*(char *)(unaff_x24 + 0xcc3) == '\0') {
      FUN_0335b6c8();
      DataMemoryBarrier(2,3);
      *(char *)(unaff_x24 + 0xcc3) = unaff_w22;
    }
    if (*(int *)(*(long *)(unaff_x27 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar6 = fVar5 - unaff_s10;
    fVar7 = (float)uVar4 - (float)unaff_d11;
    fVar8 = (float)uVar9 - (float)unaff_d12;
    fVar10 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
    fVar11 = in_stack_00000028._4_4_;
    if (fVar10 <= in_stack_00000028._4_4_) {
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = unaff_w22;
      }
      pfVar2 = *(float **)(DAT_083d2c90 + 0xb8);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar10;
      fVar7 = fVar7 / fVar10;
      fVar8 = fVar8 / fVar10;
    }
    uVar12 = FUN_07a00a64(fVar6,0);
    if (*(uint *)(lVar1 + 0x18) <= unaff_x29) goto LAB_06aafd8c;
    lVar1 = lVar1 + unaff_x28;
    *(undefined4 *)(lVar1 + 0x2c) = uVar12;
    *(float *)(lVar1 + 0x30) = fVar7;
    *(float *)(lVar1 + 0x34) = fVar8;
    *(float *)(lVar1 + 0x38) = fVar11;
    unaff_x29 = unaff_x29 + 1;
    unaff_s9 = unaff_s9 + fVar10;
    unaff_x28 = unaff_x28 + 0x20;
    unaff_d11 = uVar4;
    unaff_d12 = uVar9;
    unaff_s10 = fVar5;
  } while ((long)unaff_x29 < (long)*(int *)(unaff_x19 + 0x50));
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar3 = *unaff_x23;
    lVar1 = 0x5c;
    uVar4 = 1;
    do {
      if (lVar3 == 0) {
LAB_06aafd90:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4)) {
LAB_06aafd8c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      lVar3 = lVar3 + lVar1;
      fVar11 = *(float *)(lVar3 + -0x38);
      fVar6 = *(float *)(lVar3 + -0x34);
      fVar5 = *(float *)(lVar3 + -0x3c);
      fVar10 = *(float *)(lVar3 + -0x1c);
      fVar8 = *(float *)(lVar3 + -0x18);
      fVar7 = *(float *)(lVar3 + -0x14);
      if (*(char *)(unaff_x25 + 0xcc9) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x25 + 0xcc9) = 1;
      }
      if (*(int *)(*(long *)(unaff_x27 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar3 = *unaff_x23;
      if (lVar3 == 0) goto LAB_06aafd90;
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4))
      goto LAB_06aafd8c;
      fVar5 = fVar5 - fVar10;
      fVar11 = fVar11 - fVar8;
      fVar6 = fVar6 - fVar7;
      *(float *)(lVar3 + lVar1) =
           SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar6 * fVar6) / unaff_s9 +
           ((float *)(lVar3 + lVar1))[-8];
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + 0x20;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
  }
                    /* try { // try from 06aafd70 to 06bafe8f has its CatchHandler @ 06aafd70
                       catch() { ... } // from try @ 06aafd70 with catch @ 06aafd70
                       catch() { ... } // from try @ 06ab0344 with catch @ 06aafd70
                       catch() { ... } // from try @ 06ab0384 with catch @ 06aafd70 */
  return;
}


