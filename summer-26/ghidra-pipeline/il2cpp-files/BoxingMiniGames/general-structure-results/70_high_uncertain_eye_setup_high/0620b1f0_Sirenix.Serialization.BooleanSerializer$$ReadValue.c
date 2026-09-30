/*
FUNCTION_NAME: Sirenix.Serialization.BooleanSerializer$$ReadValue
ENTRY_POINT: 0620b1f0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Sirenix_Serialization_BooleanSerializer__ReadValue(code *param_1)

{
  long unaff_x21;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  char *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined1 uStack000000000000006c;
  
  if (param_1 == (code *)0x0) {
    in_stack_00000040 = "OVRPlugin";
    in_stack_00000048 = 9;
    in_stack_00000050 = "ovrp_UpdateInsightPassthroughGeometryTransform";
    in_stack_00000058 = 0x2e;
    in_stack_00000060 = DAT_0164fd00;
    uStack0000000000000068 = 0x48;
    uStack000000000000006c = 0;
    param_1 = (code *)thunk_FUN_036800c0(&stack0x00000040);
    *(code **)(unaff_x21 + 0xe58) = param_1;
  }
  (*param_1)();
  return;
}


