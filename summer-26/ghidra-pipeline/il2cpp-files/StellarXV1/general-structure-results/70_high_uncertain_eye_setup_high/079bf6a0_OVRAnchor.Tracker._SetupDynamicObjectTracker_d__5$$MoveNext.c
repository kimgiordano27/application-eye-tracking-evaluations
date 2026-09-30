/*
FUNCTION_NAME: OVRAnchor.Tracker.<SetupDynamicObjectTracker>d__5$$MoveNext
ENTRY_POINT: 079bf6a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5__MoveNext
               (long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar4;
  long unaff_x22;
  ulong uVar5;
  long unaff_x23;
  undefined4 uVar6;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  while (OVRPlugin_LayerDesc__ToString(&stack0x00000020 + 4,param_1,param_2,param_3), unaff_x20 != 0
        ) {
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) goto LAB_079bf7b0;
    puVar1 = (undefined8 *)(unaff_x20 + unaff_x22);
                    /* try { // try from 079bf6c8 to 07abf6cf has its CatchHandler @ 079bf74c */
    unaff_x22 = unaff_x22 + 0x1c;
    unaff_x21 = unaff_x21 + 1;
                    /* try { // try from 079bf6d0 to 07abf6d3 has its CatchHandler @ 079bf728 */
    *(undefined4 *)(puVar1 + 3) = uStack000000000000003c;
                    /* try { // try from 079bf6d4 to 07abf6d7 has its CatchHandler @ 079bf750 */
    puVar1[2] = CONCAT44(uStack0000000000000038,uStack0000000000000034);
                    /* try { // try from 079bf6d8 to 07abf6db has its CatchHandler @ 079bf740 */
    puVar1[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
    *puVar1 = in_stack_00000020._4_8_;
                    /* try { // try from 079bf6dc to 07abf6df has its CatchHandler @ 079bf748 */
    lVar3 = *(long *)(unaff_x23 + 0x18);
                    /* try { // try from 079bf6e0 to 07abf6e3 has its CatchHandler @ 079bf744 */
    if (lVar3 == 0) break;
    if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)unaff_x21) {
                    /* try { // try from 079bf6e8 to 07abf6f3 has its CatchHandler @ 079bf74c */
                    /* try { // try from 079bf6f4 to 07abf6ff has its CatchHandler @ 079bf750 */
      if (*(int *)(*(long *)PTR_DAT_092ee5b8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
                    /* try { // try from 079bf700 to 07abf70b has its CatchHandler @ 079bf740 */
      uVar6 = FUN_079f383c();
                    /* try { // try from 079bf70c to 07abf717 has its CatchHandler @ 079bf748 */
      lVar3 = *(long *)(unaff_x23 + 0x18);
      *(undefined4 *)(unaff_x23 + 0x28) = uVar6;
      if (lVar3 != 0) {
                    /* try { // try from 079bf718 to 07abf723 has its CatchHandler @ 079bf744 */
        uVar5 = 0;
        goto LAB_079bf71c;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x1a8) == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_079bf7b0;
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10);
    if (param_1 == 0) break;
    param_3 = 0;
    param_2 = (ulong)*(uint *)(lVar3 + unaff_x21 * 4 + 0x20);
  }
  goto LAB_079bf790;
  while( true ) {
                    /* catch() { ... } // from try @ 079bf4c4 with catch @ 079bf740
                       catch() { ... } // from try @ 079bf6d8 with catch @ 079bf740
                       catch() { ... } // from try @ 079bf700 with catch @ 079bf740 */
                    /* catch() { ... } // from try @ 079bf5f8 with catch @ 079bf744
                       catch() { ... } // from try @ 079bf6e0 with catch @ 079bf744
                       catch() { ... } // from try @ 079bf718 with catch @ 079bf744 */
    lVar4 = *(long *)(unaff_x19 + 0x1b0);
                    /* catch() { ... } // from try @ 079bf55c with catch @ 079bf748
                       catch() { ... } // from try @ 079bf6dc with catch @ 079bf748
                       catch() { ... } // from try @ 079bf70c with catch @ 079bf748 */
                    /* catch() { ... } // from try @ 079bf370 with catch @ 079bf74c
                       catch() { ... } // from try @ 079bf6c8 with catch @ 079bf74c
                       catch() { ... } // from try @ 079bf6e8 with catch @ 079bf74c */
    uVar6 = *(undefined4 *)(lVar3 + uVar5 * 4 + 0x20);
                    /* catch() { ... } // from try @ 079bf3d0 with catch @ 079bf750
                       catch() { ... } // from try @ 079bf6d4 with catch @ 079bf750
                       catch() { ... } // from try @ 079bf6f4 with catch @ 079bf750 */
    FUN_07a5ce6c(&stack0x00000020 + 4,lVar2,uVar6,0);
    if (lVar4 == 0) break;
                    /* try { // try from 079bf768 to 07abf77f has its CatchHandler @ 079bf89c */
                    /* try { // try from 079bf780 to 07abf88b has its CatchHandler @ 079bf238 */
    FUN_07a5ceac(lVar4,uVar6);
    lVar3 = *(long *)(unaff_x23 + 0x18);
    uVar5 = uVar5 + 1;
    if (lVar3 == 0) break;
LAB_079bf71c:
                    /* catch() { ... } // from try @ 079bf634 with catch @ 079bf724
                       try { // try from 079bf724 to 07abf767 has its CatchHandler @ 079bf238 */
    if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar5) {
      return;
    }
                    /* catch() { ... } // from try @ 079bf6d0 with catch @ 079bf728 */
                    /* catch() { ... } // from try @ 079bf350 with catch @ 079bf72c */
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_079bf7b0:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
                    /* catch() { ... } // from try @ 079bf470 with catch @ 079bf730 */
                    /* catch() { ... } // from try @ 079bf5cc with catch @ 079bf734 */
                    /* catch() { ... } // from try @ 079bf51c with catch @ 079bf738 */
                    /* catch() { ... } // from try @ 079bf688 with catch @ 079bf73c
                       catch() { ... } // from try @ 079bf6e4 with catch @ 079bf73c */
    if ((*(long *)(unaff_x19 + 0x1a8) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10), lVar2 == 0)) break;
  }
LAB_079bf790:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


