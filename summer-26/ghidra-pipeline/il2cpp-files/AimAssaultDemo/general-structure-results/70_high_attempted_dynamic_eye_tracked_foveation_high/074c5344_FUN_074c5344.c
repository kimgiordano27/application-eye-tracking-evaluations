/*
FUNCTION_NAME: FUN_074c5344
ENTRY_POINT: 074c5344
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: weak_source_state;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: weak_xr_or_state_hits_1;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_074c5344(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_0826a440 == (code *)0x0) {
    local_60 = "UnityOpenXR";
    uStack_58 = 0xb;
    local_50 = "FBSetFoveationLevel";
    uStack_48 = 0x13;
    local_38 = 0x14;
    local_40 = DAT_0158ade8;
    local_34 = 0;
    DAT_0826a440 = (code *)thunk_FUN_03778b88(&local_60);
  }
  (*DAT_0826a440)(param_1,param_2,param_3,param_4);
  return;
}


