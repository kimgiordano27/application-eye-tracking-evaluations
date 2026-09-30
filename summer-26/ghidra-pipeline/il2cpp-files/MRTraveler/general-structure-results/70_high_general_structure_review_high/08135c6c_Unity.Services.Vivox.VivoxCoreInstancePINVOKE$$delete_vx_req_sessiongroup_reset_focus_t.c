/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_reset_focus_t
ENTRY_POINT: 08135c6c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08135e90) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_reset_focus_t(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x29;
  undefined1 auVar6 [16];
  
code_r0x08135c6c:
  puVar1 = (undefined8 *)FUN_03cf1348();
  do {
                    /* try { // try from 08135c80 to 08235c83 has its CatchHandler @ 08135d64 */
                    /* try { // try from 08135c84 to 08235c87 has its CatchHandler @ 08135d58 */
                    /* try { // try from 08135c88 to 08235c8b has its CatchHandler @ 08135d54 */
    auVar6 = (*(code *)*puVar1)();
                    /* try { // try from 08135c8c to 08235c8f has its CatchHandler @ 08135d20 */
                    /* try { // try from 08135c90 to 08235c93 has its CatchHandler @ 08135d1c */
                    /* try { // try from 08135c94 to 08235c97 has its CatchHandler @ 08135d18 */
                    /* try { // try from 08135c98 to 08235c9b has its CatchHandler @ 08135d14 */
                    /* try { // try from 08135c9c to 08235c9f has its CatchHandler @ 08135d4c */
                    /* try { // try from 08135ca0 to 08235ca3 has its CatchHandler @ 08135d04 */
                    /* try { // try from 08135ca4 to 08235ca7 has its CatchHandler @ 08135d4c */
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x3c8))();
                    /* try { // try from 08135ca8 to 08235cab has its CatchHandler @ 08135cec */
                    /* try { // try from 08135cac to 08235cb7 has its CatchHandler @ 08135474 */
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *plVar2;
                    /* try { // try from 08135cb8 to 08235cbb has its CatchHandler @ 08135cd0 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 08135cbc to 08235cbf has its CatchHandler @ 08135cc8 */
    if (uVar4 != 0) {
                    /* try { // try from 08135cc0 to 08235cc3 has its CatchHandler @ 08135cc4 */
                    /* catch() { ... } // from try @ 08135cc0 with catch @ 08135cc4
                       try { // try from 08135cc4 to 08235d93 has its CatchHandler @ 08135474 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 08135cbc with catch @ 08135cc8 */
                    /* catch() { ... } // from try @ 08135bbc with catch @ 08135ccc */
                    /* catch() { ... } // from try @ 08135cb8 with catch @ 08135cd0 */
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_08135d00;
        }
                    /* catch() { ... } // from try @ 08135ba8 with catch @ 08135cd4 */
        uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 08135990 with catch @ 08135cd8 */
        piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 08135970 with catch @ 08135cdc */
      } while (uVar4 != 0);
    }
                    /* catch() { ... } // from try @ 081359d4 with catch @ 08135ce0 */
                    /* catch() { ... } // from try @ 081356e8 with catch @ 08135ce4 */
    puVar1 = (undefined8 *)FUN_03cf1348(plVar2,*unaff_x26,2);
LAB_08135d00:
    (*(code *)*puVar1)(plVar2,auVar6._0_8_,auVar6._8_8_,puVar1[1]);
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08135c24;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_08135c24:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_08135d50;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) goto code_r0x08135c6c;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != *unaff_x25) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto code_r0x08135c6c;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x29) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_08135d6c;
    }
  }
LAB_08135d50:
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_08135d6c:
  (*(code *)*puVar1)();
  return;
}


