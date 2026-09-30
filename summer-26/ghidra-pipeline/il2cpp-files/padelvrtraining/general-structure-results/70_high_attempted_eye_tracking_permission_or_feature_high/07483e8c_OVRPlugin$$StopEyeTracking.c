/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 07483e8c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined4 OVRPlugin__StopEyeTracking(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 0;
  uVar1 = (ulong)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
    uVar1 = FUN_074833f8();
    *(int *)(param_1 + 0x10) = (int)uVar1;
  }
  FUN_074837f0(uVar1,param_2,&stack0x0000000c);
  return uStack000000000000000c;
}


