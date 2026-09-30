/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 06aa8f18
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSaveComplete(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  undefined8 uVar7;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x11f) = 1;
  plVar6 = (long *)(unaff_x19 + 0x30);
  lVar4 = FUN_0687a9b0(*plVar6);
  uVar7 = DAT_083be600;
  if (lVar4 != 0) {
    lVar5 = FUN_0339898c(lVar4,DAT_083be600);
    if (lVar5 != 0) {
      *plVar6 = lVar5;
      uVar7 = DAT_083be600;
      lVar5 = FUN_0339898c(lVar4,DAT_083be600);
      if (lVar5 != 0) goto LAB_06aa8f7c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(lVar4,uVar7);
  }
  *plVar6 = 0;
LAB_06aa8f7c:
  if (DAT_08908cd0 != 0) {
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


