/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 05301c64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_VrFocusLost(void)

{
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_02f08768(PTR_DAT_067c8fb0);
  FUN_02f08768(Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x103) = 1;
  thunk_FUN_02f45270(*unaff_x22);
  FUN_05054f60();
  FUN_052364c4();
  FUN_05236568();
  return;
}


