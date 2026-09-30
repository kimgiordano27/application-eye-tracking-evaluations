/*
FUNCTION_NAME: FUN_05288180
ENTRY_POINT: 05288180
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: weak_source_state;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: weak_xr_or_state_hits_1;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_05288180(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 0528818c to 05388197 has its CatchHandler @ 05288328 */
                    /* try { // try from 05288198 to 053881a3 has its CatchHandler @ 05288318 */
  if (DAT_06a73a38 == (code *)0x0) {
                    /* try { // try from 052881a8 to 053881c7 has its CatchHandler @ 0528833c */
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "FBGetFoveationLevel";
    uStack_38 = 0x13;
    local_28 = 8;
                    /* try { // try from 052881d0 to 053881d7 has its CatchHandler @ 052882f8 */
    local_30 = DAT_0137e1c8;
    local_24 = 0;
    DAT_06a73a38 = (code *)thunk_FUN_02ceaad8(&local_50);
  }
  (*DAT_06a73a38)(param_1);
  return;
}


