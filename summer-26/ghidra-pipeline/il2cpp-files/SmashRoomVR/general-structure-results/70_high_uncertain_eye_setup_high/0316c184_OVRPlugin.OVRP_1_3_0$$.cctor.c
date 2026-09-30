/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 0316c184
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  
  puVar3 = (undefined8 *)FUN_01ae9f78();
  fVar5 = (float)(*(code *)*puVar3)();
  fVar7 = fVar5;
  if (1.0 < fVar5) {
    fVar7 = 1.0;
  }
  if (fVar5 < 0.0) {
    fVar7 = 0.0;
  }
  fVar7 = unaff_s9 * fVar7 + 0.0;
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_0316c378;
  FUN_0391b78c(*(long *)(unaff_x19 + 0x68),0.0 <= unaff_s8,0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0316c378;
  fVar5 = ABS(unaff_s8);
  if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  fVar5 = unaff_s10 * fVar5 + unaff_s11;
  lVar1 = unaff_x19;
  lVar2 = 0;
  if (unaff_s8 >= 0.0) {
    lVar1 = 0;
    lVar2 = unaff_x19;
  }
  FUN_0391b78c(*(long *)(unaff_x19 + 0x60),unaff_s8 < 0.0,0);
  fVar6 = *(float *)(unaff_x19 + 0x9c);
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0316c378;
  fVar8 = fVar7 + fVar5;
  if (0.0 <= unaff_s8) {
    fVar6 = fVar8;
  }
  FUN_0391c27c(*(long *)(unaff_x19 + 0x58),0);
  uVar4 = FUN_0316c5e4(fVar6);
  if ((unaff_s8 < 0.0) || (((unaff_w20 ^ 1) & 1) != 0)) {
    FUN_0316c79c(0,uVar4,*(undefined8 *)(unaff_x19 + 0x78));
    if (0.0 <= unaff_s8) {
      fVar6 = fVar5;
      if ((unaff_w20 & 1) != 0) goto LAB_0316c2b8;
      goto LAB_0316c2bc;
    }
LAB_0316c290:
    if (lVar1 == 0) goto LAB_0316c378;
    FUN_0316c824(*(undefined4 *)(unaff_x19 + 0x9c),lVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar6 = -fVar5 - fVar7;
  }
  else {
    if ((unaff_w20 & 1) == 0) goto LAB_0316c378;
    FUN_0316c79c(fVar5 - *(float *)(unaff_x19 + 0x9c),uVar4,*(undefined8 *)(unaff_x19 + 0x78));
    if (unaff_s8 < 0.0) goto LAB_0316c290;
LAB_0316c2b8:
    fVar6 = *(float *)(unaff_x19 + 0x9c);
LAB_0316c2bc:
    FUN_0316c824(fVar7 + fVar6,lVar2,*(undefined8 *)(unaff_x19 + 0x78));
    fVar6 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_0391c27c(*(long *)(unaff_x19 + 0x50),0);
    uVar4 = FUN_0316c5e4(fVar6);
    fVar6 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar6 = *(float *)(unaff_x19 + 0x9c) - fVar5;
    }
    FUN_0316c79c(fVar6,uVar4,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      fVar8 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      fVar8 = fVar7 + *(float *)(unaff_x19 + 0x9c);
    }
    FUN_0316c824(fVar8);
    FUN_0316c878(fVar5,fVar7);
    return;
  }
LAB_0316c378:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


