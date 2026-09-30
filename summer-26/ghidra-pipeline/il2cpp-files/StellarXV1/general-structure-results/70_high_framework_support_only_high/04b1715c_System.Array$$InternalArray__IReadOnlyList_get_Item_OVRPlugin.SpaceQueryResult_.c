/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04b1715c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int in_stack_00000058;
  
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_040dedf8(&DAT_094b28a8);
  uVar3 = thunk_FUN_040daa88(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    *(undefined8 *)(&stack0x00000050 + (long)in_stack_00000058 * 8) = uVar2;
    in_stack_00000058 = in_stack_00000058 + 1;
    __cxa_end_catch();
    FUN_07592938(uVar2,0,0);
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_08d635d8,0);
}


