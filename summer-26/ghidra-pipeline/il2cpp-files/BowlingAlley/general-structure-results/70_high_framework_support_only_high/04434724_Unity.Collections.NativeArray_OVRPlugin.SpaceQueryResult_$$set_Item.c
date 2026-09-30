/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 04434724
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item
               (uint param_1,undefined4 param_2,undefined8 *param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8(*(long *)(param_4 + 0x20));
  }
  *param_3 = 0;
  param_3[1] = 0;
  lVar2 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  uVar1 = FUN_03b80830(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48));
  uVar3 = FUN_06baad04(-(ulong)(param_1 >> 0x1f) & 0xffffffe000000000 | (ulong)param_1 << 5,uVar1,
                       param_2,0,0);
  *param_3 = uVar3;
  *(uint *)(param_3 + 1) = param_1;
  *(undefined4 *)((long)param_3 + 0xc) = param_2;
  return;
}


