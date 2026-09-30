/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 06aec004
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 in_w8;
  undefined8 *puVar5;
  undefined8 in_x9;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x30) = in_w8;
  *(undefined8 *)(unaff_x19 + 0x50) = in_x9;
  uVar4 = FUN_03398a84(DAT_083d5998);
  puVar5 = (undefined8 *)(unaff_x19 + 0x60);
  *puVar5 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_07a0900c();
  return;
}


