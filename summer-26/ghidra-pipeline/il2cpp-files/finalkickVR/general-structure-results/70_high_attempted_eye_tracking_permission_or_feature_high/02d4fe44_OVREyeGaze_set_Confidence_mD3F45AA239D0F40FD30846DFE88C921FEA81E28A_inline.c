/*
FUNCTION_NAME: OVREyeGaze_set_Confidence_mD3F45AA239D0F40FD30846DFE88C921FEA81E28A_inline
ENTRY_POINT: 02d4fe44
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_5;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* OVREyeGaze_set_Confidence_mD3F45AA239D0F40FD30846DFE88C921FEA81E28A_inline(OVREyeGaze_t7EE93F3A9EB3A9E1ADEE83AAE47E2812442D0696*,
   float, MethodInfo const*) */

void OVREyeGaze_set_Confidence_mD3F45AA239D0F40FD30846DFE88C921FEA81E28A_inline
               (OVREyeGaze_t7EE93F3A9EB3A9E1ADEE83AAE47E2812442D0696 *param_1,float param_2,
               MethodInfo *param_3)

{
  *(float *)(param_1 + 0x24) = param_2;
  return;
}


