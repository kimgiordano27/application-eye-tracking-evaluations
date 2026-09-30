/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 056710e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__UpdateInsightPassthroughGeometryTransform(void)

{
  ulong uVar1;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_04e93a24();
  in_stack_00000050 = in_stack_00000028;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  while( true ) {
    uVar1 = FUN_05232904(&stack0x00000030,*unaff_x22);
    if ((uVar1 & 1) == 0) {
      FUN_05232a24(&stack0x00000030,*unaff_x21);
      return 1;
    }
    if (in_stack_00000048 == 0) break;
    FUN_056406c8(in_stack_00000048,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


