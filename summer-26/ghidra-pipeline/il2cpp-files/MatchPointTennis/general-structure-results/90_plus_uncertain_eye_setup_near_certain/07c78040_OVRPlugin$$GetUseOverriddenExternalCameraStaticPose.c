/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 07c78040
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin__GetUseOverriddenExternalCameraStaticPose(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 in_register_00005148;
  ulong in_stack_00000070;
  uint uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  ulong in_stack_000000a0;
  uint in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  ulong in_stack_000000c0;
  uint in_stack_000000c8;
  ulong in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  char in_stack_00000128;
  ulong in_stack_00000150;
  undefined8 in_stack_00000158;
  
  do {
    FUN_07c1d744(param_1,param_2,0);
LAB_07c78048:
    do {
      lVar6 = *(long *)(unaff_x24 + 0x20);
      if (lVar6 == 0) goto LAB_07c78050;
      if (*(int *)(lVar6 + 0x18) <= unaff_w25) {
        auVar9._8_8_ = in_register_00005148;
        auVar9._0_8_ = unaff_d10;
        return auVar9;
      }
      FUN_05a2b850(&stack0x00000070,lVar6,unaff_w25,*unaff_x21);
      in_stack_00000108 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000118 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_00000110 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      uVar4 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
      in_stack_00000100 = in_stack_00000070;
      *(ulong *)((long)unaff_x28 + 0x54) = CONCAT44(in_stack_00000098,uStack0000000000000094);
      *(undefined8 *)((long)unaff_x28 + 0x4c) = uVar4;
      lVar6 = *(long *)(unaff_x24 + 0x20);
      if (lVar6 == 0) goto LAB_07c78050;
      iVar1 = *(int *)(lVar6 + 0x18);
      unaff_w25 = unaff_w25 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w25 / iVar1;
      }
      FUN_05a2b850(&stack0x00000070,lVar6,unaff_w25 - iVar2 * iVar1,*unaff_x21);
      uVar8 = (undefined4)uVar4;
      in_stack_000000d8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000e8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_000000e0 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      in_stack_000000f0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      if (in_stack_00000128 == '\0') {
        if ((in_stack_00000098 & 0xff) != 0) goto LAB_07c78048;
LAB_07c77dc4:
        if (*(long *)(unaff_x24 + 0x20) == 0) {
LAB_07c78050:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) == 1) goto LAB_07c77dd8;
        lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50828);
        FUN_07a80df4(lVar6,0);
        in_stack_00000158 = in_stack_00000108;
        in_stack_00000150 = in_stack_00000100;
        *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x44);
        *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0x3c);
        FUN_07c1de88(&stack0x00000070,unaff_x27,&stack0x00000150,0);
        if (lVar6 == 0) goto LAB_07c78050;
        *(ulong *)(lVar6 + 0x24) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
        *(ulong *)(lVar6 + 0x1c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
        *(ulong *)(lVar6 + 0x18) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
        *(ulong *)(lVar6 + 0x10) = in_stack_00000070;
        in_stack_00000158 = in_stack_000000d8;
        in_stack_00000150 = in_stack_000000d0;
        *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x14);
        *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0xc);
        FUN_07c1de88(&stack0x00000070,unaff_x27,&stack0x00000150,0);
        uVar4 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
        *(ulong *)(lVar6 + 0x40) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
        *(ulong *)(lVar6 + 0x38) = in_stack_00000070;
        *(ulong *)(lVar6 + 0x4c) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
        *(undefined8 *)(lVar6 + 0x44) = uVar4;
        uVar7 = FUN_07c780e0(&stack0x00000100,unaff_x27);
        *(undefined4 *)(lVar6 + 0x2c) = uVar7;
        *(int *)(lVar6 + 0x30) = (int)uVar4;
        *(undefined4 *)(lVar6 + 0x34) = uVar8;
        FUN_07c78104(*unaff_x23,unaff_x23[1],unaff_x23[2],*(undefined4 *)(lVar6 + 0x10),
                     *(undefined4 *)(lVar6 + 0x14),*(undefined4 *)(lVar6 + 0x18));
        uVar7 = unaff_x23[4];
        uVar10 = unaff_x23[5];
        uVar8 = FUN_07c78368(unaff_x23[3],uVar7,uVar10,unaff_x23[6],*(undefined4 *)(lVar6 + 0x1c),
                             *(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                             *(undefined4 *)(lVar6 + 0x28));
        *(undefined4 *)(lVar6 + 0x58) = uVar8;
        puVar3 = PTR_DAT_09f50810;
        uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50810);
        FUN_07c77484(uVar4,lVar6,*(undefined8 *)PTR_DAT_09f50818);
        uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
        FUN_07c77484(uVar4,lVar6,*(undefined8 *)PTR_DAT_09f50820);
        unaff_x28 = &stack0x000000d0;
        uVar8 = FUN_07c7704c();
        in_stack_000000c0 = CONCAT44(uVar7,uVar8);
        unaff_x21 = (undefined8 *)PTR_DAT_09f50808;
        in_stack_000000c8 = uVar10;
      }
      else {
        if ((in_stack_00000098 & 0xff) == 0) goto LAB_07c77dc4;
LAB_07c77dd8:
        in_stack_00000158 = in_stack_00000108;
        in_stack_00000150 = in_stack_00000100;
        *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x44);
        *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0x3c);
        FUN_07c1de88(&stack0x00000070,unaff_x27,&stack0x00000150,0);
        uStack00000000000000b4 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
        in_stack_000000a8 = uStack0000000000000078;
        in_stack_000000a0 = in_stack_00000070;
        uStack00000000000000b0 = uStack0000000000000080;
        FUN_07c1d744(&stack0x00000130,&stack0x000000a0,0);
        uStack0000000000000078 = 0;
        in_stack_00000070 = 0;
        FUN_07c72a34(*unaff_x20,&stack0x00000070);
        in_stack_000000c0 = in_stack_00000070;
        in_stack_000000c8 = uStack0000000000000078;
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar5 = FUN_07c71620(unaff_d10,unaff_d9,unaff_d8,&stack0x000000c0);
    } while ((uVar5 & 1) == 0);
    unaff_d10 = in_stack_000000c0 & 0xffffffff;
    in_register_00005148 = 0;
    unaff_d9 = in_stack_000000c0 >> 0x20;
    unaff_d8 = (ulong)in_stack_000000c8;
    param_2 = &stack0x00000130;
    param_1 = unaff_x26;
  } while( true );
}


