/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryResults
ENTRY_POINT: 06aa8abc
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


void OVRManager__remove_SpaceQueryResults(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 in_w8;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  *(undefined1 *)(param_2 + 0x18) = in_w8;
  *(undefined4 *)(param_2 + 0x1c) = 2;
  *(undefined8 *)(param_2 + 0x10) = param_1;
                    /* try { // try from 06aa8acc to 06ba8aef has its CatchHandler @ 06aa8bd4 */
  lVar5 = FUN_0339898c(param_2,*(undefined8 *)(*unaff_x20 + 0x40));
  if (lVar5 == 0) {
LAB_06aa8d38:
    uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar7,0);
  }
  if (*(uint *)(unaff_x20 + 3) < 2) {
LAB_06aa8d44:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  plVar8 = unaff_x20 + 5;
  *plVar8 = param_2;
                    /* try { // try from 06aa8af4 to 06ba8b17 has its CatchHandler @ 06aa8bd0 */
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                    /* try { // try from 06aa8b18 to 06ba8b23 has its CatchHandler @ 06aa8bc4 */
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
                    /* try { // try from 06aa8b28 to 06ba8b2b has its CatchHandler @ 06aa8bc0 */
    } while (cVar3 != '\0');
  }
  lVar5 = FUN_03398a84(*(undefined8 *)(unaff_x24 + 0x998));
  uVar7 = DAT_012e3078;
                    /* try { // try from 06aa8b38 to 06ba8b43 has its CatchHandler @ 06aa8bbc */
  *(undefined4 *)(lVar5 + 0x1c) = 1;
  *(undefined1 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                    /* try { // try from 06aa8b4c to 06ba8b4f has its CatchHandler @ 06aa8bb4 */
                    /* try { // try from 06aa8b54 to 06ba8b67 has its CatchHandler @ 06aa8bb0 */
  lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
  if (lVar6 == 0) goto LAB_06aa8d38;
  if (*(uint *)(unaff_x20 + 3) < 3) goto LAB_06aa8d44;
  plVar8 = unaff_x20 + 6;
                    /* try { // try from 06aa8b6c to 06ba8bab has its CatchHandler @ 06aa8bac */
  *plVar8 = lVar5;
  if (*(int *)(unaff_x23 + 0xcd0) == 0) {
                    /* catch() { ... } // from try @ 06aa8874 with catch @ 06aa8be8 */
    *(long **)(unaff_x19 + 0x38) = unaff_x20;
  }
  else {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* catch() { ... } // from try @ 06aa8b6c with catch @ 06aa8bac */
                    /* catch() { ... } // from try @ 06aa8b54 with catch @ 06aa8bb0 */
    puVar9 = (undefined8 *)(unaff_x19 + 0x38);
    *puVar9 = unaff_x20;
                    /* catch() { ... } // from try @ 06aa8b4c with catch @ 06aa8bb4 */
                    /* catch() { ... } // from try @ 06aa8a60 with catch @ 06aa8bb8 */
                    /* catch() { ... } // from try @ 06aa8b38 with catch @ 06aa8bbc */
                    /* catch() { ... } // from try @ 06aa8b28 with catch @ 06aa8bc0 */
                    /* catch() { ... } // from try @ 06aa8b18 with catch @ 06aa8bc4 */
                    /* catch() { ... } // from try @ 06aa8a24 with catch @ 06aa8bc8 */
                    /* catch() { ... } // from try @ 06aa8a0c with catch @ 06aa8bcc */
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                    /* catch() { ... } // from try @ 06aa8af4 with catch @ 06aa8bd0 */
    do {
                    /* catch() { ... } // from try @ 06aa89c8 with catch @ 06aa8bd4
                       catch() { ... } // from try @ 06aa8acc with catch @ 06aa8bd4 */
                    /* catch() { ... } // from try @ 06aa89ac with catch @ 06aa8bd8 */
                    /* catch() { ... } // from try @ 06aa8990 with catch @ 06aa8bdc */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
                    /* catch() { ... } // from try @ 06aa8928 with catch @ 06aa8be0 */
    } while (cVar3 != '\0');
  }
                    /* catch() { ... } // from try @ 06aa8980 with catch @ 06aa8bec */
                    /* catch() { ... } // from try @ 06aa897c with catch @ 06aa8bf0 */
  *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                    /* catch() { ... } // from try @ 06aa8978 with catch @ 06aa8bf4 */
                    /* catch() { ... } // from try @ 06aa8974 with catch @ 06aa8bf8 */
                    /* catch() { ... } // from try @ 06aa8784 with catch @ 06aa8bfc */
                    /* catch() { ... } // from try @ 06aa8714 with catch @ 06aa8c00 */
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_07a1747c(0);
  *(undefined8 *)(unaff_x19 + 0xa0) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  *(undefined8 *)(unaff_x19 + 0x94) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000000;
  if (*(int *)(DAT_083d7990 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar5 = *(long *)(*(long *)(DAT_083d7990 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(DAT_083d7990 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar10 = **(undefined8 **)(DAT_083d7990 + 0xb8);
    uVar7 = FUN_03398a84(DAT_083be4b8);
    FUN_060e9ce0(uVar7,uVar10,DAT_08426830,0);
    puVar9 = (undefined8 *)(*(long *)(DAT_083d7990 + 0xb8) + 8);
    *puVar9 = uVar7;
    if (*(int *)(unaff_x23 + 0xcd0) == 0) {
      *(undefined8 *)(unaff_x19 + 0xa8) = uVar7;
      goto LAB_06aa8d14;
    }
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar7;
  }
  else {
    iVar2 = *(int *)(unaff_x23 + 0xcd0);
    *(long *)(unaff_x19 + 0xa8) = lVar5;
    if (iVar2 == 0) goto LAB_06aa8d14;
  }
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


