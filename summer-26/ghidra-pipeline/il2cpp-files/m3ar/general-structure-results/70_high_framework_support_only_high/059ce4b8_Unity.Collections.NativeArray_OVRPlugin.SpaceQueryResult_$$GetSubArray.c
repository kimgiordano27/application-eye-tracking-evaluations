/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 059ce4b8
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
               (long param_1,undefined8 *param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000008 = param_2[1];
  uStack0000000000000000 = *param_2;
  uStack0000000000000018 = param_2[3];
  uStack0000000000000010 = param_2[2];
  FUN_059ce3fc(param_1,0,*(undefined4 *)(param_1 + 0x18));
  return;
}


