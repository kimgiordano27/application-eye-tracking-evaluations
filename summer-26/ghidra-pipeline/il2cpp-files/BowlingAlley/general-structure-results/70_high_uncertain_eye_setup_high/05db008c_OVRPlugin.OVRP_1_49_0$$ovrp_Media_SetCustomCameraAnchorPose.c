/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 05db008c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_072b1a48;
  if ((DAT_076da767 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1a48);
    DAT_076da767 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_05dae024(uVar2,param_2 & 1);
  return;
}


