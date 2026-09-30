/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBufferExtensions$$SwitchOutOfFastMemory
ENTRY_POINT: 07bd1754
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_permission_setup;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBufferExtensions__SwitchOutOfFastMemory(undefined8 param_1)

{
  code *pcVar1;
  uint unaff_w19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000008 = 0xb;
  pcStack0000000000000010 = "OculusFoveation_SetHasEyeTrackingPermissions";
  uStack0000000000000018 = 0x2c;
  uStack0000000000000020 = DAT_015c48d8;
  uStack0000000000000028 = 4;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  pcVar1 = (code *)thunk_FUN_03ac775c();
  *(code **)(unaff_x20 + 0xa60) = pcVar1;
  (*pcVar1)(unaff_w19 & 1);
  return;
}


