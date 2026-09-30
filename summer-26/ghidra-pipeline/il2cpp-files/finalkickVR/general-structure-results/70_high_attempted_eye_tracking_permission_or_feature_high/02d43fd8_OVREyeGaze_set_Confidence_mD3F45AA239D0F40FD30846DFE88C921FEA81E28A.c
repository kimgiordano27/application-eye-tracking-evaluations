/*
FUNCTION_NAME: OVREyeGaze_set_Confidence_mD3F45AA239D0F40FD30846DFE88C921FEA81E28A
ENTRY_POINT: 02d43fd8
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


void OVREyeGaze_set_Confidence_mD3F45AA239D0F40FD30846DFE88C921FEA81E28A
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}


