/*
FUNCTION_NAME: OVRManager$$get_audioOutId
ENTRY_POINT: 0745b50c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_audioOutId(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w21;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float fVar6;
  float unaff_s11;
  float fVar7;
  float unaff_s12;
  float unaff_s13;
  
  FUN_08a4ce98();
  if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0745b6f8;
                    /* try { // try from 0745b518 to 0755b6db has its CatchHandler @ 0745b09c */
  FUN_08a4ce98(*(long *)(unaff_x19 + 0x48),1,0);
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0745b6f8;
  FUN_08a200c4(*(long *)(unaff_x19 + 0x20),1,0);
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0745b6f8;
  FUN_08a200c4(*(long *)(unaff_x19 + 0x28),1,0);
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0745b6f8;
  FUN_08a4ce98(*(long *)(unaff_x19 + 0x38),unaff_s8 >= 0.0,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0745b6f8;
  fVar5 = ABS(unaff_s8);
  if (unaff_s9 < ABS(unaff_s8)) {
    fVar5 = unaff_s9;
  }
  fVar5 = fVar5 * unaff_s13 + unaff_s10;
  lVar1 = unaff_x19;
  if (unaff_s8 >= 0.0) {
    lVar1 = 0;
  }
  FUN_08a4ce98(*(long *)(unaff_x19 + 0x30),unaff_s8 < 0.0,0);
  fVar4 = *(float *)(unaff_x19 + 0x68);
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0745b6f8;
  fVar6 = unaff_s12 * unaff_s11 + unaff_s10;
  fVar7 = fVar6 + fVar5;
  if (0.0 <= unaff_s8) {
    fVar4 = fVar7;
  }
  FUN_08a4d98c(*(long *)(unaff_x19 + 0x28),0);
  uVar2 = FUN_0745b8b4(fVar4);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
  if (unaff_w21 == 0) {
    FUN_0745ba6c(0,uVar2,uVar3);
    fVar4 = fVar5;
    if (0.0 <= unaff_s8) goto LAB_0745b640;
LAB_0745b60c:
    if (lVar1 == 0) goto LAB_0745b6f8;
    FUN_0745baf4(*(undefined4 *)(unaff_x19 + 0x68),lVar1,*(undefined8 *)(unaff_x19 + 0x48));
    fVar4 = -fVar5 - fVar6;
  }
  else {
    if (unaff_s8 < 0.0) {
      FUN_0745ba6c(0,uVar2,uVar3);
      goto LAB_0745b60c;
    }
    FUN_0745ba6c(fVar5 - *(float *)(unaff_x19 + 0x68),uVar2,uVar3);
    if (unaff_x19 == 0) goto LAB_0745b6f8;
    fVar4 = *(float *)(unaff_x19 + 0x68);
LAB_0745b640:
    FUN_0745baf4(fVar6 + fVar4);
    fVar4 = -*(float *)(unaff_x19 + 0x68);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0);
    uVar2 = FUN_0745b8b4(fVar4);
    if ((unaff_w21 & unaff_s8 < 0.0) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(unaff_x19 + 0x68) - fVar5;
    }
    FUN_0745ba6c(fVar4,uVar2,*(undefined8 *)(unaff_x19 + 0x40));
    if (0.0 <= unaff_s8) {
      fVar7 = *(float *)(unaff_x19 + 0x68);
    }
    else if (unaff_w21 != 0) {
      fVar7 = fVar6 + *(float *)(unaff_x19 + 0x68);
    }
    FUN_0745baf4(fVar7);
    FUN_0745bb48(fVar5,fVar6);
    return;
  }
LAB_0745b6f8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


