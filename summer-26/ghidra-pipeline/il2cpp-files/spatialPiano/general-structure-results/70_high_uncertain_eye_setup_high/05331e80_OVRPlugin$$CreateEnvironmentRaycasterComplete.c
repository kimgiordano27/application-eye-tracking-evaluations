/*
FUNCTION_NAME: OVRPlugin$$CreateEnvironmentRaycasterComplete
ENTRY_POINT: 05331e80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateEnvironmentRaycasterComplete(undefined8 param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  undefined1 *puVar1;
  code *unaff_x21;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x330) = param_1;
  memset(&stack0x00000000,0,0x2c0);
  puVar1 = (undefined1 *)0x0;
  if (unaff_x20 != 0) {
    FUN_02e51ad0();
    unaff_x21 = *(code **)(unaff_x22 + 0x330);
    puVar1 = (undefined1 *)register0x00000008;
  }
  (*unaff_x21)(unaff_w19,puVar1);
  return;
}


