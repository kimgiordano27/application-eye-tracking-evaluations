/*
FUNCTION_NAME: FUN_06a14f08
ENTRY_POINT: 06a14f08
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a14f08(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = Method_OVRPlugin_PinnedArray<Guid>_Dispose__;
  if ((DAT_076e2931 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    DAT_076e2931 = 1;
  }
  FUN_06a14f50(param_1,*(undefined8 *)puVar1);
  return;
}


