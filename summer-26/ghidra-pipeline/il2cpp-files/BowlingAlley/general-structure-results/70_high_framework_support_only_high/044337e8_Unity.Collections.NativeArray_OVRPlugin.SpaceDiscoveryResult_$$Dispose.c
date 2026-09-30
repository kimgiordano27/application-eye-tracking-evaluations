/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 044337e8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (long *param_1,int param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000008 = param_3[1];
  uStack0000000000000000 = *param_3;
  uStack0000000000000018 = param_3[3];
  uStack0000000000000010 = param_3[2];
  lVar2 = *param_1;
  if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  puVar1 = (undefined8 *)(lVar2 + (long)param_2 * 0x20);
  puVar1[1] = uStack0000000000000008;
  *puVar1 = uStack0000000000000000;
  puVar1[3] = uStack0000000000000018;
  puVar1[2] = uStack0000000000000010;
  return;
}


