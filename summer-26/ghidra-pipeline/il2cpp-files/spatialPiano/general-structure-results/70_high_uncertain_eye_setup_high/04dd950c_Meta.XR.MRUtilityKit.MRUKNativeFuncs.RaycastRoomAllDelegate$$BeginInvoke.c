/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastRoomAllDelegate$$BeginInvoke
ENTRY_POINT: 04dd950c
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


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastRoomAllDelegate__BeginInvoke(long param_1)

{
  if ((DAT_06bb7da5 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb7da5 = 1;
  }
  return param_1 + 2;
}


