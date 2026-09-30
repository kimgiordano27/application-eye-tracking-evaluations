/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 04178e6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(void)

{
  long lVar1;
  uint uVar2;
  long in_x9;
  undefined4 in_w10;
  long unaff_x19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined4 *)(unaff_x19 + 0x1c) = in_w10;
  if (in_x9 != 0) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (uVar2 < *(uint *)(in_x9 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      lVar1 = in_x9 + (long)(int)uVar2 * 0x20;
      *(undefined8 *)(lVar1 + 0x28) = in_stack_00000028;
      *(undefined8 *)(lVar1 + 0x20) = in_stack_00000020;
      *(undefined8 *)(lVar1 + 0x38) = in_stack_00000038;
      *(undefined8 *)(lVar1 + 0x30) = in_stack_00000030;
      thunk_FUN_02f411dc(lVar1 + 0x20,0);
    }
    else {
      FUN_04178d48();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


