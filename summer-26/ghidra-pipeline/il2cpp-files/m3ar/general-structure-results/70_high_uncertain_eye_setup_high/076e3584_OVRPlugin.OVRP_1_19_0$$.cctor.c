/*
FUNCTION_NAME: OVRPlugin.OVRP_1_19_0$$.cctor
ENTRY_POINT: 076e3584
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


bool OVRPlugin_OVRP_1_19_0___cctor(float *param_1,float param_2)

{
  bool bVar1;
  float *pfVar2;
  float *unaff_x19;
  long *unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  if (*param_1 <= param_2) {
    fVar4 = unaff_s11 * unaff_s8 + unaff_s9 * unaff_s13 + unaff_s10 * unaff_s12;
    unaff_s9 = unaff_s9 - (unaff_s13 * fVar4) / param_2;
    unaff_s10 = unaff_s10 - (unaff_s12 * fVar4) / param_2;
    unaff_s11 = unaff_s11 - (unaff_s8 * fVar4) / param_2;
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar4 = SQRT(unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10);
  if (fVar4 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  else {
    fVar3 = unaff_s9 / fVar4;
    fVar5 = unaff_s10 / fVar4;
    fVar4 = unaff_s11 / fVar4;
  }
  fVar7 = unaff_s15 - *unaff_x19;
  fVar8 = unaff_x19[1] - unaff_x19[1];
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - unaff_x19[2];
  fVar9 = fStack0000000000000014 * fStack0000000000000014 +
          fStack0000000000000010 * fStack0000000000000010;
  fVar10 = (fVar8 * fVar8 + fVar7 * fVar7 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_) -
           fVar9;
  fVar6 = 0.0;
  if (0.0 <= fVar10) {
    fVar6 = fVar10;
  }
  if (unaff_s14 < fVar6) {
    bVar1 = false;
  }
  else {
    fVar10 = fVar4 * fVar8 - fVar5 * in_stack_00000008._4_4_;
    fVar6 = fVar3 * in_stack_00000008._4_4_ - fVar4 * fVar7;
    fVar4 = fVar5 * fVar7 - fVar3 * fVar8;
    bVar1 = fVar4 * fVar4 + fVar10 * fVar10 + fVar6 * fVar6 <= fVar9;
  }
  return bVar1;
}


