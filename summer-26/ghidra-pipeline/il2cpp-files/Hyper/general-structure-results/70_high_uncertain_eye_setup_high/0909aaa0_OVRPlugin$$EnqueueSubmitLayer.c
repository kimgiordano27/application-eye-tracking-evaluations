/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 0909aaa0
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__EnqueueSubmitLayer(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  long lVar1;
  
  if (in_NG == in_OV) {
    lVar1 = FUN_06b7fba4(param_1,0,*(undefined8 *)PTR_DAT_0ac78ce8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(char *)(lVar1 + 0x38) != '\0') {
      return *(long *)(lVar1 + 0x48) != 0;
    }
  }
  return false;
}


