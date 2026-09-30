/*
FUNCTION_NAME: OVRPlugin.OVRP_1_111_0$$ovrp_CreateEnvironmentRaycasterComplete
ENTRY_POINT: 0578ace4
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_111_0__ovrp_CreateEnvironmentRaycasterComplete
               (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_02ef1ac4();
  *(code **)(unaff_x20 + 0xa0) = pcVar1;
  (*pcVar1)();
  return;
}


