/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreShutdownOpenXrDelegate$$BeginInvoke
ENTRY_POINT: 04a6e5d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate__BeginInvoke
               (long param_1)

{
  undefined4 uVar1;
  long unaff_x20;
  long *unaff_x21;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  thunk_FUN_02bb0e9c();
  if (*unaff_x21 != 0) {
    uVar1 = FUN_04c8d044(*unaff_x21,*(undefined8 *)PTR_DAT_06320978,0);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
    thunk_FUN_02bb0e9c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


