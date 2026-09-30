/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.CreateEnvironmentRaycasterDelegate$$BeginInvoke
ENTRY_POINT: 06e11a64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate__BeginInvoke
          (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 in_w8;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 8) = in_w8;
  *(long *)(unaff_x19 + 0x18) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x10) = param_2._0_8_;
  *(long *)(unaff_x19 + 0x28) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x20) = param_1._0_8_;
  return 1;
}


