/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 02b18db4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 229
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;attempted_use;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor(void)

{
  long lVar1;
  
  lVar1 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
  if (lVar1 != 0) {
                    /* try { // try from 02b18dc0 to 02c18dcb has its CatchHandler @ 02b18dd8 */
                    /* try { // try from 02b18dcc to 02c18dd7 has its CatchHandler @ 02b18de4 */
    FUN_029bf94c();
                    /* catch() { ... } // from try @ 02b18d0c with catch @ 02b18dd8
                       catch() { ... } // from try @ 02b18dc0 with catch @ 02b18dd8
                       try { // try from 02b18dd8 to 02c18dff has its CatchHandler @ 02b18cb4 */
                    /* catch() { ... } // from try @ 02b18d50 with catch @ 02b18de4
                       catch() { ... } // from try @ 02b18dcc with catch @ 02b18de4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


