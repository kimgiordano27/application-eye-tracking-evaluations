/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 06acb9ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState(void)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  
  if (in_w8 == 0) {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0xc54) = 1;
  }
  if (unaff_x19 != 0) {
    fVar2 = unaff_s9 / unaff_s8;
    lVar1 = *(long *)(DAT_083d2c90 + 0xb8);
    FUN_07a19820(fVar2 * *(float *)(lVar1 + 0xc),fVar2 * *(float *)(lVar1 + 0x10),
                 fVar2 * *(float *)(lVar1 + 0x14));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


