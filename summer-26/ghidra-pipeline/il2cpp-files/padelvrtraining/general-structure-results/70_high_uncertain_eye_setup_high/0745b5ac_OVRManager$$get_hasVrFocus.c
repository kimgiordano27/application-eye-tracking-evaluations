/*
FUNCTION_NAME: OVRManager$$get_hasVrFocus
ENTRY_POINT: 0745b5ac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasVrFocus(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w24;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar3;
  float unaff_s11;
  float fVar4;
  float unaff_s12;
  float fVar5;
  
  if (param_2 == 0) goto LAB_0745b6f8;
  fVar3 = unaff_s12 * unaff_s11 + unaff_s10;
  fVar4 = fVar3 + unaff_s9;
  if (0.0 <= unaff_s8) {
    param_1 = fVar4;
  }
  FUN_08a4d98c(param_2,0);
  uVar1 = FUN_0745b8b4(param_1);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  if (unaff_w21 == 0) {
    FUN_0745ba6c(0,uVar1,uVar2);
    fVar5 = unaff_s9;
    if (0.0 <= unaff_s8) goto LAB_0745b640;
LAB_0745b60c:
    if (unaff_x20 == 0) goto LAB_0745b6f8;
    FUN_0745baf4(*(undefined4 *)(unaff_x19 + 0x68));
    fVar5 = -unaff_s9 - fVar3;
  }
  else {
    if (unaff_s8 < 0.0) {
      FUN_0745ba6c(0,uVar1,uVar2);
      goto LAB_0745b60c;
    }
    FUN_0745ba6c(unaff_s9 - *(float *)(unaff_x19 + 0x68),uVar1,uVar2);
    if (unaff_x19 == 0) goto LAB_0745b6f8;
    fVar5 = *(float *)(unaff_x19 + 0x68);
LAB_0745b640:
    FUN_0745baf4(fVar3 + fVar5);
    fVar5 = -*(float *)(unaff_x19 + 0x68);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0);
    uVar1 = FUN_0745b8b4(fVar5);
    if ((unaff_w21 & unaff_w24) == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = *(float *)(unaff_x19 + 0x68) - unaff_s9;
    }
    FUN_0745ba6c(fVar5,uVar1,*(undefined8 *)(unaff_x19 + 0x40));
    if (0.0 <= unaff_s8) {
      fVar4 = *(float *)(unaff_x19 + 0x68);
    }
    else if (unaff_w21 != 0) {
      fVar4 = fVar3 + *(float *)(unaff_x19 + 0x68);
    }
    FUN_0745baf4(fVar4);
    FUN_0745bb48();
    return;
  }
LAB_0745b6f8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0745b6f8 to 0755b6fb has its CatchHandler @ 0745b75c */
  FUN_03d2d548();
}


