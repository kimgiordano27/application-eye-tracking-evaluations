/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 02342344
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x19;
  
  lVar1 = FUN_01dde7f8(param_2);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(long *)(*unaff_x19 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_01de290c();
    FUN_02342190();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c();
}


