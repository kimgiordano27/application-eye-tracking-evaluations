/*
FUNCTION_NAME: OVRManager$$get_monoscopic
ENTRY_POINT: 073c3420
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_monoscopic(void)

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
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar14;
  float unaff_s12;
  float fVar15;
  float unaff_s13;
  float fVar16;
  float fVar17;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  float fStack000000000000006c;
  
  FUN_03c8f898();
  *(undefined1 *)(unaff_x21 + 0xb5) = 1;
  puVar3 = PTR_DAT_08e6a6b8;
  fVar16 = unaff_s11 - unaff_s8;
  fVar17 = unaff_s12 - unaff_s9;
  fVar14 = unaff_s13 - unaff_s10;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fStack000000000000006c = *(float *)(unaff_x20 + 0x40);
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  fVar15 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar2 = PTR_DAT_08e68e18;
  fVar1 = DAT_018b0528;
  if (fVar15 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar16 = *pfVar9;
    fVar17 = pfVar9[1];
    fVar14 = pfVar9[2];
  }
  else {
    fVar16 = fVar16 / fVar15;
    fVar17 = fVar17 / fVar15;
    fVar14 = fVar14 / fVar15;
  }
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar3 = PTR_DAT_08e6a848;
  fVar13 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17);
  if (fVar13 <= fVar1) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar16 = *pfVar9;
    fVar17 = pfVar9[1];
    fVar14 = pfVar9[2];
  }
  else {
    fVar16 = fVar16 / fVar13;
    fVar17 = fVar17 / fVar13;
    fVar14 = fVar14 / fVar13;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  fVar15 = fVar15 + fStack000000000000006c;
  uVar4 = FUN_085df47c(unaff_x20 + 0x50,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar3);
  }
  fStack0000000000000014 = fVar16;
  in_stack_00000018 = fVar17;
  fStack000000000000001c = fVar14;
  uVar5 = FUN_0863b150(fVar15,&stack0x00000008,uVar11,uVar4,0);
  fVar14 = 0.0;
  if (0 < (int)uVar5) {
    uVar6 = FUN_06f74e14(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar6 & 1) != 0) {
      lVar10 = *(long *)(unaff_x20 + 0x58);
      if (lVar10 == 0) {
LAB_073c36d8:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar10 + 0x18) == 0) {
LAB_073c36dc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar10 = lVar10 + 0x20;
LAB_073c3694:
      fVar14 = (float)FUN_0863da0c(lVar10,0);
      fVar14 = fVar15 - fVar14;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      uVar11 = 1;
      goto LAB_073c36ac;
    }
    uVar6 = 0;
    lVar12 = 0x20;
    do {
      lVar10 = *(long *)(unaff_x20 + 0x58);
      if (lVar10 == 0) goto LAB_073c36d8;
      if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_073c36dc;
      uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar10 = FUN_0863d930(lVar10 + lVar12,0);
      if (lVar10 == 0) goto LAB_073c36d8;
      uVar7 = FUN_085dc490(lVar10,0);
      uVar8 = FUN_06f74074(uVar11,uVar7,0);
      if ((uVar8 & 1) != 0) {
        lVar10 = *(long *)(unaff_x20 + 0x58);
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
  *unaff_x19 = fVar14;
  return uVar11;
}


