/*
FUNCTION_NAME: FUN_02a0ef0c
ENTRY_POINT: 02a0ef0c
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02a0ef0c(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  char *pcStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  if (pcRam0000000007234d38 == (code *)0x0) {
    pcStack_60 = "OVRPlugin";
    uStack_58 = 9;
    pcStack_50 = "ovrp_GetEyeGazesState";
    uStack_48 = 0x15;
    uStack_38 = 0x10;
    uStack_40 = DAT_0533f8a8;
    uStack_34 = 0;
    pcRam0000000007234d38 = (code *)thunk_FUN_015d07f0(&pcStack_60);
  }
  (*pcRam0000000007234d38)(param_1,param_2,param_3);
  return;
}


