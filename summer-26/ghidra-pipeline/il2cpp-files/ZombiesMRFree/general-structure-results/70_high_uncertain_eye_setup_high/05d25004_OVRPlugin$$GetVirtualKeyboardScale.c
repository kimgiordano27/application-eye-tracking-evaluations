/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 05d25004
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetVirtualKeyboardScale
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
  float fVar12;
  float unaff_s11;
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
  
  fVar7 = param_2;
  fVar9 = param_3;
  fVar6 = (float)FUN_05d240c8();
  if (DAT_0738e668 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e668 = '\x01';
  }
  puVar1 = PTR_DAT_06f6d508;
  param_1 = param_1 - fVar6;
  param_2 = param_2 - fVar7;
  param_3 = param_3 - fVar9;
  if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f6d5d8;
  fVar9 = param_2 * param_2;
  fStack000000000000001c = DAT_01369fe0;
  fVar6 = param_3 * param_3;
  fVar7 = SQRT(fVar6 + param_1 * param_1 + fVar9);
  if (fVar7 <= DAT_01369fe0) {
    if (DAT_0738e669 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e669 = '\x01';
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
  FUN_05d241e4(param_5);
  fStack0000000000000014 = param_1;
  fVar7 = (float)FUN_068ec938(0);
  fVar12 = (param_4 * fVar6 + fStack000000000000000c * param_1 + unaff_s11 * fVar9) -
           in_stack_00000010 * fVar7;
  fVar13 = (in_stack_00000010 * fVar9 + param_4 * param_1 + unaff_s11 * fVar7) -
           fStack000000000000000c * fVar6;
  fVar10 = (fStack000000000000000c * fVar7 + in_stack_00000010 * param_1 + unaff_s11 * fVar6) -
           param_4 * fVar9;
  fVar7 = ((unaff_s11 * param_1 - param_4 * fVar7) - fStack000000000000000c * fVar9) -
          in_stack_00000010 * fVar6;
  if (DAT_0738e660 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d5d8);
    DAT_0738e660 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar9 = fVar12;
  fVar6 = fVar10;
  fStack0000000000000008 =
       (float)FUN_068ed2ec(fVar13,fVar12,fVar10,fVar7,*(undefined4 *)(lVar4 + 0x48),
                           *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  puVar3 = PTR_DAT_06f6e7c0;
  fVar11 = param_3 * param_3 + fStack0000000000000014 * fStack0000000000000014 + param_2 * param_2;
  if (**(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) <= fVar11) {
    fVar8 = param_3 * fVar6 + fStack0000000000000014 * fStack0000000000000008 + param_2 * fVar9;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar8) / fVar11;
    fVar9 = fVar9 - (param_2 * fVar8) / fVar11;
    fVar6 = fVar6 - (param_3 * fVar8) / fVar11;
  }
  if (DAT_0738e668 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e668 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fVar8 = SQRT(fVar6 * fVar6 + fStack0000000000000008 * fStack0000000000000008 + fVar9 * fVar9);
  if (fVar8 <= fStack000000000000001c) {
    if (DAT_0738e669 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e669 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fStack0000000000000008 = *pfVar5;
    fStack0000000000000004 = pfVar5[1];
    fVar6 = pfVar5[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar8;
    fStack0000000000000004 = fVar9 / fVar8;
    fVar6 = fVar6 / fVar8;
  }
  if (DAT_0738e660 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d5d8);
    DAT_0738e660 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar9 = (float)FUN_068ed2ec(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_0738eca3 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738eca3 = '\x01';
  }
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar11) {
    fVar8 = param_3 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar9 + param_2 * fStack00000000000000a4;
    fVar9 = fVar9 - (fStack0000000000000014 * fVar8) / fVar11;
    fStack00000000000000a4 = fStack00000000000000a4 - (param_2 * fVar8) / fVar11;
    fStack00000000000000a8 = fStack00000000000000a8 - (param_3 * fVar8) / fVar11;
  }
  if (DAT_0738e668 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e668 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  fVar11 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
                fVar9 * fVar9 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar11 <= fStack000000000000001c) {
    if (DAT_0738e669 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e669 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar9 = *pfVar5;
    fStack00000000000000a4 = pfVar5[1];
    fStack00000000000000a8 = pfVar5[2];
  }
  else {
    fVar9 = fVar9 / fVar11;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar11;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar11;
  }
  fVar11 = (float)FUN_068ec938(fStack0000000000000008,fStack0000000000000004,fVar6,fVar9,
                               fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar10 * fStack0000000000000004 + fVar13 * fVar9 + fVar7 * fVar11) - fVar12 * fVar6;
}


