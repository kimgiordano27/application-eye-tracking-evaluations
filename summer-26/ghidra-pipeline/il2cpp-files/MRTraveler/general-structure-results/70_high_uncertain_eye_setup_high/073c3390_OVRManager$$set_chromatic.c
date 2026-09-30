/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 073c3390
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__set_chromatic
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  if ((DAT_0941e620 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6a848);
    DAT_0941e620 = 1;
  }
  if (*(long *)(param_4 + 0x28) == 0) {
LAB_073c36d8:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  fVar13 = (float)FUN_085eb198(*(long *)(param_4 + 0x28),0);
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_073c36d8;
  fVar19 = param_2;
  fVar17 = param_3;
  fVar14 = (float)FUN_085eb198(*(long *)(param_4 + 0x20),0);
  if (DAT_094100b5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  puVar3 = PTR_DAT_08e6a6b8;
  fVar14 = fVar14 - fVar13;
  fVar19 = fVar19 - param_2;
  fVar17 = fVar17 - param_3;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar16 = *(float *)(param_4 + 0x40);
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  fVar18 = SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar19 * fVar19);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar2 = PTR_DAT_08e68e18;
  fVar1 = DAT_018b0528;
  if (fVar18 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar14 = *pfVar9;
    fVar19 = pfVar9[1];
    fVar17 = pfVar9[2];
  }
  else {
    fVar14 = fVar14 / fVar18;
    fVar19 = fVar19 / fVar18;
    fVar17 = fVar17 / fVar18;
  }
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar3 = PTR_DAT_08e6a848;
  fVar15 = SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar19 * fVar19);
  if (fVar15 <= fVar1) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar14 = *pfVar9;
    fVar19 = pfVar9[1];
    fVar17 = pfVar9[2];
  }
  else {
    fVar14 = fVar14 / fVar15;
    fVar19 = fVar19 / fVar15;
    fVar17 = fVar17 / fVar15;
  }
  uVar11 = *(undefined8 *)(param_4 + 0x58);
  fVar18 = fVar18 + fVar16;
  uVar4 = FUN_085df47c(param_4 + 0x50,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar3);
  }
  fStack0000000000000008 = fVar13;
  fStack000000000000000c = param_2;
  fStack0000000000000010 = param_3;
  fStack0000000000000014 = fVar14;
  fStack0000000000000018 = fVar19;
  fStack000000000000001c = fVar17;
  uVar5 = FUN_0863b150(fVar18,&stack0x00000008,uVar11,uVar4,0);
  fVar13 = 0.0;
  if (0 < (int)uVar5) {
    uVar6 = FUN_06f74e14(*(undefined8 *)(param_4 + 0x48),0);
    if ((uVar6 & 1) != 0) {
      lVar10 = *(long *)(param_4 + 0x58);
      if (lVar10 == 0) goto LAB_073c36d8;
      if (*(int *)(lVar10 + 0x18) == 0) {
LAB_073c36dc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar10 = lVar10 + 0x20;
LAB_073c3694:
      fVar13 = (float)FUN_0863da0c(lVar10,0);
      fVar13 = fVar18 - fVar13;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      uVar11 = 1;
      goto LAB_073c36ac;
    }
    uVar6 = 0;
    lVar12 = 0x20;
    do {
      lVar10 = *(long *)(param_4 + 0x58);
      if (lVar10 == 0) goto LAB_073c36d8;
      if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_073c36dc;
      uVar11 = *(undefined8 *)(param_4 + 0x48);
      lVar10 = FUN_0863d930(lVar10 + lVar12,0);
      if (lVar10 == 0) goto LAB_073c36d8;
      uVar7 = FUN_085dc490(lVar10,0);
      uVar8 = FUN_06f74074(uVar11,uVar7,0);
      if ((uVar8 & 1) != 0) {
        lVar10 = *(long *)(param_4 + 0x58);
        if (lVar10 == 0) goto LAB_073c36d8;
        if (*(uint *)(lVar10 + 0x18) <= (uint)uVar6) goto LAB_073c36dc;
        lVar10 = lVar10 + lVar12;
        goto LAB_073c3694;
      }
      uVar6 = uVar6 + 1;
      lVar12 = lVar12 + 0x2c;
    } while (uVar5 != uVar6);
  }
  uVar11 = 0;
LAB_073c36ac:
  *param_5 = fVar13;
  return uVar11;
}


