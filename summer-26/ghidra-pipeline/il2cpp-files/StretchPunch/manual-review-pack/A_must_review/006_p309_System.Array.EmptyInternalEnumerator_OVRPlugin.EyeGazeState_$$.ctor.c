/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 02b18dac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 232
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor(void)

{
  long lVar1;
  int in_w8;
  
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar1 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
  if (lVar1 != 0) {
    FUN_029bf94c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


