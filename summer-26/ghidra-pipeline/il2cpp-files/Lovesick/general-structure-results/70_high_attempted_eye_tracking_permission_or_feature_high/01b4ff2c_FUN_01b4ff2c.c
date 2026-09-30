/*
FUNCTION_NAME: FUN_01b4ff2c
ENTRY_POINT: 01b4ff2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01b4ff2c(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_0377df98 == (code *)0x0) {
    local_60 = "OVRPlugin";
    uStack_58 = 9;
    local_50 = "ovrp_GetEyeGazesState";
    uStack_48 = 0x15;
    local_38 = 0x10;
    local_40 = DAT_028aa478;
    local_34 = 0;
    DAT_0377df98 = (code *)thunk_FUN_00d625b4(&local_60);
  }
  (*DAT_0377df98)(param_1,param_2,param_3);
  return;
}


