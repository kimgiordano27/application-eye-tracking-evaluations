/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 01a0b080
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__EndInvoke(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x21 + 0x100);
  FUN_01a06bb8();
  *(undefined8 *)(unaff_x19 + 0x178) = param_1;
  lVar1 = thunk_FUN_00d62348(*puVar2);
  if (lVar1 != 0) {
    FUN_01a06c78();
    *(long *)(unaff_x19 + 0x1a0) = lVar1;
    FUN_0136a4fc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


