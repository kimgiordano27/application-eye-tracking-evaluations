/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.TweakManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 06350370
PROGRAM: Waifu-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_TweakManagerFromInspector__get_TelemetryAnnotation
               (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebb18,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c0ae0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x8a3) = unaff_w21;
  uVar4 = FUN_03398a84(DAT_083c0ae0);
  FUN_0438d83c(uVar4,DAT_083ebb18);
  puVar5 = (undefined8 *)(unaff_x19 + 0x38);
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
  uVar4 = FUN_03398a84(DAT_083c0a18);
  FUN_042b42ac(uVar4,DAT_083eb448);
  puVar5 = (undefined8 *)(unaff_x19 + 0x20);
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
  uVar4 = FUN_03398a84(DAT_083c0968);
  FUN_0429ecc8(uVar4,DAT_083eb028);
  puVar5 = (undefined8 *)(unaff_x19 + 0x28);
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
  uVar4 = FUN_03398a84(DAT_083c0990);
  FUN_042a5138(uVar4,DAT_083eb128);
  puVar5 = (undefined8 *)(unaff_x19 + 0x30);
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
  return;
}


