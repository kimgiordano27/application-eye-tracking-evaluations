/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05ea42f4
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = **(undefined8 **)(param_2 + 0xb8);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x88) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar2 = thunk_FUN_040b4efc();
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x21 + 0x20);
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  FUN_0568af90(uVar2,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xa0));
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar4 = *(long *)(unaff_x21 + 0x20);
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = uVar2;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x90);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  thunk_FUN_040ec700(*(long *)(lVar3 + 0xb8) + 8,uVar2);
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051da1dc();
  return;
}


