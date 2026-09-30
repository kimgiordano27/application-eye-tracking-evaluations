/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 05d27414
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking(long param_1)

{
  uint unaff_w19;
  long unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  while (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    iStack000000000000000c = *(int *)(param_1 + unaff_x22 * 4 + 0x20);
    uStack0000000000000008 = (uint)unaff_x22;
    if (iStack000000000000000c == 1 &&
        (unaff_w23 << (ulong)(uStack0000000000000008 & 0x1f) & unaff_w19) != 0) {
      iStack000000000000000c = unaff_w24;
    }
    if (*(long *)(unaff_x21 + 0x48) == 0) break;
    FUN_05d40438(*(long *)(unaff_x21 + 0x48),&stack0x00000008,(long)&stack0x00000008 + 4,0,0);
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == 5) {
      return;
    }
    param_1 = FUN_05d196a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


