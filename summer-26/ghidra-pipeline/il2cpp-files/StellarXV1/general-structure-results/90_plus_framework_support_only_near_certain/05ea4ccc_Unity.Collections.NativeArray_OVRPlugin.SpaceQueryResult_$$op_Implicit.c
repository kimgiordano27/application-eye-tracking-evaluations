/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 05ea4ccc
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit(ulong param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  void *unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  void *unaff_x25;
  void *unaff_x26;
  undefined8 uVar6;
  long unaff_x27;
  code *pcVar7;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
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
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x58);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  (*pcVar7)(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  memcpy(unaff_x26,unaff_x25,unaff_x21);
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
    FUN_040775b0(lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x80));
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
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x68);
    lVar5 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x23 + 0x20);
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    (*pcVar7)(uVar4,lVar2,uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x68));
    lVar2 = *(long *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    lVar3 = lVar2;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
      uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x23 + 0x20);
    }
    uVar6 = **(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x70);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar4;
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(lVar3 + 0x10))(uVar6);
    memcpy(unaff_x19,unaff_x22,unaff_x21);
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


