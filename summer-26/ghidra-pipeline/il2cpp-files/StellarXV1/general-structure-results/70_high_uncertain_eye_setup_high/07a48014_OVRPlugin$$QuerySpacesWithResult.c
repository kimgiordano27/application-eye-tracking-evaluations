/*
FUNCTION_NAME: OVRPlugin$$QuerySpacesWithResult
ENTRY_POINT: 07a48014
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__QuerySpacesWithResult
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  float *pfVar1;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  undefined8 in_stack_00000088;
  
  if (param_1 <= unaff_s14) {
    fVar4 = param_5 * ((param_2 + unaff_s11) - unaff_s15) +
            in_stack_00000088._4_4_ * ((param_6 + unaff_s8) - fStack0000000000000020) +
            param_4 * (unaff_s10 - in_stack_00000018._4_4_);
    fVar3 = (in_stack_00000088._4_4_ * fVar4) / unaff_s14;
    fVar2 = (param_4 * fVar4) / unaff_s14;
    fVar4 = (param_5 * fVar4) / unaff_s14;
    param_3 = in_stack_00000088._4_4_;
  }
  else {
    if (*(char *)(unaff_x21 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
      param_3 = in_stack_00000088._4_4_;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar1;
    fVar2 = pfVar1[1];
    fVar4 = pfVar1[2];
    param_4 = in_stack_00000028;
    param_5 = fStack0000000000000024;
  }
  if (0.0 <= param_5 * fVar4 + param_3 * fVar3 + param_4 * fVar2) {
    if (unaff_s14 < fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) {
      fVar2 = in_stack_00000028;
      fVar3 = param_3;
      fVar4 = fStack0000000000000024;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = pfVar1[1];
    fVar3 = *pfVar1;
    fVar4 = pfVar1[2];
  }
  if (DAT_098855ad == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098855ad = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar3 = (param_6 + unaff_s8) - (fStack0000000000000020 + fVar3);
  fVar4 = (param_2 + unaff_s11) - (unaff_s15 + fVar4);
  fVar2 = unaff_s10 - (in_stack_00000018._4_4_ + fVar2);
  return SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
}


