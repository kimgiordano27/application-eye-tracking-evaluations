/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetControllerState
ENTRY_POINT: 06af5cd4
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetControllerState(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long unaff_x23;
  
  lVar4 = *(long *)(unaff_x23 + 0x108);
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      FUN_033b9870();
      lVar4 = *(long *)(unaff_x23 + 0x108);
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = FUN_03398a84(DAT_083c85c8);
    FUN_06785b70(lVar6,uVar7,DAT_084289a0,0);
    plVar5 = (long *)(*(long *)(*(long *)(unaff_x23 + 0x108) + 0xb8) + 8);
    *plVar5 = lVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (unaff_x19 != 0) {
    plVar5 = (long *)(unaff_x19 + 0x20);
    *plVar5 = lVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
    FUN_07a0900c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


