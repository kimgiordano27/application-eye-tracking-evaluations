/*
FUNCTION_NAME: FUN_086d5b1c
ENTRY_POINT: 086d5b1c
PROGRAM: cac-libil2cpp.so
SCORE: 104
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_086d5b1c(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0969c040 == (code *)0x0) {
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "OculusFoveation_SetUsedApi";
    uStack_38 = 0x1a;
    local_30 = DAT_018c3858;
    local_28 = 1;
    local_24 = 0;
    DAT_0969c040 = (code *)thunk_FUN_03f4e92c(&local_50);
  }
  (*DAT_0969c040)(param_1);
  return;
}


