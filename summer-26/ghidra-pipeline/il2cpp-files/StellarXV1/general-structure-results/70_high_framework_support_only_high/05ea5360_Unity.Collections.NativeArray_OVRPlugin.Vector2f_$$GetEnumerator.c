/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetEnumerator
ENTRY_POINT: 05ea5360
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetEnumerator(undefined8 param_1)

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
  code *unaff_x28;
  code *pcVar6;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    FUN_040b1acc(param_1);
  }
  (*unaff_x28)();
  lVar2 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x28)) {
    unaff_x25 = (void *)(unaff_x29 + -0x20);
  }
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
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x78) + 0x135) & 1) == 0) {
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
    pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 200);
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
    uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xd0);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xd0);
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


