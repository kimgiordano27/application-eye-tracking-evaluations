/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 033f748c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01dd295c(StringLiteral_6721);
  FUN_01a94a5c();
  thunk_FUN_01dd295c(StringLiteral_9419);
  FUN_033f7560();
  thunk_FUN_01dd295c(StringLiteral_1122);
  uVar1 = thunk_FUN_01de27b8();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_9420);
  FUN_0328bd40(uVar1,uVar2);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_9423);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar1,uVar2);
}


