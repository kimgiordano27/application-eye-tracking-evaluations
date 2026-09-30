/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryTemperature
ENTRY_POINT: 0603992c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryTemperature
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
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
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined4 uStack00000000000000f8;
  
  *(long *)(unaff_x20 + 0x2d8) = param_3._8_8_;
  *(long *)(unaff_x20 + 0x2d0) = param_3._0_8_;
  uVar12 = *(undefined4 *)(param_1 + 0x598);
  uVar13 = *(undefined4 *)(in_x9 + 0xa0c);
  uVar14 = *(undefined4 *)(in_x10 + 0xb84);
  *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
  uStack00000000000000e0 = 0;
  uStack00000000000000e8 = 0;
  uStack00000000000000f8 = 0;
  uStack00000000000000f0 = 0;
  FUN_06e67e1c(uVar12,uVar13,uVar14,0,0,0,0xbf800000,&stack0x000000e0,0);
  *(undefined8 *)(unaff_x22 + 0x54) = *(undefined8 *)(unaff_x22 + 0x74);
  *(undefined8 *)(unaff_x22 + 0x4c) = *(undefined8 *)(unaff_x22 + 0x6c);
  in_stack_000000c8 = uStack00000000000000e8;
  in_stack_000000c0 = uStack00000000000000e0;
  if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x4c);
    *(undefined8 *)(unaff_x20 + 0x308) = *(undefined8 *)(unaff_x22 + 0x54);
    *(undefined8 *)(unaff_x20 + 0x300) = uVar10;
    *(undefined8 *)(unaff_x20 + 0x2fc) = uStack00000000000000e8;
    *(undefined8 *)(unaff_x20 + 0x2f4) = uStack00000000000000e0;
    uVar14 = DAT_014bac48;
    uVar13 = DAT_014babc4;
    uVar12 = DAT_014ba5d4;
    *(undefined4 *)(unaff_x20 + 0x310) = 0;
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    FUN_06e67e1c(uVar12,uVar13,uVar14,0,0,0,0xbf800000,&stack0x000000a0,0);
    *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
    *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
    in_stack_00000088 = in_stack_000000a8;
    in_stack_00000080 = in_stack_000000a0;
    if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
      uVar10 = *(undefined8 *)(unaff_x22 + 0xc);
      *(undefined8 *)(unaff_x20 + 0x32c) = *(undefined8 *)(unaff_x22 + 0x14);
      *(undefined8 *)(unaff_x20 + 0x324) = uVar10;
      *(undefined8 *)(unaff_x20 + 800) = in_stack_000000a8;
      *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
      uVar14 = DAT_014bacf8;
      uVar13 = DAT_014ba93c;
      uVar12 = DAT_014ba774;
      *(undefined4 *)(unaff_x20 + 0x334) = 0;
      in_stack_00000060 = 0;
      uStack0000000000000068 = 0;
      uStack000000000000006c = 0;
      in_stack_00000078 = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000074 = 0;
      FUN_06e67e1c(uVar13,uVar14,uVar12,0,0,0,0xbf800000,&stack0x00000060,0);
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
        uVar14 = DAT_014badcc;
        uVar13 = DAT_014bad34;
        uVar12 = DAT_014ba99c;
        *(undefined4 *)(unaff_x20 + 0x358) = 0;
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_06e67e1c(uVar14,uVar12,uVar13,0,0,0,0xbf800000,&stack0x00000020,0);
        if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
          *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
          *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
          *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
          *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
          *(undefined4 *)(unaff_x20 + 0x37c) = 0;
          if (unaff_x19 != 0) {
            *(long *)(unaff_x19 + 0x10) = unaff_x20;
            thunk_FUN_0329bf60();
            **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
            thunk_FUN_0329bf60(*(undefined8 *)(*unaff_x23 + 0xb8));
            lVar6 = thunk_FUN_0322f148(*unaff_x23);
            FUN_06038d1c();
            puVar5 = PTR_DAT_075f7b90;
            puVar4 = PTR_DAT_075f7b88;
            puVar3 = PTR_DAT_075f7b80;
            puVar2 = PTR_DAT_075f7b78;
            puVar1 = PTR_DAT_075f7b70;
            if (**(long **)(*unaff_x23 + 0xb8) != 0) {
              lVar7 = *(long *)PTR_DAT_075f7b90;
              uVar10 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
              if (*(int *)(lVar7 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar7 = *(long *)puVar5;
              }
              uVar11 = **(undefined8 **)(lVar7 + 0xb8);
              uVar8 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
              FUN_042d20cc(uVar8,uVar11,*(undefined8 *)puVar4,0);
              uVar10 = FUN_03deade0(uVar10,uVar8,*(undefined8 *)puVar1);
              uVar10 = FUN_03df5de8(uVar10,*(undefined8 *)puVar2);
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x10) = uVar10;
                thunk_FUN_0329bf60();
                plVar9 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                *plVar9 = lVar6;
                thunk_FUN_0329bf60(plVar9,lVar6);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


