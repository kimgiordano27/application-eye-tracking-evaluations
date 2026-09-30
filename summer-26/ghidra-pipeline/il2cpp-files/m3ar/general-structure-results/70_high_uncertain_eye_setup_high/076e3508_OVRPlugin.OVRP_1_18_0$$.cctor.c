/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$.cctor
ENTRY_POINT: 076e3508
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_18_0___cctor(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float *unaff_x19;
  long unaff_x20;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float unaff_s10;
  float fVar11;
  float fVar12;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  if (*(char *)(unaff_x20 + 0xe16) == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    *(undefined1 *)(unaff_x20 + 0xe16) = 1;
  }
  puVar1 = PTR_DAT_08f65568;
  lVar3 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar12 = *(float *)(lVar3 + 0x18);
  fVar11 = *(float *)(lVar3 + 0x1c);
  fVar10 = *(float *)(lVar3 + 0x20);
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fVar5 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar5) {
    fVar6 = param_3 * fVar10 + unaff_s9 * fVar12 + unaff_s10 * fVar11;
    unaff_s9 = unaff_s9 - (fVar12 * fVar6) / fVar5;
    unaff_s10 = unaff_s10 - (fVar11 * fVar6) / fVar5;
    param_3 = param_3 - (fVar10 * fVar6) / fVar5;
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar10 = SQRT(param_3 * param_3 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar10 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar4;
    fVar12 = pfVar4[1];
    param_3 = pfVar4[2];
  }
  else {
    fVar11 = unaff_s9 / fVar10;
    fVar12 = unaff_s10 / fVar10;
    param_3 = param_3 / fVar10;
  }
  fVar5 = unaff_s15 - *unaff_x19;
  fVar6 = unaff_x19[1] - unaff_x19[1];
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - unaff_x19[2];
  fVar7 = fStack0000000000000014 * fStack0000000000000014 +
          fStack0000000000000010 * fStack0000000000000010;
  fVar8 = (fVar6 * fVar6 + fVar5 * fVar5 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_) -
          fVar7;
  fVar10 = 0.0;
  if (0.0 <= fVar8) {
    fVar10 = fVar8;
  }
  if (unaff_s14 < fVar10) {
    bVar2 = false;
  }
  else {
    fVar9 = param_3 * fVar6 - fVar12 * in_stack_00000008._4_4_;
    fVar8 = fVar11 * in_stack_00000008._4_4_ - param_3 * fVar5;
    fVar10 = fVar12 * fVar5 - fVar11 * fVar6;
    bVar2 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 <= fVar7;
  }
  return bVar2;
}


