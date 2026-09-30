/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 06aa72f8
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusLost(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 uVar6;
  
  lVar4 = FUN_0687ac10();
  uVar6 = DAT_083be4b8;
  if (lVar4 != 0) {
    lVar5 = FUN_0339898c(lVar4,DAT_083be4b8);
    if (lVar5 != 0) {
      *unaff_x19 = lVar5;
      uVar6 = DAT_083be4b8;
      lVar5 = FUN_0339898c(lVar4,DAT_083be4b8);
      if (lVar5 != 0) goto LAB_06aa7348;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(lVar4,uVar6);
  }
  *unaff_x19 = 0;
LAB_06aa7348:
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


