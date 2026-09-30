/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetEyeOcclusionMeshEnabled
ENTRY_POINT: 06af6bd4
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_GetEyeOcclusionMeshEnabled(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar7;
  
  FUN_06ac9bec();
  puVar5 = (undefined8 *)(unaff_x19 + 0xe8);
  *puVar5 = unaff_x20;
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
  uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
  lVar4 = FUN_03398a84(DAT_083d04e0);
  puVar5 = (undefined8 *)(lVar4 + 0x10);
  *puVar5 = uVar7;
  if (DAT_08908cd0 == 0) {
    *(long *)(unaff_x19 + 0xe0) = lVar4;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)(unaff_x19 + 0xe0);
    *plVar6 = lVar4;
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
  lVar4 = FUN_03398a84(DAT_083d04e0);
  puVar5 = (undefined8 *)(lVar4 + 0x10);
  *puVar5 = uVar7;
  if (DAT_08908cd0 == 0) {
    *(long *)(unaff_x19 + 0xd8) = lVar4;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)(unaff_x19 + 0xd8);
    *plVar6 = lVar4;
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
  lVar4 = FUN_03398a84(DAT_083d04e0);
  puVar5 = (undefined8 *)(lVar4 + 0x10);
  *puVar5 = uVar7;
  if (DAT_08908cd0 == 0) {
    *(long *)(unaff_x19 + 0xd0) = lVar4;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)(unaff_x19 + 0xd0);
    *plVar6 = lVar4;
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


