/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 051de66c
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar15;
  long unaff_x21;
  undefined8 uVar16;
  long *unaff_x23;
  undefined4 uVar17;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined8 uStack0000000000000154;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined4 uStack00000000000001b8;
  
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  uVar6 = DAT_013de104;
  uVar5 = DAT_013de100;
  uVar4 = DAT_013de038;
  uVar3 = DAT_013ddf60;
  uVar2 = DAT_013ddc78;
  uVar1 = DAT_013ddb60;
  uVar17 = *(undefined4 *)(in_x9 + 0x17c);
  *(undefined4 *)(unaff_x20 + 0x280) = 0;
  uStack00000000000001a0 = 0;
  uStack00000000000001a8 = 0;
  uStack00000000000001b8 = 0;
  uStack00000000000001b0 = 0;
  FUN_05effcac(uVar5,uVar17,uVar2,uVar1,uVar6,uVar4,uVar3,&stack0x000001a0,0);
  *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
  *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
  in_stack_00000188 = uStack00000000000001a8;
  in_stack_00000180 = uStack00000000000001a0;
  if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x284) = 0x10;
    uVar15 = *(undefined8 *)(unaff_x21 + 0xc);
    *(undefined8 *)(unaff_x20 + 0x29c) = *(undefined8 *)(unaff_x21 + 0x14);
    *(undefined8 *)(unaff_x20 + 0x294) = uVar15;
    *(undefined8 *)(unaff_x20 + 0x290) = uStack00000000000001a8;
    *(undefined8 *)(unaff_x20 + 0x288) = uStack00000000000001a0;
    uVar17 = DAT_013de5e8;
    uVar6 = DAT_013de588;
    uVar5 = DAT_013dde48;
    uVar4 = DAT_013dde44;
    uVar3 = DAT_013ddd94;
    uVar2 = DAT_013ddd30;
    uVar1 = DAT_013ddcd8;
    *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
    in_stack_00000160 = 0;
    uStack0000000000000168 = 0;
    uStack000000000000016c = 0;
    in_stack_00000178 = 0;
    uStack0000000000000170 = 0;
    uStack0000000000000174 = 0;
    FUN_05effcac(uVar6,uVar2,uVar4,uVar1,uVar3,uVar17,uVar5,&stack0x00000160,0);
    uStack0000000000000154 = CONCAT44(in_stack_00000178,uStack0000000000000174);
    uStack0000000000000150 = uStack0000000000000170;
    uStack0000000000000148 = uStack0000000000000168;
    uStack000000000000014c = uStack000000000000016c;
    in_stack_00000140 = in_stack_00000160;
    if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2a8) = 0x11;
      *(undefined8 *)(unaff_x20 + 0x2c0) = uStack0000000000000154;
      *(ulong *)(unaff_x20 + 0x2b8) = CONCAT44(uStack0000000000000170,uStack000000000000016c);
      *(ulong *)(unaff_x20 + 0x2b4) = CONCAT44(uStack000000000000016c,uStack0000000000000168);
      *(undefined8 *)(unaff_x20 + 0x2ac) = in_stack_00000160;
      uVar3 = DAT_013de1d8;
      uVar2 = DAT_013ddcdc;
      uVar1 = DAT_013ddc0c;
      *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
      in_stack_00000120 = 0;
      uStack0000000000000128 = 0;
      uStack000000000000012c = 0;
      in_stack_00000138 = 0;
      uStack0000000000000130 = 0;
      uStack0000000000000134 = 0;
      FUN_05effcac(uVar1,uVar3,uVar2,0,0,0,0xbf800000,&stack0x00000120,0);
      uStack0000000000000114 = CONCAT44(in_stack_00000138,uStack0000000000000134);
      uStack0000000000000110 = uStack0000000000000130;
      uStack0000000000000108 = uStack0000000000000128;
      uStack000000000000010c = uStack000000000000012c;
      in_stack_00000100 = in_stack_00000120;
      if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
        *(undefined8 *)(unaff_x20 + 0x2e4) = uStack0000000000000114;
        *(ulong *)(unaff_x20 + 0x2dc) = CONCAT44(uStack0000000000000130,uStack000000000000012c);
        *(ulong *)(unaff_x20 + 0x2d8) = CONCAT44(uStack000000000000012c,uStack0000000000000128);
        *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
        uVar3 = DAT_013de180;
        uVar2 = DAT_013ddfe0;
        uVar1 = DAT_013ddb08;
        *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
        in_stack_000000e0 = 0;
        uStack00000000000000e8 = 0;
        uStack00000000000000ec = 0;
        in_stack_000000f8 = 0;
        uStack00000000000000f0 = 0;
        uStack00000000000000f4 = 0;
        FUN_05effcac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000e0,0);
        uStack00000000000000d4 = CONCAT44(in_stack_000000f8,uStack00000000000000f4);
        uStack00000000000000d0 = uStack00000000000000f0;
        uStack00000000000000c8 = uStack00000000000000e8;
        uStack00000000000000cc = uStack00000000000000ec;
        in_stack_000000c0 = in_stack_000000e0;
        if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
          *(undefined8 *)(unaff_x20 + 0x308) = uStack00000000000000d4;
          *(ulong *)(unaff_x20 + 0x300) = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
          *(ulong *)(unaff_x20 + 0x2fc) = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
          *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
          uVar3 = DAT_013de280;
          uVar2 = DAT_013de1dc;
          uVar1 = DAT_013ddb64;
          *(undefined4 *)(unaff_x20 + 0x310) = 0;
          in_stack_000000a0 = 0;
          uStack00000000000000a8 = 0;
          uStack00000000000000ac = 0;
          in_stack_000000b8 = 0;
          uStack00000000000000b0 = 0;
          uStack00000000000000b4 = 0;
          FUN_05effcac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000a0,0);
          uStack0000000000000094 = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
          uStack0000000000000090 = uStack00000000000000b0;
          uStack0000000000000088 = uStack00000000000000a8;
          uStack000000000000008c = uStack00000000000000ac;
          in_stack_00000080 = in_stack_000000a0;
          if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
            *(undefined8 *)(unaff_x20 + 0x32c) = uStack0000000000000094;
            *(ulong *)(unaff_x20 + 0x324) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
            *(ulong *)(unaff_x20 + 800) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
            *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
            uVar3 = DAT_013de338;
            uVar2 = DAT_013ddf08;
            uVar1 = DAT_013ddd34;
            *(undefined4 *)(unaff_x20 + 0x334) = 0;
            in_stack_00000060 = 0;
            uStack0000000000000068 = 0;
            uStack000000000000006c = 0;
            in_stack_00000078 = 0;
            uStack0000000000000070 = 0;
            uStack0000000000000074 = 0;
            FUN_05effcac(uVar2,uVar3,uVar1,0,0,0,0xbf800000,&stack0x00000060,0);
            uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
            uStack0000000000000050 = uStack0000000000000070;
            uStack0000000000000048 = uStack0000000000000068;
            uStack000000000000004c = uStack000000000000006c;
            in_stack_00000040 = in_stack_00000060;
            if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
              *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
              *(ulong *)(unaff_x20 + 0x348) =
                   CONCAT44(uStack0000000000000070,uStack000000000000006c);
              *(ulong *)(unaff_x20 + 0x344) =
                   CONCAT44(uStack000000000000006c,uStack0000000000000068);
              *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
              uVar3 = DAT_013de42c;
              uVar2 = DAT_013de36c;
              uVar1 = DAT_013ddf64;
              *(undefined4 *)(unaff_x20 + 0x358) = 0;
              in_stack_00000020 = 0;
              uStack0000000000000028 = 0;
              uStack000000000000002c = 0;
              in_stack_00000038 = 0;
              uStack0000000000000030 = 0;
              uStack0000000000000034 = 0;
              FUN_05effcac(uVar3,uVar1,uVar2,0,0,0,0xbf800000,&stack0x00000020,0);
              if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
                *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
                *(ulong *)(unaff_x20 + 0x36c) =
                     CONCAT44(uStack0000000000000030,uStack000000000000002c);
                *(ulong *)(unaff_x20 + 0x368) =
                     CONCAT44(uStack000000000000002c,uStack0000000000000028);
                *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
                *(undefined4 *)(unaff_x20 + 0x37c) = 0;
                if (unaff_x19 != 0) {
                  *(long *)(unaff_x19 + 0x10) = unaff_x20;
                  **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
                  lVar12 = thunk_FUN_02cea894(*unaff_x23);
                  FUN_051ddc10();
                  puVar11 = PTR_DAT_066091b0;
                  puVar10 = PTR_DAT_066091a8;
                  puVar9 = PTR_DAT_066091a0;
                  puVar8 = PTR_DAT_06609198;
                  puVar7 = PTR_DAT_06609190;
                  if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                    lVar13 = *(long *)PTR_DAT_066091b0;
                    uVar15 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                    if (*(int *)(lVar13 + 0xe0) == 0) {
                      thunk_FUN_02cd038c();
                      lVar13 = *(long *)puVar11;
                    }
                    uVar16 = **(undefined8 **)(lVar13 + 0xb8);
                    uVar14 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
                    FUN_04a50c34(uVar14,uVar16,*(undefined8 *)puVar10,0);
                    uVar15 = FUN_033e7fdc(uVar15,uVar14,*(undefined8 *)puVar7);
                    uVar15 = FUN_033f6b80(uVar15,*(undefined8 *)puVar8);
                    if (lVar12 != 0) {
                      *(undefined8 *)(lVar12 + 0x10) = uVar15;
                      *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar12;
                      return;
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


