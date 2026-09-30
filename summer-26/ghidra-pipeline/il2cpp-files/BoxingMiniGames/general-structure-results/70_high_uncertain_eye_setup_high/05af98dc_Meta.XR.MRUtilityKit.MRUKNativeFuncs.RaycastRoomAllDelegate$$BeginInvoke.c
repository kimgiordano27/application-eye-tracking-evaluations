/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastRoomAllDelegate$$BeginInvoke
ENTRY_POINT: 05af98dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastRoomAllDelegate__BeginInvoke
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 in_d4;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  
  uStack0000000000000008 = param_3[1];
  uStack0000000000000000 = *param_3;
  uStack0000000000000018 = param_3[3];
  uStack0000000000000010 = param_3[2];
  uStack0000000000000028 = param_3[5];
  uStack0000000000000020 = param_3[4];
  uStack0000000000000098 = in_stack_00000038;
  uStack0000000000000090 = in_stack_00000030;
  uStack0000000000000060 = uStack0000000000000000;
  uStack0000000000000068 = uStack0000000000000008;
  uStack0000000000000070 = uStack0000000000000010;
  uStack0000000000000078 = uStack0000000000000018;
  uStack0000000000000080 = uStack0000000000000020;
  uStack0000000000000088 = uStack0000000000000028;
  uStack00000000000000a0 = in_d4;
  uStack00000000000000b0 = param_2;
  uVar1 = (**(code **)(param_1 + 0x1b8))();
  return uVar1 & 1;
}


