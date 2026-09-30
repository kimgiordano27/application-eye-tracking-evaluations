/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabels
ENTRY_POINT: 06953ff0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceSemanticLabels(void)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  float fVar6;
  double dVar7;
  float fVar8;
  float unaff_s8;
  undefined4 uVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar6 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar6 <= DAT_015c5ce0) {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    pfVar5 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fVar12 = *pfVar5;
    fVar13 = pfVar5[1];
    fVar6 = pfVar5[2];
  }
  else {
    fVar12 = unaff_s11 / fVar6;
    fVar13 = unaff_s12 / fVar6;
    fVar6 = unaff_s13 / fVar6;
  }
  if (DAT_08974d91 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974d91 = '\x01';
  }
  fVar8 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar11 = fVar6 * fVar6 + fVar8;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar10 = 0.0;
  fVar11 = SQRT((unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9) * fVar11);
  if (DAT_015c5594 <= fVar11) {
    fVar8 = -1.0;
    fVar11 = ((unaff_s9 * -fVar13 - unaff_s8 * fVar12) - unaff_s10 * fVar6) / fVar11;
    fVar6 = 1.0;
    if (fVar11 <= 1.0) {
      fVar6 = fVar11;
    }
    fVar12 = -1.0;
    if (-1.0 <= fVar11) {
      fVar12 = fVar6;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    dVar7 = acos((double)fVar12);
    fVar10 = (float)dVar7 * DAT_015c595c;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_06954318;
  fVar6 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x10),0);
  fVar12 = *(float *)(unaff_x20 + 0x38);
  if (fVar12 <= fVar6) {
LAB_069541fc:
    bVar1 = false;
  }
  else {
    if ((*(long *)(unaff_x20 + 0x10) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x20), lVar3 == 0)) goto LAB_06954318;
    fVar6 = (float)FUN_07d30208(lVar3,0);
    if (DAT_08974e24 == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      DAT_08974e24 = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (*(float *)(unaff_x20 + 0x38) <= SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar12 * fVar12))
    goto LAB_069541fc;
    bVar1 = *(float *)(unaff_x20 + 0x2c) < fVar10;
  }
  *(bool *)(unaff_x20 + 0x34) = bVar1;
  if ((*(char *)(unaff_x20 + 0x44) == '\0') && (bVar1)) {
    if ((*(long *)(unaff_x20 + 0x10) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xd8), lVar3 == 0)) goto LAB_06954318;
    bVar2 = FUN_069608f8(lVar3,0);
    if (((bVar2 & *(int *)(unaff_x20 + 0x28) == 0) != 0) || (*(int *)(unaff_x20 + 0x28) == 1)) {
      if (*(int *)(unaff_x20 + 0x24) != 0) {
        FUN_06953cec();
        uVar4 = thunk_FUN_03ac74bc(*unaff_x22);
        FUN_07ca4ee0(0x3f800000,uVar4,0);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar4);
        uVar9 = 1;
        goto LAB_069542f0;
      }
      lVar3 = *(long *)(unaff_x20 + 0x10);
      uVar4 = FUN_06953c58();
      if (lVar3 == 0) goto LAB_06954318;
      FUN_07c9ee6c(lVar3,uVar4,0);
    }
  }
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xd8), lVar3 != 0)) {
    FUN_06960900(lVar3,0,0);
    uVar9 = *(undefined4 *)(unaff_x20 + 0x3c);
    uVar4 = thunk_FUN_03ac74bc(*unaff_x22);
    FUN_07ca4ee0(uVar9,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar4);
    uVar9 = 2;
LAB_069542f0:
    *(undefined4 *)(unaff_x19 + 0x10) = uVar9;
    return 1;
  }
LAB_06954318:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


