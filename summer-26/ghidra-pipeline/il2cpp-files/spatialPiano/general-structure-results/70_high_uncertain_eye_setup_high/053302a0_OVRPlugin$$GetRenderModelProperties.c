/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelProperties
ENTRY_POINT: 053302a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetRenderModelProperties(float param_1,float param_2,float param_3)

{
  int in_w8;
  double dVar1;
  float fVar2;
  float fVar3;
  
  param_1 = (param_3 + param_2) / param_1;
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar3 = -1.0;
  if (-1.0 <= param_1) {
    fVar3 = fVar2;
  }
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  dVar1 = acos((double)fVar3);
  return (float)dVar1 * DAT_011b0124 <= 40.0;
}


