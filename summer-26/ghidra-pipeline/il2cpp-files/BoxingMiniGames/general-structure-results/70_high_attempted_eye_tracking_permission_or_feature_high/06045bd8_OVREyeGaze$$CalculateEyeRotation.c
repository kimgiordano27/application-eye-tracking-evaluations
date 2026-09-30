/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 06045bd8
PROGRAM: BoxingMiniGames-libil2cpp.so
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
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0x525) = 1;
  uVar1 = FUN_03642a4c(*unaff_x21,5);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  thunk_FUN_036b7ad0();
  FUN_05e5ae34();
  return;
}


