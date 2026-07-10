/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03b0cd6c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>
               (long param_1,undefined8 param_2)

{
  long unaff_x21;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    FUN_075a643c(*(long *)(unaff_x21 + 0x10),param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


