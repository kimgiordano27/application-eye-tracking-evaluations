/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04433af4
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


undefined8
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
          (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  
  lVar4 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(unaff_x19 + 1);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x80);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  uVar5 = FUN_032d5d3c(lVar4,uVar3);
  lVar4 = *(long *)(param_2 + 0x20);
  uVar1 = *unaff_x19;
  uVar2 = unaff_x19[1];
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  FUN_04434070(uVar1,uVar2,uVar5,uVar2 & 0xffffffff,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x88))
  ;
  return uVar5;
}


