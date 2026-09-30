/*
FUNCTION_NAME: OVRPlugin.RectiPair$$get_Item
ENTRY_POINT: 01f8f438
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f8f4f4) */

undefined8 OVRPlugin_RectiPair__get_Item(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar2;
  uint uVar3;
  long unaff_x23;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 01f8f424 with catch @ 01f8f438 */
                    /* catch() { ... } // from try @ 01f8f054 with catch @ 01f8f43c */
  thunk_FUN_01286abc();
                    /* catch() { ... } // from try @ 01f8f420 with catch @ 01f8f440 */
  lVar4 = *unaff_x21;
                    /* catch() { ... } // from try @ 01f8f02c with catch @ 01f8f444 */
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
                    /* catch() { ... } // from try @ 01f8f270 with catch @ 01f8f448 */
  uVar3 = (uint)unaff_x23;
                    /* catch() { ... } // from try @ 01f8f24c with catch @ 01f8f44c
                       catch() { ... } // from try @ 01f8f42c with catch @ 01f8f44c */
                    /* catch() { ... } // from try @ 01f8f240 with catch @ 01f8f450
                       catch() { ... } // from try @ 01f8f428 with catch @ 01f8f450 */
  if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
                    /* catch() { ... } // from try @ 01f8efec with catch @ 01f8f454 */
                    /* catch() { ... } // from try @ 01f8f180 with catch @ 01f8f458 */
  plVar2 = (long *)(lVar4 + unaff_x23 * 8 + 0x20);
                    /* catch() { ... } // from try @ 01f8f16c with catch @ 01f8f45c */
  if (*plVar2 == 0) {
                    /* catch() { ... } // from try @ 01f8f3ec with catch @ 01f8f460 */
                    /* catch() { ... } // from try @ 01f8f0c0 with catch @ 01f8f464 */
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
                    /* catch() { ... } // from try @ 01f8f3d8 with catch @ 01f8f468 */
                    /* catch() { ... } // from try @ 01f8f0cc with catch @ 01f8f46c */
                    /* catch() { ... } // from try @ 01f8f124 with catch @ 01f8f470 */
    lVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1aa0);
                    /* catch() { ... } // from try @ 01f8f3f8 with catch @ 01f8f474
                       catch() { ... } // from try @ 01f8f40c with catch @ 01f8f474 */
                    /* catch() { ... } // from try @ 01f8f3d4 with catch @ 01f8f478 */
                    /* catch() { ... } // from try @ 01f8f0ec with catch @ 01f8f47c */
    FUN_01fab77c(lVar1,0);
                    /* catch() { ... } // from try @ 01f8f0e0 with catch @ 01f8f480 */
    *(undefined8 *)(lVar1 + 0x18) = uVar5;
                    /* catch() { ... } // from try @ 01f8f3dc with catch @ 01f8f484
                       catch() { ... } // from try @ 01f8f3e4 with catch @ 01f8f484 */
                    /* catch() { ... } // from try @ 01f8f1bc with catch @ 01f8f488 */
                    /* catch() { ... } // from try @ 01f8f3d0 with catch @ 01f8f48c */
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
                    /* catch() { ... } // from try @ 01f8f3cc with catch @ 01f8f490 */
    *plVar2 = lVar1;
                    /* catch() { ... } // from try @ 01f8f0a4 with catch @ 01f8f494 */
                    /* catch() { ... } // from try @ 01f8f3e0 with catch @ 01f8f498
                       catch() { ... } // from try @ 01f8f3e8 with catch @ 01f8f498
                       catch() { ... } // from try @ 01f8f3f0 with catch @ 01f8f498
                       catch() { ... } // from try @ 01f8f400 with catch @ 01f8f498 */
    thunk_FUN_01286abc(plVar2,lVar1);
    lVar4 = *unaff_x21;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
  }
                    /* try { // try from 01f8f4b0 to 0208f4c7 has its CatchHandler @ 01f8f51c */
  if (uVar3 < *(uint *)(lVar4 + 0x18)) {
    uVar5 = *(undefined8 *)(lVar4 + unaff_x23 * 8 + 0x20);
    if (in_stack_00000008._4_1_ != '\0') {
                    /* try { // try from 01f8f4c8 to 0208f50b has its CatchHandler @ 01f8eb44 */
      thunk_FUN_0125a7c4(*(undefined8 *)(unaff_x19 + 0x18),0);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


