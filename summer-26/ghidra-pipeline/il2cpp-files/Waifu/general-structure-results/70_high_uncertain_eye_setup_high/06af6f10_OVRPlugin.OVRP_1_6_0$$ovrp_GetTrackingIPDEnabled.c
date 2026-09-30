/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetTrackingIPDEnabled
ENTRY_POINT: 06af6f10
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetTrackingIPDEnabled(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined1 unaff_w21;
  undefined8 uVar6;
  
  FUN_0335b6c8(&DAT_083bf138,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08422b38,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d4dc0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x4f0) = unaff_w21;
  if (*(int *)(DAT_083d4dc0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar5 = *(long *)(*(long *)(DAT_083d4dc0 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(DAT_083d4dc0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = **(undefined8 **)(DAT_083d4dc0 + 0xb8);
    lVar5 = FUN_03398a84(DAT_083c85c8);
    FUN_06785b70(lVar5,uVar6,DAT_08422b38,0);
    plVar4 = (long *)(*(long *)(DAT_083d4dc0 + 0xb8) + 8);
    *plVar4 = lVar5;
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
    plVar4 = (long *)(unaff_x19 + 0x78);
    *plVar4 = lVar5;
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
    if (*(int *)(DAT_083bf138 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_05bb5e8c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


