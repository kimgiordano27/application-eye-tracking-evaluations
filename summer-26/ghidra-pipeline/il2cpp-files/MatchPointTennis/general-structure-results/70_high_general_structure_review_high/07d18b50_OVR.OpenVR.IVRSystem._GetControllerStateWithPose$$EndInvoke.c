/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 07d18b50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke
               (undefined1 param_1 [16],undefined8 param_2)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
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
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000110;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 uVar9;
  
  uStack0000000000000110 = param_2;
  FUN_07d18ca8();
  if (unaff_x20 != 0) {
    uVar10 = in_stack_000000d0 & 0xffffffff;
    uVar4 = in_stack_000000d0._4_4_;
    uVar13 = in_stack_000000d8 & 0xffffffff;
    uVar6 = in_stack_000000d8._4_4_;
    uVar14 = in_stack_000000e0 & 0xffffffff;
    uVar2 = in_stack_000000e0._4_4_;
    uVar15 = in_stack_000000e8 & 0xffffffff;
    lVar1 = FUN_095258d0();
    if (lVar1 != 0) {
      FUN_09539898(&stack0x00000090,lVar1,0);
      in_stack_000000d8 = in_stack_00000098;
      in_stack_000000d0 = in_stack_00000090;
      in_stack_000000e8 = in_stack_000000a8;
      in_stack_000000e0 = in_stack_000000a0;
      in_stack_000000f8 = in_stack_000000b8;
      in_stack_000000f0 = in_stack_000000b0;
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000100 = in_stack_000000c0;
      if (DAT_0a51bf46 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf46 = '\x01';
      }
      FUN_09512310(&stack0x00000090,uVar10,uVar4,uVar13,uVar6,uVar14,uVar2,uVar15,0);
      in_stack_00000178 = in_stack_00000098;
      in_stack_00000170 = in_stack_00000090;
      in_stack_00000188 = in_stack_000000a8;
      in_stack_00000180 = in_stack_000000a0;
      in_stack_00000018 = in_stack_00000098;
      in_stack_00000010 = in_stack_00000090;
      in_stack_00000028 = in_stack_000000a8;
      in_stack_00000020 = in_stack_000000a0;
      in_stack_00000198 = in_stack_000000b8;
      in_stack_00000190 = in_stack_000000b0;
      in_stack_000001a8 = in_stack_000000c8;
      in_stack_000001a0 = in_stack_000000c0;
      in_stack_00000038 = in_stack_000000b8;
      in_stack_00000030 = in_stack_000000b0;
      in_stack_00000048 = in_stack_000000c8;
      in_stack_00000040 = in_stack_000000c0;
      in_stack_00000078 = in_stack_000000f8;
      in_stack_00000070 = in_stack_000000f0;
      in_stack_00000088 = in_stack_00000108;
      in_stack_00000080 = in_stack_00000100;
      in_stack_00000058 = in_stack_000000d8;
      in_stack_00000050 = in_stack_000000d0;
      in_stack_00000068 = in_stack_000000e8;
      in_stack_00000060 = in_stack_000000e0;
      FUN_09513338(&stack0x00000090,&stack0x00000050,&stack0x00000010,0);
      in_stack_00000138 = in_stack_00000098;
      in_stack_00000130 = in_stack_00000090;
      in_stack_00000148 = in_stack_000000a8;
      in_stack_00000140 = in_stack_000000a0;
      in_stack_00000158 = in_stack_000000b8;
      in_stack_00000150 = in_stack_000000b0;
      in_stack_00000168 = in_stack_000000c8;
      in_stack_00000160 = in_stack_000000c0;
      uVar5 = in_stack_000000a0;
      uVar7 = in_stack_000000b0;
      uVar9 = in_stack_000000c0;
      uVar2 = FUN_09512fe8(&stack0x00000130,3,0);
      uVar8 = (undefined4)uVar9;
      uVar4 = uVar11;
      uVar6 = uVar12;
      uVar3 = thunk_FUN_095120ac(&stack0x00000130,0);
      *unaff_x19 = uVar2;
      uVar11 = (undefined4)uVar5;
      unaff_x19[1] = uVar11;
      uVar12 = (undefined4)uVar7;
      unaff_x19[2] = uVar12;
      unaff_x19[3] = uVar3;
      unaff_x19[4] = uVar4;
      unaff_x19[5] = uVar6;
      unaff_x19[6] = uVar8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


