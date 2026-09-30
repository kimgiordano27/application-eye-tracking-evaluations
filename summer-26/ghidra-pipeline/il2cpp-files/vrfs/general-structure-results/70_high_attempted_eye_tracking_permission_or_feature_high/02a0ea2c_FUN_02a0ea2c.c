/*
FUNCTION_NAME: FUN_02a0ea2c
ENTRY_POINT: 02a0ea2c
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void FUN_02a0ea2c(void)

{
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (pcRam0000000007234ce8 == (code *)0x0) {
    uStack_18 = 0;
    pcStack_40 = "OVRPlugin";
    uStack_38 = 9;
    pcStack_30 = "ovrp_StartEyeTracking";
    uStack_28 = 0x15;
    uStack_20 = DAT_0533f8a8;
    uStack_14 = 0;
    pcRam0000000007234ce8 = (code *)thunk_FUN_015d07f0(&pcStack_40);
  }
  (*pcRam0000000007234ce8)();
  return;
}


