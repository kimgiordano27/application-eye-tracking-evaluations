/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 090c48ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(undefined8 param_1)

{
  undefined8 uVar1;
  bool in_ZR;
  undefined8 unaff_x19;
  long unaff_x20;
  
  uVar1 = unaff_x19;
  if (!in_ZR) {
    uVar1 = 0;
  }
  thunk_FUN_049ee3d8(param_1,uVar1);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x28));
  return;
}


