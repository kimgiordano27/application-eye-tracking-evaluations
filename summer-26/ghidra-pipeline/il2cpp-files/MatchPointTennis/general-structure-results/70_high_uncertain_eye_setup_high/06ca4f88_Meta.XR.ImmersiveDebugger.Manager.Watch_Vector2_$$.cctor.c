/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.cctor
ENTRY_POINT: 06ca4f88
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___cctor(ulong param_1)

{
  void *pvVar1;
  long in_x9;
  long lVar2;
  long unaff_x21;
  undefined1 *__dest;
  long lVar3;
  ulong __n;
  size_t unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(*(long *)(in_x9 + 0x18) + 0xfc);
  __dest = &stack0x00000000 + -(unaff_x28 + 0xf & 0x1fffffff0);
  lVar2 = unaff_x27;
  if ((param_1 & 1) == 0) {
    unaff_x27 = FUN_04481fb8();
    lVar2 = *(long *)(unaff_x21 + 0x20);
  }
  if (-1 < *(int *)(**(long **)(unaff_x27 + 0xc0) + 0x28)) {
    unaff_x26 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(__dest,unaff_x26,unaff_x28);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    FUN_04481fb8(lVar2);
  }
  FUN_04447bd0();
  lVar3 = *(long *)(unaff_x21 + 0x20);
  lVar2 = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
    lVar2 = *(long *)(unaff_x21 + 0x20);
  }
  pvVar1 = *(void **)(unaff_x29 + -0x38);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(__dest + -(unaff_x25 + 0xf & 0x1fffffff0),pvVar1,unaff_x25);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    FUN_04481fb8(lVar2);
  }
  FUN_04447bd0();
  lVar3 = *(long *)(unaff_x21 + 0x20);
  lVar2 = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
    lVar2 = *(long *)(unaff_x21 + 0x20);
  }
  pvVar1 = *(void **)(unaff_x29 + -0x30);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest + -(unaff_x25 + 0xf & 0x1fffffff0) + -(__n + 0xf & 0x1fffffff0),pvVar1,__n);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    FUN_04481fb8(lVar2);
  }
  FUN_04447bd0();
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


