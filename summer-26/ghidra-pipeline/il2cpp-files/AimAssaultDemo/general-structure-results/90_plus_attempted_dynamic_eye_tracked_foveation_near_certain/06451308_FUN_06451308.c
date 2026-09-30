/*
FUNCTION_NAME: FUN_06451308
ENTRY_POINT: 06451308
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_06451308(undefined8 param_1,uint param_2)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0825eb90 == (code *)0x0) {
                    /* try { // try from 0645132c to 0655139b has its CatchHandler @ 06451868 */
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "MetaSetFoveationEyeTracked";
    uStack_38 = 0x1a;
    local_28 = 0xc;
    local_30 = DAT_0158ade8;
    local_24 = 0;
    DAT_0825eb90 = (code *)thunk_FUN_03778b88(&local_50);
  }
  (*DAT_0825eb90)(param_1,param_2 & 1);
  return;
}


