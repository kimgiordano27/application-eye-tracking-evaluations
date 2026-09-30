/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 051b6e20
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetActionStatePose(undefined8 param_1,float param_2)

{
  float *unaff_x19;
  float fVar1;
  float in_s6;
  float fVar2;
  float unaff_s11;
  float in_stack_00000020;
  undefined8 in_stack_00000030;
  float in_stack_00000040;
  float in_stack_00000050;
  float in_stack_00000060;
  float in_stack_00000090;
  float in_stack_000000a0;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  
  fVar2 = (float)param_1 - param_2;
  param_2 = (float)in_stack_00000030 - param_2;
  fVar1 = SQRT(in_s6) / (unaff_s11 + SQRT(in_s6));
  if ((in_stack_00000020 - in_stack_000000a0) * (in_stack_00000020 - in_stack_000000a0) +
      param_2 * param_2 +
      (in_stack_00000040 - in_stack_00000090) * (in_stack_00000040 - in_stack_00000090) <=
      (in_stack_00000050 - in_stack_000000a0) * (in_stack_00000050 - in_stack_000000a0) +
      fVar2 * fVar2 +
      (in_stack_00000060 - in_stack_00000090) * (in_stack_00000060 - in_stack_00000090)) {
    fVar1 = fVar1 + (1.0 - fVar1) * fStack00000000000000f8;
    param_1 = in_stack_00000030;
  }
  else {
    fVar1 = fVar1 * fStack00000000000000fc;
  }
  *unaff_x19 = fVar1;
  return param_1;
}


