/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 05ab1134
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long *unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  
  uStack0000000000000020 = *(undefined8 *)(param_3 + 0x20);
  uStack00000000000000b0 = in_stack_00000050;
  uStack0000000000000098 = in_stack_00000038;
  uStack0000000000000090 = in_stack_00000030;
  uStack00000000000000a8 = in_stack_00000048;
  uStack00000000000000a0 = in_stack_00000040;
  uStack0000000000000000 = param_1;
  uStack0000000000000010 = param_2;
  uStack0000000000000060 = param_1;
  uStack0000000000000070 = param_2;
  uStack0000000000000080 = uStack0000000000000020;
  uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
  return uVar1 & 1;
}


