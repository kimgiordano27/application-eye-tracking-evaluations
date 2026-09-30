/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$BeginInvoke
ENTRY_POINT: 07c9ed74
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


undefined1 OVRPlugin_GetBoneSkeleton3Delegate__BeginInvoke(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x21 + 0x920);
  if ((*(byte *)(unaff_x20 + 0x9c6) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50920);
    *(undefined1 *)(unaff_x20 + 0x9c6) = 1;
  }
  lVar1 = FUN_071b94f8(param_1,*puVar2);
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


