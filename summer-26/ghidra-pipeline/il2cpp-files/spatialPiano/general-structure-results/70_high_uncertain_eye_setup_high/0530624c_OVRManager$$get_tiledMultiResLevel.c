/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResLevel
ENTRY_POINT: 0530624c
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


void OVRManager__get_tiledMultiResLevel(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  fVar4 = *(float *)(unaff_x20 + 0x14);
  fVar5 = *(float *)(unaff_x20 + 0x18);
  fVar2 = (float)FUN_060df69c(*(undefined4 *)(unaff_x20 + 0x10),fVar4,fVar5,
                              *(undefined4 *)(unaff_x20 + 0x1c),0);
  fVar4 = fVar4 * DAT_011b0124;
  FUN_060dfd50(fVar2 * DAT_011b0124,fVar4,fVar5 * DAT_011b0124,0);
  fVar4 = fVar4 - (float)(int)(fVar4 / 360.0) * 360.0;
  fVar2 = 360.0;
  if (fVar4 <= 360.0) {
    fVar2 = fVar4;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar2;
  }
  uVar3 = 0x3f800000;
  if (180.0 <= fVar5) {
    uVar3 = 0xbf800000;
  }
  FUN_0530630c(uVar3);
  uVar1 = FUN_060f30c8();
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  return;
}


