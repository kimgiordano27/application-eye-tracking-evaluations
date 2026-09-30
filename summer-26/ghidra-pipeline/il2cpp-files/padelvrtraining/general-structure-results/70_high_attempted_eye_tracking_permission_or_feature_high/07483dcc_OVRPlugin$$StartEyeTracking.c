/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 07483dcc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined1 OVRPlugin__StartEyeTracking(long param_1)

{
  ulong uVar1;
  undefined8 in_stack_00000008;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
    uVar1 = FUN_074833f8();
    *(int *)(param_1 + 0x10) = (int)uVar1;
  }
  FUN_07483bf0(uVar1,(long)&stack0x00000008 + 4);
  return in_stack_00000008._4_1_;
}


