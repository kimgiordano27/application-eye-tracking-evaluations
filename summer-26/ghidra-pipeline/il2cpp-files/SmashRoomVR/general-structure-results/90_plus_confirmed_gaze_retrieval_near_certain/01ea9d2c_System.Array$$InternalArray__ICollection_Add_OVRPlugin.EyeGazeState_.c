/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01ea9d2c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined4 System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(long param_1)

{
  long in_x9;
  long unaff_x20;
  undefined4 unaff_w21;
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x20 == 0) {
    return unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab0160();
}


