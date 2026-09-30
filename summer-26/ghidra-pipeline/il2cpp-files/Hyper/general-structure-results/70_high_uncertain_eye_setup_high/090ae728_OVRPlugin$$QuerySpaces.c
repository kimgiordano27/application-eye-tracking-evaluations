/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 090ae728
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


float OVRPlugin__QuerySpaces
                (float param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s11;
  float fVar12;
  float fVar13;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  fVar12 = param_2;
  fVar7 = param_3;
  fVar6 = (float)OVRPlugin__GetNativeOpenXRInstance();
  fVar13 = fVar7;
  if (DAT_0b31f3e6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b31f3e6 = '\x01';
  }
  puVar1 = PTR_DAT_0ac0a830;
  param_1 = param_1 - fVar6;
  param_2 = param_2 - fVar12;
  param_3 = param_3 - fVar7;
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  puVar2 = PTR_DAT_0ac0def8;
  fStack000000000000001c = DAT_01df50c4;
  fVar7 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  fVar12 = DAT_01df50c4;
  if (fVar7 <= DAT_01df50c4) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    param_1 = *pfVar5;
    param_2 = pfVar5[1];
    param_3 = pfVar5[2];
  }
  else {
    param_1 = param_1 / fVar7;
    param_2 = param_2 / fVar7;
    param_3 = param_3 / fVar7;
  }
  FUN_090ad924(param_5);
  fStack0000000000000014 = param_1;
  fVar7 = (float)FUN_0a16a4c4(0);
  fVar10 = (in_stack_00000010 * fVar12 + param_4 * param_1 + unaff_s11 * fVar7) -
           fStack000000000000000c * fVar13;
  fVar11 = (param_4 * fVar13 + fStack000000000000000c * param_1 + unaff_s11 * fVar12) -
           in_stack_00000010 * fVar7;
  fVar6 = (fStack000000000000000c * fVar7 + in_stack_00000010 * param_1 + unaff_s11 * fVar13) -
          param_4 * fVar12;
  fVar12 = ((unaff_s11 * param_1 - param_4 * fVar7) - fStack000000000000000c * fVar12) -
           in_stack_00000010 * fVar13;
  if (DAT_0b32d23b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32d23b = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar7 = fVar11;
  fVar13 = fVar6;
  fStack0000000000000008 =
       (float)FUN_0a16adac(fVar10,fVar11,fVar6,fVar12,*(undefined4 *)(lVar4 + 0x48),
                           *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  puVar3 = PTR_DAT_0ac0df00;
  fVar9 = param_3 * param_3 + fStack0000000000000014 * fStack0000000000000014 + param_2 * param_2;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar9) {
    fVar8 = param_3 * fVar13 + fStack0000000000000014 * fStack0000000000000008 + param_2 * fVar7;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar8) / fVar9;
    fVar7 = fVar7 - (param_2 * fVar8) / fVar9;
    fVar13 = fVar13 - (param_3 * fVar8) / fVar9;
  }
  if (DAT_0b31f3e6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b31f3e6 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar8 = SQRT(fVar13 * fVar13 + fStack0000000000000008 * fStack0000000000000008 + fVar7 * fVar7);
  if (fVar8 <= fStack000000000000001c) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fStack0000000000000008 = *pfVar5;
    fStack0000000000000004 = pfVar5[1];
    fVar13 = pfVar5[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar8;
    fStack0000000000000004 = fVar7 / fVar8;
    fVar13 = fVar13 / fVar8;
  }
  if (DAT_0b32d23b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32d23b = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar7 = (float)FUN_0a16adac(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar9) {
    fVar8 = param_3 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar7 + param_2 * fStack00000000000000a4;
    fVar7 = fVar7 - (fStack0000000000000014 * fVar8) / fVar9;
    fStack00000000000000a4 = fStack00000000000000a4 - (param_2 * fVar8) / fVar9;
    fStack00000000000000a8 = fStack00000000000000a8 - (param_3 * fVar8) / fVar9;
  }
  if (DAT_0b31f3e6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b31f3e6 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar9 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar7 * fVar7 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar9 <= fStack000000000000001c) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar7 = *pfVar5;
    fStack00000000000000a4 = pfVar5[1];
    fStack00000000000000a8 = pfVar5[2];
  }
  else {
    fVar7 = fVar7 / fVar9;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar9;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar9;
  }
  fVar9 = (float)FUN_0a16a4c4(fStack0000000000000008,fStack0000000000000004,fVar13,fVar7,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar6 * fStack0000000000000004 + fVar10 * fVar7 + fVar12 * fVar9) - fVar11 * fVar13;
}


