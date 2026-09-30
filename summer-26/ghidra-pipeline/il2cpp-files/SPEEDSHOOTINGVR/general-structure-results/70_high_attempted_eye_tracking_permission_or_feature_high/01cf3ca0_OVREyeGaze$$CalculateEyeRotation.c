/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 01cf3ca0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(long param_1)

{
  thunk_FUN_010303a8(*(undefined8 *)(param_1 + 0x400));
  FUN_01c65ad0();
  thunk_FUN_010303a8(PTR_DAT_02355408);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400();
}


