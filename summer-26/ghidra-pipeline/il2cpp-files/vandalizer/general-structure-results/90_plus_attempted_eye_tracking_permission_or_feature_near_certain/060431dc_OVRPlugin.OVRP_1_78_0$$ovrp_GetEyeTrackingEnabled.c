/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 060431dc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  long unaff_x21;
  
  pcVar1 = *(code **)(unaff_x21 + 0x58);
                    /* try { // try from 060431e4 to 061431eb has its CatchHandler @ 06043338 */
  if (pcVar1 == (code *)0x0) {
                    /* try { // try from 0604320c to 06143213 has its CatchHandler @ 06043334 */
                    /* try { // try from 06043214 to 06143263 has its CatchHandler @ 060430a0 */
    pcVar1 = (code *)thunk_FUN_0322f404();
    *(code **)(unaff_x21 + 0x58) = pcVar1;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


