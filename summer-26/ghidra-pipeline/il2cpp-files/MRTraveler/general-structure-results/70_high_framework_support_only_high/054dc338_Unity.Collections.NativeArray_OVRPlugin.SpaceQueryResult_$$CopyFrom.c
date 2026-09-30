/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 054dc338
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_070dcd40(param_3,0);
  lVar2 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar2 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  FUN_054dc3f0(param_1,param_2,param_2 + param_3 + -1,iVar1 << 1,param_4,
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x68));
  return;
}


