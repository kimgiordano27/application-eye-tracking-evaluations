/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppLatencyTimings
ENTRY_POINT: 05bec930
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppLatencyTimings(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_03ac393c();
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        lVar3 = *(long *)(lVar2 + 0x20 + lVar4 * 8);
        if (lVar3 == 0) goto LAB_05bec98c;
        FUN_069a0b64(lVar3,0,0);
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    return;
  }
LAB_05bec98c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


