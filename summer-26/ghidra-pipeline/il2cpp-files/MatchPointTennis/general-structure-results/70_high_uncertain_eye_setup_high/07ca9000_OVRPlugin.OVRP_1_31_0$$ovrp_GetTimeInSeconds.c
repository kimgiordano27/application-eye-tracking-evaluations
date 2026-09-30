/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_GetTimeInSeconds
ENTRY_POINT: 07ca9000
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0__ovrp_GetTimeInSeconds(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long *unaff_x23;
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
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined4 uStack0000000000000138;
  
  *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
  uStack0000000000000120 = 0;
  uStack0000000000000128 = 0;
  uStack0000000000000138 = 0;
  uStack0000000000000130 = 0;
  FUN_09537b20(param_1,0);
  *(undefined8 *)(unaff_x22 + 0x94) = *(undefined8 *)(unaff_x22 + 0xb4);
  *(undefined8 *)(unaff_x22 + 0x8c) = *(undefined8 *)(unaff_x22 + 0xac);
  in_stack_00000108 = uStack0000000000000128;
  in_stack_00000100 = uStack0000000000000120;
  if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x8c);
    *(undefined8 *)(unaff_x20 + 0x2e4) = *(undefined8 *)(unaff_x22 + 0x94);
    *(undefined8 *)(unaff_x20 + 0x2dc) = uVar13;
    *(undefined8 *)(unaff_x20 + 0x2d8) = uStack0000000000000128;
    *(undefined8 *)(unaff_x20 + 0x2d0) = uStack0000000000000120;
    uVar3 = DAT_01c76358;
    uVar2 = DAT_01c760f4;
    uVar1 = DAT_01c75a18;
    *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    FUN_09537b20(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000e0,0);
    *(undefined8 *)(unaff_x22 + 0x54) = *(undefined8 *)(unaff_x22 + 0x74);
    *(undefined8 *)(unaff_x22 + 0x4c) = *(undefined8 *)(unaff_x22 + 0x6c);
    in_stack_000000c8 = in_stack_000000e8;
    in_stack_000000c0 = in_stack_000000e0;
    if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
      uVar13 = *(undefined8 *)(unaff_x22 + 0x4c);
      *(undefined8 *)(unaff_x20 + 0x308) = *(undefined8 *)(unaff_x22 + 0x54);
      *(undefined8 *)(unaff_x20 + 0x300) = uVar13;
      *(undefined8 *)(unaff_x20 + 0x2fc) = in_stack_000000e8;
      *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
      uVar3 = DAT_01c76490;
      uVar2 = DAT_01c763b4;
      uVar1 = DAT_01c75a94;
      *(undefined4 *)(unaff_x20 + 0x310) = 0;
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = 0;
      FUN_09537b20(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000a0,0);
      *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
      *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
      in_stack_00000088 = in_stack_000000a8;
      in_stack_00000080 = in_stack_000000a0;
      if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
        uVar13 = *(undefined8 *)(unaff_x22 + 0xc);
        *(undefined8 *)(unaff_x20 + 0x32c) = *(undefined8 *)(unaff_x22 + 0x14);
        *(undefined8 *)(unaff_x20 + 0x324) = uVar13;
        *(undefined8 *)(unaff_x20 + 800) = in_stack_000000a8;
        *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
        uVar3 = DAT_01c76588;
        uVar2 = DAT_01c75fc0;
        uVar1 = DAT_01c75d34;
        *(undefined4 *)(unaff_x20 + 0x334) = 0;
        in_stack_00000060 = 0;
        uStack0000000000000068 = 0;
        uStack000000000000006c = 0;
        in_stack_00000078 = 0;
        uStack0000000000000070 = 0;
        uStack0000000000000074 = 0;
        FUN_09537b20(uVar2,uVar3,uVar1,0,0,0,0xbf800000,&stack0x00000060,0);
        uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
        uStack0000000000000050 = uStack0000000000000070;
        uStack0000000000000048 = uStack0000000000000068;
        uStack000000000000004c = uStack000000000000006c;
        in_stack_00000040 = in_stack_00000060;
        if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
          *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
          *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
          *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
          *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
          uVar3 = DAT_01c766e4;
          uVar2 = DAT_01c765e8;
          uVar1 = DAT_01c7603c;
          *(undefined4 *)(unaff_x20 + 0x358) = 0;
          in_stack_00000020 = 0;
          uStack0000000000000028 = 0;
          uStack000000000000002c = 0;
          in_stack_00000038 = 0;
          uStack0000000000000030 = 0;
          uStack0000000000000034 = 0;
          FUN_09537b20(uVar3,uVar1,uVar2,0,0,0,0xbf800000,&stack0x00000020,0);
          if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
            *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
            *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
            *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
            *(undefined4 *)(unaff_x20 + 0x37c) = 0;
            if (unaff_x19 != 0) {
              *(long *)(unaff_x19 + 0x10) = unaff_x20;
              thunk_FUN_044bb4b4();
              **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
              thunk_FUN_044bb4b4(*(undefined8 *)(*unaff_x23 + 0xb8));
              lVar9 = thunk_FUN_0448520c(*unaff_x23);
              FUN_07ca8458();
              puVar8 = PTR_DAT_09f51118;
              puVar7 = PTR_DAT_09f51110;
              puVar6 = PTR_DAT_09f51108;
              puVar5 = PTR_DAT_09f51100;
              puVar4 = PTR_DAT_09f510f8;
              if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                lVar10 = *(long *)PTR_DAT_09f51118;
                uVar13 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                  lVar10 = *(long *)puVar8;
                }
                uVar14 = **(undefined8 **)(lVar10 + 0xb8);
                uVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar6);
                FUN_05558900(uVar11,uVar14,*(undefined8 *)puVar7,0);
                uVar13 = FUN_04d0096c(uVar13,uVar11,*(undefined8 *)puVar4);
                uVar13 = FUN_04d10cc0(uVar13,*(undefined8 *)puVar5);
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0x10) = uVar13;
                  thunk_FUN_044bb4b4();
                  plVar12 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                  *plVar12 = lVar9;
                  thunk_FUN_044bb4b4(plVar12,lVar9);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


