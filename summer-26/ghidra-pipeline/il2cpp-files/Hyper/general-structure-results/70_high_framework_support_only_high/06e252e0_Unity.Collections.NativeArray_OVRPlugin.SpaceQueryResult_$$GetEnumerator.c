/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 06e252e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac41ca0);
  uVar3 = thunk_FUN_049a9d1c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
    uVar2 = thunk_FUN_04983f60();
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac41c98);
    FUN_08cc420c(uVar2,uVar5,0);
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac67b00);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar2,uVar5);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0a568bf8,0);
}


