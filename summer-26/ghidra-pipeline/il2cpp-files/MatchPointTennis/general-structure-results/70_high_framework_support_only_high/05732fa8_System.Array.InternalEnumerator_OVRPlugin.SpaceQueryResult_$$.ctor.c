/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05732fa8
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


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  long lVar1;
  long *unaff_x21;
  long *unaff_x22;
  
  lVar1 = *(long *)(param_1 + 0x28);
                    /* try { // try from 05732fac to 05832fb7 has its CatchHandler @ 05733050 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 05732fb8 to 0583303f has its CatchHandler @ 05732df4 */
    lVar1 = FUN_04481fb8(lVar1);
  }
  if (unaff_x22 != (long *)0x0) {
    if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_04485360();
                    /* WARNING: Could not recover jumptable at 0x05733004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 600))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_044481e4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


