/*
FUNCTION_NAME: OVRManager$$FindMainCamera
ENTRY_POINT: 060bc550
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FindMainCamera(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 060bbee4 with catch @ 060bc550
                       catch() { ... } // from try @ 060bc368 with catch @ 060bc550 */
  FUN_060bd59c();
  puVar1 = PTR_DAT_07a20898;
                    /* catch() { ... } // from try @ 060bbec8 with catch @ 060bc554
                       catch() { ... } // from try @ 060bc364 with catch @ 060bc554 */
  if (unaff_x20 != (long *)0x0) {
                    /* catch() { ... } // from try @ 060bbea8 with catch @ 060bc558 */
                    /* catch() { ... } // from try @ 060bc360 with catch @ 060bc55c */
    lVar5 = *unaff_x20;
                    /* catch() { ... } // from try @ 060bbe60 with catch @ 060bc560 */
                    /* catch() { ... } // from try @ 060bbf1c with catch @ 060bc564 */
                    /* catch() { ... } // from try @ 060bbf0c with catch @ 060bc568 */
                    /* catch() { ... } // from try @ 060bc35c with catch @ 060bc56c */
    lVar8 = *(long *)(unaff_x19 + 400);
                    /* catch() { ... } // from try @ 060bbf30 with catch @ 060bc570 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 060bc300 with catch @ 060bc574
                       catch() { ... } // from try @ 060bc3a4 with catch @ 060bc574 */
                    /* catch() { ... } // from try @ 060bbf00 with catch @ 060bc578
                       catch() { ... } // from try @ 060bc358 with catch @ 060bc578 */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07a23e28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_060bc5b8;
        }
                    /* try { // try from 060bc590 to 061bc5a7 has its CatchHandler @ 060bc644 */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
                    /* try { // try from 060bc5a8 to 061bc633 has its CatchHandler @ 060bbc44 */
LAB_060bc5b8:
    uVar4 = (*(code *)*puVar3)();
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_060bc614;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060bc614:
    uVar2 = (*(code *)*puVar3)();
    if (lVar8 != 0) {
                    /* try { // try from 060bc634 to 061bc643 has its CatchHandler @ 060bc644 */
                    /* catch() { ... } // from try @ 060bc590 with catch @ 060bc644
                       catch() { ... } // from try @ 060bc634 with catch @ 060bc644 */
      FUN_060bd934(lVar8,uVar4,uVar2,in_stack_00000008._4_4_,*(undefined8 *)(unaff_x19 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 060bc648 to 061bc64b has its CatchHandler @ 060bc654 */
  FUN_03642c18();
}


