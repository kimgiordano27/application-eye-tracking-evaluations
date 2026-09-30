/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$get_MaxColorLutResolution
ENTRY_POINT: 0746767c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager_PassthroughCapabilities__get_MaxColorLutResolution(long param_1)

{
  if ((bRam0000000009845863 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_092230d8);
    bRam0000000009845863 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    return *(long *)(param_1 + 0x10) == *(long *)(*(long *)(param_1 + 0x18) + 200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


