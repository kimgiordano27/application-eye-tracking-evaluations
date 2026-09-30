/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$set_Item
ENTRY_POINT: 05ea4fdc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__set_Item(void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *unaff_x19;
  code *pcVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x28;
  long unaff_x29;
  
  lVar2 = FUN_040b1acc();
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  lVar3 = *(long *)(unaff_x24 + 0x20);
  if (lVar2 == 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar2 = *(long *)(unaff_x24 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar3 = *(long *)(unaff_x24 + 0x20);
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar2 = *(long *)(lVar3 + 0xc0);
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x21;
    if ((*(ushort *)(*(long *)(lVar2 + 0x88) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    lVar2 = thunk_FUN_040b4efc();
    lVar4 = *(long *)(unaff_x24 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x24 + 0x20);
    }
    pcVar5 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xa0);
    lVar4 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x24 + 0x20);
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x98);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    (*pcVar5)(lVar2,uVar6,uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa0));
    lVar3 = *(long *)(unaff_x24 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar4 = *(long *)(unaff_x24 + 0x20);
    unaff_x21 = *(undefined8 *)(unaff_x29 + -0x28);
    *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar2;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    thunk_FUN_040ec700(*(long *)(lVar3 + 0xb8) + 8,lVar2);
    lVar3 = *(long *)(unaff_x24 + 0x20);
  }
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar4 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x24 + 0x20);
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xa8);
  *(long *)(unaff_x29 + -0x18) = lVar2;
  *(void **)(unaff_x29 + -0x10) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x21;
  (**(code **)(lVar3 + 0x10))(uVar6,lVar3,unaff_x20,unaff_x29 + -0x20);
  memcpy(unaff_x19,unaff_x23,unaff_x22);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


