/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateWithoutOpenXrDelegate$$EndInvoke
ENTRY_POINT: 077148ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate__EndInvoke
               (undefined8 param_1,undefined8 param_2)

{
  uint unaff_w19;
  long *unaff_x20;
  
  FUN_094ed8f4(param_1,param_2,0);
  if (*unaff_x20 != 0) {
    FUN_094ed8f4(*unaff_x20,unaff_w19 & 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


