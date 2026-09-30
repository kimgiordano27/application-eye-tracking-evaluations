/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 06af2b14
PROGRAM: Waifu-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionStateChange(void)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  lVar5 = *(long *)(unaff_x24 + 0xdc8);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    FUN_033b9870();
    lVar5 = *(long *)(unaff_x24 + 0xdc8);
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      FUN_033b9870();
      lVar5 = *(long *)(unaff_x24 + 0xdc8);
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    uVar6 = FUN_03398a84(DAT_083c0f18);
    FUN_0439b060(uVar6,uVar9,DAT_08422b40,0);
    puVar7 = (undefined8 *)(*(long *)(*(long *)(unaff_x24 + 0xdc8) + 0xb8) + 8);
    *puVar7 = uVar6;
    if (*(int *)(unaff_x23 + 0xcd0) == 0) {
      *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
      goto LAB_06af2c00;
    }
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
  }
  else {
    iVar2 = *(int *)(unaff_x23 + 0xcd0);
    *(long *)(unaff_x19 + 0x50) = lVar8;
    if (iVar2 == 0) goto LAB_06af2c00;
  }
  puVar1 = (ulong *)(unaff_x22 + (unaff_x19 + 0x50U >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x50U >> 0xc & 0x3f);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_06af2c00:
  uVar6 = FUN_03398a84(DAT_083c0168);
  FUN_05e16830(uVar6,0,0,**(undefined8 **)(*(long *)(DAT_083e4ff8 + 0x20) + 0xc0));
  puVar7 = (undefined8 *)(unaff_x19 + 0x58);
  *puVar7 = uVar6;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_07a0900c();
  return;
}


