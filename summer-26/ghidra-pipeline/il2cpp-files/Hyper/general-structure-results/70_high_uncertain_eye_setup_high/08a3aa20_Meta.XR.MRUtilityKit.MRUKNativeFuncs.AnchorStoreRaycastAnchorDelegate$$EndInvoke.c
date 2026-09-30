/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastAnchorDelegate$$EndInvoke
ENTRY_POINT: 08a3aa20
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate__EndInvoke(long param_1)

{
  long lVar1;
  
  lVar1 = thunk_FUN_049ae08c(*(undefined8 *)(param_1 + 0xd60));
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac52e50);
  FUN_07b6c824();
  return;
}


