/*
FUNCTION_NAME: FUN_06a106ac
ENTRY_POINT: 06a106ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: weak_source_state;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: weak_xr_or_state_hits_1;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_06a106ac(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 06a106c0 to 06b106cf has its CatchHandler @ 06a106d0 */
  if (DAT_0897f510 == (code *)0x0) {
                    /* catch() { ... } // from try @ 06a10634 with catch @ 06a106d0
                       catch() { ... } // from try @ 06a106c0 with catch @ 06a106d0 */
                    /* try { // try from 06a106d4 to 06b106d7 has its CatchHandler @ 06a106e0 */
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
                    /* try { // try from 06a106d8 to 06b106e3 has its CatchHandler @ 06a1043c */
                    /* catch() { ... } // from try @ 06a106d4 with catch @ 06a106e0 */
    local_40 = "FBGetFoveationLevel";
    uStack_38 = 0x13;
    local_30 = DAT_015c48d8;
    local_28 = 8;
    local_24 = 0;
    DAT_0897f510 = (code *)thunk_FUN_03ac775c(&local_50);
  }
  (*DAT_0897f510)(param_1);
  return;
}


