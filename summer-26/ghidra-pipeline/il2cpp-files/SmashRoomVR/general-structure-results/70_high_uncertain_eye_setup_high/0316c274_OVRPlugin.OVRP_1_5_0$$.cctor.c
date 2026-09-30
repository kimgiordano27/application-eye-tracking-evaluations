/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$.cctor
ENTRY_POINT: 0316c274
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_5_0___cctor(void)

{
  bool in_NG;
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong unaff_d11;
  float fVar2;
  
  if (in_NG) {
    if (unaff_x22 == 0) goto LAB_0316c378;
    FUN_0316c824(*(undefined4 *)(unaff_x19 + 0x9c));
    fVar2 = -unaff_s10 - unaff_s9;
  }
  else {
    FUN_0316c824(unaff_s9 + *(float *)(unaff_x19 + 0x9c));
    fVar2 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_0391c27c(*(long *)(unaff_x19 + 0x50),0);
    uVar1 = FUN_0316c5e4(fVar2);
    fVar2 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar2 = *(float *)(unaff_x19 + 0x9c) - unaff_s10;
    }
    FUN_0316c79c(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      unaff_d11 = (ulong)*(uint *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      unaff_d11 = (ulong)(uint)(unaff_s9 + *(float *)(unaff_x19 + 0x9c));
    }
    FUN_0316c824(unaff_d11);
    FUN_0316c878();
    return;
  }
LAB_0316c378:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


