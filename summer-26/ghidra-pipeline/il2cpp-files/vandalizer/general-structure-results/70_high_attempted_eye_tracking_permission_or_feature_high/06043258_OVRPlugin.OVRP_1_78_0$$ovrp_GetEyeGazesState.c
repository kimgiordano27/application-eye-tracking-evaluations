/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 06043258
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(undefined8 param_1)

{
                    /* try { // try from 06043264 to 0614326b has its CatchHandler @ 060432d8 */
  if (DAT_07a47060 == (code *)0x0) {
                    /* try { // try from 0604328c to 06143293 has its CatchHandler @ 060432d4 */
                    /* try { // try from 06043294 to 061432c3 has its CatchHandler @ 060430a0 */
    DAT_07a47060 = (code *)thunk_FUN_0322f404();
  }
  (*DAT_07a47060)(param_1);
                    /* try { // try from 060432c4 to 061432c7 has its CatchHandler @ 06043330 */
                    /* try { // try from 060432c8 to 061432cb has its CatchHandler @ 060432d0 */
  return;
}


