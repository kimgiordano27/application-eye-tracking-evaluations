/*
FUNCTION_NAME: Unity.Services.Vivox.vx_sdk_config_t$$get_pf_request_permission_for_network
ENTRY_POINT: 0799eaf4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_sdk_config_t__get_pf_request_permission_for_network(void)

{
  code *pcVar1;
  long unaff_x21;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000000 = "VivoxNative";
  uStack0000000000000008 = 0xb;
  pcStack0000000000000010 =
       "CSharp_UnityfServicesfVivox_vx_evt_sessiongroup_updated_t_loop_buffer_capacity_set___";
  uStack0000000000000018 = 0x55;
  uStack0000000000000020 = DAT_015c48d8;
  uStack0000000000000028 = 0xc;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03ac775c();
  *(code **)(unaff_x21 + 0xb8) = pcVar1;
  (*pcVar1)();
  return;
}


