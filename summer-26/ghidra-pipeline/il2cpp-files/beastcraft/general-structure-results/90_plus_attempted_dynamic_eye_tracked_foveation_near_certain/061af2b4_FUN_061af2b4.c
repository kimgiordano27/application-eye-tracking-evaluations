/*
FUNCTION_NAME: FUN_061af2b4
ENTRY_POINT: 061af2b4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 104
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_061af2b4(undefined4 param_1)

{
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000006e95b60 == (code *)0x0) {
    pcStack_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    pcStack_40 = "OculusFoveation_SetUsedApi";
    uStack_38 = 0x1a;
    uStack_30 = DAT_013189e0;
    uStack_28 = 1;
    uStack_24 = 0;
    pcRam0000000006e95b60 = (code *)thunk_FUN_02e78d58(&pcStack_50);
  }
  (*pcRam0000000006e95b60)(param_1);
  return;
}


