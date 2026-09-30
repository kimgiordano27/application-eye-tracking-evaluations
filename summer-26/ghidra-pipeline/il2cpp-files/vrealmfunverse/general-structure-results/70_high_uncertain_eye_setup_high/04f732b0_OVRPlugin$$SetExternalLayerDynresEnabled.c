/*
FUNCTION_NAME: OVRPlugin$$SetExternalLayerDynresEnabled
ENTRY_POINT: 04f732b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetExternalLayerDynresEnabled(float param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float fVar6;
  
  if (param_1 <= ABS(unaff_s8 - unaff_s9)) {
    fVar4 = *(float *)(unaff_x20 + 0xa8);
    fVar5 = *(float *)(unaff_x19 + 0x28);
    fVar6 = *(float *)(unaff_x20 + 0xa0);
    fVar2 = (float)FUN_05c98180(0);
    fVar3 = fVar6 * fVar2;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    fVar2 = -(fVar6 * fVar2);
    if (0.0 <= fVar5 - fVar4) {
      fVar2 = fVar3;
    }
    fVar2 = fVar4 + fVar2;
    if (ABS(fVar5 - fVar4) <= fVar3) {
      fVar2 = fVar5;
    }
    *(float *)(unaff_x20 + 0xa8) = fVar2;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),0);
    uVar1 = 1;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  else {
    uVar1 = 0;
    *(undefined1 *)(unaff_x20 + 0xa4) = 0;
  }
  return uVar1;
}


