/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$set_Counter
ENTRY_POINT: 0314aba4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
                    /* try { // try from 0314aba4 to 0324abaf has its CatchHandler @ 0314a8e0 */
  FUN_033b3224();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314aba0 with catch @ 0314abac
                        */
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
    return;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if (unaff_w22 < 1) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
    *plVar2 = lVar1;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    lVar1 = FUN_01d7d9bc(lVar1,unaff_w22);
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      FUN_033b4f38(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
    }
    *plVar2 = lVar1;
  }
  thunk_FUN_01e10808(plVar2,lVar1);
  return;
}


