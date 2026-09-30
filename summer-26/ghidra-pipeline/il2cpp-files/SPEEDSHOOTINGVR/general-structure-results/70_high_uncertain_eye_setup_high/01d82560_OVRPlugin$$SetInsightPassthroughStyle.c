/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 01d82560
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetInsightPassthroughStyle(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint unaff_w19;
  long unaff_x21;
  long lVar7;
  long unaff_x22;
  ulong uVar8;
  long lVar9;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 uStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bce0);
    *(undefined1 *)(unaff_x22 + 0x7e6) = 1;
  }
  puVar2 = PTR_DAT_0234bce0;
                    /* try { // try from 01d82578 to 01e825a3 has its CatchHandler @ 01d82660 */
  uStack000000000000001c = 0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  uStack0000000000000004 = 0;
  if (unaff_x21 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar4 = thunk_FUN_010400dc();
    FUN_01c66bb4(uVar4,0);
                    /* try { // try from 01d82704 to 01e8271f has its CatchHandler @ 01d823ec */
    uVar5 = thunk_FUN_010303a8(PTR_DAT_02359190);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar4,uVar5);
  }
  if (*(int *)(*(long *)PTR_DAT_0234bce0 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
                    /* try { // try from 01d825a8 to 01e825bb has its CatchHandler @ 01d82648 */
  FUN_01d7eeec();
                    /* try { // try from 01d825bc to 01e825c3 has its CatchHandler @ 01d82644 */
  FUN_01d7f198(unaff_w19 & 0xfffffff7,&stack0x00000010,&stack0x0000001c,&stack0x00000004);
                    /* try { // try from 01d825c8 to 01e825db has its CatchHandler @ 01d82664 */
  lVar3 = FUN_01d81324();
                    /* try { // try from 01d825dc to 01e82633 has its CatchHandler @ 01d823ec */
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if ((int)*(ulong *)(lVar3 + 0x18) < 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      uVar5 = in_stack_00000010;
      uVar4 = in_stack_00000008;
      if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      lVar7 = *(long *)(lVar3 + 0x20 + uVar8 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
                    /* try { // try from 01d82634 to 01e82637 has its CatchHandler @ 01d8266c */
      uVar6 = FUN_01d7f470(lVar7,unaff_w19 & 0xfffffff7,uVar5,0,uVar4);
                    /* try { // try from 01d82638 to 01e8263b has its CatchHandler @ 01d82654 */
      if ((uVar6 & 1) != 0) {
                    /* try { // try from 01d8263c to 01e8263f has its CatchHandler @ 01d8264c */
                    /* try { // try from 01d82640 to 01e82643 has its CatchHandler @ 01d82664 */
                    /* catch() { ... } // from try @ 01d825bc with catch @ 01d82644
                       try { // try from 01d82644 to 01e82687 has its CatchHandler @ 01d823ec */
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 01d825a8 with catch @ 01d82648 */
          thunk_FUN_01022c14();
        }
                    /* catch() { ... } // from try @ 01d8263c with catch @ 01d8264c */
        bVar1 = lVar9 != 0;
        lVar9 = lVar7;
        if (bVar1) {
          uVar4 = thunk_FUN_010303a8(PTR_DAT_023538c8);
                    /* try { // try from 01d826a8 to 01e826ab has its CatchHandler @ 01d82730 */
                    /* try { // try from 01d826ac to 01e82703 has its CatchHandler @ 01d8274c */
          thunk_FUN_010303a8(PTR_DAT_02353420);
          uVar5 = thunk_FUN_010400dc();
          FUN_01cc6268(uVar5,uVar4,0);
          uVar4 = thunk_FUN_010303a8(PTR_DAT_02359190);
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar5,uVar4);
        }
      }
                    /* catch() { ... } // from try @ 01d8250c with catch @ 01d82658 */
      uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 01d824f4 with catch @ 01d8265c */
      uVar8 = uVar8 + 1;
                    /* catch() { ... } // from try @ 01d82578 with catch @ 01d82660 */
                    /* catch() { ... } // from try @ 01d825c8 with catch @ 01d82664
                       catch() { ... } // from try @ 01d82640 with catch @ 01d82664 */
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
                    /* try { // try from 01d82688 to 01e8269f has its CatchHandler @ 01d82738 */
  return lVar9;
}


