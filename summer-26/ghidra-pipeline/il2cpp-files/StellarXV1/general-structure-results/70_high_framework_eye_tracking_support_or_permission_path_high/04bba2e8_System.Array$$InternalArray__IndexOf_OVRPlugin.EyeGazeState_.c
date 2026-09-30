/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04bba2e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>(ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}


