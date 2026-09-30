/*
FUNCTION_NAME: OVRPlugin$$get_localDimmingSupported
ENTRY_POINT: 060d7364
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_localDimmingSupported(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  FUN_042b3fcc();
  if (*(char *)(unaff_x19 + 0x21) == '\0') {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x38);
  uVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00120);
  FUN_05548bfc();
  if (lVar2 != 0) {
    FUN_042b4894(lVar2,uVar1,*(undefined8 *)PTR_DAT_07a23b40);
    FUN_060d73f4(0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_0718a8f8(*(long *)(unaff_x19 + 0x40),0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


