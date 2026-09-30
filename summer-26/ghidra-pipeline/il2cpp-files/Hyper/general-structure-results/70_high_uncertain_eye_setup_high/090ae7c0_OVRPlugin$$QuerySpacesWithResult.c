/*
FUNCTION_NAME: OVRPlugin$$QuerySpacesWithResult
ENTRY_POINT: 090ae7c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__QuerySpacesWithResult(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float unaff_s10;
  float fVar10;
  float unaff_s11;
  float fVar11;
  float fVar12;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  if (param_1 <= param_2) {
    if (*(char *)(unaff_x23 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x23 + 999) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar11 = *pfVar3;
    fVar6 = pfVar3[1];
    param_1 = pfVar3[2];
  }
  else {
    fVar11 = unaff_s14 / param_1;
    fVar6 = unaff_s8 / param_1;
    param_1 = unaff_s9 / param_1;
  }
  FUN_090ad924();
  fStack0000000000000014 = fVar11;
  fVar4 = (float)FUN_0a16a4c4(0);
  fVar9 = (in_stack_00000010 * param_2 + unaff_s10 * fVar11 + unaff_s11 * fVar4) -
          fStack000000000000000c * param_3;
  fVar10 = (unaff_s10 * param_3 + fStack000000000000000c * fVar11 + unaff_s11 * param_2) -
           in_stack_00000010 * fVar4;
  fVar7 = (fStack000000000000000c * fVar4 + in_stack_00000010 * fVar11 + unaff_s11 * param_3) -
          unaff_s10 * param_2;
  fVar11 = ((unaff_s11 * fVar11 - unaff_s10 * fVar4) - fStack000000000000000c * param_2) -
           in_stack_00000010 * param_3;
  if (DAT_0b32d23b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32d23b = '\x01';
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar4 = fVar10;
  fVar12 = fVar7;
  fStack0000000000000008 =
       (float)FUN_0a16adac(fVar9,fVar10,fVar7,fVar11,*(undefined4 *)(lVar2 + 0x48),
                           *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  puVar1 = PTR_DAT_0ac0df00;
  fVar8 = param_1 * param_1 + fStack0000000000000014 * fStack0000000000000014 + fVar6 * fVar6;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar8) {
    fVar5 = param_1 * fVar12 + fStack0000000000000014 * fStack0000000000000008 + fVar6 * fVar4;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar5) / fVar8;
    fVar4 = fVar4 - (fVar6 * fVar5) / fVar8;
    fVar12 = fVar12 - (param_1 * fVar5) / fVar8;
  }
  if (*(char *)(unaff_x21 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x21 + 0x3e6) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar5 = SQRT(fVar12 * fVar12 + fStack0000000000000008 * fStack0000000000000008 + fVar4 * fVar4);
  if (fVar5 <= in_stack_00000018._4_4_) {
    if (*(char *)(unaff_x23 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x23 + 999) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar3;
    fStack0000000000000004 = pfVar3[1];
    fVar12 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar5;
    fStack0000000000000004 = fVar4 / fVar5;
    fVar12 = fVar12 / fVar5;
  }
  if (DAT_0b32d23b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32d23b = '\x01';
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar4 = (float)FUN_0a16adac(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar8) {
    fVar5 = param_1 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar4 + fVar6 * fStack00000000000000a4;
    fVar4 = fVar4 - (fStack0000000000000014 * fVar5) / fVar8;
    fStack00000000000000a4 = fStack00000000000000a4 - (fVar6 * fVar5) / fVar8;
    fStack00000000000000a8 = fStack00000000000000a8 - (param_1 * fVar5) / fVar8;
  }
  if (*(char *)(unaff_x21 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x21 + 0x3e6) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar6 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar4 * fVar4 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar6 <= in_stack_00000018._4_4_) {
    if (*(char *)(unaff_x23 + 999) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x23 + 999) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar4 = *pfVar3;
    fStack00000000000000a4 = pfVar3[1];
    fStack00000000000000a8 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar6;
  }
  fVar6 = (float)FUN_0a16a4c4(fStack0000000000000008,fStack0000000000000004,fVar12,fVar4,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar7 * fStack0000000000000004 + fVar9 * fVar4 + fVar11 * fVar6) - fVar10 * fVar12;
}


