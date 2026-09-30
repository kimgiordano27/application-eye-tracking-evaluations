/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 05f17850
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f28348);
  uVar3 = thunk_FUN_044a9a40(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_04447e3c(uVar2);
  }
  uVar2 = thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
  uVar3 = thunk_FUN_044a9a40(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar6 = *puVar1;
    __cxa_end_catch();
    thunk_FUN_044adef4(PTR_DAT_09f20bb0);
    uVar2 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f28350);
    FUN_07a3e094(uVar2,uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2);
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_PTR_0991e038,0);
}


