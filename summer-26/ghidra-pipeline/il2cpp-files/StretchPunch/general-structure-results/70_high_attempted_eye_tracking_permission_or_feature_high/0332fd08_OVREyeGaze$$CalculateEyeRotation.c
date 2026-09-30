/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 0332fd08
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_01de27b8();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_6807);
  FUN_0331c00c(uVar1,uVar2);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_6811);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar1,uVar2);
}


