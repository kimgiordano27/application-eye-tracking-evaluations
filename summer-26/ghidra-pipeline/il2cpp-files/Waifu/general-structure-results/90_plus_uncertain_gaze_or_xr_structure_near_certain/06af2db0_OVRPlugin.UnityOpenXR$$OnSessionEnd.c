/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 06af2db0
PROGRAM: Waifu-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 unaff_w21;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x4c4) = unaff_w21;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar4 = FUN_0339898c(uVar6,DAT_083cc4b8);
  puVar5 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar5 = uVar4;
  FUN_0339898c(uVar6,DAT_083cc4b8);
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
  return;
}


