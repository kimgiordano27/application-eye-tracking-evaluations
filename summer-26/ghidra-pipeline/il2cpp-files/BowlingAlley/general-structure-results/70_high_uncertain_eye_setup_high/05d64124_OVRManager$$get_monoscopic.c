/*
FUNCTION_NAME: OVRManager$$get_monoscopic
ENTRY_POINT: 05d64124
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_monoscopic(long *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float fVar7;
  
  fVar3 = ABS(unaff_s8);
  if (ABS(unaff_s8) <= ABS(unaff_s9)) {
    fVar3 = ABS(unaff_s9);
  }
  fVar4 = **(float **)(*param_1 + 0xb8) * 8.0;
  fVar2 = fVar3 * DAT_013a03a0;
  if (fVar3 * DAT_013a03a0 <= fVar4) {
    fVar2 = fVar4;
  }
  if (fVar2 <= ABS(unaff_s9 - unaff_s8)) {
    fVar5 = *(float *)(unaff_x20 + 0xa8);
    fVar6 = *(float *)(unaff_x19 + 0x28);
    fVar7 = *(float *)(unaff_x20 + 0xa0);
    fVar2 = (float)FUN_06bdff00(0);
    fVar4 = fVar7 * fVar2;
    fVar3 = fVar4;
    if (fVar6 - fVar5 < 0.0) {
      fVar3 = -(fVar7 * fVar2);
    }
    fVar3 = fVar5 + fVar3;
    if (ABS(fVar6 - fVar5) <= fVar4) {
      fVar3 = fVar6;
    }
    *(float *)(unaff_x20 + 0xa8) = fVar3;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x18),0);
    uVar1 = 1;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  else {
    uVar1 = 0;
    *(undefined1 *)(unaff_x20 + 0xa4) = 0;
  }
  return uVar1;
}


