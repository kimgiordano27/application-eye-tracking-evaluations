/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 0565c6d8
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


void OVRManager__UpdateBoundary(undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  uVar2 = param_1._8_8_;
  uVar1 = param_1._0_8_;
  while( true ) {
    unaff_x23[1] = uVar2;
    *unaff_x23 = uVar1;
    unaff_x23[3] = uVar4;
    unaff_x23[2] = uVar3;
    unaff_x23[4] = in_stack_00000020;
    unaff_x23 = unaff_x23 + 5;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x21) {
      return;
    }
    FUN_0414fd60(&stack0x00000028);
    FUN_05657bf4(in_stack_00000030);
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_x21 = unaff_x21 + 1;
    uVar1 = in_stack_00000000;
    uVar2 = in_stack_00000008;
    uVar3 = in_stack_00000010;
    uVar4 = in_stack_00000018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


