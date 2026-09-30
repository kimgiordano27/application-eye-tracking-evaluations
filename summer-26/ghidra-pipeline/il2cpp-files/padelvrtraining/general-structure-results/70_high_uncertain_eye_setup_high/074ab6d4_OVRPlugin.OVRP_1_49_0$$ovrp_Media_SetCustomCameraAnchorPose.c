/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 074ab6d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(void)

{
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar1;
  int in_w8;
  long *unaff_x23;
  
  if (in_w8 == 0) {
    thunk_FUN_03db619c();
  }
  __ptr = (void *)FUN_074a3564();
  __ptr_00 = (void *)FUN_074a3564();
  uVar1 = FUN_074ab750();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03db619c(*unaff_x23);
  }
  free(__ptr);
  free(__ptr_00);
  return uVar1;
}


