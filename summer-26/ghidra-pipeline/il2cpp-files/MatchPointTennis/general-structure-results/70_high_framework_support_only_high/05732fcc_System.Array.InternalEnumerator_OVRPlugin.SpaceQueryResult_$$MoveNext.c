/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 05732fcc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext(long param_1)

{
  long in_x9;
  long *unaff_x21;
  
  if (*(long *)(param_1 + 0x40) == in_x9) {
    thunk_FUN_04485360();
                    /* WARNING: Could not recover jumptable at 0x05733004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x21 + 600))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_044481e4();
}


