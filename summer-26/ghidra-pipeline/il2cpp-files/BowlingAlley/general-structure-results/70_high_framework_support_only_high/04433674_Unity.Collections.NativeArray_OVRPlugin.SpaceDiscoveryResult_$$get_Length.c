/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 04433674
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Length
               (undefined8 *param_1,undefined8 param_2,ulong param_3,undefined4 param_4,long param_5
               )

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8(lVar3);
  }
  FUN_04433700(param_3 & 0xffffffff,param_4,param_1,**(undefined8 **)(lVar3 + 0xc0));
  lVar3 = *(long *)(param_5 + 0x20);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  FUN_044340d4(param_2,param_3,0,uVar1,uVar2,0,param_3 & 0xffffffff,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40));
  return;
}


