/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetSystemHeadphonesPresent
ENTRY_POINT: 0369bfe8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_OVRP_1_3_0__ovrp_GetSystemHeadphonesPresent(float param_1,float param_2)

{
  long lVar1;
  long lVar2;
  bool in_NG;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  float fVar7;
  
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  if (in_NG) {
    param_1 = 0.0;
  }
  fVar6 = unaff_s9 * param_1 + 0.0;
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_0369c1b4;
  FUN_0406f8a4(*(long *)(unaff_x19 + 0x68),0.0 <= unaff_s8,0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0369c1b4;
  fVar4 = ABS(unaff_s8);
  if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  fVar4 = unaff_s10 * fVar4 + unaff_s11;
  lVar1 = unaff_x19;
  lVar2 = 0;
  if (unaff_s8 >= 0.0) {
    lVar1 = 0;
    lVar2 = unaff_x19;
  }
  FUN_0406f8a4(*(long *)(unaff_x19 + 0x60),unaff_s8 < 0.0,0);
  fVar5 = *(float *)(unaff_x19 + 0x9c);
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0369c1b4;
  fVar7 = fVar6 + fVar4;
  if (0.0 <= unaff_s8) {
    fVar5 = fVar7;
  }
  FUN_04070398(*(long *)(unaff_x19 + 0x58),0);
  uVar3 = FUN_0369c41c(fVar5);
  if ((unaff_s8 < 0.0) || (((unaff_w20 ^ 1) & 1) != 0)) {
    FUN_0369c5d4(0,uVar3,*(undefined8 *)(unaff_x19 + 0x78));
    if (0.0 <= unaff_s8) {
      fVar5 = fVar4;
      if ((unaff_w20 & 1) != 0) goto LAB_0369c0f4;
      goto LAB_0369c0f8;
    }
LAB_0369c0cc:
    if (lVar1 == 0) goto LAB_0369c1b4;
    OVRPlugin_OVRP_1_6_0___cctor
              (*(undefined4 *)(unaff_x19 + 0x9c),lVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar5 = -fVar4 - fVar6;
  }
  else {
    if ((unaff_w20 & 1) == 0) goto LAB_0369c1b4;
    FUN_0369c5d4(fVar4 - *(float *)(unaff_x19 + 0x9c),uVar3,*(undefined8 *)(unaff_x19 + 0x78));
    if (unaff_s8 < 0.0) goto LAB_0369c0cc;
LAB_0369c0f4:
    fVar5 = *(float *)(unaff_x19 + 0x9c);
LAB_0369c0f8:
    OVRPlugin_OVRP_1_6_0___cctor(fVar6 + fVar5,lVar2,*(undefined8 *)(unaff_x19 + 0x78));
    fVar5 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_04070398(*(long *)(unaff_x19 + 0x50),0);
    uVar3 = FUN_0369c41c(fVar5);
    fVar5 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar5 = *(float *)(unaff_x19 + 0x9c) - fVar4;
    }
    FUN_0369c5d4(fVar5,uVar3,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      fVar7 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      fVar7 = fVar6 + *(float *)(unaff_x19 + 0x9c);
    }
    OVRPlugin_OVRP_1_6_0___cctor(fVar7);
    FUN_0369c6b0(fVar4,fVar6);
    return;
  }
LAB_0369c1b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


