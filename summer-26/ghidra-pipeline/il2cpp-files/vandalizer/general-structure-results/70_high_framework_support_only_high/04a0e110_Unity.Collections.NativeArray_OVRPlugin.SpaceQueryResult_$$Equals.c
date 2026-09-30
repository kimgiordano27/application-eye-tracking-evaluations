/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 04a0e110
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  __cxa_end_catch();
                    /* try { // try from 04a0e11c to 04b0e12b has its CatchHandler @ 04a0e12c */
  thunk_FUN_03257e30(PTR_DAT_0759bb58);
  uVar1 = thunk_FUN_0322f148();
                    /* catch() { ... } // from try @ 04a0e0a8 with catch @ 04a0e12c
                       catch() { ... } // from try @ 04a0e11c with catch @ 04a0e12c */
                    /* try { // try from 04a0e130 to 04b0e133 has its CatchHandler @ 04a0e13c */
  uVar2 = thunk_FUN_03257e30(PTR_DAT_075d8bd8);
  FUN_05e0159c(uVar1,uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar1);
}


