/*
FUNCTION_NAME: OVRManager$$set_tiledMultiResLevel
ENTRY_POINT: 0530629c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_tiledMultiResLevel(float param_1,float param_2)

{
  undefined8 uVar1;
  float in_w8;
  long unaff_x19;
  float fVar2;
  undefined4 uVar3;
  
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  fVar2 = 0.0;
  if (0.0 <= param_2) {
    fVar2 = param_1;
  }
  uVar3 = 0x3f800000;
  if (in_w8 <= fVar2) {
    uVar3 = 0xbf800000;
  }
  FUN_0530630c(uVar3);
  uVar1 = FUN_060f30c8();
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  return;
}


