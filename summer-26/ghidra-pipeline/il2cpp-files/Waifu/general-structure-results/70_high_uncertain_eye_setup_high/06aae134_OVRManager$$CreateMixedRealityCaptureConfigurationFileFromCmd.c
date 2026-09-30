/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 06aae134
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined8 uVar8;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
                    /* try { // try from 06aae148 to 06bae153 has its CatchHandler @ 06aadbd4 */
  FUN_0335b6c8(&DAT_083da010,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x145) = unaff_w21;
                    /* try { // try from 06aae154 to 06bae15b has its CatchHandler @ 06aae15c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06aae120 with catch @ 06aae15c
                       catch(type#2 @ 00000000) { ... } // from try @ 06aae154 with catch @ 06aae15c
                        */
  *(undefined4 *)(unaff_x19 + 0x140) = 0x3dcccccd;
  if (*(int *)(DAT_083da010 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar4 = DAT_08908cd0;
  lVar6 = *(long *)(*(long *)(DAT_083da010 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(DAT_083da010 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = **(undefined8 **)(DAT_083da010 + 0xb8);
    uVar5 = FUN_03398a84(DAT_083be228);
    FUN_06039da8(uVar5,uVar8,DAT_0842a070,0);
    puVar7 = (undefined8 *)(*(long *)(DAT_083da010 + 0xb8) + 8);
    *puVar7 = uVar5;
    if (DAT_08908cd0 == 0) {
      *(undefined8 *)(unaff_x19 + 0x170) = uVar5;
      goto LAB_06aae268;
    }
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined8 *)(unaff_x19 + 0x170) = uVar5;
  }
  else {
    *(long *)(unaff_x19 + 0x170) = lVar6;
    if (iVar4 == 0) goto LAB_06aae268;
  }
  puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x170U >> 0x12 & 0x7fff);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x170U >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_06aae268:
  FUN_0467f2b0();
  return;
}


