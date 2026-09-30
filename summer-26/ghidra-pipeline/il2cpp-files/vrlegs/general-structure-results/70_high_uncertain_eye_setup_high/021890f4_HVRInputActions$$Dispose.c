/*
FUNCTION_NAME: HVRInputActions$$Dispose
ENTRY_POINT: 021890f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02189188) */

undefined8 HVRInputActions__Dispose(void)

{
  undefined8 in_stack_00000008;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return 1;
}


