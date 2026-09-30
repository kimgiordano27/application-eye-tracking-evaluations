/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 076e3fc0
PROGRAM: m3ar-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  FUN_08596724(param_1,0);
  uVar1 = FUN_054b5284();
  if ((uVar1 & 1) == 0) {
    uVar2 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    uVar3 = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    in_stack_00000020._4_8_ = in_stack_00000060;
    in_stack_00000038 = uStack0000000000000074;
  }
  else {
    if (*(long *)(unaff_x20 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uStack0000000000000014 = uStack0000000000000074;
    FUN_076e39b4(&stack0x00000020 + 4);
    uVar2 = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
    uVar3 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
  }
  unaff_x19[1] = uVar2;
  *unaff_x19 = in_stack_00000020._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000038;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar3;
  return;
}


