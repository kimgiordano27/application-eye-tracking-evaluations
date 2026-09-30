/*
FUNCTION_NAME: FUN_034f796c
ENTRY_POINT: 034f796c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_034f796c(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
                    /* try { // try from 034f796c to 035f7983 has its CatchHandler @ 034f79b8 */
                    /* try { // try from 034f798c to 035f798f has its CatchHandler @ 034f79b4 */
                    /* try { // try from 034f7990 to 035f79a3 has its CatchHandler @ 034f7574 */
  if (DAT_044a8220 == (code *)0x0) {
                    /* try { // try from 034f79a4 to 035f79b3 has its CatchHandler @ 034f79b8 */
                    /* catch() { ... } // from try @ 034f798c with catch @ 034f79b4 */
                    /* catch() { ... } // from try @ 034f796c with catch @ 034f79b8
                       catch() { ... } // from try @ 034f79a4 with catch @ 034f79b8 */
    local_60 = "OVRPlugin";
    uStack_58 = 9;
                    /* try { // try from 034f79c0 to 035f79c3 has its CatchHandler @ 034f7a90 */
    local_50 = "ovrp_GetEyeGazesState";
    uStack_48 = 0x15;
                    /* try { // try from 034f79c4 to 035f7a2f has its CatchHandler @ 034f7574 */
    local_38 = 0x10;
                    /* catch() { ... } // from try @ 034f7930 with catch @ 034f79c8 */
    local_40 = DAT_00baead0;
                    /* catch() { ... } // from try @ 034f77cc with catch @ 034f79cc
                       catch() { ... } // from try @ 034f7948 with catch @ 034f79cc */
    local_34 = 0;
                    /* catch() { ... } // from try @ 034f77c0 with catch @ 034f79d0 */
    DAT_044a8220 = (code *)thunk_FUN_01de2a74(&local_60);
                    /* catch() { ... } // from try @ 034f77b4 with catch @ 034f79d4 */
                    /* catch() { ... } // from try @ 034f7784 with catch @ 034f79d8 */
  }
  (*DAT_044a8220)(param_1,param_2,param_3);
                    /* catch() { ... } // from try @ 034f774c with catch @ 034f79ec */
                    /* catch() { ... } // from try @ 034f7794 with catch @ 034f79f0 */
  return;
}


