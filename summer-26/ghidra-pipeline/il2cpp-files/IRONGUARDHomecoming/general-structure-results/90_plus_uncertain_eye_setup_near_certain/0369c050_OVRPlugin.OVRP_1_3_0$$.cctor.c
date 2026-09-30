/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 0369c050
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_OVRP_1_3_0___cctor(void)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar3;
  
  fVar2 = *(float *)(unaff_x19 + 0x9c);
  if (unaff_s10 <= fVar2) {
    unaff_s10 = fVar2;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0369c1b4;
  fVar3 = unaff_s9 + unaff_s10;
  if (0.0 <= unaff_s8) {
    fVar2 = fVar3;
  }
  FUN_04070398(*(long *)(unaff_x19 + 0x58),0);
  uVar1 = FUN_0369c41c(fVar2);
  if ((unaff_s8 < 0.0) || (((unaff_w20 ^ 1) & 1) != 0)) {
    FUN_0369c5d4(0,uVar1,*(undefined8 *)(unaff_x19 + 0x78));
    if (0.0 <= unaff_s8) {
      fVar2 = unaff_s10;
      if ((unaff_w20 & 1) != 0) goto LAB_0369c0f4;
      goto LAB_0369c0f8;
    }
LAB_0369c0cc:
    if (unaff_x22 == 0) goto LAB_0369c1b4;
    OVRPlugin_OVRP_1_6_0___cctor(*(undefined4 *)(unaff_x19 + 0x9c));
    fVar2 = -unaff_s10 - unaff_s9;
  }
  else {
    if ((unaff_w20 & 1) == 0) goto LAB_0369c1b4;
    FUN_0369c5d4(unaff_s10 - *(float *)(unaff_x19 + 0x9c),uVar1,*(undefined8 *)(unaff_x19 + 0x78));
    if (unaff_s8 < 0.0) goto LAB_0369c0cc;
LAB_0369c0f4:
    fVar2 = *(float *)(unaff_x19 + 0x9c);
LAB_0369c0f8:
    OVRPlugin_OVRP_1_6_0___cctor(unaff_s9 + fVar2);
    fVar2 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_04070398(*(long *)(unaff_x19 + 0x50),0);
    uVar1 = FUN_0369c41c(fVar2);
    fVar2 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar2 = *(float *)(unaff_x19 + 0x9c) - unaff_s10;
    }
    FUN_0369c5d4(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      fVar3 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      fVar3 = unaff_s9 + *(float *)(unaff_x19 + 0x9c);
    }
    OVRPlugin_OVRP_1_6_0___cctor(fVar3);
    FUN_0369c6b0(unaff_s10);
    return;
  }
LAB_0369c1b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


