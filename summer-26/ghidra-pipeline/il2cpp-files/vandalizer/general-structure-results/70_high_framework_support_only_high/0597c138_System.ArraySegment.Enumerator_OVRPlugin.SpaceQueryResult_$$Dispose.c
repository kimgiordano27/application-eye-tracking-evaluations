/*
FUNCTION_NAME: System.ArraySegment.Enumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0597c138
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ArraySegment_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_03257e30(PTR_DAT_0759bb58);
  uVar1 = thunk_FUN_0322f148();
  uVar2 = thunk_FUN_03257e30(PTR_DAT_075d8f38);
  FUN_05e01578(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar1,param_2);
}


