/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 06e251f0
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


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  void *__src;
  
  if (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40)) {
    __src = (void *)thunk_FUN_049840a8();
    memcpy(&stack0x00000008,__src,0x48);
    uVar1 = FUN_06e250ec();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494850c();
}


