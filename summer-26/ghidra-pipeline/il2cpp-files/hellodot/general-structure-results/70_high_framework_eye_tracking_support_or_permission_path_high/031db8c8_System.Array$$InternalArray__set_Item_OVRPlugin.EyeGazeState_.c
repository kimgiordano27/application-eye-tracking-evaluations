/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 031db8c8
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>
              (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int unaff_w23;
  
  iVar1 = thunk_FUN_02ce9050(param_1,param_2,0);
  return iVar1 + unaff_w23;
}


