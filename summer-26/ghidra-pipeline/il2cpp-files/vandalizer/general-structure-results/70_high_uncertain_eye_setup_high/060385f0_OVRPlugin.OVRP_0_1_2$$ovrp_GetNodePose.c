/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 060385f0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_0329bf60();
  uVar1 = FUN_031f21dc(*unaff_x22,5);
  FUN_05d2c79c(uVar1,*unaff_x21,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_0329bf60(puVar2,uVar1);
  return;
}


