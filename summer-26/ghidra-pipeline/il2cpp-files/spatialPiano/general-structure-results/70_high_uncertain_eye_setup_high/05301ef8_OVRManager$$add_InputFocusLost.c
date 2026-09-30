/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 05301ef8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__add_InputFocusLost
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  float in_s16;
  float fVar1;
  float fVar2;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float in_stack_00000010;
  
  fVar2 = (param_3 - param_6) * in_stack_00000008 +
          in_s16 * fStack0000000000000000 + (param_2 - param_5) * fStack0000000000000004;
  fVar1 = 0.0;
  if ((0.0 <= fVar2) && (fVar1 = fVar2, in_stack_00000010 < fVar2 * fVar2)) {
    fVar1 = SQRT(in_stack_00000010);
  }
  param_1 = param_1 - (param_4 + fStack0000000000000000 * fVar1);
  param_2 = param_2 - (param_5 + fStack0000000000000004 * fVar1);
  param_3 = param_3 - (param_6 + in_stack_00000008 * fVar1);
  return param_3 * param_3 + param_1 * param_1 + param_2 * param_2;
}


