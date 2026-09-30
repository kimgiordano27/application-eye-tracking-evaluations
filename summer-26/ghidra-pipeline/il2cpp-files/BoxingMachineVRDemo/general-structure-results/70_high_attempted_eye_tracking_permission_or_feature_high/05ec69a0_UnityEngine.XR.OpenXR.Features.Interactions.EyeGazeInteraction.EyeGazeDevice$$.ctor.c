/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 05ec69a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
               float param_5,undefined1 param_6 [16],undefined8 param_7,undefined8 param_8,
               undefined8 *param_9)

{
  *param_9 = CONCAT44(param_4._4_4_ - param_2._4_4_ / param_6._4_4_,
                      param_4._0_4_ - param_2._0_4_ / param_6._0_4_);
  *(float *)(param_9 + 1) = param_5 - param_1 / param_3;
  return;
}


