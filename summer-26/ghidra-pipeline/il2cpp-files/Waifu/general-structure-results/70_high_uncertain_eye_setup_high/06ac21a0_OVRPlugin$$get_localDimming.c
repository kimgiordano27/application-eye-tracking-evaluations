/*
FUNCTION_NAME: OVRPlugin$$get_localDimming
ENTRY_POINT: 06ac21a0
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


undefined8 OVRPlugin__get_localDimming(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *unaff_x19;
  uint unaff_w20;
  undefined8 uVar5;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  
  *(undefined1 *)(unaff_x22 + 0x216) = unaff_w23;
  if (((-1 < (int)unaff_w20) && (lVar4 = *(long *)(unaff_x21 + 0x78), lVar4 != 0)) &&
     ((int)unaff_w20 < (int)*(uint *)(lVar4 + 0x18))) {
    if (unaff_w20 < *(uint *)(lVar4 + 0x18)) {
      uVar5 = *(undefined8 *)(lVar4 + (ulong)unaff_w20 * 8 + 0x20);
      *unaff_x19 = uVar5;
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
        uVar5 = *unaff_x19;
      }
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_07a0d2c4(uVar5,0,0);
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  *unaff_x19 = 0;
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
  return 0;
}


