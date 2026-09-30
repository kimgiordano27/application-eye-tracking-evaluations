/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStatePose
ENTRY_POINT: 060458d8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_GetActionStatePose(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long in_x10;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  long lStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000010 = in_x10 + 0x32b;
  uStack0000000000000008 = 0x11;
  uStack0000000000000018 = 0x1b;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_0322f404();
  *(code **)(unaff_x20 + 0x288) = pcVar1;
  (*pcVar1)();
  return;
}


