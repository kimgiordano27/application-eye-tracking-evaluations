/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_GetPassthroughCapabilities
ENTRY_POINT: 056a571c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_85_0__ovrp_GetPassthroughCapabilities(code *param_1)

{
  undefined4 unaff_w20;
  long unaff_x22;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  
  if (param_1 == (code *)0x0) {
    in_stack_00000030 = "ovravatar2";
    in_stack_00000038 = 10;
    in_stack_00000040 = "ovrAvatar2Entity_Experimental_SendEventWithTransformPayload";
    in_stack_00000048 = 0x3b;
    in_stack_00000050 = DAT_010fc3f0;
    uStack0000000000000058 = 0x34;
    uStack000000000000005c = 0;
    param_1 = (code *)thunk_FUN_02dd33e4(&stack0x00000030);
    *(code **)(unaff_x22 + 0x9c8) = param_1;
  }
  (*param_1)(unaff_w20);
  return;
}


