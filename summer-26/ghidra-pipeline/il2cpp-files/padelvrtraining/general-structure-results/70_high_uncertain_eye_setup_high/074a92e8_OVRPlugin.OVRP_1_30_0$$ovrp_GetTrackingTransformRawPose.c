/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 074a92e8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose(long param_1)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x9f0));
  *(undefined1 *)(unaff_x21 + 0x100) = 1;
  puVar1 = PTR_DAT_091b49f0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  __ptr = (void *)FUN_074a3564();
  uVar2 = FUN_074a9354();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


