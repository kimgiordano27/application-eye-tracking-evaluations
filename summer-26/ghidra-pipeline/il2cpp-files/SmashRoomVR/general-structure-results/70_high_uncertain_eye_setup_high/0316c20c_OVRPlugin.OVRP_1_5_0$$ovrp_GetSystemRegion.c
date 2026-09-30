/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$ovrp_GetSystemRegion
ENTRY_POINT: 0316c20c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_5_0__ovrp_GetSystemRegion(void)

{
  long lVar1;
  bool in_NG;
  undefined8 uVar2;
  long unaff_x19;
  uint unaff_w20;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
  
  lVar1 = unaff_x19;
  if (!in_NG) {
    lVar1 = 0;
  }
  FUN_0391b78c();
  fVar3 = *(float *)(unaff_x19 + 0x9c);
  if (unaff_s10 <= fVar3) {
    unaff_s10 = fVar3;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0316c378;
  fVar4 = unaff_s9 + unaff_s10;
  if (0.0 <= unaff_s8) {
    fVar3 = fVar4;
  }
  FUN_0391c27c(*(long *)(unaff_x19 + 0x58),0);
  uVar2 = FUN_0316c5e4(fVar3);
  if ((unaff_s8 < 0.0) || (((unaff_w20 ^ 1) & 1) != 0)) {
    FUN_0316c79c(0,uVar2,*(undefined8 *)(unaff_x19 + 0x78));
    if (0.0 <= unaff_s8) {
      fVar3 = unaff_s10;
      if ((unaff_w20 & 1) != 0) goto LAB_0316c2b8;
      goto LAB_0316c2bc;
    }
LAB_0316c290:
    if (lVar1 == 0) goto LAB_0316c378;
    FUN_0316c824(*(undefined4 *)(unaff_x19 + 0x9c),lVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar3 = -unaff_s10 - unaff_s9;
  }
  else {
    if ((unaff_w20 & 1) == 0) goto LAB_0316c378;
    FUN_0316c79c(unaff_s10 - *(float *)(unaff_x19 + 0x9c),uVar2,*(undefined8 *)(unaff_x19 + 0x78));
    if (unaff_s8 < 0.0) goto LAB_0316c290;
LAB_0316c2b8:
    fVar3 = *(float *)(unaff_x19 + 0x9c);
LAB_0316c2bc:
    FUN_0316c824(unaff_s9 + fVar3);
    fVar3 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_0391c27c(*(long *)(unaff_x19 + 0x50),0);
    uVar2 = FUN_0316c5e4(fVar3);
    fVar3 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar3 = *(float *)(unaff_x19 + 0x9c) - unaff_s10;
    }
    FUN_0316c79c(fVar3,uVar2,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      fVar4 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      fVar4 = unaff_s9 + *(float *)(unaff_x19 + 0x9c);
    }
    FUN_0316c824(fVar4);
    FUN_0316c878(unaff_s10);
    return;
  }
LAB_0316c378:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


