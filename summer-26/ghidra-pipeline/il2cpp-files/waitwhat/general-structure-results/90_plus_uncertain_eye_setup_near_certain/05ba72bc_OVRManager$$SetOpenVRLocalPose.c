/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 05ba72bc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__SetOpenVRLocalPose
               (long *param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  float unaff_s8;
  float fVar4;
  float unaff_s10;
  undefined4 unaff_s13;
  float fStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  param_4 = **(float **)(*param_1 + 0xb8) * param_4;
  fVar4 = param_2 * param_6;
  if (param_2 * param_6 <= param_4) {
    fVar4 = param_4;
  }
  if (fVar4 <= ABS(param_3 - unaff_s10)) {
    if (DAT_07546bbf == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_07546bbf = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    puVar1 = PTR_DAT_070d3dc8;
    if (SQRT(unaff_s10) <= DAT_012e3cb4) {
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      fVar4 = *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 4);
    }
    else {
      fVar4 = unaff_s8 / SQRT(unaff_s10);
    }
    uVar2 = FUN_069d7e10(unaff_x20 + 0x2c,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar1);
    }
    fStack0000000000000004 = fVar4;
    uVar3 = FUN_06a5dacc(in_stack_00000020._4_4_,uStack0000000000000028,uStack000000000000002c,
                         unaff_s13,&stack0x00000090,uVar2,1,0);
    if ((uVar3 & 1) == 0) {
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
    }
    else {
      in_stack_000000c8 = in_stack_00000098;
      in_stack_000000c0 = in_stack_00000090;
      in_stack_000000d8 = in_stack_000000a8;
      in_stack_000000d0 = in_stack_000000a0;
      uStack00000000000000e4 = uStack00000000000000b4;
      in_stack_000000e0 = uStack00000000000000b0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_0466ff7c(&stack0x00000030,&stack0x000000c0,*(undefined8 *)PTR_DAT_07115e38);
      in_stack_00000088 = in_stack_00000058;
      in_stack_00000080 = in_stack_00000050;
      in_stack_00000068 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000078 = in_stack_00000048;
      in_stack_00000070 = in_stack_00000040;
    }
    unaff_x19[5] = in_stack_00000088;
    unaff_x19[4] = in_stack_00000080;
    unaff_x19[1] = in_stack_00000068;
    *unaff_x19 = in_stack_00000060;
    unaff_x19[3] = in_stack_00000078;
    unaff_x19[2] = in_stack_00000070;
  }
  else {
    uVar3 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  return uVar3 & 1;
}


