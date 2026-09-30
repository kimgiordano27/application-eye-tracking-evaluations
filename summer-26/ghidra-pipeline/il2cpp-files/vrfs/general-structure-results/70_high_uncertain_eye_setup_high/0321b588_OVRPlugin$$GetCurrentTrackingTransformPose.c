/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 0321b588
PROGRAM: vrfs-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetCurrentTrackingTransformPose(undefined1 param_1 [16])

{
  bool in_ZR;
  bool in_CY;
  uint uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x24;
  long *unaff_x25;
  undefined1 uStack0000000000000008;
  undefined1 uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined2 uStack0000000000000078;
  undefined6 uStack000000000000007a;
  undefined2 uStack0000000000000080;
  undefined8 uStack0000000000000082;
  long in_stack_00000098;
  
  uStack0000000000000018 = param_1._8_8_;
  uStack0000000000000010 = param_1._0_8_;
  uStack000000000000000c = 0;
  uStack0000000000000080 = param_1._6_2_;
  uStack0000000000000078 = param_1._8_2_;
  uStack000000000000007a = param_1._10_6_;
  uStack0000000000000008 = 0;
  uStack0000000000000020 = uStack0000000000000010;
  uStack0000000000000028 = uStack0000000000000018;
  uStack0000000000000030 = uStack0000000000000010;
  uStack0000000000000038 = uStack0000000000000018;
  uStack0000000000000040 = uStack0000000000000010;
  uStack0000000000000048 = uStack0000000000000018;
  uStack0000000000000050 = uStack0000000000000010;
  uStack0000000000000058 = uStack0000000000000018;
  uStack0000000000000060 = uStack0000000000000010;
  uStack0000000000000068 = uStack0000000000000018;
  uStack0000000000000070 = uStack0000000000000010;
  uStack0000000000000082 = uStack0000000000000018;
  if (!in_CY || in_ZR) {
    uStack000000000000000c = 0;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_03226bbc();
  }
  else {
    *unaff_x19 = 0;
    if ((unaff_w20 >> 9 & 1) == 0) {
      uStack0000000000000082 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000068 = 0;
      uStack0000000000000060 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007a = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000048 = 0;
      uStack0000000000000040 = 0;
      uStack0000000000000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000028 = 0;
      uStack0000000000000020 = 0;
      uStack0000000000000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000018 = 0;
      uStack0000000000000010 = 0;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar2 = FUN_03229128();
      uVar1 = 0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar1 = FUN_03225cf0(&stack0x00000010);
      }
    }
    else {
      uStack0000000000000008 = 0;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar1 = FUN_03227370();
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


