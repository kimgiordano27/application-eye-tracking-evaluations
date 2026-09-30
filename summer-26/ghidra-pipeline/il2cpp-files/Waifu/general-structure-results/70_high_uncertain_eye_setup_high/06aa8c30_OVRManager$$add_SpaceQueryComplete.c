/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 06aa8c30
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


void OVRManager__add_SpaceQueryComplete(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int in_w8;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  if (in_w8 == 0) {
    FUN_033b9870();
    param_1 = *(long *)(unaff_x24 + 0x990);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_033b9870();
      param_1 = *(long *)(unaff_x24 + 0x990);
    }
    uVar8 = **(undefined8 **)(param_1 + 0xb8);
    uVar5 = FUN_03398a84(DAT_083be4b8);
    FUN_060e9ce0(uVar5,uVar8,DAT_08426830,0);
    puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x24 + 0x990) + 0xb8) + 8);
    *puVar6 = uVar5;
    if (*(int *)(unaff_x23 + 0xcd0) == 0) {
      *(undefined8 *)(unaff_x19 + 0xa8) = uVar5;
      goto LAB_06aa8d14;
    }
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
                    /* try { // try from 06aa8ccc to 06ba8ccf has its CatchHandler @ 06aa8e70 */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar5;
  }
  else {
    iVar2 = *(int *)(unaff_x23 + 0xcd0);
    *(long *)(unaff_x19 + 0xa8) = lVar7;
                    /* try { // try from 06aa8c54 to 06ba8c5b has its CatchHandler @ 06aa8e68 */
    if (iVar2 == 0) goto LAB_06aa8d14;
  }
                    /* try { // try from 06aa8ce8 to 06ba8ddb has its CatchHandler @ 06aa8e74 */
  puVar1 = (ulong *)(unaff_x22 + (unaff_x19 + 0xa8U >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1L << (unaff_x19 + 0xa8U >> 0xc & 0x3f);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_06aa8d14:
  FUN_07a0900c();
  return;
}


