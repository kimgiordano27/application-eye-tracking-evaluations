/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 0426c374
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = (*(code *)*param_1)();
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x20) = 0xffffffff;
                    /* try { // try from 0426c38c to 0436c397 has its CatchHandler @ 0426c9d8 */
  return;
}


