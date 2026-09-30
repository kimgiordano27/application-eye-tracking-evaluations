/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_notification_t$$Dispose
ENTRY_POINT: 084d7548
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x084d7698) */
/* WARNING: Removing unreachable block (ram,0x084d7724) */

void Unity_Services_Vivox_vx_evt_session_notification_t__Dispose(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong in_stack_00000018;
  
  do {
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 084d7558 to 085d755b has its CatchHandler @ 084d7668 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_084d7594;
        }
                    /* try { // try from 084d756c to 085d756f has its CatchHandler @ 084d765c */
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 084d7580 to 085d7587 has its CatchHandler @ 084d7658 */
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_084d7594:
                    /* try { // try from 084d759c to 085d75a3 has its CatchHandler @ 084d7650 */
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_084d768c;
      lVar2 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_084d7664;
                    /* try { // try from 084d7644 to 085d7647 has its CatchHandler @ 084d766c */
                    /* try { // try from 084d7648 to 085d764b has its CatchHandler @ 084d7660 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 084d75b0 to 085d75cf has its CatchHandler @ 084d7654 */
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_084d75f0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_084d75f0:
                    /* try { // try from 084d75f8 to 085d75ff has its CatchHandler @ 084d7664 */
    (*(code *)*puVar1)();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
                    /* try { // try from 084d7608 to 085d760f has its CatchHandler @ 084d766c */
                    /* try { // try from 084d7610 to 085d7643 has its CatchHandler @ 084d74cc */
    FUN_06b6ddc8();
  } while( true );
  while( true ) {
                    /* catch() { ... } // from try @ 084d7580 with catch @ 084d7658 */
    uVar3 = uVar3 - 1;
                    /* catch() { ... } // from try @ 084d756c with catch @ 084d765c */
    piVar4 = piVar4 + 4;
                    /* catch() { ... } // from try @ 084d7648 with catch @ 084d7660 */
    if (uVar3 == 0) break;
                    /* try { // try from 084d764c to 085d764f has its CatchHandler @ 084d7668 */
                    /* catch() { ... } // from try @ 084d759c with catch @ 084d7650
                       try { // try from 084d7650 to 085d768f has its CatchHandler @ 084d74cc */
                    /* catch() { ... } // from try @ 084d75b0 with catch @ 084d7654 */
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_084d7680;
    }
  }
LAB_084d7664:
                    /* catch() { ... } // from try @ 084d75f8 with catch @ 084d7664 */
                    /* catch() { ... } // from try @ 084d7558 with catch @ 084d7668
                       catch() { ... } // from try @ 084d764c with catch @ 084d7668 */
                    /* catch() { ... } // from try @ 084d7608 with catch @ 084d766c
                       catch() { ... } // from try @ 084d7644 with catch @ 084d766c */
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_084d7680:
  (*(code *)*puVar1)();
LAB_084d768c:
                    /* try { // try from 084d7690 to 085d76a7 has its CatchHandler @ 084d790c */
  *(long *)(unaff_x20 + 0x28) = unaff_x21;
  thunk_FUN_03d1023c();
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(unaff_x20 + 0x18) & 0xff) != 0) {
    puVar1 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x18) = *puVar1;
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(unaff_x20 + 0x20) & 0xff) != 0) {
    puVar1 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *puVar1;
  return;
}


