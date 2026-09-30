/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 051a9580
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate(void)

{
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  FUN_05ee9a10(0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  FUN_05effcac(&stack0x00000010,0);
  if (unaff_x21 != 0) {
    *(ulong *)(unaff_x21 + 0x34) = CONCAT44(in_stack_00000028,uStack0000000000000024);
    *(ulong *)(unaff_x21 + 0x2c) = CONCAT44(in_stack_00000020,uStack000000000000001c);
    *(ulong *)(unaff_x21 + 0x28) = CONCAT44(uStack000000000000001c,in_stack_00000018);
    *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000010;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


