/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 048ce948
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  uint uVar1;
  int unaff_w19;
  int unaff_w20;
  uint unaff_w22;
  int unaff_w23;
  int unaff_w24;
  
  uVar1 = NodeCanvas_Tasks_Conditions_IsActive__get_info();
  return unaff_w22 ^ unaff_w23 << 2 ^ unaff_w24 >> 2 ^ unaff_w19 << 2 ^ unaff_w20 << 4 ^
         uVar1 & 0xfffffffc;
}


