/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 033c1d34
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetInsightPassthroughInitializationState(undefined **param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  uint uVar5;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar6;
  long lVar7;
  byte unaff_w25;
  uint unaff_w26;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (*(int *)(*(long *)param_1[0x11f] + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)param_1[0x11f]);
    }
    iVar1 = FUN_033c2504(unaff_x22);
    uVar5 = unaff_w20;
    do {
      if (iVar1 == 0) {
                    /* try { // try from 033c1d84 to 034c1d9f has its CatchHandler @ 033c1a6c */
        if ((*(uint *)(unaff_x21 + 0x18) <= uVar5) || (*(uint *)(unaff_x21 + 0x18) <= unaff_w26))
        goto LAB_033c1e60;
        lVar6 = *unaff_x28;
        lVar7 = *unaff_x29;
                    /* try { // try from 033c1da0 to 034c1daf has its CatchHandler @ 033c1db8 */
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
                    /* catch() { ... } // from try @ 033c1d28 with catch @ 033c1db0 */
        iVar1 = FUN_033c2954(lVar6,lVar7);
                    /* catch() { ... } // from try @ 033c1d08 with catch @ 033c1db8
                       catch() { ... } // from try @ 033c1da0 with catch @ 033c1db8 */
                    /* try { // try from 033c1dc0 to 034c1dc3 has its CatchHandler @ 033c1e44 */
        unaff_w25 = unaff_w25 | iVar1 == 0;
      }
                    /* try { // try from 033c1dc4 to 034c1de7 has its CatchHandler @ 033c1a6c */
      unaff_w20 = unaff_w26;
                    /* catch() { ... } // from try @ 033c1d2c with catch @ 033c1dcc */
      if (iVar1 != 2) {
        unaff_w20 = uVar5;
      }
      unaff_w26 = unaff_w26 + 1;
      unaff_w25 = unaff_w25 & iVar1 != 2;
      if (in_stack_00000018._4_4_ == unaff_w26) {
        if (unaff_w25 != 0) {
                    /* try { // try from 033c1de8 to 034c1deb has its CatchHandler @ 033c1e04 */
          uVar3 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar3 = FUN_033d6e4c(uVar3,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar4 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar4,uVar3,0);
          uVar3 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar4,uVar3);
        }
        if (unaff_w20 < *(uint *)(unaff_x21 + 0x18)) {
          return *(undefined8 *)(unaff_x21 + (long)(int)unaff_w20 * 8 + 0x20);
        }
        goto LAB_033c1e60;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_033c1e60;
      unaff_x28 = (long *)(unaff_x21 + (long)(int)unaff_w20 * 8 + 0x20);
      plVar2 = (long *)*unaff_x28;
      if (plVar2 == (long *)0x0) goto LAB_033c1e64;
      uVar3 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) goto LAB_033c1e60;
      unaff_x29 = (long *)(unaff_x21 + (long)(int)unaff_w26 * 8 + 0x20);
      plVar2 = (long *)*unaff_x29;
      if (plVar2 == (long *)0x0) goto LAB_033c1e64;
      uVar4 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
      }
      iVar1 = FUN_033c2168(uVar3,uVar4,in_stack_00000010);
      uVar5 = unaff_w20;
    } while ((unaff_x19 == 0) || (iVar1 != 0));
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) {
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar2 = (long *)*unaff_x28;
    if (plVar2 == (long *)0x0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    unaff_x22 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) goto LAB_033c1e60;
    plVar2 = (long *)*unaff_x29;
    if (plVar2 == (long *)0x0) goto LAB_033c1e64;
    (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    param_1 = &StringLiteral_8236;
  } while( true );
}


