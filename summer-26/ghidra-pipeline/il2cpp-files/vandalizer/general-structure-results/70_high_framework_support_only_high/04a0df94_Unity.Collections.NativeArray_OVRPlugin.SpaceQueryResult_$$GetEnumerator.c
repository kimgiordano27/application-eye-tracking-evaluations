/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 04a0df94
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_03257e30(*(undefined8 *)(param_1 + 0xb58));
  uVar1 = thunk_FUN_0322f148();
  uVar2 = thunk_FUN_03257e30(PTR_DAT_075d8bd8);
  FUN_05e0159c(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar1);
}


