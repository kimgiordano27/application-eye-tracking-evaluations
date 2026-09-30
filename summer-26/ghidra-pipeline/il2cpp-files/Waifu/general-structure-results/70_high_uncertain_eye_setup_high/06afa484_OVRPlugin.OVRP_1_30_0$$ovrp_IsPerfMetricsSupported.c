/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_IsPerfMetricsSupported
ENTRY_POINT: 06afa484
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_30_0__ovrp_IsPerfMetricsSupported(void)

{
  long lVar1;
  long unaff_x19;
  undefined1 unaff_w20;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x51a) = unaff_w20;
  if (*(int *)(DAT_083c9658 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (**(long **)(DAT_083c9658 + 0xb8) != 0) {
    FUN_05e7adfc(**(long **)(DAT_083c9658 + 0xb8),DAT_083e4bc8);
    lVar1 = *(long *)(*(long *)(DAT_083c9658 + 0xb8) + 8);
    if (lVar1 != 0) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>___cctor(lVar1,DAT_083e50c8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


