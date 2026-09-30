/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$BeginInvoke
ENTRY_POINT: 0685626c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__BeginInvoke(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  lVar1 = thunk_FUN_04485110();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (&stack0x00000008,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(unaff_x19 + 0x20),
               *(undefined8 *)(lVar1 + 0x28));
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000028;
    *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000010;
    *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000020;
    *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000018;
    thunk_FUN_044bb4b4(unaff_x19 + 0x68,0);
  }
  return;
}


