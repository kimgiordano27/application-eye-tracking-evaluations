/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$BeginInvoke
ENTRY_POINT: 07c9efe8
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


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__BeginInvoke(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  
  if (param_1 == 0) {
    lVar1 = FUN_071b94f8();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(char *)(lVar1 + 0x10) != '\0') && (*(char *)(lVar1 + 0x11) != '\0')) {
      uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e38);
      FUN_07c9f054();
      *unaff_x19 = uVar2;
      thunk_FUN_044bb4b4();
      return;
    }
  }
  return;
}


