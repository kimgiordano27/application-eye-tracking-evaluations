/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 01da9f60
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x19;
  
  uVar1 = thunk_FUN_00ffc278();
  uVar2 = FUN_00fdc928();
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      pcVar3 = FUN_00f94404;
    }
    else {
      pcVar3 = FUN_00f94430;
    }
  }
  else if ((uVar2 & 1) == 0) {
    pcVar3 = FUN_00f944b4;
  }
  else {
    pcVar3 = FUN_00f944f0;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar3;
  *(code **)(unaff_x19 + 0x38) = FUN_00f9438c;
  return;
}


