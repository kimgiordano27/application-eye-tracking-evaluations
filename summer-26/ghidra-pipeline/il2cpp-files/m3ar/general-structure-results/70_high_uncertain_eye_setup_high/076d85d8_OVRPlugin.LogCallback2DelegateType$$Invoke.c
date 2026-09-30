/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 076d85d8
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__Invoke(undefined4 *param_1,long param_2)

{
  undefined4 *in_x9;
  undefined4 *in_x10;
  undefined4 *in_x11;
  long unaff_x19;
  undefined1 unaff_w20;
  
  if (param_2 != 0) {
    FUN_085503b8(*param_1,*in_x9,*in_x10,*in_x11,param_2,0);
    *(undefined1 *)(unaff_x19 + 0x98) = unaff_w20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


