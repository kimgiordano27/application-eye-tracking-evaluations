/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 05be1dd8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__Invoke(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    lVar2 = 0;
    while( true ) {
      if ((ulong)uVar1 * 8 - lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar4 = *(long *)(lVar3 + 0x20 + lVar2);
      if (lVar4 == 0) break;
      lVar2 = lVar2 + 8;
      *(undefined1 *)(lVar4 + 0x1d) = 0;
      if (lVar2 == 0x28) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


