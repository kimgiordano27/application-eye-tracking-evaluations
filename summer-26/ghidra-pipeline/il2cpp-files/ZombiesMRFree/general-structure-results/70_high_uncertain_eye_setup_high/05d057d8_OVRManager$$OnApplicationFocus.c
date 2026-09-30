/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 05d057d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationFocus(void)

{
  undefined8 uVar1;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  *(undefined1 *)(unaff_x20 + 0x7c0) = in_w8;
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar1 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f73f20);
  FUN_05a645d0();
  if (lVar2 != 0) {
    FUN_040572f8(lVar2,uVar1,*(undefined8 *)PTR_DAT_06fb8440);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


