/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 05668e1c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_position(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  int in_stack_00000028;
  
  uVar1 = thunk_FUN_02df8d3c(param_2,*param_1);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(&stack0x00000020 + (long)in_stack_00000028 * 8) = *unaff_x19;
    in_stack_00000028 = in_stack_00000028 + 1;
    __cxa_end_catch();
    return 0;
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = *unaff_x19;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&PTR_PTR_066567d8,0);
}


