/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.IOSMicrophonePermissionRequester.<RequestPermission>d__0$$MoveNext
ENTRY_POINT: 036a4594
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_IOSMicrophonePermissionRequester_<RequestPermission>d__0__MoveNext
               (undefined4 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x48) = param_1;
  uVar1 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x30),DAT_084462e8,0);
  FUN_07a06514(*(undefined4 *)(unaff_x19 + 0x48),uVar1,0);
  return;
}


