/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 036a473c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(void)

{
  bool in_ZR;
  bool in_CY;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  
                    /* try { // try from 036a473c to 037a47bb has its CatchHandler @ 036a473c
                       catch() { ... } // from try @ 036a473c with catch @ 036a473c
                       catch() { ... } // from try @ 036a4904 with catch @ 036a473c
                       catch() { ... } // from try @ 036a495c with catch @ 036a473c
                       catch() { ... } // from try @ 036a49bc with catch @ 036a473c
                       catch() { ... } // from try @ 036a49dc with catch @ 036a473c
                       catch() { ... } // from try @ 036a4a20 with catch @ 036a473c */
  if (in_CY && !in_ZR) {
    FUN_03667194();
    *(uint *)(unaff_x21 + 0x44) = *(uint *)(unaff_x21 + 0x44) & (unaff_w23 ^ 0xffffffff);
    if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_w20 < *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18)) {
      FUN_036673a4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


