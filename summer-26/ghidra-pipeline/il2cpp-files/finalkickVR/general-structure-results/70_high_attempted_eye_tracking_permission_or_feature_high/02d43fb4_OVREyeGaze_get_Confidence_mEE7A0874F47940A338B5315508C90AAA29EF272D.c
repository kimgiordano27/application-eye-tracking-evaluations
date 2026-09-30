/*
FUNCTION_NAME: OVREyeGaze_get_Confidence_mEE7A0874F47940A338B5315508C90AAA29EF272D
ENTRY_POINT: 02d43fb4
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


undefined4 OVREyeGaze_get_Confidence_mEE7A0874F47940A338B5315508C90AAA29EF272D(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


