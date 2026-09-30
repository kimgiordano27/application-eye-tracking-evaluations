/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation$$get_KeyStr
ENTRY_POINT: 06af41e8
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation__get_KeyStr(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined1 unaff_w21;
  undefined8 uVar7;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f61a8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c5658,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d4de0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08422b48,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d4dd8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x4cd) = unaff_w21;
  if (*(int *)(DAT_083d4dd8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar6 = *(long *)(*(long *)(DAT_083d4dd8 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(DAT_083d4dd8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar7 = **(undefined8 **)(DAT_083d4dd8 + 0xb8);
    lVar6 = FUN_03398a84(DAT_083c85c8);
    FUN_06785b70(lVar6,uVar7,DAT_08422b48,0);
    plVar4 = (long *)(*(long *)(DAT_083d4dd8 + 0xb8) + 8);
    *plVar4 = lVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar4 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (unaff_x19 != 0) {
    plVar4 = (long *)(unaff_x19 + 0x18);
    *plVar4 = lVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar4 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar7 = FUN_03398a84(DAT_083c5658);
    FUN_04bf8f74(uVar7,DAT_083f61a8);
    puVar5 = (undefined8 *)(unaff_x19 + 0x28);
    *puVar5 = uVar7;
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
    uVar7 = FUN_03398a84(DAT_083bf200);
    FUN_05d159e0(uVar7,0,0,**(undefined8 **)(*(long *)(DAT_083e05b0 + 0x20) + 0xc0));
    puVar5 = (undefined8 *)(unaff_x19 + 0x30);
    *puVar5 = uVar7;
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
    uVar7 = FUN_03398a84(DAT_083bf200);
    FUN_05d159e0(uVar7,0,0,**(undefined8 **)(*(long *)(DAT_083e05b0 + 0x20) + 0xc0));
    puVar5 = (undefined8 *)(unaff_x19 + 0x38);
    *puVar5 = uVar7;
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
    uVar7 = FUN_03398a84(DAT_083d4de0);
    FUN_06af44f8();
    puVar5 = (undefined8 *)(unaff_x19 + 0x40);
    *puVar5 = uVar7;
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
    FUN_07a0f7ac();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


