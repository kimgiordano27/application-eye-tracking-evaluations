/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 03178754
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_Vector3f>(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_06264f40(&stack0x00000008);
  if (unaff_x20 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * 0x18;
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000018;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000010;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000008;
      }
      else {
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        FUN_03b09a44();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


