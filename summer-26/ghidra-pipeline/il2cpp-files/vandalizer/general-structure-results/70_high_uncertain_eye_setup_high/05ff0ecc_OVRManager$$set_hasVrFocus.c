/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 05ff0ecc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_hasVrFocus(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_07a46865 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b2b0);
    FUN_031f20f4(PTR_DAT_075f6c50);
    DAT_07a46865 = 1;
  }
  if ((char)param_1[7] != '\0') {
    lVar2 = param_1[4];
    uVar1 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759b2b0);
    FUN_05d75504(uVar1,param_1,*(undefined8 *)(*param_1 + 0x1b0),0);
    if (lVar2 != 0) {
      FUN_04459b28(lVar2,uVar1,*(undefined8 *)PTR_DAT_075f6c50);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  return;
}


