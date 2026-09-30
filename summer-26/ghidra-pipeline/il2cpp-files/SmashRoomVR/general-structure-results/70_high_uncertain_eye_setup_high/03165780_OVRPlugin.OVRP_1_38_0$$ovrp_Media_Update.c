/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 03165780
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(float param_1,float param_2,float param_3)

{
  bool bVar1;
  float *unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  fVar2 = unaff_s15 * unaff_s15 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_;
  fVar4 = unaff_x19[1] - unaff_x19[1];
  fStack0000000000000010 = fStack0000000000000010 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar5 = (fVar4 * fVar4 + fStack0000000000000010 * fStack0000000000000010 +
          fStack0000000000000014 * fStack0000000000000014) - fVar2;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (unaff_s14 < fVar5) {
    bVar1 = false;
  }
  else {
    fVar3 = param_3 * fVar4 - param_2 * fStack0000000000000014;
    fVar5 = param_1 * fStack0000000000000014 - param_3 * fStack0000000000000010;
    fVar4 = param_2 * fStack0000000000000010 - param_1 * fVar4;
    bVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 <= fVar2;
  }
  return bVar1;
}


