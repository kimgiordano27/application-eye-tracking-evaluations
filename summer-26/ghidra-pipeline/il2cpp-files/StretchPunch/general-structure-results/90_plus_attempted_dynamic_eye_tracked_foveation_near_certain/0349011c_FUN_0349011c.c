/*
FUNCTION_NAME: FUN_0349011c
ENTRY_POINT: 0349011c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_0349011c(undefined8 param_1,uint param_2)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_044a72d8 == (code *)0x0) {
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "MetaSetFoveationEyeTracked";
    uStack_38 = 0x1a;
    local_28 = 0xc;
    local_30 = DAT_00baec28;
    local_24 = 0;
    DAT_044a72d8 = (code *)thunk_FUN_01de2a74(&local_50);
  }
  (*DAT_044a72d8)(param_1,param_2 & 1);
  return;
}


