/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 06ab5554
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate(long param_1)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if (param_1 != 0) {
    in_stack_00000068 = in_stack_00000008;
    in_stack_00000060 = in_stack_00000000;
    in_stack_00000078 = in_stack_00000018;
    in_stack_00000070 = in_stack_00000010;
    (**(code **)(param_1 + 0x18))
              (*(undefined8 *)(param_1 + 0x40),&stack0x00000060,*(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


