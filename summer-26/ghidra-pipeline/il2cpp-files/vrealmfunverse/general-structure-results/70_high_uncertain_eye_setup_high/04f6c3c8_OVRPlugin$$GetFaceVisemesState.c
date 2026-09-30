/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 04f6c3c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetFaceVisemesState(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float *pfVar4;
  long unaff_x20;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float unaff_s11;
  float fVar7;
  float unaff_s12;
  float unaff_s13;
  float fVar8;
  float unaff_s14;
  float fVar9;
  float unaff_s15;
  float fVar10;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  if (DAT_066c77c4 == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c77c4 = '\x01';
  }
  puVar3 = PTR_DAT_06315600;
  puVar1 = PTR_DAT_06312438;
  fVar6 = param_3 * param_3 + unaff_s15 * unaff_s15 + unaff_s9 * unaff_s9;
  fStack0000000000000014 = unaff_s14;
  fStack000000000000001c = unaff_s12;
  if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar6) {
    fVar7 = (unaff_s11 - unaff_s14) * param_3 +
            (unaff_s13 - in_stack_00000028) * unaff_s15 +
            (unaff_s12 - in_stack_00000020._4_4_) * unaff_s9;
    fVar8 = (unaff_s15 * fVar7) / fVar6;
    fVar9 = (unaff_s9 * fVar7) / fVar6;
    fVar7 = (param_3 * fVar7) / fVar6;
  }
  else {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar4;
    fVar9 = pfVar4[1];
    fVar7 = pfVar4[2];
  }
  fVar5 = (float)FUN_04f6ba30();
  if (DAT_066c1d9c == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    DAT_066c1d9c = '\x01';
  }
  puVar2 = PTR_DAT_06312c90;
  fStack000000000000002c = unaff_s15;
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar10 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
  if (fVar5 < fVar10) {
    if (DAT_066c1d9d == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066c1d9d = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (fVar10 <= DAT_01032864) {
      if (DAT_066c1d97 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1d97 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar8 = *pfVar4;
      fVar9 = pfVar4[1];
      fVar7 = pfVar4[2];
    }
    else {
      fVar8 = fVar8 / fVar10;
      fVar9 = fVar9 / fVar10;
      fVar7 = fVar7 / fVar10;
    }
    fVar8 = fVar5 * fVar8;
    fVar9 = fVar5 * fVar9;
    fVar7 = fVar5 * fVar7;
  }
  if (param_3 * fVar7 + fStack000000000000002c * fVar8 + unaff_s9 * fVar9 < 0.0) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar4;
    fVar9 = pfVar4[1];
    fVar7 = pfVar4[2];
  }
  if (DAT_066c298e == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c298e = '\x01';
  }
  fVar5 = fStack000000000000001c - (in_stack_00000020._4_4_ + fVar9);
  fVar9 = unaff_s13 - (in_stack_00000028 + fVar8);
  fVar7 = unaff_s11 - (fStack0000000000000014 + fVar7);
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar6) {
    fVar10 = param_3 * fVar7 + fStack000000000000002c * fVar9 + unaff_s9 * fVar5;
    fVar9 = fVar9 - (fStack000000000000002c * fVar10) / fVar6;
    fVar5 = fVar5 - (unaff_s9 * fVar10) / fVar6;
    fVar7 = fVar7 - (param_3 * fVar10) / fVar6;
  }
  if (DAT_066c1d9d == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    DAT_066c1d9d = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar6 = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar5 * fVar5);
  if (fVar6 <= DAT_01032864) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    fVar9 = **(float **)(*(long *)puVar1 + 0xb8);
  }
  else {
    fVar9 = fVar9 / fVar6;
  }
  fVar7 = (float)FUN_04f6b594();
  fVar5 = (float)FUN_02cdfa10(0);
  fVar5 = fVar5 - (float)(int)(fVar5 / 360.0) * 360.0;
  fVar6 = 360.0;
  if (fVar5 <= 360.0) {
    fVar6 = fVar5;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar5) {
    fVar10 = fVar6;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar6 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar6 < fVar10) && (fVar9 = fVar7, ABS(fVar10 - fVar6) < ABS(360.0 - fVar10))) {
      fVar9 = (float)FUN_04f6b640();
    }
    fVar6 = (float)FUN_04f6b854();
    return in_stack_00000028 + fVar8 + fVar9 * fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


