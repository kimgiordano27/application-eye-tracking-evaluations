/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorUpdated$$Invoke
ENTRY_POINT: 08a38820
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__Invoke(ulong param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac4f280);
    *(undefined1 *)(unaff_x20 + 0x3aa) = 1;
  }
  if (unaff_x19 != 0) {
    thunk_FUN_08bd7c8c(*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_0ac4f280,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


