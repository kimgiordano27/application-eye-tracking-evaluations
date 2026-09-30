/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetCurrentInteractionProfile
ENTRY_POINT: 076e9c1c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetCurrentInteractionProfile(void)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  FUN_076ea1d4();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_085849e0(*(long *)(unaff_x19 + 0x50),0);
    uVar1 = FUN_076e9f90(-unaff_s10 - unaff_s9);
    fVar2 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar2 = *(float *)(unaff_x19 + 0x9c) - unaff_s10;
    }
    FUN_076ea14c(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      unaff_s11 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      unaff_s11 = unaff_s9 + *(float *)(unaff_x19 + 0x9c);
    }
    FUN_076ea1d4(unaff_s11);
    FUN_076ea228(unaff_s10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


