/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05ea4378
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  undefined8 unaff_x22;
  
  FUN_0568af90();
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x90);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8) = unaff_x22;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x90);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  thunk_FUN_040ec700(*(long *)(lVar1 + 0xb8) + 8);
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051da1dc();
  return;
}


