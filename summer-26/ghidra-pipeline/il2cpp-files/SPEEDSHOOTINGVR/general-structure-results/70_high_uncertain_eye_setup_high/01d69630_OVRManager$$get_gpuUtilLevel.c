/*
FUNCTION_NAME: OVRManager$$get_gpuUtilLevel
ENTRY_POINT: 01d69630
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuUtilLevel(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    FUN_01d69660(3);
    return;
  }
  if (param_2 < 0) {
    uVar1 = 0x2d;
  }
  else {
    if (-1 < param_3) {
      FUN_01d69784(0x17);
      return;
    }
    uVar1 = 0x10;
  }
  FUN_01d696cc(uVar1,4);
  return;
}


