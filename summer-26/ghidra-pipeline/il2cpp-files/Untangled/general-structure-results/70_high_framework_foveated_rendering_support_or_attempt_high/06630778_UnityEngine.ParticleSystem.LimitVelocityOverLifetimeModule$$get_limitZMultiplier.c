/*
FUNCTION_NAME: UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule$$get_limitZMultiplier
ENTRY_POINT: 06630778
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_ParticleSystem_LimitVelocityOverLifetimeModule__get_limitZMultiplier
               (long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0xfb9;
  uStack0000000000000008 = 0xb;
  pcStack0000000000000010 = "OculusFoveation_SetUsedApi";
  uStack0000000000000018 = 0x1a;
  uStack0000000000000028 = 1;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_02ef1ac4();
  *(code **)(unaff_x20 + 0x2f8) = pcVar1;
  (*pcVar1)(unaff_w19);
  return;
}


