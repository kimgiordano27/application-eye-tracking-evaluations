/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastAnchorAllDelegate$$EndInvoke
ENTRY_POINT: 04dd9ae0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastAnchorAllDelegate__EndInvoke(long param_1)

{
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  FUN_04df96a0();
  return;
}


