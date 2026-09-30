/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 01f8fe2c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(void)

{
  int in_w8;
  long unaff_x20;
  
  if (in_w8 != 0) {
    thunk_FUN_0125a7c4();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012f5474();
  }
                    /* WARNING: Subroutine does not return */
  FUN_011e1944();
}


