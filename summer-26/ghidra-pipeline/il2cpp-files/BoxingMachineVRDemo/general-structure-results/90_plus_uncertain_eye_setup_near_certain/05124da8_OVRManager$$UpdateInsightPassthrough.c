/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 05124da8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__UpdateInsightPassthrough(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long in_stack_00000078;
  
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    uVar1 = FUN_051248b8();
    if (in_stack_00000078 == 0) goto LAB_05124e40;
    *(undefined8 *)(in_stack_00000078 + 0x90) = uVar1;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000078 + 0x90),uVar1);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    uVar1 = FUN_051248b8();
    if (in_stack_00000078 == 0) {
LAB_05124e40:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000078 + 0x98) = uVar1;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000078 + 0x98),uVar1);
  }
  return in_stack_00000078;
}


