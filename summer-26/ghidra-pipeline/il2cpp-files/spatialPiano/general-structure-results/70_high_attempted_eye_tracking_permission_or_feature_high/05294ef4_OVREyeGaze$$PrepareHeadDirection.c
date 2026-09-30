/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 05294ef4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__PrepareHeadDirection
               (float *param_1,float param_2,undefined8 param_3,float param_4,float param_5)

{
  long unaff_x19;
  
  *(ulong *)(unaff_x19 + 0x1a0) =
       CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x178) >> 0x20) +
                (float)((ulong)param_3 >> 0x20) * *param_1,
                (float)*(undefined8 *)(unaff_x19 + 0x178) + (float)param_3 * param_2);
  *(float *)(unaff_x19 + 0x1a8) = param_5 + param_2 * param_4;
  return;
}


