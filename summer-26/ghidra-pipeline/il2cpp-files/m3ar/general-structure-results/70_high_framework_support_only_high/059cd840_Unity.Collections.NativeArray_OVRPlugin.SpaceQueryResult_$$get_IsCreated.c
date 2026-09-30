/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 059cd840
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_0406aaec(param_1);
  }
  FUN_075273c0(param_2,0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = param_2;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x48) + 0x135) & 1) == 0) {
    FUN_0406aaec();
    return;
  }
  return;
}


