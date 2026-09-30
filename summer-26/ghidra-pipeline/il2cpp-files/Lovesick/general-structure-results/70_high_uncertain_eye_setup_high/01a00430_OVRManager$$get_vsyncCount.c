/*
FUNCTION_NAME: OVRManager$$get_vsyncCount
ENTRY_POINT: 01a00430
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_vsyncCount(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_02698b6c(param_1,param_2,0,0);
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_019efae0(&stack0x00000060,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x10),3,0);
    lVar1 = *(long *)(unaff_x19 + 0x60);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


