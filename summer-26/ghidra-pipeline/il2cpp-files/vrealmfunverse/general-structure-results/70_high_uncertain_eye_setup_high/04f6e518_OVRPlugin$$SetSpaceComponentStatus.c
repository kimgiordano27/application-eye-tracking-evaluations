/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 04f6e518
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetSpaceComponentStatus
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float *pfVar4;
  long unaff_x21;
  long *unaff_x24;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float fVar13;
  float fVar14;
  float unaff_s14;
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
  
  if (*(int *)(param_4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = PTR_DAT_06312438;
  fStack000000000000001c = DAT_01032864;
  fVar5 = SQRT(unaff_s9 * unaff_s9 + unaff_s14 * unaff_s14 + unaff_s8 * unaff_s8);
  fVar13 = DAT_01032864;
  if (fVar5 <= DAT_01032864) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar14 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar5 = pfVar4[2];
  }
  else {
    fVar14 = unaff_s14 / fVar5;
    fVar8 = unaff_s8 / fVar5;
    fVar5 = unaff_s9 / fVar5;
  }
  FUN_04f6d6b8();
  fStack0000000000000014 = fVar14;
  fVar6 = (float)FUN_05c7b450(0);
  fVar11 = (in_stack_00000010 * fVar13 + unaff_s10 * fVar14 + unaff_s11 * fVar6) -
           fStack000000000000000c * param_3;
  fVar12 = (unaff_s10 * param_3 + fStack000000000000000c * fVar14 + unaff_s11 * fVar13) -
           in_stack_00000010 * fVar6;
  fVar9 = (fStack000000000000000c * fVar6 + in_stack_00000010 * fVar14 + unaff_s11 * param_3) -
          unaff_s10 * fVar13;
  fVar13 = ((unaff_s11 * fVar14 - unaff_s10 * fVar6) - fStack000000000000000c * fVar13) -
           in_stack_00000010 * param_3;
  if (DAT_066c1d9f == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d9f = '\x01';
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar14 = fVar12;
  fVar6 = fVar9;
  fStack0000000000000008 =
       (float)FUN_05c7bd38(fVar11,fVar12,fVar9,fVar13,*(undefined4 *)(lVar3 + 0x48),
                           *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  if (DAT_066c298e == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c298e = '\x01';
  }
  puVar2 = PTR_DAT_06315600;
  fVar10 = fVar5 * fVar5 + fStack0000000000000014 * fStack0000000000000014 + fVar8 * fVar8;
  if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar10) {
    fVar7 = fVar5 * fVar6 + fStack0000000000000014 * fStack0000000000000008 + fVar8 * fVar14;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar7) / fVar10;
    fVar14 = fVar14 - (fVar8 * fVar7) / fVar10;
    fVar6 = fVar6 - (fVar5 * fVar7) / fVar10;
  }
  if (*(char *)(unaff_x21 + 0xd9d) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x21 + 0xd9d) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar7 = SQRT(fVar6 * fVar6 + fStack0000000000000008 * fStack0000000000000008 + fVar14 * fVar14);
  if (fVar7 <= fStack000000000000001c) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fStack0000000000000008 = *pfVar4;
    fStack0000000000000004 = pfVar4[1];
    fVar6 = pfVar4[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar7;
    fStack0000000000000004 = fVar14 / fVar7;
    fVar6 = fVar6 / fVar7;
  }
  if (DAT_066c1d9f == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d9f = '\x01';
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar14 = (float)FUN_05c7bd38(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                               uStack00000000000000ac,*(undefined4 *)(lVar3 + 0x48),
                               *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  if (DAT_066c298e == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c298e = '\x01';
  }
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar10) {
    fVar7 = fVar5 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar14 + fVar8 * fStack00000000000000a4;
    fVar14 = fVar14 - (fStack0000000000000014 * fVar7) / fVar10;
    fStack00000000000000a4 = fStack00000000000000a4 - (fVar8 * fVar7) / fVar10;
    fStack00000000000000a8 = fStack00000000000000a8 - (fVar5 * fVar7) / fVar10;
  }
  if (*(char *)(unaff_x21 + 0xd9d) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x21 + 0xd9d) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar5 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar14 * fVar14 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar5 <= fStack000000000000001c) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar14 = *pfVar4;
    fStack00000000000000a4 = pfVar4[1];
    fStack00000000000000a8 = pfVar4[2];
  }
  else {
    fVar14 = fVar14 / fVar5;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar5;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar5;
  }
  fVar5 = (float)FUN_05c7b450(fStack0000000000000008,fStack0000000000000004,fVar6,fVar14,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar9 * fStack0000000000000004 + fVar11 * fVar14 + fVar13 * fVar5) - fVar12 * fVar6;
}


