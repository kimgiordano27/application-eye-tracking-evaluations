/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 051b24e4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(void)

{
  long lVar1;
  long *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  FUN_05effcac();
  lVar1 = *(long *)(*unaff_x19 + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = uStack0000000000000014;
  *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  *(undefined8 *)(lVar1 + 0x24) = in_stack_00000008;
  *(undefined8 *)(lVar1 + 0x1c) = in_stack_00000000;
  return;
}


