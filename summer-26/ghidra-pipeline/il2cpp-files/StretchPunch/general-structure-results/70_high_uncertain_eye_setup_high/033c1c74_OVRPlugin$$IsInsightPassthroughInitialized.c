/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughInitialized
ENTRY_POINT: 033c1c74
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__IsInsightPassthroughInitialized(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  byte unaff_w25;
  uint unaff_w26;
  long *unaff_x28;
  long *plVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar3 = (**(code **)(param_1 + 0x228))(param_2,*(undefined8 *)(param_1 + 0x230));
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) {
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar8 = (long *)(unaff_x21 + (long)(int)unaff_w26 * 8 + 0x20);
    plVar4 = (long *)*plVar8;
    if (plVar4 == (long *)0x0) goto LAB_033c1e64;
    uVar5 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
                    /* try { // try from 033c1cb4 to 034c1cb7 has its CatchHandler @ 033c1cec */
                    /* try { // try from 033c1cb8 to 034c1cbb has its CatchHandler @ 033c1cd4 */
                    /* try { // try from 033c1cbc to 034c1cbf has its CatchHandler @ 033c1ccc */
                    /* try { // try from 033c1cc0 to 034c1cc3 has its CatchHandler @ 033c1ce4 */
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 033c1c3c with catch @ 033c1cc4
                       try { // try from 033c1cc4 to 034c1d07 has its CatchHandler @ 033c1a6c */
                    /* catch() { ... } // from try @ 033c1c28 with catch @ 033c1cc8 */
      thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
    }
                    /* catch() { ... } // from try @ 033c1cbc with catch @ 033c1ccc */
                    /* catch() { ... } // from try @ 033c1bb4 with catch @ 033c1cd0 */
                    /* catch() { ... } // from try @ 033c1cb8 with catch @ 033c1cd4 */
                    /* catch() { ... } // from try @ 033c1b8c with catch @ 033c1cd8 */
    iVar2 = FUN_033c2168(uVar3,uVar5,in_stack_00000010);
                    /* catch() { ... } // from try @ 033c1b74 with catch @ 033c1cdc */
                    /* catch() { ... } // from try @ 033c1bf8 with catch @ 033c1ce0 */
    if ((unaff_x19 != 0) && (iVar2 == 0)) {
                    /* catch() { ... } // from try @ 033c1c48 with catch @ 033c1ce4
                       catch() { ... } // from try @ 033c1cc0 with catch @ 033c1ce4 */
                    /* catch() { ... } // from try @ 033c1b98 with catch @ 033c1cec
                       catch() { ... } // from try @ 033c1cb4 with catch @ 033c1cec */
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_033c1e60;
      plVar4 = (long *)*unaff_x28;
      if (plVar4 == (long *)0x0) goto LAB_033c1e64;
      uVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
                    /* try { // try from 033c1d08 to 034c1d1f has its CatchHandler @ 033c1db8 */
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) goto LAB_033c1e60;
      plVar4 = (long *)*plVar8;
      if (plVar4 == (long *)0x0) goto LAB_033c1e64;
                    /* try { // try from 033c1d28 to 034c1d2b has its CatchHandler @ 033c1db0 */
                    /* try { // try from 033c1d2c to 034c1d83 has its CatchHandler @ 033c1dcc */
      (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
      }
      iVar2 = FUN_033c2504(uVar3);
    }
    if (iVar2 == 0) {
      if ((*(uint *)(unaff_x21 + 0x18) <= unaff_w20) || (*(uint *)(unaff_x21 + 0x18) <= unaff_w26))
      goto LAB_033c1e60;
      lVar6 = *unaff_x28;
      lVar7 = *plVar8;
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar2 = FUN_033c2954(lVar6,lVar7);
      unaff_w25 = unaff_w25 | iVar2 == 0;
    }
    uVar1 = unaff_w26;
    if (iVar2 != 2) {
      uVar1 = unaff_w20;
    }
    unaff_w26 = unaff_w26 + 1;
    unaff_w25 = unaff_w25 & iVar2 != 2;
    if (in_stack_00000018._4_4_ == unaff_w26) {
      if (unaff_w25 != 0) {
        uVar3 = thunk_FUN_01dd295c(StringLiteral_6016);
        uVar3 = FUN_033d6e4c(uVar3,0);
        thunk_FUN_01dd295c(StringLiteral_5868);
        uVar5 = thunk_FUN_01de27b8();
        FUN_033063d0(uVar5,uVar3,0);
        uVar3 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar5,uVar3);
      }
      if (uVar1 < *(uint *)(unaff_x21 + 0x18)) {
        return *(undefined8 *)(unaff_x21 + (long)(int)uVar1 * 8 + 0x20);
      }
      goto LAB_033c1e60;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar1) goto LAB_033c1e60;
    unaff_x28 = (long *)(unaff_x21 + (long)(int)uVar1 * 8 + 0x20);
    param_2 = (long *)*unaff_x28;
    if (param_2 == (long *)0x0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    param_1 = *param_2;
    unaff_w20 = uVar1;
  } while( true );
}


