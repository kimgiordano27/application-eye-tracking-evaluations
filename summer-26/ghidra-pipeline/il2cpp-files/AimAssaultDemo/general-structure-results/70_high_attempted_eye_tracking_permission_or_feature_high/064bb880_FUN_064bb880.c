/*
FUNCTION_NAME: FUN_064bb880
ENTRY_POINT: 064bb880
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_064bb880(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0825fae0 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetEyeTrackingEnabled";
    uStack_38 = 0x1a;
    local_28 = 8;
    local_30 = DAT_0158abc0;
    local_24 = 0;
    DAT_0825fae0 = (code *)thunk_FUN_03778b88(&local_50);
  }
  (*DAT_0825fae0)(param_1);
  return;
}


