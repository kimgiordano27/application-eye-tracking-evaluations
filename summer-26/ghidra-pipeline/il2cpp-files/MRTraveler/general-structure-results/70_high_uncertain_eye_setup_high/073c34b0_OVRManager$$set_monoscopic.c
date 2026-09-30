/*
FUNCTION_NAME: OVRManager$$set_monoscopic
ENTRY_POINT: 073c34b0
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


undefined8 OVRManager__set_monoscopic(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  long *unaff_x22;
  long lVar10;
  long unaff_x24;
  float fVar11;
  float unaff_s11;
  float fVar12;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar13;
  float unaff_s15;
  float fVar14;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000068;
  
  if (unaff_s12 <= unaff_s13) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fVar13 = *pfVar7;
    fVar14 = pfVar7[1];
    fVar12 = pfVar7[2];
  }
  else {
    fVar13 = unaff_s14 / unaff_s12;
    fVar14 = unaff_s15 / unaff_s12;
    fVar12 = unaff_s11 / unaff_s12;
  }
  if (*(char *)(unaff_x24 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x24 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08e6a848;
  fVar11 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14);
  if (fVar11 <= unaff_s13) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar7 = *(float **)(*unaff_x22 + 0xb8);
    fVar13 = *pfVar7;
    fVar14 = pfVar7[1];
    fVar12 = pfVar7[2];
  }
  else {
    fVar13 = fVar13 / fVar11;
    fVar14 = fVar14 / fVar11;
    fVar12 = fVar12 / fVar11;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = FUN_085df47c(unaff_x20 + 0x50,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  fStack0000000000000014 = fVar13;
  in_stack_00000018 = fVar14;
  fStack000000000000001c = fVar12;
  uVar3 = FUN_0863b150(unaff_s12 + in_stack_00000068._4_4_,&stack0x00000008,uVar9,uVar2,0);
  fVar12 = 0.0;
  if (0 < (int)uVar3) {
    uVar4 = FUN_06f74e14(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar4 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + 0x58);
      if (lVar8 == 0) {
LAB_073c36d8:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_073c36dc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar8 = lVar8 + 0x20;
LAB_073c3694:
      fVar12 = (float)FUN_0863da0c(lVar8,0);
      fVar12 = (unaff_s12 + in_stack_00000068._4_4_) - fVar12;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      uVar9 = 1;
      goto LAB_073c36ac;
    }
    uVar4 = 0;
    lVar10 = 0x20;
    do {
      lVar8 = *(long *)(unaff_x20 + 0x58);
      if (lVar8 == 0) goto LAB_073c36d8;
      if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_073c36dc;
      uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar8 = FUN_0863d930(lVar8 + lVar10,0);
      if (lVar8 == 0) goto LAB_073c36d8;
      uVar5 = FUN_085dc490(lVar8,0);
      uVar6 = FUN_06f74074(uVar9,uVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar8 = *(long *)(unaff_x20 + 0x58);
        if (lVar8 == 0) goto LAB_073c36d8;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar4) goto LAB_073c36dc;
        lVar8 = lVar8 + lVar10;
        goto LAB_073c3694;
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + 0x2c;
    } while (uVar3 != uVar4);
  }
  uVar9 = 0;
LAB_073c36ac:
  *unaff_x19 = fVar12;
  return uVar9;
}


