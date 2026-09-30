/*
FUNCTION_NAME: FUN_0520468c
ENTRY_POINT: 0520468c
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


void FUN_0520468c(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 05204698 to 053046ab has its CatchHandler @ 05204b08 */
  if (DAT_06b7c260 == (code *)0x0) {
                    /* try { // try from 052046c0 to 053046d7 has its CatchHandler @ 05204adc */
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "MetaGetFoveationEyeTracked";
    uStack_38 = 0x1a;
    local_28 = 8;
    local_30 = DAT_01206f70;
                    /* try { // try from 052046e0 to 053046ef has its CatchHandler @ 05204af0 */
    local_24 = 0;
    DAT_06b7c260 = (code *)thunk_FUN_02d9d7f0(&local_50);
  }
  local_50 = (char *)((ulong)local_50 & 0xffffffff00000000);
  (*DAT_06b7c260)(&local_50);
                    /* try { // try from 05204700 to 0530470b has its CatchHandler @ 05204aec */
  *(bool *)param_1 = (int)local_50 != 0;
                    /* try { // try from 05204710 to 0530471f has its CatchHandler @ 05204ae4 */
  return;
}


