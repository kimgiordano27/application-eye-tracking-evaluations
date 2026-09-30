/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$EndInvoke
ENTRY_POINT: 07c9ed94
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1 OVRPlugin_GetBoneSkeleton3Delegate__EndInvoke(void)

{
  long lVar1;
  undefined1 in_w8;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x9c6) = in_w8;
  lVar1 = FUN_071b94f8();
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


