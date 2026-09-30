/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 05ea3f4c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ushort *in_x9;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  
  if ((*in_x9 & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar2 = thunk_FUN_040b4efc();
  lVar4 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  FUN_05330900(lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar3 = *unaff_x20;
  *(undefined8 *)(lVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  thunk_FUN_040ec700(lVar2 + 0x18,0);
  lVar4 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar3 = thunk_FUN_040b4efc();
  lVar5 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x21 + 0x20);
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  FUN_05687808(uVar3,lVar2,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051da14c();
  return;
}


