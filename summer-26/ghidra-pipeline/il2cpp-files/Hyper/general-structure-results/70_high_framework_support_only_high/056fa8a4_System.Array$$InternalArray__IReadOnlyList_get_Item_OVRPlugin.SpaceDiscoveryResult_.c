/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 056fa8a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  FUN_04980b90();
  in_stack_00000068 = 0;
  in_stack_00000058 = 0;
  uVar1 = FUN_08dfdbfc(0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_07b6c540();
  }
  FUN_08c81d98();
  if (*unaff_x21 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    FUN_07b6c540();
    memcpy(&stack0x00000008,unaff_x22,0x48);
    thunk_FUN_04983b98(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),&stack0x00000008);
    FUN_08c82160();
  }
  FUN_076844f4();
  return;
}


