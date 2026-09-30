/*
FUNCTION_NAME: FUN_061af9b0
ENTRY_POINT: 061af9b0
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


void FUN_061af9b0(void)

{
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (pcRam0000000006e95b68 == (code *)0x0) {
    pcStack_40 = "UnityOpenXR";
    uStack_38 = 0xb;
    pcStack_30 = "OculusFoveation_GetUsedApi";
    uStack_28 = 0x1a;
    uStack_20 = DAT_013189e0;
    uStack_18 = 0;
    uStack_14 = 0;
    pcRam0000000006e95b68 = (code *)thunk_FUN_02e78d58(&pcStack_40);
  }
  (*pcRam0000000006e95b68)();
  return;
}


