/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.PerformEnvironmentRaycastDelegate$$EndInvoke
ENTRY_POINT: 06e11cf4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_PerformEnvironmentRaycastDelegate__EndInvoke(void)

{
  int in_w8;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(int *)(unaff_x19 + 8) = in_w8 + 1;
  return 0;
}


