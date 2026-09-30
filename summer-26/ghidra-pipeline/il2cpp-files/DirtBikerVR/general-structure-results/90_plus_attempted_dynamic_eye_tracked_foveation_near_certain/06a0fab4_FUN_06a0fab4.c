/*
FUNCTION_NAME: FUN_06a0fab4
ENTRY_POINT: 06a0fab4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_06a0fab4(undefined8 param_1,uint param_2)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 06a0fac4 to 06b0fac7 has its CatchHandler @ 06a0fc64 */
                    /* try { // try from 06a0fac8 to 06b0facb has its CatchHandler @ 06a0fb98 */
                    /* catch() { ... } // from try @ 06a0f9e0 with catch @ 06a0facc
                       try { // try from 06a0facc to 06b0fafb has its CatchHandler @ 06a0f93c */
                    /* catch() { ... } // from try @ 06a0f9f4 with catch @ 06a0fad0 */
  if (DAT_0897f4e0 == (code *)0x0) {
                    /* catch() { ... } // from try @ 06a0f9c0 with catch @ 06a0fad4 */
                    /* catch() { ... } // from try @ 06a0f9b4 with catch @ 06a0fad8 */
                    /* catch() { ... } // from try @ 06a0f9a4 with catch @ 06a0fadc */
                    /* catch() { ... } // from try @ 06a0fa2c with catch @ 06a0fae0 */
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "MetaSetFoveationEyeTracked";
    uStack_38 = 0x1a;
                    /* try { // try from 06a0fafc to 06b0fb2f has its CatchHandler @ 06a0fb84 */
    local_30 = DAT_015c48d8;
    local_28 = 0xc;
    local_24 = 0;
    DAT_0897f4e0 = (code *)thunk_FUN_03ac775c(&local_50);
  }
  (*DAT_0897f4e0)(param_1,param_2 & 1);
  return;
}


