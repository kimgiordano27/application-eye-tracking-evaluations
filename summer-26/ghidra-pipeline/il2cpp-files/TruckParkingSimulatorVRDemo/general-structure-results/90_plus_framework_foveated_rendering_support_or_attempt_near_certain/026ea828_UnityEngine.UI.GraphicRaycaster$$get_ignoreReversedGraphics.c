/*
FUNCTION_NAME: UnityEngine.UI.GraphicRaycaster$$get_ignoreReversedGraphics
ENTRY_POINT: 026ea828
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 112
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ray_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


bool UnityEngine_UI_GraphicRaycaster__get_ignoreReversedGraphics(void)

{
  int iVar1;
  code *pcVar2;
  long in_x12;
  long unaff_x19;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0x1b8);
  uStack0000000000000028 = 0;
  pcStack0000000000000000 = "OculusXRPlugin";
  uStack0000000000000008 = 0xe;
  pcStack0000000000000010 = "GetEyeTrackedFoveatedRenderingEnabled";
  uStack0000000000000018 = 0x25;
  uStack000000000000002c = 0;
  pcVar2 = (code *)thunk_FUN_01269084();
  *(code **)(unaff_x19 + 0x920) = pcVar2;
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


