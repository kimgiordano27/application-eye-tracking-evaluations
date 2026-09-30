/*
FUNCTION_NAME: FUN_05ee871c
ENTRY_POINT: 05ee871c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05ee871c(void)

{
  undefined *puVar1;
  
  puVar1 = Method_OVRPlugin_PinnedArray<Guid>_Dispose__;
  if ((DAT_06dc3fbc & 1) == 0) {
    FUN_02d965b8(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    DAT_06dc3fbc = 1;
  }
  return *(undefined8 *)puVar1;
}


