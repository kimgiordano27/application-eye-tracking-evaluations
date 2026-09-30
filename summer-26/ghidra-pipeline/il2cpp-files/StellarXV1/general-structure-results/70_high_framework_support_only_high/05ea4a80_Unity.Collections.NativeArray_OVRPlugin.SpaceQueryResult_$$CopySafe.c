/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 05ea4a80
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(void)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  undefined8 uVar6;
  void *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  FUN_040775b0();
  lVar2 = *(long *)(unaff_x24 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
  uVar3 = thunk_FUN_040b4efc();
  lVar4 = *(long *)(unaff_x24 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x24 + 0x20);
  }
  pcVar5 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_040b1acc(lVar2);
    lVar2 = *(long *)(unaff_x24 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_040b1acc(lVar2);
  }
  (*pcVar5)(uVar3);
  lVar4 = *(long *)(unaff_x24 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x24 + 0x20);
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x40);
  *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
  *(void **)(unaff_x29 + -0x10) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x21;
  (**(code **)(lVar2 + 0x10))(uVar6,lVar2,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x20);
  memcpy(unaff_x27,unaff_x23,unaff_x22);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


