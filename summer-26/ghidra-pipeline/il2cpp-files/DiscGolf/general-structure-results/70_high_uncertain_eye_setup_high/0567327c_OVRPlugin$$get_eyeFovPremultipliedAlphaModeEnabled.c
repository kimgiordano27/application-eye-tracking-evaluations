/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 0567327c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (((*(char *)(lVar2 + 0x144) == '\0') || (3 < *(int *)(unaff_x19 + 0x1b8))) ||
       (*(int *)(unaff_x19 + 0x54) == 2)) {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(unaff_x19 + 0x250) == '\0';
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


