/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 073eb920
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardModelAnimationStates(float param_1,undefined8 param_2,int param_3)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  
  if (param_3 != 0) {
    fVar1 = (float)FUN_0738fc48();
    param_1 = (param_1 + param_1 + fVar1) / 3.0;
  }
  fVar2 = (param_1 - *(float *)(unaff_x19 + 0x14)) / *(float *)(unaff_x19 + 0x18);
  fVar1 = fVar2;
  if (1.0 < fVar2) {
    fVar1 = 1.0;
  }
  if (fVar2 < 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(unaff_x19 + 0x1c) = fVar1;
  return;
}


