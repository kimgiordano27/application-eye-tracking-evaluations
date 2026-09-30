/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$Invoke
ENTRY_POINT: 090c4ba4
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton2Delegate__Invoke(void)

{
  long lVar1;
  long unaff_x19;
  
  if ((*(long *)(unaff_x19 + 0x58) != 0) &&
     (lVar1 = FUN_0a178414(*(long *)(unaff_x19 + 0x58),0), lVar1 != 0)) {
    FUN_0a17ba14(lVar1,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


