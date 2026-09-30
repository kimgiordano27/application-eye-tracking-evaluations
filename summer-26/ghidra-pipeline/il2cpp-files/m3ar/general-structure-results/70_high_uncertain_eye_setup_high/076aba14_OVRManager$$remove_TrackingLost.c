/*
FUNCTION_NAME: OVRManager$$remove_TrackingLost
ENTRY_POINT: 076aba14
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__remove_TrackingLost
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s9;
  undefined8 unaff_d10;
  float unaff_s11;
  float fVar15;
  undefined8 unaff_d12;
  float unaff_s13;
  undefined8 unaff_d14;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  float fStack00000000000000cc;
  
  fVar6 = (float)FUN_08596ab0(param_4,0);
  if (DAT_0953c2f4 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_0953c2f4 = '\x01';
  }
  puVar1 = PTR_DAT_08f65568;
  fVar13 = param_3 * param_3 + fVar6 * fVar6 + param_2 * param_2;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar13) {
    fVar14 = (unaff_s11 - unaff_s13) * param_3 +
             ((float)unaff_d12 - (float)unaff_d14) * fVar6 +
             ((float)((ulong)unaff_d12 >> 0x20) - (float)((ulong)unaff_d14 >> 0x20)) * param_2;
    fVar6 = (param_2 * fVar14) / fVar13;
    fVar13 = (param_3 * fVar14) / fVar13;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    fVar6 = (float)((ulong)*puVar4 >> 0x20);
    fVar13 = *(float *)(puVar4 + 1);
  }
  fVar6 = (float)((ulong)unaff_d10 >> 0x20) + fVar6;
  fVar13 = unaff_s9 + fVar13;
  fVar7 = (float)FUN_0861ab6c();
  fVar12 = fVar13;
  uVar3 = FUN_085849e0();
  FUN_076b6d64(&stack0x00000060,uVar3,0,0);
  fVar15 = fStack0000000000000068;
  fVar8 = fStack0000000000000064;
  fVar14 = fStack0000000000000060;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  puVar2 = PTR_DAT_08f65580;
  fVar14 = fVar7 - fVar14;
  fVar6 = fVar6 - fVar8;
  fVar15 = fVar13 - fVar15;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar8 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar6 * fVar6);
  fStack00000000000000cc = fVar13;
  if (fVar8 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar14 = *pfVar5;
    fVar6 = pfVar5[1];
    fVar15 = pfVar5[2];
  }
  else {
    fVar14 = fVar14 / fVar8;
    fVar6 = fVar6 / fVar8;
    fVar15 = fVar15 / fVar8;
  }
  uVar3 = FUN_085849e0();
  FUN_076b6d64(&stack0x00000060,uVar3,0,0);
  in_stack_00000040 = CONCAT44(fStack0000000000000064,fStack0000000000000060);
  in_stack_00000048 = fStack0000000000000068;
  uStack0000000000000054 = uStack0000000000000074;
  in_stack_00000050 = uStack0000000000000070;
  fVar13 = fStack000000000000006c;
  fVar8 = (float)FUN_08596ab0(&stack0x00000040,0);
  if (DAT_09539f9e == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539f9e = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar11 = 0.0;
  fVar9 = SQRT((fVar15 * fVar15 + fVar14 * fVar14 + fVar6 * fVar6) *
               (fVar12 * fVar12 + fVar8 * fVar8 + fVar13 * fVar13));
  if (DAT_01a2e770 <= fVar9) {
    fVar9 = (fVar15 * fVar12 + fVar14 * fVar8 + fVar6 * fVar13) / fVar9;
    fVar6 = 1.0;
    if (fVar9 <= 1.0) {
      fVar6 = fVar9;
    }
    fVar13 = -1.0;
    if (-1.0 <= fVar9) {
      fVar13 = fVar6;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    dVar10 = acos((double)fVar13);
    fVar11 = (float)dVar10 * DAT_01a2eb64;
  }
  fVar11 = fVar11 / *(float *)(unaff_x20 + 0x2c);
  fVar6 = 1.0;
  if (fVar11 <= 1.0) {
    fVar6 = fVar11;
  }
  fVar13 = 1.0;
  if (0.0 <= fVar11) {
    fVar13 = 1.0 - fVar6;
  }
  *unaff_x19 = fVar13;
  return fVar7;
}


