/*
FUNCTION_NAME: OVRManager$$set_cpuLevel
ENTRY_POINT: 05305528
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_cpuLevel(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float unaff_s8;
  
  *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
  fVar4 = ABS(unaff_s8);
  if (ABS(unaff_s8) <= 0.0) {
    fVar4 = 0.0;
  }
  fVar6 = **(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) * 8.0;
  fVar3 = fVar4 * DAT_011b0568;
  if (fVar4 * DAT_011b0568 <= fVar6) {
    fVar3 = fVar6;
  }
  if (ABS(0.0 - unaff_s8) < fVar3) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_060ed000(*(long *)(unaff_x19 + 0x30),1,0);
    lVar1 = *(long *)(unaff_x19 + 0x30);
    if (lVar1 != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x60);
      *(undefined4 *)(lVar1 + 0x7c) = 0x3f800000;
      fVar4 = *(float *)(lVar1 + 0x74);
      if (unaff_s8 <= *(float *)(lVar1 + 0x74)) {
        fVar4 = unaff_s8;
      }
      *(float *)(lVar1 + 0x74) = fVar4;
      if (lVar2 != 0) {
        uVar5 = (**(code **)(lVar2 + 0x18))
                          (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        *(undefined4 *)(unaff_x19 + 0x78) = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


