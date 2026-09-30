/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 02767748
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x28;
  uint unaff_w29;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  uStack0000000000000018 = in_stack_00000118;
  uStack0000000000000010 = in_stack_00000110;
  uStack0000000000000028 = in_stack_00000128;
  uStack0000000000000020 = in_stack_00000120;
  if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
    lVar1 = unaff_x19 + unaff_x28 * 0x20;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000118;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000110;
    *(undefined8 *)(lVar1 + 0x38) = in_stack_00000128;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000120;
    thunk_FUN_0188fd20(lVar1 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


