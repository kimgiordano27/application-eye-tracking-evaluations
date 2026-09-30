/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 076e348c
PROGRAM: m3ar-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined8 param_5,long param_6)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  long in_x9;
  int *in_x10;
  float *unaff_x19;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s14;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_0406ae20();
      goto LAB_076e34bc;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_6);
  puVar5 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_076e34bc:
  (*(code *)*puVar5)(&stack0x00000018);
  fVar11 = in_stack_00000018;
  fStack0000000000000014 = fStack0000000000000024;
  fStack000000000000000c = fStack0000000000000020;
  fVar13 = fStack0000000000000020;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar8 = (float)FUN_08596ab0();
  if (DAT_09539e16 == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    DAT_09539e16 = '\x01';
  }
  puVar3 = PTR_DAT_08f65568;
  lVar6 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
  fVar15 = *(float *)(lVar6 + 0x18);
  fVar14 = *(float *)(lVar6 + 0x1c);
  fVar12 = *(float *)(lVar6 + 0x20);
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fVar9 = fVar12 * fVar12 + fVar15 * fVar15 + fVar14 * fVar14;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar9) {
    fVar10 = param_4 * fVar12 + fVar8 * fVar15 + fVar13 * fVar14;
    fVar8 = fVar8 - (fVar15 * fVar10) / fVar9;
    fVar13 = fVar13 - (fVar14 * fVar10) / fVar9;
    param_4 = param_4 - (fVar12 * fVar10) / fVar9;
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar12 = SQRT(param_4 * param_4 + fVar8 * fVar8 + fVar13 * fVar13);
  if (fVar12 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar8 = *pfVar7;
    fVar13 = pfVar7[1];
    param_4 = pfVar7[2];
  }
  else {
    fVar8 = fVar8 / fVar12;
    fVar13 = fVar13 / fVar12;
    param_4 = param_4 / fVar12;
  }
  fVar11 = fVar11 - *unaff_x19;
  fVar14 = unaff_x19[1] - unaff_x19[1];
  fStack000000000000000c = fStack000000000000000c - unaff_x19[2];
  fVar15 = fStack0000000000000014 * fStack0000000000000014 +
           in_stack_00000028._4_4_ * in_stack_00000028._4_4_;
  fVar9 = (fVar14 * fVar14 + fVar11 * fVar11 + fStack000000000000000c * fStack000000000000000c) -
          fVar15;
  fVar12 = 0.0;
  if (0.0 <= fVar9) {
    fVar12 = fVar9;
  }
  if (unaff_s14 < fVar12) {
    bVar4 = false;
  }
  else {
    fVar9 = param_4 * fVar14 - fVar13 * fStack000000000000000c;
    fVar12 = fVar8 * fStack000000000000000c - param_4 * fVar11;
    fVar11 = fVar13 * fVar11 - fVar8 * fVar14;
    bVar4 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12 <= fVar15;
  }
  return bVar4;
}


