/*
FUNCTION_NAME: OVRManager$$get_pluginVersion
ENTRY_POINT: 04f45c54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_pluginVersion(void)

{
  int in_w8;
  long unaff_x19;
  undefined4 unaff_s13;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c9a2f0((undefined1 *)((long)&stack0x00000010 + 4),0);
  *(ulong *)(unaff_x19 + 0x58) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  *(undefined8 *)(unaff_x19 + 0x50) = uStack0000000000000014;
  *(undefined8 *)(unaff_x19 + 100) = in_stack_00000028;
  *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(uStack0000000000000024,uStack0000000000000020);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_04f3f86c(uStack000000000000007c,unaff_s13,*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_04f3f808(uStack0000000000000078,uStack0000000000000010,uStack000000000000000c,
                   uStack0000000000000008,*(long *)(unaff_x19 + 0x20),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


