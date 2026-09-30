/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.NumericConvertInstruction$$ToString
ENTRY_POINT: 034f7210
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 96
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void System_Linq_Expressions_Interpreter_NumericConvertInstruction__ToString(void)

{
  code *pcVar1;
  long unaff_x20;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_GetFoveationEyeTracked";
  uStack0000000000000018 = 0x1b;
  uStack0000000000000028 = 8;
  uStack0000000000000020 = DAT_00baead0;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_01de2a74();
  *(code **)(unaff_x20 + 0x1a0) = pcVar1;
  (*pcVar1)();
  return;
}


