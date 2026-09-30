/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$get_Path
ENTRY_POINT: 04442630
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__get_Path(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_000000e8;
  
  FUN_04ae8148(param_1,*(undefined8 *)PTR_DAT_067cd3e0);
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  lVar1 = *(long *)(in_stack_000000e8 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x50);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if ((*(ushort *)(*(long *)(in_stack_000000e8 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  FUN_03e76a2c();
  lVar1 = *(long *)(*in_stack_00000060 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  lVar1 = thunk_FUN_02f58fe8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x58));
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar1 = *(long *)(*in_stack_00000060 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  FUN_04442e50(in_stack_00000068,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x58));
  if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  return;
}


