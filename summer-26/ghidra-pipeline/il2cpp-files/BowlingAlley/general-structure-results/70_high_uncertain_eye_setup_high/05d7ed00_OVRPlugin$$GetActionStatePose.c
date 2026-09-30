/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 05d7ed00
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetActionStatePose(void)

{
  uint uVar1;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  long in_stack_00000048;
  
  unaff_x19[1] = in_stack_00000028;
  *unaff_x19 = in_stack_00000020;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,in_stack_00000028._4_4_);
  uVar1 = FUN_05d7ed70();
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_05d729b0(in_stack_00000048,unaff_w20,0);
    unaff_x19[1] = in_stack_00000008;
    *unaff_x19 = in_stack_00000000;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  }
  return uVar1 & 1;
}


