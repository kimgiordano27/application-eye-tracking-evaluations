/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 05ea414c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar2 = thunk_FUN_040b4efc();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_040b1acc(lVar3);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_040b1acc(lVar3);
  }
  FUN_0566f27c(uVar2);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_05ea3f28();
  return;
}


