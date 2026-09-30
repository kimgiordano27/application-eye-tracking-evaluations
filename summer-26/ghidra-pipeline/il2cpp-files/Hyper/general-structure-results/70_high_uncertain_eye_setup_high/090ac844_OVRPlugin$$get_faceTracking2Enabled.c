/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 090ac844
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_faceTracking2Enabled(void)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
  float unaff_s12;
  float fVar5;
  float fVar6;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  pfVar1 = *(float **)(*unaff_x21 + 0xb8);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar4 = pfVar1[2];
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar6 = unaff_s12 - (fStack0000000000000024 + fVar6);
  in_stack_00000018 = in_stack_00000018 - (in_stack_00000028 + fVar5);
  fStack0000000000000020 = fStack0000000000000020 - (in_stack_00000010._4_4_ + fVar4);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar4 = unaff_s10 * fStack0000000000000020 + unaff_s15 * in_stack_00000018 + unaff_s9 * fVar6;
    in_stack_00000018 = in_stack_00000018 - (unaff_s15 * fVar4) / unaff_s8;
    fVar6 = fVar6 - (unaff_s9 * fVar4) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar4) / unaff_s8;
  }
  if (*(char *)(unaff_x26 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x26 + 0x3e6) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar4 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               in_stack_00000018 * in_stack_00000018 + fVar6 * fVar6);
  if (fVar4 <= *(float *)(unaff_x25 + 0xc4)) {
    if (*(char *)(unaff_x22 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x22 + 999) = 1;
    }
    in_stack_00000018 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    in_stack_00000018 = in_stack_00000018 / fVar4;
  }
  fVar6 = (float)FUN_090ab800();
  fVar2 = (float)FUN_0901abf4(0);
  fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  fVar4 = 360.0;
  if (fVar2 <= 360.0) {
    fVar4 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar4;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar4 < fVar3) && (in_stack_00000018 = fVar6, ABS(fVar3 - fVar4) < ABS(360.0 - fVar3))) {
      in_stack_00000018 = (float)FUN_090ab8ac();
    }
    fVar4 = (float)FUN_090abac0();
    return in_stack_00000028 + fVar5 + in_stack_00000018 * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


