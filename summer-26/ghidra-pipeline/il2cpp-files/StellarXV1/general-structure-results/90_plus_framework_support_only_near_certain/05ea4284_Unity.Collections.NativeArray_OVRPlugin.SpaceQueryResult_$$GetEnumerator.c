/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 05ea4284
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if (*(long *)(param_1 + 8) == 0) {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x88) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar3 = thunk_FUN_040b4efc();
    lVar4 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar2 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x21 + 0x20);
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    FUN_0568af90(uVar3,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xa0));
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar3;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    thunk_FUN_040ec700(*(long *)(lVar2 + 0xb8) + 8,uVar3);
    lVar2 = *(long *)(unaff_x21 + 0x20);
  }
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051da1dc();
  return;
}


