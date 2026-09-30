/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04433b80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  FUN_0528ca34();
  param_1[6] = uStack0000000000000030;
  param_1[3] = uStack0000000000000018;
  param_1[2] = uStack0000000000000010;
  param_1[5] = uStack0000000000000028;
  param_1[4] = uStack0000000000000020;
  param_1[1] = uStack0000000000000008;
  *param_1 = uStack0000000000000000;
  return;
}


