/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 06ab9734
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06ab978c) */

void OVRPlugin__EnqueueSubmitLayer(float param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  
  param_1 = unaff_s11 * param_1;
  lVar2 = *(long *)(unaff_x19 + 0x88);
  fVar3 = param_1;
  if (unaff_s8 < param_1) {
    fVar3 = unaff_s8;
  }
  if (param_1 < 0.0) {
    fVar3 = unaff_s9;
  }
  *(float *)(unaff_x19 + 0x6c) = unaff_s10 + (unaff_s12 - unaff_s10) * fVar3;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  fVar4 = *(float *)(unaff_x19 + 0x70);
  fVar5 = *(float *)(unaff_x19 + 0x44);
  cVar1 = *(char *)(unaff_x19 + 100);
  fVar3 = (float)(**(code **)(lVar2 + 0x18))
                           (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  fVar5 = fVar5 * fVar3;
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    fVar3 = 1.0;
  }
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(unaff_x19 + 0x70) = fVar4 + (fVar3 - fVar4) * fVar5;
  FUN_06ab99c4();
  return;
}


