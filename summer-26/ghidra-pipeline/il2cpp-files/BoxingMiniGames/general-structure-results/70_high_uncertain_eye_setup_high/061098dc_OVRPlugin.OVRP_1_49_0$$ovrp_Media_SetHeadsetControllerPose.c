/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 061098dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long *unaff_x24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a24e68);
    FUN_03642964(PTR_DAT_079f8730);
    *(undefined1 *)(unaff_x25 + 0x480) = 1;
  }
  puVar1 = PTR_DAT_079f8730;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  __ptr = (void *)FUN_061019e8();
  uVar2 = FUN_0610997c(param_2,__ptr);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


