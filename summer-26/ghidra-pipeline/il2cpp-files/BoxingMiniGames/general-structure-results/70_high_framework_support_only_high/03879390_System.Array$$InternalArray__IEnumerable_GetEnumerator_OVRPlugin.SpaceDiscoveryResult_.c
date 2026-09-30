/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03879390
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  int in_stack_00000098;
  
  uVar1 = thunk_FUN_036a5e58(param_2,*param_1);
  if ((uVar1 & 1) != 0) {
    uVar3 = *unaff_x19;
    *(undefined8 *)(&stack0x00000090 + (long)in_stack_00000098 * 8) = uVar3;
    in_stack_00000098 = in_stack_00000098 + 1;
    __cxa_end_catch();
    FUN_05d3a3f8(uVar3,0,0);
    return;
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = *unaff_x19;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&PTR_PTR_07542bc8,0);
}


