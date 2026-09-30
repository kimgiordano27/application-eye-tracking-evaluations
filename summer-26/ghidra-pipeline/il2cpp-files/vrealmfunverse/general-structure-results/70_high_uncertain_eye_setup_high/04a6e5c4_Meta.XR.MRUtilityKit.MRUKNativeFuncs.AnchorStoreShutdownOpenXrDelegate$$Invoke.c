/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreShutdownOpenXrDelegate$$Invoke
ENTRY_POINT: 04a6e5c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate__Invoke(void)

{
  undefined4 uVar1;
  uint in_w8;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  
  for (; (long)unaff_x23 < (long)(int)in_w8; unaff_x23 = unaff_x23 + 1) {
    if (in_w8 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    FUN_04a6fe0c();
    in_w8 = *(uint *)(unaff_x22 + 0x18);
  }
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


