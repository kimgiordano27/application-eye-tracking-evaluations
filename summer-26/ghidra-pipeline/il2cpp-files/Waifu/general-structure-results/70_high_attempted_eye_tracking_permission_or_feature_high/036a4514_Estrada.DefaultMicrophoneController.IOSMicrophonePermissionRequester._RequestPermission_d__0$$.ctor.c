/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.IOSMicrophonePermissionRequester.<RequestPermission>d__0$$.ctor
ENTRY_POINT: 036a4514
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


void Estrada_DefaultMicrophoneController_IOSMicrophonePermissionRequester_<RequestPermission>d__0___ctor
               (ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong in_x9;
  long in_x12;
  long unaff_x19;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 | in_x12 << (in_x9 & 0x3f);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined4 *)(unaff_x19 + 0x38) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0x3d) = 1;
  FUN_07a0900c();
  return;
}


