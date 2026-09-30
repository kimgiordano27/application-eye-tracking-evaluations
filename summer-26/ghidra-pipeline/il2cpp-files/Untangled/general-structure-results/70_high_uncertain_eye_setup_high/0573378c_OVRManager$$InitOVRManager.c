/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 0573378c
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRManager__InitOVRManager(long param_1)

{
  undefined8 uVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  
  if (in_x9 != param_1) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    uVar1 = FUN_057337c0(*(long *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x19 + 0x58));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


