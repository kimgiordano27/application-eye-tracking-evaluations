/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 05d7b484
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__UpdateNodePhysicsPoses(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  long unaff_x19;
  
  bVar2 = (*(code *)*param_1)();
  lVar1 = 0x28;
  if (*(byte *)(unaff_x19 + 0x40) != (bVar2 & 1)) {
    lVar1 = 0x38;
  }
  return *(undefined8 *)(unaff_x19 + lVar1);
}


