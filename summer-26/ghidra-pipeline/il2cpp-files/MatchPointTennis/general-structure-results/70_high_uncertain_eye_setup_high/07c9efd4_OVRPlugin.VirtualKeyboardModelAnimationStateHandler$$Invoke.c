/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$Invoke
ENTRY_POINT: 07c9efd4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__Invoke(void)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x20;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x19 + 0x9ca) = 1;
  plVar2 = (long *)(unaff_x20 + 0x70);
  if (*plVar2 == 0) {
    lVar1 = FUN_071b94f8();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(char *)(lVar1 + 0x10) != '\0') && (*(char *)(lVar1 + 0x11) != '\0')) {
      lVar1 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e38);
      FUN_07c9f054();
      *plVar2 = lVar1;
      thunk_FUN_044bb4b4(plVar2,lVar1);
      return;
    }
  }
  return;
}


