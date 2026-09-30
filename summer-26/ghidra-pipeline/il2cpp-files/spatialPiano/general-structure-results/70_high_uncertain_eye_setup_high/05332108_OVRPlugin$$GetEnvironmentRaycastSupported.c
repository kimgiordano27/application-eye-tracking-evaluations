/*
FUNCTION_NAME: OVRPlugin$$GetEnvironmentRaycastSupported
ENTRY_POINT: 05332108
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetEnvironmentRaycastSupported(undefined8 param_1)

{
  code *pcVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_02f454a0();
  *(code **)(unaff_x21 + 0x350) = pcVar1;
  (*pcVar1)(unaff_w20);
  return;
}


