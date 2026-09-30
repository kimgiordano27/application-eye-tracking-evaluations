/*
FUNCTION_NAME: FUN_0520476c
ENTRY_POINT: 0520476c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_0520476c(undefined8 param_1,uint param_2)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 05204770 to 05304777 has its CatchHandler @ 05204b1c */
                    /* try { // try from 0520477c to 0530478b has its CatchHandler @ 05204b10 */
  if (DAT_06b7c258 == (code *)0x0) {
                    /* try { // try from 0520478c to 053047a7 has its CatchHandler @ 05204b0c */
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "MetaSetFoveationEyeTracked";
    uStack_38 = 0x1a;
    local_28 = 0xc;
    local_30 = DAT_01206f70;
    local_24 = 0;
    DAT_06b7c258 = (code *)thunk_FUN_02d9d7f0(&local_50);
  }
  (*DAT_06b7c258)(param_1,param_2 & 1);
  return;
}


