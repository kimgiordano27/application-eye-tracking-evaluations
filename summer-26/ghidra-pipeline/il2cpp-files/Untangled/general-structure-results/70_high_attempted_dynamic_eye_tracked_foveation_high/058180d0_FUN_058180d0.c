/*
FUNCTION_NAME: FUN_058180d0
ENTRY_POINT: 058180d0
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: weak_source_state;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: weak_xr_or_state_hits_1;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_058180d0(undefined8 param_1)

{
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam00000000071c6038 == (code *)0x0) {
    pcStack_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    pcStack_40 = "FBGetFoveationLevel";
    uStack_38 = 0x13;
    uStack_28 = 8;
    uStack_30 = DAT_013f55f0;
    uStack_24 = 0;
    pcRam00000000071c6038 = (code *)thunk_FUN_02ef1ac4(&pcStack_50);
  }
  (*pcRam00000000071c6038)(param_1);
  return;
}


