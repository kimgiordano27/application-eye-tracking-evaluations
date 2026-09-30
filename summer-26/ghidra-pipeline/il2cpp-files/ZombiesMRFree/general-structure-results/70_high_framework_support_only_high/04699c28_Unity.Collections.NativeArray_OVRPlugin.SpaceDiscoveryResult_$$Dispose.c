/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 04699c28
PROGRAM: ZombiesMRFree-libil2cpp.so
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
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
               int param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  param_10 = FUN_05a11874(param_4,3,0);
  uVar2 = FUN_05a11784(&param_10,0);
  lVar3 = FUN_05b3c260(uVar2,0);
  lVar4 = *(long *)(param_7 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar4);
    lVar4 = *(long *)(param_7 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar4);
    lVar4 = *(long *)(param_7 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar4);
  }
  FUN_068b42bc(lVar3 + param_5 * 0xc,param_1 + param_3 * 0xc,(long)(param_6 * 0xc),0);
  FUN_05a11888(&param_10,0);
  return;
}


