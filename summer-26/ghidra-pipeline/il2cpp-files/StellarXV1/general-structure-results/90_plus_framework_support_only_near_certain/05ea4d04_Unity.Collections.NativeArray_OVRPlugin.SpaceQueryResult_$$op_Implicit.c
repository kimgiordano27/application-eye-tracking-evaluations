/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 05ea4d04
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x9;
  void *unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  undefined8 uVar5;
  long unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  code *pcVar6;
  long unaff_x29;
  
  pcVar6 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x58);
  if ((in_x9 & 1) == 0) {
    FUN_040b1acc(param_1);
  }
  (*pcVar6)();
  memcpy(unaff_x26,unaff_x25,unaff_x21);
  if (unaff_x24 == 0) {
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_040775b0();
    lVar2 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar3 = thunk_FUN_040b4efc();
    lVar4 = *(long *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar2 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x23 + 0x20);
    }
    pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x68);
    if ((uVar1 & 1) == 0) {
      FUN_040b1acc(lVar2);
      lVar2 = *(long *)(unaff_x23 + 0x20);
      uVar1 = *(ushort *)(lVar2 + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      FUN_040b1acc(lVar2);
    }
    (*pcVar6)(uVar3);
    lVar4 = *(long *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar2 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x23 + 0x20);
    }
    uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x70);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(lVar2 + 0x10))(uVar5);
    memcpy(unaff_x19,unaff_x22,unaff_x21);
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


