/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 072ca600
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(long param_1)

{
  int in_w8;
  undefined8 unaff_x19;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
    param_1 = *unaff_x20;
  }
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_040ec700();
  return;
}


