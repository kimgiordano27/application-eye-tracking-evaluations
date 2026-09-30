/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 036847fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsMultimodalHandsControllersSupported(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_0404c81c(*(long *)(param_1 + 0x28),0);
    if ((uVar1 & 1) == (param_2 & 1)) {
      return;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0404c858(*(long *)(param_1 + 0x28),param_2 & 1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


