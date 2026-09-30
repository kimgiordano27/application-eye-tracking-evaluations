/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 05f45cc0
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__MoveNext(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  
  lVar1 = FUN_04980b34();
  if ((*(ushort *)(**(long **)(lVar1 + 0xc0) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  uVar2 = thunk_FUN_04983f60();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34(*(long *)(unaff_x19 + 0x20));
  }
  FUN_08dbf2f0(uVar2,0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = uVar2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  thunk_FUN_049ee3d8(*(undefined8 *)(lVar1 + 0xb8),uVar2);
  return;
}


