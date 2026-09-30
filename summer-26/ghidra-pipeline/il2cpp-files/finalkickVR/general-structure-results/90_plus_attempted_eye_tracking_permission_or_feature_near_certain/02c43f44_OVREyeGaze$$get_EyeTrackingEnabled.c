/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 02c43f44
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(void)

{
  long unaff_x29;
  void *in_stack_00000000;
  
  *(void **)(*(long *)(unaff_x29 + -8) + 0x50) = in_stack_00000000;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x50),in_stack_00000000);
  return;
}


