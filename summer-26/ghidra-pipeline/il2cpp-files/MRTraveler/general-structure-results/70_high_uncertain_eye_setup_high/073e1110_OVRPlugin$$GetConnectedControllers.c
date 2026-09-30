/*
FUNCTION_NAME: OVRPlugin$$GetConnectedControllers
ENTRY_POINT: 073e1110
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetConnectedControllers(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float fVar11;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float fVar14;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar15;
  float unaff_s15;
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
  
  FUN_03c8f898(PTR_DAT_08e6a6b8);
  *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  puVar2 = PTR_DAT_08e6a6b8;
  fVar15 = unaff_s14 - unaff_s15;
  fVar13 = unaff_s13 - unaff_s10;
  fVar10 = unaff_s12 - unaff_s8;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08e68e18;
  fVar8 = fVar13 * fVar13;
  fStack000000000000001c = DAT_018b0528;
  fVar9 = fVar10 * fVar10;
  fVar6 = SQRT(fVar9 + fVar15 * fVar15 + fVar8);
  if (fVar6 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar5;
    fVar13 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  else {
    fVar15 = fVar15 / fVar6;
    fVar13 = fVar13 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  FUN_073e02c0();
  fStack0000000000000014 = fVar15;
  fVar6 = (float)FUN_085d2264(0);
  fVar12 = (unaff_s9 * fVar9 + fStack000000000000000c * fVar15 + unaff_s11 * fVar8) -
           in_stack_00000010 * fVar6;
  fVar14 = (in_stack_00000010 * fVar8 + unaff_s9 * fVar15 + unaff_s11 * fVar6) -
           fStack000000000000000c * fVar9;
  fVar11 = (fStack000000000000000c * fVar6 + in_stack_00000010 * fVar15 + unaff_s11 * fVar9) -
           unaff_s9 * fVar8;
  fVar15 = ((unaff_s11 * fVar15 - unaff_s9 * fVar6) - fStack000000000000000c * fVar8) -
           in_stack_00000010 * fVar9;
  if (DAT_09410146 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar6 = fVar12;
  fVar8 = fVar11;
  fStack0000000000000008 =
       (float)FUN_085d2bd4(fVar14,fVar12,fVar11,fVar15,*(undefined4 *)(lVar4 + 0x48),
                           *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  puVar3 = PTR_DAT_08e722b0;
  fVar9 = fVar10 * fVar10 + fStack0000000000000014 * fStack0000000000000014 + fVar13 * fVar13;
  if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar9) {
    fVar7 = fVar10 * fVar8 + fStack0000000000000014 * fStack0000000000000008 + fVar13 * fVar6;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar7) / fVar9;
    fVar6 = fVar6 - (fVar13 * fVar7) / fVar9;
    fVar8 = fVar8 - (fVar10 * fVar7) / fVar9;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar7 = SQRT(fVar8 * fVar8 + fStack0000000000000008 * fStack0000000000000008 + fVar6 * fVar6);
  if (fVar7 <= fStack000000000000001c) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fStack0000000000000008 = *pfVar5;
    fStack0000000000000004 = pfVar5[1];
    fVar8 = pfVar5[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar7;
    fStack0000000000000004 = fVar6 / fVar7;
    fVar8 = fVar8 / fVar7;
  }
  if (DAT_09410146 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar6 = (float)FUN_085d2bd4(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar9) {
    fVar7 = fVar10 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar6 + fVar13 * fStack00000000000000a4;
    fVar6 = fVar6 - (fStack0000000000000014 * fVar7) / fVar9;
    fStack00000000000000a4 = fStack00000000000000a4 - (fVar13 * fVar7) / fVar9;
    fStack00000000000000a8 = fStack00000000000000a8 - (fVar10 * fVar7) / fVar9;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar10 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
                fVar6 * fVar6 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar10 <= fStack000000000000001c) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar6 = *pfVar5;
    fStack00000000000000a4 = pfVar5[1];
    fStack00000000000000a8 = pfVar5[2];
  }
  else {
    fVar6 = fVar6 / fVar10;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar10;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar10;
  }
  fVar10 = (float)FUN_085d2264(fStack0000000000000008,fStack0000000000000004,fVar8,fVar6,
                               fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar11 * fStack0000000000000004 + fVar14 * fVar6 + fVar15 * fVar10) - fVar12 * fVar8;
}


