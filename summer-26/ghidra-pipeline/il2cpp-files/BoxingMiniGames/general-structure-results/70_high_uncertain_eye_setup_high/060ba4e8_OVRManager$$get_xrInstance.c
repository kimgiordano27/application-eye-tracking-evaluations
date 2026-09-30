/*
FUNCTION_NAME: OVRManager$$get_xrInstance
ENTRY_POINT: 060ba4e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__get_xrInstance(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0xd78));
  FUN_03642964(PTR_DAT_07a23d80);
  *(undefined1 *)(unaff_x20 + 0x9ab) = 1;
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar1 = FUN_0459ed6c(lVar1,0,*(undefined8 *)PTR_DAT_07a23d80);
      if (lVar1 == 0) goto LAB_060ba558;
      if (*(char *)(lVar1 + 0x38) != '\0') {
        return *(long *)(lVar1 + 0x48) != 0;
      }
    }
    return false;
  }
LAB_060ba558:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


