/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$BeginInvoke
ENTRY_POINT: 068563d4
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


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__BeginInvoke
          (ulong param_1)

{
  undefined8 uVar1;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_04481fb8();
  }
  uVar1 = thunk_FUN_0448520c();
  FUN_071731e4();
  if (unaff_x23 != 0) {
    FUN_07abb35c();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


