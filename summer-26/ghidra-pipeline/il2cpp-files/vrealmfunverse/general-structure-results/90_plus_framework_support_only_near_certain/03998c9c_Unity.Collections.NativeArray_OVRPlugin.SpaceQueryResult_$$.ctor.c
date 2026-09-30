/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 03998c9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_3;
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
            (*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x130));
  return;
}


