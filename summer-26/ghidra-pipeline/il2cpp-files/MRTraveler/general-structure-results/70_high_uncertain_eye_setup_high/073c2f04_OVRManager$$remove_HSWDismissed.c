/*
FUNCTION_NAME: OVRManager$$remove_HSWDismissed
ENTRY_POINT: 073c2f04
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HSWDismissed(long *param_1)

{
  long lVar1;
  long in_x9;
  long unaff_x19;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  
  fVar3 = ABS(unaff_s8);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar3 = fVar3 * *(float *)(in_x9 + 0x840);
  fVar4 = **(float **)(*param_1 + 0xb8) * 8.0;
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  if (ABS(0.0 - unaff_s8) < fVar3) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_085db068(*(long *)(unaff_x19 + 0x30),1,0);
    lVar1 = *(long *)(unaff_x19 + 0x30);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x7c) = 0x3f800000;
      fVar3 = *(float *)(lVar1 + 0x74);
      if (unaff_s8 <= *(float *)(lVar1 + 0x74)) {
        fVar3 = unaff_s8;
      }
      *(float *)(lVar1 + 0x74) = fVar3;
      lVar1 = *(long *)(unaff_x19 + 0x60);
      if (lVar1 != 0) {
        uVar2 = (**(code **)(lVar1 + 0x18))
                          (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        *(undefined4 *)(unaff_x19 + 0x78) = uVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


