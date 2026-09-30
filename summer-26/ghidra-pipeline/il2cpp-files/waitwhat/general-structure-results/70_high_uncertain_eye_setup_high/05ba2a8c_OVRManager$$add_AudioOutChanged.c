/*
FUNCTION_NAME: OVRManager$$add_AudioOutChanged
ENTRY_POINT: 05ba2a8c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_AudioOutChanged
               (long *param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6)

{
  float *unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  param_4 = **(float **)(*param_1 + 0xb8) * param_4;
  fVar1 = param_2 * param_6;
  if (param_2 * param_6 <= param_4) {
    fVar1 = param_4;
  }
  if (fVar1 <= ABS(param_3 - unaff_s12)) {
    *unaff_x19 = ((fStack0000000000000018 * in_stack_00000008._4_4_ +
                  fStack0000000000000014 * unaff_s15 + fStack0000000000000010 * unaff_s8) -
                 (fStack000000000000006c * unaff_s9 +
                 fStack000000000000001c * unaff_s10 + fStack0000000000000068 * unaff_s11)) /
                 unaff_s12;
  }
  return fVar1 <= ABS(param_3 - unaff_s12);
}


