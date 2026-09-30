/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 05daf41c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose(long param_1)

{
  undefined *puVar1;
  void *__ptr;
  long *unaff_x21;
  long unaff_x22;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x478));
  *(undefined1 *)(unaff_x22 + 0x6d8) = 1;
  puVar1 = PTR_DAT_0727e478;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  __ptr = (void *)FUN_05d92b8c();
  FUN_05daf484();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  free(__ptr);
  return;
}


