/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 070b4dc0
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined4 unaff_w20;
  
  FUN_075082e0(param_1,0,param_3,0);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0xffffffff00000000;
  FUN_075082e0(*(undefined8 *)(unaff_x19 + 0x18),0,unaff_w20,0);
  *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
  return;
}


