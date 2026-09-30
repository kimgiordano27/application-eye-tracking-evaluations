/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$EndInvoke
ENTRY_POINT: 03f9db34
PROGRAM: hellodot-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__EndInvoke
               (undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x29;
  
  FUN_02ce855c(param_1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0),
               *(undefined8 *)(unaff_x29 + -0x38));
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d846d4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02cbedc4();
}


