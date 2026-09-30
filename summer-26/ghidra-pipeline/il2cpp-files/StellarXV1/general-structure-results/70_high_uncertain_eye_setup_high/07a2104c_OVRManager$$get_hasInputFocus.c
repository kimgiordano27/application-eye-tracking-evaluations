/*
FUNCTION_NAME: OVRManager$$get_hasInputFocus
ENTRY_POINT: 07a2104c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasInputFocus(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_06e59bfc(param_2,param_3,*param_1);
  if (unaff_x20 != 0) {
    FUN_05886128();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285e40);
    FUN_075d444c();
    if (lVar2 != 0) {
      FUN_05886288(lVar2,uVar1,*(undefined8 *)PTR_DAT_092eff08);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


