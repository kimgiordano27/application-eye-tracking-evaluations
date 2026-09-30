/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateWithoutOpenXrDelegate$$Invoke
ENTRY_POINT: 077148b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate__Invoke
               (undefined8 param_1)

{
  uint uVar1;
  long unaff_x19;
  long *unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 0x28) = param_1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28),param_1);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar1 = FUN_094ed840(*(long *)(unaff_x19 + 0x20),0);
    if (*unaff_x20 != 0) {
      FUN_094ed8f4(*unaff_x20,1,0);
      if (*unaff_x20 != 0) {
        FUN_094ed8f4(*unaff_x20,uVar1 & 1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


