/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 0746e700
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_useIPDInPositionTracking(float *param_1)

{
  float *unaff_x19;
  long *unaff_x20;
  float in_s4;
  float unaff_s8;
  float unaff_s9;
  float fVar1;
  float fVar2;
  float unaff_s14;
  float fVar3;
  float in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  
  fVar1 = *param_1;
  fVar3 = param_1[1];
  fVar2 = param_1[2];
  if (unaff_s8 * fVar2 + unaff_s9 * fVar1 + unaff_s14 * fVar3 <= 0.0) {
    fVar2 = 0.0;
    in_stack_00000018._4_4_ = fStack0000000000000024;
  }
  else {
    fVar3 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    fVar2 = 1.0;
    if (fVar3 < in_s4) {
      if (DAT_098362cc == '\0') {
        FUN_03d2d2b0(0x3f800000,in_stack_00000018._4_4_,uStack0000000000000020,PTR_DAT_091a1008);
        DAT_098362cc = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe0) == 0) && (thunk_FUN_03db619c(), DAT_098362cc == '\0')) {
        FUN_03d2d2b0(PTR_DAT_091a1008);
        DAT_098362cc = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      in_stack_00000018._4_4_ = fStack0000000000000024 + fVar1;
      fVar2 = SQRT(fVar3) / in_stack_00000010;
    }
  }
  *unaff_x19 = fVar2;
  return in_stack_00000018._4_4_;
}


