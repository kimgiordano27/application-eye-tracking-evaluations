/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.IOSMicrophonePermissionRequester.<RequestPermission>d__0$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 036a4694
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


void Estrada_DefaultMicrophoneController_IOSMicrophonePermissionRequester_<RequestPermission>d__0__System_Collections_IEnumerator_Reset
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long in_x10;
  uint in_w11;
  ulong unaff_x21;
  
  puVar1 = (ulong *)(in_x10 + param_1 * 8 + (ulong)(in_w11 & 0xffff | 0x40000));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (unaff_x21 >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


