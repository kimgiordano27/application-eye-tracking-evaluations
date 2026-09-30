/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04434b38
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
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
          (void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  
  uVar2 = FUN_032934b8();
  uVar3 = FUN_032d5d3c(uVar2,unaff_w21);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *unaff_x19;
  uVar1 = unaff_x19[1];
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  FUN_0443508c(uVar2,uVar1,uVar3,uVar1 & 0xffffffff,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x88))
  ;
  return uVar3;
}


