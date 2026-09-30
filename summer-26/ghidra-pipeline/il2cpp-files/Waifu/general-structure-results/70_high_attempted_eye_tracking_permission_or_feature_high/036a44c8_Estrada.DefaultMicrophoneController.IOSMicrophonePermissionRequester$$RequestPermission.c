/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.IOSMicrophonePermissionRequester$$RequestPermission
ENTRY_POINT: 036a44c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_IOSMicrophonePermissionRequester__RequestPermission(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xaca) = unaff_w21;
  puVar4 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar4 = DAT_084475a0;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar4 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(unaff_x19 + 0x38) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 0x3d) = 1;
  FUN_07a0900c();
  return;
}


