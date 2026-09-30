/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 033cf628
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_01dc4f30();
  uVar1 = FUN_033aa3b4();
  if ((uVar1 & 1) == 0) {
    return;
  }
  thunk_FUN_01dd295c(StringLiteral_5743);
  uVar3 = thunk_FUN_01de27b8();
  FUN_033cf92c();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_8945);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,uVar2);
}


