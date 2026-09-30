/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 079abe94
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 91
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__PrepareHeadDirection(long param_1)

{
  if (param_1 != 0) {
    FUN_079e36b4(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


