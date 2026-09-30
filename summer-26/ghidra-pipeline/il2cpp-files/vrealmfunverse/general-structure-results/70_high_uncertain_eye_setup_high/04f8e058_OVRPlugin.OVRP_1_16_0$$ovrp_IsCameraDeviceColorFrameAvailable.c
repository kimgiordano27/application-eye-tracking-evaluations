/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceColorFrameAvailable
ENTRY_POINT: 04f8e058
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1 OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceColorFrameAvailable(void)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x21;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x21 + 0xd95) = 1;
  lVar1 = FUN_04332268();
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x60), lVar1 != 0)) {
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined1 *)(lVar1 + (int)unaff_w19 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


