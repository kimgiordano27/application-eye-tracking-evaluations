/*
FUNCTION_NAME: OVRManager.<>c$$.ctor
ENTRY_POINT: 0565df68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_<>c___ctor(long param_1,undefined1 param_2 [16],undefined4 param_3)

{
  long lVar1;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x8c) = param_3;
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    FUN_05660ef8(lVar1,*(int *)(lVar1 + 0xa8) + 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


