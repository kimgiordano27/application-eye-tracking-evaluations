/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 05f3a5b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  code *in_x10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  
  uStack0000000000000068 = in_stack_00000008;
  uStack0000000000000060 = in_stack_00000000;
  uStack0000000000000078 = in_stack_00000018;
  uStack0000000000000070 = in_stack_00000010;
  uStack0000000000000090 = param_2;
  uStack00000000000000a0 = param_1;
  uVar1 = (*in_x10)();
  return uVar1 & 1;
}


