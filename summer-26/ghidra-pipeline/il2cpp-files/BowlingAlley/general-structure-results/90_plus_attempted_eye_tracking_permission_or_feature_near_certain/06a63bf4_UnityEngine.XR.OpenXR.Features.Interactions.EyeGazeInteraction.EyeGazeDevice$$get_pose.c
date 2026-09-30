/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 06a63bf4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 117
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose
               (long param_1)

{
  uint unaff_w19;
  long unaff_x20;
  
  if (param_1 != 0) {
    FUN_06bfba38(param_1,0);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    FUN_04af65e8(*(long *)(unaff_x20 + 0x48),unaff_w19 & 1,*(undefined8 *)PTR_DAT_072a5ff0);
    return;
  }
  return;
}


