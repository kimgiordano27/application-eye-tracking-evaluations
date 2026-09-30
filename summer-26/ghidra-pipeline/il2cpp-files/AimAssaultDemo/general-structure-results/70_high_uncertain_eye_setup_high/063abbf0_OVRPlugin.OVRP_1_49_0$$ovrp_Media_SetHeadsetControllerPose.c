/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 063abbf0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(long *param_1)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70(*param_1);
  }
  uVar1 = FUN_061b1c0c();
  if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)PTR_DAT_07db6d58);
  }
  FUN_06a0f578(uVar1 & 1,0);
  return;
}


