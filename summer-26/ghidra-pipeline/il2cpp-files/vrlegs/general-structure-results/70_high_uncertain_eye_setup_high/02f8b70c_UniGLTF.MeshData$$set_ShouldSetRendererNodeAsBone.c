/*
FUNCTION_NAME: UniGLTF.MeshData$$set_ShouldSetRendererNodeAsBone
ENTRY_POINT: 02f8b70c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UniGLTF_MeshData__set_ShouldSetRendererNodeAsBone(void)

{
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x20 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


