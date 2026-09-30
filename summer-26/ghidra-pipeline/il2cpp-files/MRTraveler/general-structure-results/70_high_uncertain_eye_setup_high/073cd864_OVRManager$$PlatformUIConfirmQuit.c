/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 073cd864
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PlatformUIConfirmQuit(void)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float unaff_s12;
  
  lVar5 = 0x20;
  while (lVar2 = FUN_073d4dc4(), lVar2 != 0) {
                    /* try { // try from 073cd878 to 074cd87b has its CatchHandler @ 073cd8b0 */
    if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x23) {
code_r0x073cd954:
      if (unaff_s12 <= 0.5) {
        unaff_x20 = unaff_x21;
      }
      lVar5 = *unaff_x20;
      if ((lVar5 != 0) && (*unaff_x19 != 0)) {
        lVar2 = 8;
        *(undefined4 *)(*unaff_x19 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
        goto LAB_073cd974;
      }
      break;
    }
                    /* try { // try from 073cd87c to 074cd89b has its CatchHandler @ 073cd50c */
    if ((*unaff_x20 == 0) || (lVar2 = FUN_073d4dc4(), lVar2 == 0)) break;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x23) goto code_r0x073cd954;
                    /* try { // try from 073cd89c to 074cd8bf has its CatchHandler @ 073cd8d4 */
    if (*unaff_x19 == 0) break;
    lVar2 = FUN_073d4dc4();
                    /* catch() { ... } // from try @ 073cd848 with catch @ 073cd8a4 */
                    /* catch() { ... } // from try @ 073cd878 with catch @ 073cd8b0 */
    if ((*unaff_x21 == 0) || (lVar3 = FUN_073d4dc4(*unaff_x21), lVar3 == 0)) break;
                    /* try { // try from 073cd8c0 to 074cd8cb has its CatchHandler @ 073cd50c */
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_073cd9ec;
                    /* try { // try from 073cd8cc to 074cd8d3 has its CatchHandler @ 073cd8d4 */
    if (*unaff_x20 == 0) break;
    puVar1 = (undefined4 *)(lVar3 + lVar5);
                    /* catch() { ... } // from try @ 073cd858 with catch @ 073cd8d4
                       catch() { ... } // from try @ 073cd89c with catch @ 073cd8d4
                       catch() { ... } // from try @ 073cd8cc with catch @ 073cd8d4 */
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    lVar3 = FUN_073d4dc4(*unaff_x20);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_073cd9ec;
    uVar6 = FUN_085d2484(uVar6,0);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_073cd9ec;
    puVar1 = (undefined4 *)(lVar2 + lVar5);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    lVar5 = lVar5 + 0x10;
    unaff_x23 = unaff_x23 + 1;
    if (*unaff_x21 == 0) break;
  }
  goto LAB_073cd9c4;
LAB_073cd974:
  do {
    lVar3 = FUN_073d5784();
    lVar4 = FUN_073d5784(lVar5);
    if (lVar4 == 0) break;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar2 - 8U) {
LAB_073cd9ec:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (lVar3 == 0) break;
    if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar2 - 8U) goto LAB_073cd9ec;
    *(undefined4 *)(lVar3 + lVar2 * 4) = *(undefined4 *)(lVar4 + lVar2 * 4);
    if (lVar2 == 0xc) {
      return;
    }
    lVar2 = lVar2 + 1;
  } while (*unaff_x19 != 0);
LAB_073cd9c4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


