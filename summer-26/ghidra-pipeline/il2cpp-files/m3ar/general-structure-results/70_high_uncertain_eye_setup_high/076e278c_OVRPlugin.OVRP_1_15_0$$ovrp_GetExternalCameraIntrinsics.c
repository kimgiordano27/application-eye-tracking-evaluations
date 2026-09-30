/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraIntrinsics
ENTRY_POINT: 076e278c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraIntrinsics
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  float *pfVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float fVar12;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  
  fVar6 = param_3;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fStack000000000000001c = (float)FUN_08596ab0();
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fVar5 = param_3 * param_3 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12;
  fVar10 = fStack000000000000001c;
  fVar11 = param_2;
  fVar9 = fVar6;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar5) {
    fVar9 = param_3 * fVar6 + unaff_s11 * fStack000000000000001c + unaff_s12 * param_2;
    fVar10 = fStack000000000000001c - (unaff_s11 * fVar9) / fVar5;
    fVar11 = param_2 - (unaff_s12 * fVar9) / fVar5;
    fVar9 = fVar6 - (param_3 * fVar9) / fVar5;
  }
  fStack0000000000000014 = fVar6;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  puVar2 = PTR_DAT_08f65580;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar1 = PTR_DAT_08f65568;
  fVar6 = DAT_01a2ef28;
  fStack000000000000000c = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
  if (fStack000000000000000c <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar10 = *pfVar4;
    fVar11 = pfVar4[1];
    fStack000000000000000c = pfVar4[2];
  }
  else {
    fVar10 = fVar10 / fStack000000000000000c;
    fVar11 = fVar11 / fStack000000000000000c;
    fStack000000000000000c = fVar9 / fStack000000000000000c;
  }
  fVar9 = unaff_s12 * fStack000000000000000c;
  fVar5 = unaff_s11 * fStack000000000000000c;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  fVar9 = param_3 * fVar11 - fVar9;
  fVar5 = fVar5 - param_3 * fVar10;
  fVar12 = unaff_s12 * fVar10 - unaff_s11 * fVar11;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = fStack000000000000000c;
  fVar12 = SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar5 * fVar5);
  if (fVar12 <= fVar6) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar9 = *pfVar4;
    fVar5 = pfVar4[1];
  }
  else {
    fVar9 = fVar9 / fVar12;
    fVar5 = fVar5 / fVar12;
  }
  fStack0000000000000004 = fVar5;
  FUN_0419f7f0(fVar10,fVar11,fVar3,fStack000000000000001c,param_2,fStack0000000000000014,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_0852b5fc(*(long *)(unaff_x20 + 0x40),0);
    FUN_08575c64(0);
    fVar6 = (float)FUN_08575f94(0);
    if (fVar5 * fVar5 + fVar6 * fVar6 + fVar9 * fVar9 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar7 = FUN_08596b90();
      uVar8 = FUN_08575d1c(fVar6,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar8;
      *(float *)(unaff_x19 + 0x10) = fVar9;
      *(float *)(unaff_x19 + 0x14) = fVar5;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar7;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


