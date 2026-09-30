/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 06e24f60
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose
               (long param_1,int param_2,int param_3,void *param_4,undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    FUN_08d9d780(0);
  }
  if (param_3 < 0) {
    FUN_08d9d3c4(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_08d9cf18(0x17,0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xb8);
  memcpy(&stack0x00000008,param_4,0x48);
  FUN_0561e274(uVar1,param_2,param_3,&stack0x00000008,param_5,uVar2);
  return;
}


