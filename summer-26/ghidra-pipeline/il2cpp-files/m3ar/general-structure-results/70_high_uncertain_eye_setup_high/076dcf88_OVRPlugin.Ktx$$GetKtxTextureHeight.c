/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureHeight
ENTRY_POINT: 076dcf88
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


undefined8
OVRPlugin_Ktx__GetKtxTextureHeight
          (float param_1,float param_2,undefined1 param_3 [16],float param_4)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float fVar10;
  float unaff_s14;
  float fVar11;
  float unaff_s15;
  float fVar12;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  puVar1 = PTR_DAT_08f65580;
  param_4 = param_4 + param_2;
  fStack0000000000000010 = (unaff_s13 * param_4) / param_1;
  fStack000000000000000c = (unaff_s11 * param_4) / param_1;
  fStack0000000000000008 = (unaff_s10 * param_4) / param_1;
  fVar7 = unaff_s12 - fStack0000000000000010;
  fStack0000000000000018 = unaff_s8 - fStack000000000000000c;
  fVar10 = unaff_s14 - fStack0000000000000008;
  fVar8 = fVar10 * fVar10 + fVar7 * fVar7 + fStack0000000000000018 * fStack0000000000000018;
  if (DAT_01a2e7f0 <= fVar8) {
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fStack0000000000000014 = SQRT(fVar8);
    if (fStack0000000000000014 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar3 = *(float **)(*unaff_x21 + 0xb8);
      fVar7 = *pfVar3;
      fStack0000000000000018 = pfVar3[1];
      fStack0000000000000014 = pfVar3[2];
    }
    else {
      fStack0000000000000018 = fStack0000000000000018 / fStack0000000000000014;
      fVar7 = fVar7 / fStack0000000000000014;
      fStack0000000000000014 = fVar10 / fStack0000000000000014;
    }
  }
  else {
    if (DAT_09539c08 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c08 = '\x01';
    }
    lVar2 = *(long *)(*unaff_x21 + 0xb8);
    fVar7 = *(float *)(lVar2 + 0x48);
    fStack0000000000000018 = *(float *)(lVar2 + 0x4c);
    fStack0000000000000014 = *(float *)(lVar2 + 0x50);
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fStack000000000000001c = fVar7;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar11 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    fVar10 = fStack0000000000000014 * fVar11;
    fStack0000000000000004 = unaff_s9;
    if (DAT_09539e19 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e19 = '\x01';
    }
    fVar12 = fStack000000000000000c + fStack0000000000000018 * fVar11;
    fVar7 = fStack0000000000000010 + fVar7 * fVar11;
    fVar10 = fStack0000000000000008 + fVar10;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar12 = unaff_s15 - fVar12;
    fVar7 = unaff_s12 - fVar7;
    fVar10 = unaff_s14 - fVar10;
    fVar7 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar12 * fVar12);
    if ((0.0 < fStack0000000000000004) &&
       (fVar10 = (float)FUN_076dd2c0(fVar7), fStack0000000000000004 < fVar10)) {
      return 0;
    }
    fVar12 = fStack000000000000001c;
    fVar10 = fStack0000000000000014;
    if ((*(int *)(unaff_x20 + 0x28) == 1) ||
       ((fVar6 = fStack0000000000000014, fVar5 = fStack0000000000000018,
        fVar9 = fStack000000000000001c, *(int *)(unaff_x20 + 0x28) != 2 && (SQRT(fVar8) <= fVar11)))
       ) {
      fVar6 = -fStack0000000000000014;
      fVar5 = -fStack0000000000000018;
      fVar9 = -fStack000000000000001c;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar2 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) && (lVar2 != 0)) {
        fVar8 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x20);
        fVar11 = fStack0000000000000008 + fVar10 * fVar8;
        fVar10 = fStack000000000000000c + fStack0000000000000018 * fVar8;
        uVar4 = FUN_08596980(fStack0000000000000010 + fVar12 * fVar8,lVar2,0);
        *unaff_x19 = uVar4;
        unaff_x19[1] = fVar10;
        unaff_x19[2] = fVar11;
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (lVar2 = FUN_085849e0(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
          uVar4 = FUN_08599d5c(fVar9,lVar2,0);
          unaff_x19[3] = uVar4;
          unaff_x19[4] = fVar5;
          unaff_x19[5] = fVar6;
          uVar4 = FUN_076dd2c0(fVar7);
          unaff_x19[6] = uVar4;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


