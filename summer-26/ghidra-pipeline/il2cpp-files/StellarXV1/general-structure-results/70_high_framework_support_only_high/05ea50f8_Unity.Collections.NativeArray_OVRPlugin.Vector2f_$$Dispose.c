/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 05ea50f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose(undefined8 param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong in_x9;
  code *unaff_x19;
  void *unaff_x20;
  undefined8 uVar4;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 unaff_x25;
  long unaff_x28;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    FUN_040b1acc(param_1);
  }
  (*unaff_x19)();
  lVar2 = *(long *)(unaff_x24 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x90);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  lVar3 = *(long *)(unaff_x24 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x28);
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = unaff_x25;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  thunk_FUN_040ec700(*(long *)(lVar2 + 0xb8) + 8);
  lVar3 = *(long *)(unaff_x24 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x24 + 0x20);
  }
  uVar5 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xa8);
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x25;
  *(void **)(unaff_x29 + -0x10) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
  (**(code **)(lVar2 + 0x10))(uVar5);
  memcpy(unaff_x20,unaff_x23,unaff_x22);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


