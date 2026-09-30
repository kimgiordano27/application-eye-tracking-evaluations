/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 0636ba60
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition(long param_1)

{
  return *(byte *)(param_1 + 2) >> 4 & 1;
}


