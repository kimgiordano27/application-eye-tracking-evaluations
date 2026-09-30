/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 051b16f4
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  *(undefined1 *)(unaff_x21 + 0x2e8) = 1;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uVar2 = FUN_05ef2cb4();
  FUN_05155480(uVar2,1,0);
  uStack0000000000000048 = uStack0000000000000008;
  uStack0000000000000040 = in_stack_00000000;
  uStack0000000000000054 = uStack0000000000000010._4_4_;
  uStack0000000000000058 = uStack0000000000000010._8_4_;
  uStack000000000000004c = uStack000000000000000c;
  uStack0000000000000050 = uStack0000000000000010;
  if ((*(int *)(unaff_x20 + 0x60) == 1) && (*(char *)(unaff_x20 + 100) == '\0')) {
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
  *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack0000000000000058,uStack0000000000000054);
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
  *unaff_x19 = uStack0000000000000040;
  return;
}


