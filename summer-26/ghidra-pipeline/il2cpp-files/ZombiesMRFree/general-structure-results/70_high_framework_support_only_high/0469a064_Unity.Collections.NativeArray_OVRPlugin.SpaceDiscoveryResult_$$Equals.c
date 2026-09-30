/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 0469a064
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,int param_5,
               long param_6)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = *param_4;
  if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  puVar1 = (undefined4 *)(lVar2 + (long)param_5 * 0xc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return;
}


