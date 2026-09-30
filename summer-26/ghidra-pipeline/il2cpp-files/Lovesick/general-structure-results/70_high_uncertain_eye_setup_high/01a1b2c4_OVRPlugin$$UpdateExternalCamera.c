/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 01a1b2c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateExternalCamera(void)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  while( true ) {
    if (unaff_x22 == 5) {
      return;
    }
    lVar1 = FUN_01a026f8();
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    iStack000000000000000c = *(int *)(lVar1 + unaff_x22 * 4 + 0x20);
    uStack0000000000000008 = (uint)unaff_x22;
    if (iStack000000000000000c == 1 &&
        (unaff_w23 << (ulong)(uStack0000000000000008 & 0x1f) & unaff_w19) != 0) {
      iStack000000000000000c = unaff_w24;
    }
    if (*(long *)(unaff_x21 + 0x40) == 0) break;
    FUN_01a33088(*(long *)(unaff_x21 + 0x40),&stack0x00000008,(long)&stack0x00000008 + 4,0,0);
    unaff_x22 = unaff_x22 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


