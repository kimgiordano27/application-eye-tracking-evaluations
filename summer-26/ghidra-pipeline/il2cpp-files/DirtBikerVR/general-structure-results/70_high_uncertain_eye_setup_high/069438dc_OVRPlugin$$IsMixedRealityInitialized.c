/*
FUNCTION_NAME: OVRPlugin$$IsMixedRealityInitialized
ENTRY_POINT: 069438dc
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


void OVRPlugin__IsMixedRealityInitialized(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  fVar1 = fVar1 * param_3;
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  if (0.0 <= fVar1) {
    param_2 = fVar2;
  }
  fVar1 = *(float *)(param_4 + 0x110);
  if (*(float *)(param_4 + 0x110) <= param_2) {
    fVar1 = param_2;
  }
  *(float *)(param_4 + 0x134) = fVar1;
  return;
}


