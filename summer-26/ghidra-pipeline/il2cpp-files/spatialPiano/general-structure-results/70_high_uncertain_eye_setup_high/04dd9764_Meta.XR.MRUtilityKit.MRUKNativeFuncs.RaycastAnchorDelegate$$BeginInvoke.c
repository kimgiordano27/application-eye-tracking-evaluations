/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastAnchorDelegate$$BeginInvoke
ENTRY_POINT: 04dd9764
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastAnchorDelegate__BeginInvoke(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x1b0));
  lVar1 = *(long *)(unaff_x19 + 0x38);
  if (lVar1 == 0) {
    FUN_02f41ef8();
    lVar1 = *(long *)(unaff_x19 + 0x38);
  }
  if (*(long *)(*(long *)(lVar1 + 8) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  return 0x7f;
}


