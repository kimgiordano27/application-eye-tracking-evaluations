/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 047862f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}


