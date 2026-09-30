/*
FUNCTION_NAME: OVRManager$$set_isUserPresent
ENTRY_POINT: 069294c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__set_isUserPresent(float param_1,float param_2,float param_3,float param_4)

{
  long *unaff_x19;
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar3 = SQRT((unaff_s12 * unaff_s12 + param_3 + param_4) *
               (unaff_s9 * unaff_s9 + param_2 + param_1));
  fVar1 = 0.0;
  if (DAT_015c5594 <= fVar3) {
    fVar3 = (unaff_s12 * unaff_s9 + unaff_s14 * unaff_s10 + unaff_s15 * unaff_s11) / fVar3;
    fVar1 = 1.0;
    if (fVar3 <= 1.0) {
      fVar1 = fVar3;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar3) {
      fVar4 = fVar1;
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    dVar2 = acos((double)fVar4);
    fVar1 = (float)dVar2 * DAT_015c595c;
  }
  fVar1 = cosf(fVar1);
  fVar3 = 0.0;
  if (0.0 <= fVar1) {
    fVar3 = in_stack_00000008._4_4_ * 0.5 * fVar1;
  }
  return fVar3;
}


