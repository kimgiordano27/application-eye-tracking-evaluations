/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 02c43fd8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__set_Confidence(undefined8 param_1)

{
  long unaff_x29;
  void *in_stack_00000000;
  
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x60) = param_1;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x60),in_stack_00000000);
  return;
}


