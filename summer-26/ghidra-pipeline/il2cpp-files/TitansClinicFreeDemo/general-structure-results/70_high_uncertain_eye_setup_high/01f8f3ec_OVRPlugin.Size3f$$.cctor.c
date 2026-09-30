/*
FUNCTION_NAME: OVRPlugin.Size3f$$.cctor
ENTRY_POINT: 01f8f3ec
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f8f4f4) */

undefined8 OVRPlugin_Size3f___cctor(void)

{
  long lVar1;
  int in_w8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar3;
  uint uVar4;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 01f8f3ec to 0208f3ef has its CatchHandler @ 01f8f460 */
  uVar4 = (uint)unaff_x23;
                    /* try { // try from 01f8f3f0 to 0208f3f3 has its CatchHandler @ 01f8f498 */
  if (in_w8 <= (int)uVar4) {
                    /* try { // try from 01f8f3f4 to 0208f3f7 has its CatchHandler @ 01f8eb44 */
                    /* try { // try from 01f8f3f8 to 0208f3ff has its CatchHandler @ 01f8f474 */
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x10);
                    /* try { // try from 01f8f400 to 0208f40b has its CatchHandler @ 01f8f498 */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
                    /* try { // try from 01f8f40c to 0208f417 has its CatchHandler @ 01f8f474 */
    lVar2 = FUN_01230af8(*(undefined8 *)PTR_DAT_027c1a68,*(undefined4 *)(lVar2 + 0x18));
                    /* try { // try from 01f8f418 to 0208f41f has its CatchHandler @ 01f8eb44 */
    lVar1 = *unaff_x21;
                    /* try { // try from 01f8f420 to 0208f423 has its CatchHandler @ 01f8f440 */
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
                    /* try { // try from 01f8f424 to 0208f427 has its CatchHandler @ 01f8f438 */
                    /* try { // try from 01f8f428 to 0208f42b has its CatchHandler @ 01f8f450 */
                    /* try { // try from 01f8f42c to 0208f42f has its CatchHandler @ 01f8f44c */
    FUN_01f8ac34(lVar1,lVar2,*(undefined4 *)(lVar1 + 0x18));
                    /* catch() { ... } // from try @ 01f8f258 with catch @ 01f8f430
                       try { // try from 01f8f430 to 0208f4af has its CatchHandler @ 01f8eb44 */
    *unaff_x21 = lVar2;
                    /* catch() { ... } // from try @ 01f8f074 with catch @ 01f8f434 */
    thunk_FUN_01286abc();
    unaff_x24 = *unaff_x21;
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
  }
  if (*(uint *)(unaff_x24 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  plVar3 = (long *)(unaff_x24 + unaff_x23 * 8 + 0x20);
  if (*plVar3 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar2 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1aa0);
    FUN_01fab77c(lVar2,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar5;
    if (*(uint *)(unaff_x24 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    *plVar3 = lVar2;
    thunk_FUN_01286abc(plVar3,lVar2);
    unaff_x24 = *unaff_x21;
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
  }
  if (uVar4 < *(uint *)(unaff_x24 + 0x18)) {
    uVar5 = *(undefined8 *)(unaff_x24 + unaff_x23 * 8 + 0x20);
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_0125a7c4(*(undefined8 *)(unaff_x19 + 0x18),0);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


