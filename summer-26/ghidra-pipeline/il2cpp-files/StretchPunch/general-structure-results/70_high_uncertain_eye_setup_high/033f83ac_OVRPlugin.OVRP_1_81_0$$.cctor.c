/*
FUNCTION_NAME: OVRPlugin.OVRP_1_81_0$$.cctor
ENTRY_POINT: 033f83ac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f84d0) */

int OVRPlugin_OVRP_1_81_0___cctor(void)

{
  int in_w8;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar1;
  long *unaff_x24;
  long lVar2;
  int unaff_w25;
  int unaff_w26;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if (in_w8 == 0) {
                    /* try { // try from 033f83b0 to 034f83b3 has its CatchHandler @ 033f83e4 */
      thunk_FUN_01dc4f30();
    }
                    /* try { // try from 033f83b4 to 034f83b7 has its CatchHandler @ 033f83ec */
    unaff_w23 = unaff_w23 + -1;
                    /* try { // try from 033f83b8 to 034f83bb has its CatchHandler @ 033f83d4 */
                    /* try { // try from 033f83bc to 034f83bf has its CatchHandler @ 033f83e8 */
                    /* catch() { ... } // from try @ 033f8344 with catch @ 033f83c0
                       try { // try from 033f83c0 to 034f8403 has its CatchHandler @ 033f826c */
                    /* catch() { ... } // from try @ 033f82d4 with catch @ 033f83c4 */
    FUN_03400250(unaff_x22,0,0);
                    /* catch() { ... } // from try @ 033f8394 with catch @ 033f83c8 */
    iVar1 = unaff_w25;
    if ((unaff_w26 + unaff_w23 < 1) ||
       (unaff_x22 = *(long *)(unaff_x21 + 0x30), iVar1 = unaff_w23, unaff_x22 == 0)) break;
    FUN_033f81c0();
    in_w8 = *(int *)(*unaff_x24 + 0xe0);
  }
                    /* catch() { ... } // from try @ 033f8358 with catch @ 033f83d0 */
  thunk_FUN_01da0934();
                    /* catch() { ... } // from try @ 033f83b8 with catch @ 033f83d4 */
  lVar2 = *(long *)(unaff_x21 + 0x28);
                    /* catch() { ... } // from try @ 033f8320 with catch @ 033f83d8 */
  *(int *)(unaff_x21 + 0x10) = iVar1;
                    /* catch() { ... } // from try @ 033f82f4 with catch @ 033f83dc */
  thunk_FUN_01da0934();
                    /* catch() { ... } // from try @ 033f82e4 with catch @ 033f83e0 */
                    /* catch() { ... } // from try @ 033f83b0 with catch @ 033f83e4 */
                    /* catch() { ... } // from try @ 033f837c with catch @ 033f83e8
                       catch() { ... } // from try @ 033f83bc with catch @ 033f83e8 */
                    /* catch() { ... } // from try @ 033f8308 with catch @ 033f83ec
                       catch() { ... } // from try @ 033f83b4 with catch @ 033f83ec */
  if ((0 < iVar1) && ((unaff_w20 == 0 && (lVar2 != 0)))) {
    lVar2 = *(long *)(unaff_x21 + 0x28);
    thunk_FUN_01da0934();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
                    /* try { // try from 033f8404 to 034f841b has its CatchHandler @ 033f8494 */
    FUN_033f48b4(lVar2);
    unaff_w20 = 0;
  }
  if (in_stack_00000008._4_1_ != '\0') {
                    /* try { // try from 033f841c to 034f8483 has its CatchHandler @ 033f826c */
    FUN_01dccd6c();
  }
  return unaff_w20;
}


