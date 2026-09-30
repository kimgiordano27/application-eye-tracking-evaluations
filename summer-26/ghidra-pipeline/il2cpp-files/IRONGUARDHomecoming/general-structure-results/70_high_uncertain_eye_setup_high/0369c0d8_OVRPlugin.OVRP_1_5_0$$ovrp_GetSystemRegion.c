/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$ovrp_GetSystemRegion
ENTRY_POINT: 0369c0d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_5_0__ovrp_GetSystemRegion(void)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong unaff_d11;
  
  OVRPlugin_OVRP_1_6_0___cctor();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_04070398(*(long *)(unaff_x19 + 0x50),0);
    uVar1 = FUN_0369c41c(-unaff_s10 - unaff_s9);
    fVar2 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar2 = *(float *)(unaff_x19 + 0x9c) - unaff_s10;
    }
    FUN_0369c5d4(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      unaff_d11 = (ulong)*(uint *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      unaff_d11 = (ulong)(uint)(unaff_s9 + *(float *)(unaff_x19 + 0x9c));
    }
    OVRPlugin_OVRP_1_6_0___cctor(unaff_d11);
    FUN_0369c6b0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


