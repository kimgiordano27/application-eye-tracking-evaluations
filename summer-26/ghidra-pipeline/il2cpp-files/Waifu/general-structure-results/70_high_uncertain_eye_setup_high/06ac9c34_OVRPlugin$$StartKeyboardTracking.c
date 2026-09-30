/*
FUNCTION_NAME: OVRPlugin$$StartKeyboardTracking
ENTRY_POINT: 06ac9c34
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartKeyboardTracking(void)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined1 unaff_w22;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x25a) = unaff_w22;
                    /* catch() { ... } // from try @ 06ac9b74 with catch @ 06ac9c40 */
                    /* catch() { ... } // from try @ 06ac9b70 with catch @ 06ac9c44 */
  *(int *)(unaff_x19 + 200) = unaff_w20;
                    /* catch() { ... } // from try @ 06ac9b44 with catch @ 06ac9c48 */
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
                    /* catch() { ... } // from try @ 06ac9710 with catch @ 06ac9c4c */
                    /* catch() { ... } // from try @ 06ac9b34 with catch @ 06ac9c50 */
                    /* catch() { ... } // from try @ 06ac9b30 with catch @ 06ac9c54 */
                    /* catch() { ... } // from try @ 06ac9b2c with catch @ 06ac9c58 */
                    /* catch() { ... } // from try @ 06ac9b28 with catch @ 06ac9c5c */
  uVar5 = FUN_03398188(DAT_083c7aa0,unaff_w20);
                    /* catch() { ... } // from try @ 06ac9720 with catch @ 06ac9c60 */
                    /* catch() { ... } // from try @ 06ac98f4 with catch @ 06ac9c64 */
  puVar6 = (undefined8 *)(unaff_x19 + 0x18);
  *puVar6 = uVar5;
                    /* catch() { ... } // from try @ 06ac9b24 with catch @ 06ac9c68 */
                    /* catch() { ... } // from try @ 06ac9b20 with catch @ 06ac9c6c */
                    /* catch() { ... } // from try @ 06ac9920 with catch @ 06ac9c70 */
                    /* catch() { ... } // from try @ 06ac9930 with catch @ 06ac9c74 */
                    /* catch() { ... } // from try @ 06ac9900 with catch @ 06ac9c78 */
  if (DAT_08908cd0 != 0) {
                    /* catch() { ... } // from try @ 06ac968c with catch @ 06ac9c7c */
                    /* catch() { ... } // from try @ 06ac9888 with catch @ 06ac9c80 */
                    /* catch() { ... } // from try @ 06ac9630 with catch @ 06ac9c84 */
                    /* catch() { ... } // from try @ 06ac982c with catch @ 06ac9c88 */
                    /* catch() { ... } // from try @ 06ac96d0 with catch @ 06ac9c8c */
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
                    /* try { // try from 06ac9ca4 to 06bc9ca7 has its CatchHandler @ 06ac9cbc */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03398188(DAT_083c7aa0,unaff_w20);
                    /* catch() { ... } // from try @ 06ac9ca4 with catch @ 06ac9cbc */
  puVar6 = (undefined8 *)(unaff_x19 + 0x20);
  *puVar6 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
                    /* try { // try from 06ac9cf8 to 06bc9d2b has its CatchHandler @ 06ac9dd4 */
  uVar5 = FUN_03398188(DAT_083c7aa0,unaff_w20);
  puVar6 = (undefined8 *)(unaff_x19 + 0x28);
  *puVar6 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03398188(DAT_083c7aa0,unaff_w20);
  puVar6 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar6 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  iVar2 = unaff_w20 + 0x3f;
  if (-1 < unaff_w20) {
    iVar2 = unaff_w20;
  }
  *(int *)(unaff_x19 + 0xcc) = (iVar2 >> 6) + 1;
  uVar5 = FUN_03398188(DAT_083c7e00);
  puVar6 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar6 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03398188(DAT_083c7e00,*(undefined4 *)(unaff_x19 + 0xcc));
  puVar6 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar6 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03398188(DAT_083c7e00,*(undefined4 *)(unaff_x19 + 0xcc));
  puVar6 = (undefined8 *)(unaff_x19 + 0x48);
  *puVar6 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


