/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabelsNonAlloc
ENTRY_POINT: 069540a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceSemanticLabelsNonAlloc(void)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  double dVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  undefined4 uVar8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float unaff_s12;
  float fVar10;
  float unaff_s14;
  float unaff_s15;
  
  fVar7 = unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15;
  fVar10 = unaff_s12 * unaff_s12 + fVar7;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar9 = 0.0;
  fVar10 = SQRT((unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9) * fVar10);
  if (DAT_015c5594 <= fVar10) {
    fVar7 = -1.0;
    fVar10 = ((unaff_s9 * -unaff_s15 - unaff_s8 * unaff_s14) - unaff_s10 * unaff_s12) / fVar10;
    fVar9 = 1.0;
    if (fVar10 <= 1.0) {
      fVar9 = fVar10;
    }
    fVar6 = -1.0;
    if (-1.0 <= fVar10) {
      fVar6 = fVar9;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    dVar5 = acos((double)fVar6);
    fVar9 = (float)dVar5 * DAT_015c595c;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_06954318;
  fVar10 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x10),0);
  fVar6 = *(float *)(unaff_x20 + 0x38);
  if (fVar6 <= fVar10) {
LAB_069541fc:
    bVar1 = false;
  }
  else {
    if ((*(long *)(unaff_x20 + 0x10) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x20), lVar3 == 0)) goto LAB_06954318;
    fVar10 = (float)FUN_07d30208(lVar3,0);
    if (DAT_08974e24 == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      DAT_08974e24 = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (*(float *)(unaff_x20 + 0x38) <= SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar6 * fVar6))
    goto LAB_069541fc;
    bVar1 = *(float *)(unaff_x20 + 0x2c) < fVar9;
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
        uVar8 = 1;
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
    uVar8 = *(undefined4 *)(unaff_x20 + 0x3c);
    uVar4 = thunk_FUN_03ac74bc(*unaff_x22);
    FUN_07ca4ee0(uVar8,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar4);
    uVar8 = 2;
LAB_069542f0:
    *(undefined4 *)(unaff_x19 + 0x10) = uVar8;
    return 1;
  }
LAB_06954318:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


