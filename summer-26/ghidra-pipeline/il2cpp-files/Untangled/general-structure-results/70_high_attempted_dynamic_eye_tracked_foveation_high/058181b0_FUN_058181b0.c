/*
FUNCTION_NAME: FUN_058181b0
ENTRY_POINT: 058181b0
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


void FUN_058181b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  if (pcRam00000000071c6030 == (code *)0x0) {
    pcStack_60 = "UnityOpenXR";
    uStack_58 = 0xb;
    pcStack_50 = "FBSetFoveationLevel";
    uStack_48 = 0x13;
    uStack_38 = 0x14;
    uStack_40 = DAT_013f55f0;
    uStack_34 = 0;
    pcRam00000000071c6030 = (code *)thunk_FUN_02ef1ac4(&pcStack_60);
  }
  (*pcRam00000000071c6030)(param_1,param_2,param_3,param_4);
  return;
}


