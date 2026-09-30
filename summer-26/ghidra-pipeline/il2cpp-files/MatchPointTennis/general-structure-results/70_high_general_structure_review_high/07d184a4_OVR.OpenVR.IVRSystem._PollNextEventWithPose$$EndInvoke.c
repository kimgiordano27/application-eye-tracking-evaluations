/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 07d184a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(undefined8 param_1)

{
  long lVar1;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  thunk_FUN_044a54b4(param_1);
  FUN_0795761c();
  in_stack_00000018 = unaff_x23;
  thunk_FUN_044bb4b4(&stack0x00000018);
  lVar1 = **(long **)(*unaff_x24 + 0xb8);
  if (lVar1 != 0) {
    in_stack_00000050 = in_stack_00000018;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),&stack0x00000040,*(undefined8 *)(lVar1 + 0x28));
  }
  return;
}


