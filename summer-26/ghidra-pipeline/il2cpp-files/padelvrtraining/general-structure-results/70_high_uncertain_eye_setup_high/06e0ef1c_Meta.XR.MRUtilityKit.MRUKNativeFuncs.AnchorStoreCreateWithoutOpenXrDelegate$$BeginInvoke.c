/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateWithoutOpenXrDelegate$$BeginInvoke
ENTRY_POINT: 06e0ef1c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate__BeginInvoke
          (undefined1 param_1 [16])

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x18) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x10) = param_1._0_8_;
  thunk_FUN_03d1023c();
  *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
  return 1;
}


