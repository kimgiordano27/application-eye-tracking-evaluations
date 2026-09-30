/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 05cf9af4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceQueryComplete(long param_1)

{
  undefined1 local_60 [32];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_05cf4c7c(local_60,*(long *)(param_1 + 0x20),0);
    if (DAT_0738e662 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e662 = '\x01';
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_05cf4c44(*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


