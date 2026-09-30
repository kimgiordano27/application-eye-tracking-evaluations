/*
FUNCTION_NAME: FUN_05be96b0
ENTRY_POINT: 05be96b0
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


void FUN_05be96b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,uint param_7)

{
  long lVar1;
  
  lVar1 = *(long *)(param_6 + 0x140);
  if (lVar1 != 0) {
    if (param_7 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)param_7 * 0x10;
      *(undefined4 *)(lVar1 + 0x20) = param_1;
      *(undefined4 *)(lVar1 + 0x24) = param_2;
      *(undefined4 *)(lVar1 + 0x28) = param_3;
      *(undefined4 *)(lVar1 + 0x2c) = param_4;
      lVar1 = *(long *)(param_6 + 0xd0);
      if (lVar1 == 0) goto OVRPlugin_Qpl_Variant__From;
      if (param_7 < *(uint *)(lVar1 + 0x18)) {
        *(undefined4 *)(lVar1 + (long)(int)param_7 * 4 + 0x20) = param_5;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
OVRPlugin_Qpl_Variant__From:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


