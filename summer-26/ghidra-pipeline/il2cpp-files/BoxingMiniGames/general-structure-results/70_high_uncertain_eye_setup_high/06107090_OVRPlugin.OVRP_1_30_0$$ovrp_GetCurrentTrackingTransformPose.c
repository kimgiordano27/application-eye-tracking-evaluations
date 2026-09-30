/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 06107090
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(long param_1)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_079f8730;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  __ptr = (void *)FUN_061019e8();
  uVar2 = FUN_061070e8();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


