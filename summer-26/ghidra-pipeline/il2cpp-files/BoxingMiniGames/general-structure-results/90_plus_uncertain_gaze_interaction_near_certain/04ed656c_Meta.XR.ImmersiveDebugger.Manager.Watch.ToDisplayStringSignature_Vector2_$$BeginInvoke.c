/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$BeginInvoke
ENTRY_POINT: 04ed656c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


long Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__BeginInvoke(void)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = FUN_037623e0();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x19;
    thunk_FUN_036b7ad0();
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


