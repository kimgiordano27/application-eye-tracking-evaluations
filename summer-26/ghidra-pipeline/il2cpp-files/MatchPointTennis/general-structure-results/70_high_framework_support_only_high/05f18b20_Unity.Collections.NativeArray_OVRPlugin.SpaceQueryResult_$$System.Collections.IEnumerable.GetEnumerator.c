/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05f18b20
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_044a9a40(param_1,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x21;
    __cxa_end_catch();
    thunk_FUN_044adef4(PTR_DAT_09f20bb0);
    uVar2 = thunk_FUN_0448520c();
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f28350);
    FUN_07a3e094(uVar2,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0991e038,0);
}


