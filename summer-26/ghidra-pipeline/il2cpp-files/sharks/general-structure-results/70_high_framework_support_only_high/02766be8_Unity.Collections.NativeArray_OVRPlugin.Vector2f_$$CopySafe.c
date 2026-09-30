/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 02766be8
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe(void)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  FUN_0185daa4();
  in_stack_000000c8 = in_stack_00000048;
  in_stack_000000c0 = in_stack_00000040;
  in_stack_000000d8 = in_stack_00000058;
  in_stack_000000d0 = in_stack_00000050;
  in_stack_000000a8 = in_stack_00000028;
  in_stack_000000a0 = in_stack_00000020;
  in_stack_000000b8 = in_stack_00000038;
  in_stack_000000b0 = in_stack_00000030;
  iVar1 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x000000c0,&stack0x000000a0,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x19 + 0x18)) {
    in_stack_000000c8 = *(undefined8 *)(unaff_x25 + 0x28);
    in_stack_000000c0 = *(undefined8 *)(unaff_x25 + 0x20);
    in_stack_000000d8 = *(undefined8 *)(unaff_x25 + 0x38);
    in_stack_000000d0 = *(undefined8 *)(unaff_x25 + 0x30);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      uVar4 = *(undefined8 *)(unaff_x26 + 0x20);
      uVar3 = *(undefined8 *)(unaff_x26 + 0x38);
      uVar2 = *(undefined8 *)(unaff_x26 + 0x30);
      *(undefined8 *)(unaff_x25 + 0x28) = *(undefined8 *)(unaff_x26 + 0x28);
      *(undefined8 *)(unaff_x25 + 0x20) = uVar4;
      *(undefined8 *)(unaff_x25 + 0x38) = uVar3;
      *(undefined8 *)(unaff_x25 + 0x30) = uVar2;
      thunk_FUN_0188fd20(unaff_x19 + unaff_x24 * 0x20 + 0x20,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x26 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(unaff_x26 + 0x20) = in_stack_000000c0;
        *(undefined8 *)(unaff_x26 + 0x38) = in_stack_000000d8;
        *(undefined8 *)(unaff_x26 + 0x30) = in_stack_000000d0;
        thunk_FUN_0188fd20(unaff_x19 + unaff_x23 * 0x20 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


