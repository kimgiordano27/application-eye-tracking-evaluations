/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 033c2cd8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryDimensions(long param_1)

{
  long lVar1;
  uint in_w8;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  
  while (unaff_w26 < in_w8) {
                    /* try { // try from 033c2ce0 to 034c2ceb has its CatchHandler @ 033c2d78 */
    lVar2 = *(long *)(param_1 + (long)(int)unaff_w26 * 8 + 0x20);
                    /* try { // try from 033c2cec to 034c2cf7 has its CatchHandler @ 033c26dc */
                    /* try { // try from 033c2cf8 to 034c2cff has its CatchHandler @ 033c2d44 */
    if ((lVar2 != 0) &&
       (lVar1 = thunk_FUN_01de26bc(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0)) {
                    /* catch() { ... } // from try @ 033c2a94 with catch @ 033c2d88 */
      uVar3 = thunk_FUN_01dfb5cc();
                    /* catch() { ... } // from try @ 033c2af0 with catch @ 033c2d8c */
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar3,0);
    }
                    /* try { // try from 033c2d00 to 034c2d07 has its CatchHandler @ 033c2d3c */
                    /* try { // try from 033c2d08 to 034c2d0f has its CatchHandler @ 033c2d60 */
    if (*(uint *)(unaff_x21 + 3) <= unaff_w20 + unaff_w26) break;
                    /* try { // try from 033c2d10 to 034c2d13 has its CatchHandler @ 033c2d38 */
                    /* try { // try from 033c2d14 to 034c2d17 has its CatchHandler @ 033c2d30 */
                    /* try { // try from 033c2d18 to 034c2d1f has its CatchHandler @ 033c2d5c */
    *unaff_x22 = lVar2;
                    /* try { // try from 033c2d20 to 034c2d23 has its CatchHandler @ 033c2d2c */
    thunk_FUN_01e10808(unaff_x22,lVar2);
                    /* catch() { ... } // from try @ 033c2ba0 with catch @ 033c2d24
                       try { // try from 033c2d24 to 034c2da3 has its CatchHandler @ 033c26dc */
                    /* catch() { ... } // from try @ 033c2bcc with catch @ 033c2d28 */
    unaff_w26 = unaff_w26 + 1;
                    /* catch() { ... } // from try @ 033c2bc4 with catch @ 033c2d2c
                       catch() { ... } // from try @ 033c2d20 with catch @ 033c2d2c */
                    /* catch() { ... } // from try @ 033c2d14 with catch @ 033c2d30 */
                    /* catch() { ... } // from try @ 033c2a48 with catch @ 033c2d34 */
                    /* catch() { ... } // from try @ 033c2d10 with catch @ 033c2d38 */
    if ((int)unaff_x21[3] <= (int)(unaff_w20 + unaff_w26)) {
                    /* catch() { ... } // from try @ 033c2d00 with catch @ 033c2d3c */
                    /* catch() { ... } // from try @ 033c2818 with catch @ 033c2d40 */
                    /* catch() { ... } // from try @ 033c2cf8 with catch @ 033c2d44 */
      *unaff_x19 = (long)unaff_x21;
                    /* catch() { ... } // from try @ 033c2a10 with catch @ 033c2d48 */
                    /* catch() { ... } // from try @ 033c27e0 with catch @ 033c2d4c */
                    /* catch() { ... } // from try @ 033c2bf0 with catch @ 033c2d5c
                       catch() { ... } // from try @ 033c2d18 with catch @ 033c2d5c */
      thunk_FUN_01e10808();
      return;
    }
    lVar2 = *unaff_x19;
    if (lVar2 == 0) {
LAB_033c2d78:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033c2ce0 with catch @ 033c2d78 */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) break;
    lVar2 = *(long *)(lVar2 + unaff_x27 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_033c2d78;
    uVar3 = *unaff_x25;
    lVar1 = thunk_FUN_01de26bc(lVar2,uVar3);
    if (lVar1 == 0) {
LAB_033c2d7c:
                    /* catch() { ... } // from try @ 033c2b54 with catch @ 033c2d7c */
                    /* catch() { ... } // from try @ 033c2938 with catch @ 033c2d80 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033c2cd0 with catch @ 033c2d84 */
      FUN_01d7df0c(lVar2,uVar3);
    }
    uVar3 = *unaff_x25;
    param_1 = thunk_FUN_01de26bc(lVar2,uVar3);
                    /* try { // try from 033c2cd0 to 034c2cdf has its CatchHandler @ 033c2d84 */
    if (param_1 == 0) goto LAB_033c2d7c;
    unaff_x22 = unaff_x22 + 1;
    in_w8 = *(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


