/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 05bae960
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__StaticUpdateMixedRealityCapture
                (float param_1,float param_2,float param_3,ulong param_4,ulong param_5,ulong param_6
                ,undefined1 param_7 [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_4 = param_4 ^ (param_4 ^ param_5) & param_6;
  fVar2 = (float)CONCAT13((byte)(param_4 >> 0x18) & ~param_7[3],
                          CONCAT12((byte)(param_4 >> 0x10) & ~param_7[2],
                                   CONCAT11((byte)(param_4 >> 8) & ~param_7[1],
                                            (byte)param_4 & ~param_7[0])));
  if ((float)(CONCAT17((byte)(param_4 >> 0x38) & ~param_7[7],
                       CONCAT16((byte)(param_4 >> 0x30) & ~param_7[6],
                                CONCAT15((byte)(param_4 >> 0x28) & ~param_7[5],
                                         CONCAT14((byte)(param_4 >> 0x20) & ~param_7[4],fVar2)))) >>
             0x20) < fVar2) {
    return INFINITY;
  }
  param_1 = (param_2 + param_3) * 0.5 - param_1;
  param_1 = param_1 + (float)(int)(param_1 / 360.0) * -360.0;
  fVar2 = 360.0;
  if (param_1 <= 360.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  fVar2 = fVar1 + -360.0;
  if (fVar1 <= 180.0) {
    fVar2 = fVar1;
  }
  fVar2 = fVar2 + (float)(int)(fVar2 / 360.0) * -360.0;
  fVar1 = 360.0;
  if (fVar2 <= 360.0) {
    fVar1 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  return fVar3;
}


