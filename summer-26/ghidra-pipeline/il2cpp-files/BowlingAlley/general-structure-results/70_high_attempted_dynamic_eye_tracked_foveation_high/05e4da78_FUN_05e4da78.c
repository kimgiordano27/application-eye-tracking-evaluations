/*
FUNCTION_NAME: FUN_05e4da78
ENTRY_POINT: 05e4da78
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: attempted_dynamic_eye_tracked_foveation_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: weak_source_state;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: weak_xr_or_state_hits_1;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_05e4da78(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_076db038 == (code *)0x0) {
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "FBGetFoveationDynamic";
    uStack_38 = 0x15;
    local_28 = 8;
    local_30 = DAT_0139df28;
    local_24 = 0;
    DAT_076db038 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality
                                     (&local_50);
  }
  (*DAT_076db038)(param_1);
  return;
}


