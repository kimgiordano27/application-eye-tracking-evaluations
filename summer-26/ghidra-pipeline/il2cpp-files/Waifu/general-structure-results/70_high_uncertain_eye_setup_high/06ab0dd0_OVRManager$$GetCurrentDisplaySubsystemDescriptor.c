/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 06ab0dd0
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


void OVRManager__GetCurrentDisplaySubsystemDescriptor(void)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  undefined1 unaff_w22;
  
  *(undefined1 *)(unaff_x21 + 0x163) = unaff_w22;
  plVar1 = (long *)(unaff_x20 + 0x168);
  lVar5 = FUN_0687ac10(*(undefined8 *)(unaff_x20 + 0x168));
  uVar7 = DAT_083be360;
  if (lVar5 != 0) {
    lVar6 = FUN_0339898c(lVar5,DAT_083be360);
    if (lVar6 != 0) {
      *plVar1 = lVar6;
      uVar7 = DAT_083be360;
      lVar6 = FUN_0339898c(lVar5,DAT_083be360);
      if (lVar6 != 0) goto LAB_06ab0e2c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(lVar5,uVar7);
  }
  *plVar1 = 0;
LAB_06ab0e2c:
  if (DAT_08908cd0 != 0) {
                    /* try { // try from 06ab0e3c to 06bb0e63 has its CatchHandler @ 06ab0ef4 */
    puVar2 = &DAT_0873ccb0 + ((ulong)plVar1 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
                    /* try { // try from 06ab0e70 to 06bb0e73 has its CatchHandler @ 06ab0ed4 */
  return;
}


