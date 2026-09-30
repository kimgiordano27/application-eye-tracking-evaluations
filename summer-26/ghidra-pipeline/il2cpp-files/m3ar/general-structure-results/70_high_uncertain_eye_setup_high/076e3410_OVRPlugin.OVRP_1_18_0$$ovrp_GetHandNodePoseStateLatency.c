/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetHandNodePoseStateLatency
ENTRY_POINT: 076e3410
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_18_0__ovrp_GetHandNodePoseStateLatency
               (float param_1,undefined1 param_2 [16],float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  
  if ((DAT_095482b2 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fae320);
    FUN_0403162c(PTR_DAT_08f70528);
    DAT_095482b2 = 1;
  }
  puVar1 = PTR_DAT_08f70528;
  plVar8 = *(long **)(param_4 + 0xd0);
  if (plVar8 == (long *)0x0) {
    bVar2 = true;
  }
  else {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fae320) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076e34bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fae320,0);
LAB_076e34bc:
    (*(code *)*puVar3)(&stack0x00000018,plVar8,puVar3[1]);
    fVar12 = in_stack_00000018;
    fStack0000000000000014 = fStack0000000000000024;
    fStack000000000000000c = fStack0000000000000020;
    fVar14 = fStack0000000000000020;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar9 = (float)FUN_08596ab0(param_5,0);
    if (DAT_09539e16 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539e16 = '\x01';
    }
    puVar1 = PTR_DAT_08f65568;
    lVar4 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar16 = *(float *)(lVar4 + 0x18);
    fVar15 = *(float *)(lVar4 + 0x1c);
    fVar13 = *(float *)(lVar4 + 0x20);
    if (DAT_09539f9f == '\0') {
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539f9f = '\x01';
    }
    fVar10 = fVar13 * fVar13 + fVar16 * fVar16 + fVar15 * fVar15;
    if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar10) {
      fVar11 = param_3 * fVar13 + fVar9 * fVar16 + fVar14 * fVar15;
      fVar9 = fVar9 - (fVar16 * fVar11) / fVar10;
      fVar14 = fVar14 - (fVar15 * fVar11) / fVar10;
      param_3 = param_3 - (fVar13 * fVar11) / fVar10;
    }
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar13 = SQRT(param_3 * param_3 + fVar9 * fVar9 + fVar14 * fVar14);
    if (fVar13 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar9 = *pfVar5;
      fVar14 = pfVar5[1];
      param_3 = pfVar5[2];
    }
    else {
      fVar9 = fVar9 / fVar13;
      fVar14 = fVar14 / fVar13;
      param_3 = param_3 / fVar13;
    }
    fVar12 = fVar12 - *param_5;
    fVar15 = param_5[1] - param_5[1];
    fStack000000000000000c = fStack000000000000000c - param_5[2];
    fVar16 = fStack0000000000000014 * fStack0000000000000014 +
             in_stack_00000028._4_4_ * in_stack_00000028._4_4_;
    fVar10 = (fVar15 * fVar15 + fVar12 * fVar12 + fStack000000000000000c * fStack000000000000000c) -
             fVar16;
    fVar13 = 0.0;
    if (0.0 <= fVar10) {
      fVar13 = fVar10;
    }
    if (param_1 < fVar13) {
      bVar2 = false;
    }
    else {
      fVar10 = param_3 * fVar15 - fVar14 * fStack000000000000000c;
      fVar13 = fVar9 * fStack000000000000000c - param_3 * fVar12;
      fVar12 = fVar14 * fVar12 - fVar9 * fVar15;
      bVar2 = fVar12 * fVar12 + fVar10 * fVar10 + fVar13 * fVar13 <= fVar16;
    }
  }
  return bVar2;
}


