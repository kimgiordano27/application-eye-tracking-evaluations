/*
FUNCTION_NAME: OVRPlugin$$IsOrientationTracked
ENTRY_POINT: 05d781cc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d78278) */

void OVRPlugin__IsOrientationTracked(void)

{
  char cVar1;
  long lVar2;
  code *in_x9;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s10;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(unaff_x19 + 0x74);
  fVar3 = (float)(*in_x9)();
  fVar3 = unaff_s8 * fVar3;
  lVar2 = *(long *)(unaff_x19 + 0x88);
  fVar4 = fVar3;
  if (1.0 < fVar3) {
    fVar4 = 1.0;
  }
  if (fVar3 < 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(unaff_x19 + 0x68) = unaff_s10 + (fVar5 - unaff_s10) * fVar4;
  if (lVar2 != 0) {
    fVar5 = *(float *)(unaff_x19 + 0x6c);
    fVar3 = *(float *)(unaff_x19 + 0x44);
    fVar6 = *(float *)(unaff_x19 + 0x78);
    fVar4 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    fVar3 = fVar3 * fVar4;
    lVar2 = *(long *)(unaff_x19 + 0x88);
    fVar4 = fVar3;
    if (1.0 < fVar3) {
      fVar4 = 1.0;
    }
    if (fVar3 < 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(unaff_x19 + 0x6c) = fVar5 + (fVar6 - fVar5) * fVar4;
    if (lVar2 != 0) {
      fVar5 = *(float *)(unaff_x19 + 0x70);
      fVar3 = *(float *)(unaff_x19 + 0x44);
      cVar1 = *(char *)(unaff_x19 + 100);
      fVar4 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      fVar3 = fVar3 * fVar4;
      fVar4 = 0.0;
      if (cVar1 != '\0') {
        fVar4 = 1.0;
      }
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      *(float *)(unaff_x19 + 0x70) = fVar5 + (fVar4 - fVar5) * fVar3;
      FUN_05d784ac();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


