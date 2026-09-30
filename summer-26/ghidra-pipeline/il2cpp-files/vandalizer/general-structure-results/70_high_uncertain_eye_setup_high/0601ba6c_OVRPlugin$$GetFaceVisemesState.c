/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 0601ba6c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1 OVRPlugin__GetFaceVisemesState(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint in_w9;
  
  if (in_w9 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  lVar1 = *(long *)(param_1 + (long)(int)param_3 * 8 + 0x20);
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x2c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


