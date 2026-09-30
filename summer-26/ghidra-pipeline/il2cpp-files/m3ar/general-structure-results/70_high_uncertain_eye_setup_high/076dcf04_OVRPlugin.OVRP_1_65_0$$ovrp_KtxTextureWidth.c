/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureWidth
ENTRY_POINT: 076dcf04
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureWidth(long param_1)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float fVar11;
  float unaff_s13;
  float fVar12;
  float unaff_s14;
  float fVar13;
  float unaff_s15;
  float fVar14;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0xc68));
  *(undefined1 *)(unaff_x22 + 0x2f4) = 1;
  fVar4 = unaff_s10 * unaff_s10 + unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar4) {
    fVar9 = unaff_s14 * unaff_s10 + unaff_s12 * unaff_s13 + unaff_s8 * unaff_s11;
    fVar8 = (unaff_s13 * fVar9) / fVar4;
    fStack000000000000000c = (unaff_s11 * fVar9) / fVar4;
    fVar4 = (unaff_s10 * fVar9) / fVar4;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar8 = *pfVar2;
    fStack000000000000000c = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  puVar1 = PTR_DAT_08f65580;
  fVar9 = unaff_s12 - fVar8;
  fStack0000000000000018 = unaff_s8 - fStack000000000000000c;
  fVar12 = unaff_s14 - fVar4;
  fVar10 = fVar12 * fVar12 + fVar9 * fVar9 + fStack0000000000000018 * fStack0000000000000018;
  if (DAT_01a2e7f0 <= fVar10) {
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fStack0000000000000014 = SQRT(fVar10);
    if (fStack0000000000000014 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar2 = *(float **)(*unaff_x21 + 0xb8);
      fVar9 = *pfVar2;
      fStack0000000000000018 = pfVar2[1];
      fStack0000000000000014 = pfVar2[2];
    }
    else {
      fStack0000000000000018 = fStack0000000000000018 / fStack0000000000000014;
      fVar9 = fVar9 / fStack0000000000000014;
      fStack0000000000000014 = fVar12 / fStack0000000000000014;
    }
  }
  else {
    if (DAT_09539c08 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c08 = '\x01';
    }
    lVar3 = *(long *)(*unaff_x21 + 0xb8);
    fVar9 = *(float *)(lVar3 + 0x48);
    fStack0000000000000018 = *(float *)(lVar3 + 0x4c);
    fStack0000000000000014 = *(float *)(lVar3 + 0x50);
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fStack000000000000001c = fVar9;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar13 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    fVar12 = fStack0000000000000014 * fVar13;
    fStack0000000000000004 = unaff_s9;
    if (DAT_09539e19 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e19 = '\x01';
    }
    fVar14 = fStack000000000000000c + fStack0000000000000018 * fVar13;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar14 = unaff_s15 - fVar14;
    fVar9 = unaff_s12 - (fVar8 + fVar9 * fVar13);
    fVar12 = unaff_s14 - (fVar4 + fVar12);
    fVar9 = SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar14 * fVar14);
    if ((0.0 < fStack0000000000000004) &&
       (fVar12 = (float)FUN_076dd2c0(fVar9), fStack0000000000000004 < fVar12)) {
      return 0;
    }
    fVar14 = fStack000000000000001c;
    fVar12 = fStack0000000000000014;
    if ((*(int *)(unaff_x20 + 0x28) == 1) ||
       ((fVar7 = fStack0000000000000014, fVar6 = fStack0000000000000018,
        fVar11 = fStack000000000000001c, *(int *)(unaff_x20 + 0x28) != 2 && (SQRT(fVar10) <= fVar13)
        ))) {
      fVar7 = -fStack0000000000000014;
      fVar6 = -fStack0000000000000018;
      fVar11 = -fStack000000000000001c;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) && (lVar3 != 0)) {
        fVar10 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
        fVar4 = fVar4 + fVar12 * fVar10;
        fVar12 = fStack000000000000000c + fStack0000000000000018 * fVar10;
        uVar5 = FUN_08596980(fVar8 + fVar14 * fVar10,lVar3,0);
        *unaff_x19 = uVar5;
        unaff_x19[1] = fVar12;
        unaff_x19[2] = fVar4;
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (lVar3 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar3 != 0)) {
          uVar5 = FUN_08599d5c(fVar11,lVar3,0);
          unaff_x19[3] = uVar5;
          unaff_x19[4] = fVar6;
          unaff_x19[5] = fVar7;
          uVar5 = FUN_076dd2c0(fVar9);
          unaff_x19[6] = uVar5;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


