/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03821d8c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>
          (long param_1,undefined1 param_2 [16])

{
  undefined4 in_w9;
  undefined8 *unaff_x19;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_2._0_8_;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x20) = in_w9;
    *(long *)(param_1 + 0x18) = param_2._8_8_;
    *(undefined8 *)(param_1 + 0x10) = uStack0000000000000000;
    return *unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


