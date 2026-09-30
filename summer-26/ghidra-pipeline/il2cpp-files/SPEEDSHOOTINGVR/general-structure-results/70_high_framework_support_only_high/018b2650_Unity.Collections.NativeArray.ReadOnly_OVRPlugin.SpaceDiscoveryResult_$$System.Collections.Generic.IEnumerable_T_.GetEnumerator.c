/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 018b2650
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,int param_2,long param_3,undefined8 param_4,int param_5,
               int param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  param_10 = FUN_01cbacec(param_1,3,0);
  uVar2 = FUN_01cbabfc(&param_10,0);
  if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244(*(long *)(param_7 + 0x20));
  }
  lVar3 = FUN_01d91144(uVar2,0);
  lVar4 = *(long *)(param_7 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0103c244(lVar4);
    lVar4 = *(long *)(param_7 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_0103c244(lVar4);
  }
  FUN_01fcbcf0(param_3 + param_5 * 0x38,lVar3 + param_2 * 0x38,(long)(param_6 * 0x38),0);
  FUN_01cbad00(&param_10,0);
  return;
}


