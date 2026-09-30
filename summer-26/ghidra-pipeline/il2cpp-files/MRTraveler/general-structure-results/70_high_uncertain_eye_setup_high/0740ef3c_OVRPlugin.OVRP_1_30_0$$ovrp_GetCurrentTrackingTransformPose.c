/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 0740ef3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(ulong param_1)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eae158);
    FUN_03c8f898(PTR_DAT_08e80830);
    *(undefined1 *)(unaff_x22 + 0x8d0) = 1;
  }
  puVar1 = PTR_DAT_08e80830;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  __ptr = (void *)FUN_0740f4a0();
  FUN_0741e4a0();
  uVar2 = FUN_0740efcc();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


