/*
FUNCTION_NAME: UnityEngine.GUI$$DoButton
ENTRY_POINT: 0401e888
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 91
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_GUI__DoButton(void)

{
  code *pcVar1;
  long unaff_x19;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000010 = "OculusFoveation_GetUsedApi";
  uStack0000000000000018 = 0x1a;
  uStack0000000000000020 = DAT_00c57ec0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_02094a00();
  *(code **)(unaff_x19 + 0x6b8) = pcVar1;
  (*pcVar1)();
  return;
}


