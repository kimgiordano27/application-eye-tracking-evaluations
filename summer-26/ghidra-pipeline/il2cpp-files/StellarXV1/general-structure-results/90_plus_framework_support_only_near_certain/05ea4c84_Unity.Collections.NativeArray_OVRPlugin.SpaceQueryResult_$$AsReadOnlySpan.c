/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnlySpan
ENTRY_POINT: 05ea4c84
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnlySpan(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  long *in_x10;
  ulong uVar6;
  void *unaff_x19;
  ulong __n;
  long unaff_x23;
  void *unaff_x25;
  undefined1 *__dest;
  undefined8 uVar7;
  long unaff_x27;
  code *pcVar8;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(*in_x10 + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar6;
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar2 = thunk_FUN_040b4efc();
  lVar5 = *(long *)(unaff_x23 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x23 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x58);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  (*pcVar8)(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  memcpy(__dest,unaff_x25,__n);
  if (lVar2 == 0) {
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar3 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    FUN_040775b0(lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x80),__dest,__n)
    ;
    lVar3 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar4 = thunk_FUN_040b4efc();
    lVar5 = *(long *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x23 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x68);
    lVar5 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x23 + 0x20);
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    (*pcVar8)(uVar4,lVar2,uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x68));
    lVar2 = *(long *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    lVar3 = lVar2;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
      uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x23 + 0x20);
    }
    uVar7 = **(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x70);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar4;
    *(undefined1 **)(unaff_x29 + -0x10) = __dest + -uVar6;
    (**(code **)(lVar3 + 0x10))(uVar7);
    memcpy(unaff_x19,__dest + -uVar6,__n);
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


