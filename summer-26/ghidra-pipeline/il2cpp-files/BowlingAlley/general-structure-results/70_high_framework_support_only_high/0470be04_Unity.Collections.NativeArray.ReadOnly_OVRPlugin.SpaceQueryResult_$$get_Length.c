/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 0470be04
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Length
               (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_w22;
  
  iVar1 = FUN_05935e10(param_1,0);
  iVar2 = FUN_05935e10();
  iVar3 = FUN_05935e10();
  return unaff_w22 ^ iVar1 << 2 ^ iVar2 >> 2 ^ iVar3 >> 1;
}


