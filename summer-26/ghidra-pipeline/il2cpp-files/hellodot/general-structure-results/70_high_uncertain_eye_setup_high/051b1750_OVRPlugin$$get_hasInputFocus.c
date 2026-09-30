/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 051b1750
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasInputFocus(void)

{
  undefined4 uVar1;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  if (in_w8 == 0) {
    if ((*(char *)(unaff_x20 + 0x38) == '\0') || (*(long *)(unaff_x20 + 0x40) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(undefined4 *)(*(long *)(unaff_x20 + 0x40) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06608990 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051b1490(&stack0x00000020,uVar1);
    FUN_05167964(&stack0x00000040,&stack0x00000020,0);
  }
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
  *unaff_x19 = in_stack_00000040;
  return;
}


