/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 06ab554c
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  uStack0000000000000020 = in_stack_00000050;
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_3;
  if (param_1 != 0) {
    in_stack_00000080 = in_stack_00000050;
    in_stack_00000060 = param_2;
    in_stack_00000070 = param_3;
    (**(code **)(param_1 + 0x18))
              (*(undefined8 *)(param_1 + 0x40),&stack0x00000060,*(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


