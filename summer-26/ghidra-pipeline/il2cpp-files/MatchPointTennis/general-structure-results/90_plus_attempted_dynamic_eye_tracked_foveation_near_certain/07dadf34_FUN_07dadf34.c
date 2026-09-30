/*
FUNCTION_NAME: FUN_07dadf34
ENTRY_POINT: 07dadf34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 116
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_07dadf34(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 07dadf34 to 07eadf37 has its CatchHandler @ 07dadfe4 */
                    /* try { // try from 07dadf44 to 07eadf67 has its CatchHandler @ 07dadfe8 */
  if (DAT_0a529ce8 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetFoveationEyeTracked";
    uStack_38 = 0x1b;
    local_28 = 8;
    local_30 = DAT_01c73bd0;
                    /* try { // try from 07dadf88 to 07eadf8b has its CatchHandler @ 07dadfdc */
    local_24 = 0;
    DAT_0a529ce8 = (code *)thunk_FUN_044854c8(&local_50);
                    /* try { // try from 07dadf94 to 07eadfa3 has its CatchHandler @ 07dadfe0 */
  }
  (*DAT_0a529ce8)(param_1);
                    /* try { // try from 07dadfa4 to 07eae003 has its CatchHandler @ 07dadec8 */
  return;
}


