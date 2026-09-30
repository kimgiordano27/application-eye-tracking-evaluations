/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 07a45e88
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  if ((param_3 < param_2) && (*(char *)(param_4 + 0x20) != '\0')) {
    *(undefined1 *)(param_4 + 0x20) = 0;
    *(undefined1 *)(param_4 + 0x21) = 1;
    return;
  }
  return;
}


