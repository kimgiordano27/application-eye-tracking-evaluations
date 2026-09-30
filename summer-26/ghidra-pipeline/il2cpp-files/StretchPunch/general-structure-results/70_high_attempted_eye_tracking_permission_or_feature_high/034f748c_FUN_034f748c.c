/*
FUNCTION_NAME: FUN_034f748c
ENTRY_POINT: 034f748c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void FUN_034f748c(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_044a81d0 == (code *)0x0) {
    local_18 = 0;
    local_40 = "OVRPlugin";
    uStack_38 = 9;
    local_30 = "ovrp_StartEyeTracking";
    uStack_28 = 0x15;
    local_20 = DAT_00baead0;
    local_14 = 0;
    DAT_044a81d0 = (code *)thunk_FUN_01de2a74(&local_40);
  }
  (*DAT_044a81d0)();
  return;
}


