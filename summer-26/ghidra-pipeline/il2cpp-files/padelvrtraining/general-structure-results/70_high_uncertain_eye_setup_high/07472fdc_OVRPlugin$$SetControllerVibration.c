/*
FUNCTION_NAME: OVRPlugin$$SetControllerVibration
ENTRY_POINT: 07472fdc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074730a4) */

float OVRPlugin__SetControllerVibration(void)

{
  long unaff_x20;
  long unaff_x23;
  float fVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000010;
  
  fVar1 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar1 <= *(float *)(unaff_x23 + 0x76c)) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    fVar1 = **(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
  }
  else {
    fVar1 = unaff_s11 / fVar1;
  }
  uVar3 = FUN_07471eb0();
  fVar2 = (float)FUN_03e64c4c(uVar3,0);
  fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar4 = (ulong)(uint)fVar1;
  if ((fVar5 < fVar2) && (uVar4 = uVar3, ABS(fVar2 - fVar5) < ABS(360.0 - fVar2))) {
    uVar4 = FUN_07471f5c();
  }
  fVar1 = (float)FUN_07472170();
  return in_stack_00000010._4_4_ + (float)uVar4 * fVar1;
}


