/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03cb4a94
PROGRAM: spatialPiano-libil2cpp.so
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
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_02f6ef30(&DAT_068ea558);
  uVar3 = thunk_FUN_02f6abc0(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar2 = thunk_FUN_02f45270();
    uVar5 = thunk_FUN_02f6ef30(PTR_DAT_067cadb8);
    FUN_05055664(uVar2,uVar5,0);
    uVar5 = thunk_FUN_02f6ef30(System_Drawing_Point_var);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar2,uVar5);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_06402238,0);
}


