/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 03117b10
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_Confidence(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000044;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000040,in_stack_00000038._4_4_);
  unaff_x19[1] = in_stack_00000038;
  *unaff_x19 = in_stack_00000030;
  return;
}


