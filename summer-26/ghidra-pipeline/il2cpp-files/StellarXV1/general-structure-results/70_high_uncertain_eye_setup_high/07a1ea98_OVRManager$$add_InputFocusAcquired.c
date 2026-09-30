/*
FUNCTION_NAME: OVRManager$$add_InputFocusAcquired
ENTRY_POINT: 07a1ea98
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusAcquired(undefined4 param_1,float param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(unaff_x20 + 0x18);
  fVar2 = (float)FUN_089b9218(param_1,param_2,fVar4,*(undefined4 *)(unaff_x20 + 0x1c));
  param_2 = param_2 * DAT_01aec2c8;
  FUN_089b98cc(fVar2 * DAT_01aec2c8,param_2,fVar4 * DAT_01aec2c8,0);
  param_2 = param_2 - (float)(int)(param_2 / 360.0) * 360.0;
  fVar2 = 360.0;
  if (param_2 <= 360.0) {
    fVar2 = param_2;
  }
  fVar4 = 0.0;
  if (0.0 <= param_2) {
    fVar4 = fVar2;
  }
  uVar3 = 0x3f800000;
  if (180.0 <= fVar4) {
    uVar3 = 0xbf800000;
  }
  FUN_07a1eb78(uVar3);
  uVar1 = FUN_089cd004();
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x58),uVar1);
  return;
}


