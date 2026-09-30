/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 073ed380
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceVisemesState
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  float fVar1;
  float fVar2;
  
  if ((!in_ZR && in_NG == in_OV) || (param_6 + param_4 < param_2)) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0x7f7fffff;
  }
  fVar1 = (param_2 - param_3) / (param_5 - param_3);
  fVar2 = fVar1;
  if (1.0 < fVar1) {
    fVar2 = 1.0;
  }
  fVar2 = 1.0 - fVar2;
  if (fVar1 < 0.0) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x28) = fVar2;
  return;
}


