/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 02fc61a8
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_hasVrFocus(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dec080);
    thunk_FUN_0159f088(PTR_DAT_06de8a30);
    *(undefined1 *)(unaff_x22 + 0x1d0) = 1;
  }
  FUN_02d76b34(param_2,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar1 = FUN_03f038c8(0);
  if (lVar1 != 0) {
    FUN_04d76f9c(lVar1,param_2,param_3,*(undefined8 *)PTR_DAT_06dec080);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


