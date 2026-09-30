/*
FUNCTION_NAME: OVRManager$$add_DisplayRefreshRateChanged
ENTRY_POINT: 076abaf0
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


float OVRManager__add_DisplayRefreshRateChanged
                (undefined8 param_1,undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  
  fVar12 = (float)((ulong)param_1 >> 0x20);
  fVar4 = (float)FUN_0861ab6c(param_4,0);
  fVar10 = param_3;
  uVar2 = FUN_085849e0();
  FUN_076b6d64(&stack0x00000060,uVar2,0,0);
  fVar13 = fStack0000000000000068;
  fVar5 = fStack0000000000000064;
  fVar11 = fStack0000000000000060;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  puVar1 = PTR_DAT_08f65580;
  fVar11 = fVar4 - fVar11;
  fVar12 = fVar12 - fVar5;
  fVar13 = param_3 - fVar13;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar5 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12);
  fStack00000000000000cc = param_3;
  if (fVar5 <= DAT_01a2ef28) {
    if (*(char *)(unaff_x23 + 0xc10) == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      *(undefined1 *)(unaff_x23 + 0xc10) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar11 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar13 = pfVar3[2];
  }
  else {
    fVar11 = fVar11 / fVar5;
    fVar12 = fVar12 / fVar5;
    fVar13 = fVar13 / fVar5;
  }
  uVar2 = FUN_085849e0();
  FUN_076b6d64(&stack0x00000060,uVar2,0,0);
  in_stack_00000040 = CONCAT44(fStack0000000000000064,fStack0000000000000060);
  in_stack_00000048 = fStack0000000000000068;
  uStack0000000000000054 = uStack0000000000000074;
  in_stack_00000050 = uStack0000000000000070;
  fVar5 = fStack000000000000006c;
  fVar6 = (float)FUN_08596ab0(&stack0x00000040,0);
  if (DAT_09539f9e == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539f9e = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar9 = 0.0;
  fVar7 = SQRT((fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12) *
               (fVar10 * fVar10 + fVar6 * fVar6 + fVar5 * fVar5));
  if (DAT_01a2e770 <= fVar7) {
    fVar7 = (fVar13 * fVar10 + fVar11 * fVar6 + fVar12 * fVar5) / fVar7;
    fVar12 = 1.0;
    if (fVar7 <= 1.0) {
      fVar12 = fVar7;
    }
    fVar11 = -1.0;
    if (-1.0 <= fVar7) {
      fVar11 = fVar12;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    dVar8 = acos((double)fVar11);
    fVar9 = (float)dVar8 * DAT_01a2eb64;
  }
  fVar9 = fVar9 / *(float *)(unaff_x20 + 0x2c);
  fVar12 = 1.0;
  if (fVar9 <= 1.0) {
    fVar12 = fVar9;
  }
  fVar11 = 1.0;
  if (0.0 <= fVar9) {
    fVar11 = 1.0 - fVar12;
  }
  *unaff_x19 = fVar11;
  return fVar4;
}


