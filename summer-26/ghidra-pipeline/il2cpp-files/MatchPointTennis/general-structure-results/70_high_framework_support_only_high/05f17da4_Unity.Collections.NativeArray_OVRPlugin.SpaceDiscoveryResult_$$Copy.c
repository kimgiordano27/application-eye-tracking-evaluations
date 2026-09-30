/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05f17da4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  
  FUN_079e4a00(param_3,0);
  lVar1 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8(lVar1);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f17e48();
  return;
}


