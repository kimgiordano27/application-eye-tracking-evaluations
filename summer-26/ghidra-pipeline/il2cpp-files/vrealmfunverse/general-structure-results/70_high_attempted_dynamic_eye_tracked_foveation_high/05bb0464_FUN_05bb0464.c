/*
FUNCTION_NAME: FUN_05bb0464
ENTRY_POINT: 05bb0464
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: weak_source_state;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: weak_xr_or_state_hits_1;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_05bb0464(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
                    /* try { // try from 05bb0464 to 05cb047f has its CatchHandler @ 05bb0314 */
                    /* catch() { ... } // from try @ 05bb0460 with catch @ 05bb047c */
                    /* try { // try from 05bb0480 to 05cb0487 has its CatchHandler @ 05bb0490 */
  if (DAT_066d50e0 == (code *)0x0) {
    local_60 = "UnityOpenXR";
    uStack_58 = 0xb;
    local_50 = "FBSetFoveationLevel";
    uStack_48 = 0x13;
    local_40 = DAT_010310c8;
    local_38 = 0x14;
    local_34 = 0;
    DAT_066d50e0 = (code *)thunk_FUN_02b798e4(&local_60);
  }
  (*DAT_066d50e0)(param_1,param_2,param_3,param_4);
  return;
}


