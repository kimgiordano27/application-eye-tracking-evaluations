/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05f19df0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x28;
  uint unaff_w29;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  
  if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
    lVar1 = unaff_x19 + unaff_x28 * 0x40;
    *(undefined8 *)(lVar1 + 0x48) = in_stack_00000238;
    *(undefined8 *)(lVar1 + 0x40) = in_stack_00000230;
    *(undefined8 *)(lVar1 + 0x58) = in_stack_00000248;
    *(undefined8 *)(lVar1 + 0x50) = in_stack_00000240;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000218;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000210;
    *(undefined8 *)(lVar1 + 0x38) = in_stack_00000228;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000220;
    thunk_FUN_044bb4b4(lVar1 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


