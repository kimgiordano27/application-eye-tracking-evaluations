/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 05ffbcd0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_031f20f4();
  *(undefined1 *)(unaff_x20 + 0xa82) = 1;
  uStack0000000000000004 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_0759b378 + 0xb8) + 4);
  _uStack0000000000000018 = 0;
  _uStack0000000000000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000030 = 0;
  FUN_05fb6a50(&stack0x00000010,0,0);
  if (unaff_x19 != 0) {
    FUN_05ffa9c0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
               uStack000000000000001c,in_stack_00000020 & 0xffffffff,in_stack_00000020._4_4_);
}


