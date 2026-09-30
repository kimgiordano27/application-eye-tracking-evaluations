/*
FUNCTION_NAME: FUN_05bb03e8
ENTRY_POINT: 05bb03e8
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


void FUN_05bb03e8(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 05bb03f0 to 05cb03ff has its CatchHandler @ 05bb0434 */
                    /* try { // try from 05bb0400 to 05cb0423 has its CatchHandler @ 05bb0314 */
  if (DAT_066d50e8 == (code *)0x0) {
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
                    /* try { // try from 05bb0424 to 05cb0427 has its CatchHandler @ 05bb0444 */
                    /* try { // try from 05bb0428 to 05cb042b has its CatchHandler @ 05bb0440 */
    local_40 = "FBGetFoveationLevel";
    uStack_38 = 0x13;
                    /* try { // try from 05bb042c to 05cb042f has its CatchHandler @ 05bb043c */
                    /* try { // try from 05bb0430 to 05cb0433 has its CatchHandler @ 05bb0438 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05bb03f0 with catch @ 05bb0434
                       try { // try from 05bb0434 to 05cb045f has its CatchHandler @ 05bb0314 */
    local_30 = DAT_010310c8;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05bb0430 with catch @ 05bb0438
                        */
    local_28 = 8;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05bb03cc with catch @ 05bb043c
                       catch(type#1 @ 05fbf508) { ... } // from try @ 05bb042c with catch @ 05bb043c
                        */
    local_24 = 0;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05bb03b8 with catch @ 05bb0440
                       catch(type#1 @ 05fbf508) { ... } // from try @ 05bb0428 with catch @ 05bb0440
                        */
    DAT_066d50e8 = (code *)thunk_FUN_02b798e4(&local_50);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05bb03a4 with catch @ 05bb0444
                       catch(type#1 @ 05fbf508) { ... } // from try @ 05bb0424 with catch @ 05bb0444
                        */
  }
  (*DAT_066d50e8)(param_1);
                    /* try { // try from 05bb0460 to 05cb0463 has its CatchHandler @ 05bb047c */
  return;
}


