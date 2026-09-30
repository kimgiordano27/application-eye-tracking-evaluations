/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 060148fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x428));
  FUN_031f20f4(PTR_DAT_075f6c68);
  FUN_031f20f4(PTR_DAT_075f7430);
  *(undefined1 *)(unaff_x20 + 0x9d4) = 1;
  FUN_04458e90();
  if (*(char *)(unaff_x19 + 0x21) == '\0') {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x38);
  uVar1 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8ec8);
  FUN_056f853c();
  if (lVar2 != 0) {
    FUN_04459758(lVar2,uVar1,*(undefined8 *)PTR_DAT_075f6c68);
    FUN_060149bc(0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_06e03bb0(*(long *)(unaff_x19 + 0x40),0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


