/*
FUNCTION_NAME: OVRPlugin$$get_powerSaving
ENTRY_POINT: 033ba544
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


/* WARNING: Removing unreachable block (ram,0x033ba620) */

undefined8 OVRPlugin__get_powerSaving(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar3;
  uint uVar4;
  long unaff_x23;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
  lVar1 = *unaff_x21;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  FUN_033b5ecc(lVar1,param_1,*(undefined4 *)(lVar1 + 0x18));
  *unaff_x21 = param_1;
  thunk_FUN_01e10808();
  lVar1 = *unaff_x21;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar4 = (uint)unaff_x23;
  if (*(uint *)(lVar1 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  plVar3 = (long *)(lVar1 + unaff_x23 * 8 + 0x20);
  if (*plVar3 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar2 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8737);
    FUN_033d8040(lVar2,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar5;
    if (*(uint *)(lVar1 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    *plVar3 = lVar2;
    thunk_FUN_01e10808(plVar3,lVar2);
    lVar1 = *unaff_x21;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
  if (uVar4 < *(uint *)(lVar1 + 0x18)) {
    uVar5 = *(undefined8 *)(lVar1 + unaff_x23 * 8 + 0x20);
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_01dccd6c(*(undefined8 *)(unaff_x19 + 0x18),0);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


