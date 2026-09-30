/*
FUNCTION_NAME: OVRPlugin$$SetDesiredEyeTextureFormat
ENTRY_POINT: 07a39764
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetDesiredEyeTextureFormat(float *param_1)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x20;
  long unaff_x21;
  long *plVar3;
  long unaff_x22;
  long *unaff_x23;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar6;
  float unaff_s12;
  float unaff_s13;
  float fVar7;
  float unaff_s14;
  float fVar8;
  float unaff_s15;
  float fVar9;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  plVar3 = *(long **)(unaff_x21 + 0xd60);
  fStack0000000000000014 = unaff_s14;
  fStack0000000000000018 = unaff_s13;
  fStack000000000000001c = unaff_s12;
  if (*param_1 <= unaff_s8) {
    fVar6 = (unaff_s11 - unaff_s14) * unaff_s10 +
            (unaff_s13 - in_stack_00000028) * unaff_s15 +
            (unaff_s12 - in_stack_00000020._4_4_) * unaff_s9;
    fVar7 = (unaff_s15 * fVar6) / unaff_s8;
    fVar8 = (unaff_s9 * fVar6) / unaff_s8;
    fVar6 = (unaff_s10 * fVar6) / unaff_s8;
  }
  else {
    if (*(char *)(unaff_x22 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x22 + 0x4f1) = 1;
    }
    pfVar2 = *(float **)(*plVar3 + 0xb8);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  fVar4 = (float)FUN_07a38d70();
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  fStack000000000000002c = unaff_s15;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar9 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
  if (fVar4 < fVar9) {
    if (DAT_098854e7 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e7 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (fVar9 <= DAT_01aecf88) {
      if (*(char *)(unaff_x22 + 0x4f1) == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        *(undefined1 *)(unaff_x22 + 0x4f1) = 1;
      }
      pfVar2 = *(float **)(*plVar3 + 0xb8);
      fVar7 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar6 = pfVar2[2];
    }
    else {
      fVar7 = fVar7 / fVar9;
      fVar8 = fVar8 / fVar9;
      fVar6 = fVar6 / fVar9;
    }
    fVar7 = fVar4 * fVar7;
    fVar8 = fVar4 * fVar8;
    fVar6 = fVar4 * fVar6;
  }
  if (unaff_s10 * fVar6 + fStack000000000000002c * fVar7 + unaff_s9 * fVar8 < 0.0) {
    if (*(char *)(unaff_x22 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x22 + 0x4f1) = 1;
    }
    pfVar2 = *(float **)(*plVar3 + 0xb8);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar6 = pfVar2[2];
  }
  if (DAT_098854e6 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_098854e6 = '\x01';
  }
  fVar4 = fStack000000000000001c - (in_stack_00000020._4_4_ + fVar8);
  fVar8 = fStack0000000000000018 - (in_stack_00000028 + fVar7);
  fVar6 = unaff_s11 - (fStack0000000000000014 + fVar6);
  if (**(float **)(*unaff_x23 + 0xb8) <= unaff_s8) {
    fVar9 = unaff_s10 * fVar6 + fStack000000000000002c * fVar8 + unaff_s9 * fVar4;
    fVar8 = fVar8 - (fStack000000000000002c * fVar9) / unaff_s8;
    fVar4 = fVar4 - (unaff_s9 * fVar9) / unaff_s8;
    fVar6 = fVar6 - (unaff_s10 * fVar9) / unaff_s8;
  }
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar6 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar4 * fVar4);
  if (fVar6 <= DAT_01aecf88) {
    if (*(char *)(unaff_x22 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x22 + 0x4f1) = 1;
    }
    fVar8 = **(float **)(*plVar3 + 0xb8);
  }
  else {
    fVar8 = fVar8 / fVar6;
  }
  fVar4 = (float)FUN_07a388d4();
  fVar9 = (float)FUN_041ee3bc(0);
  fVar9 = fVar9 - (float)(int)(fVar9 / 360.0) * 360.0;
  fVar6 = 360.0;
  if (fVar9 <= 360.0) {
    fVar6 = fVar9;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar9) {
    fVar5 = fVar6;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar6 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar6 < fVar5) && (fVar8 = fVar4, ABS(fVar5 - fVar6) < ABS(360.0 - fVar5))) {
      fVar8 = (float)FUN_07a38980();
    }
    fVar6 = (float)FUN_07a38b94();
    return in_stack_00000028 + fVar7 + fVar8 * fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


