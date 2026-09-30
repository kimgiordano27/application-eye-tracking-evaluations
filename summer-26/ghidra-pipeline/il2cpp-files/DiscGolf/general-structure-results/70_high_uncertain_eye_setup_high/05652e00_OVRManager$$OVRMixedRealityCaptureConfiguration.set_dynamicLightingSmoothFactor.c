/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor
ENTRY_POINT: 05652e00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor
               (undefined8 param_1)

{
  undefined8 uVar1;
  int in_w9;
  undefined8 *unaff_x23;
  
  if (in_w9 == 0) {
    thunk_FUN_02df485c(param_1);
  }
  uVar1 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY();
  FUN_055efebc(uVar1,*unaff_x23,0,0);
  return;
}


