/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 06afc774
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(void)

{
  undefined8 uVar1;
  void *__ptr;
  long unaff_x21;
  
  uVar1 = FUN_03398d30();
  *(undefined8 *)(unaff_x21 + 0x578) = uVar1;
  __ptr = (void *)FUN_03399068();
  uVar1 = (**(code **)(unaff_x21 + 0x578))();
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  return uVar1;
}


