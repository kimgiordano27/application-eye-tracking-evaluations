/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0217e3a4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>(void)

{
  uint in_w8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  while( true ) {
    if ((int)in_w8 <= (int)(uint)unaff_x21) {
      return;
    }
    if (in_w8 <= (uint)unaff_x21) break;
    if (*(long *)(unaff_x22 + unaff_x21 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_020f0b5c();
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    unaff_x21 = unaff_x21 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


