/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EnumerateSpaceSupportedComponents
ENTRY_POINT: 05bf3fe8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_EnumerateSpaceSupportedComponents(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  uint in_w8;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
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
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  uStack0000000000000108 = in_stack_00000128;
  uStack0000000000000100 = in_stack_00000120;
  *(undefined8 *)(unaff_x21 + 0x94) = *(undefined8 *)(unaff_x21 + 0xb4);
  *(undefined8 *)(unaff_x21 + 0x8c) = *(undefined8 *)(unaff_x21 + 0xac);
  if (0x13 < in_w8) {
    uVar11 = *(undefined8 *)(unaff_x21 + 0x94);
    uVar13 = *(undefined8 *)(unaff_x21 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
    *(undefined8 *)(unaff_x20 + 0x2d8) = in_stack_00000128;
    *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
    *(undefined8 *)(unaff_x20 + 0x2e4) = uVar11;
    *(undefined8 *)(unaff_x20 + 0x2dc) = uVar13;
    uVar4 = DAT_012e38a8;
    uVar3 = DAT_012e35ec;
    uVar2 = DAT_012e33f0;
    *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    FUN_069e4d6c(uVar3,uVar2,uVar4,0,0,0,0xbf800000,&stack0x000000e0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    in_stack_000000c8 = in_stack_000000e8;
    in_stack_000000c0 = in_stack_000000e0;
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
    *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
    if (0x14 < uVar1) {
      uVar11 = *(undefined8 *)(unaff_x21 + 0x54);
      uVar13 = *(undefined8 *)(unaff_x21 + 0x4c);
      *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
      *(undefined8 *)(unaff_x20 + 0x308) = uVar11;
      *(undefined8 *)(unaff_x20 + 0x300) = uVar13;
      *(undefined8 *)(unaff_x20 + 0x2fc) = in_stack_000000e8;
      *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
      uVar4 = DAT_012e3c04;
      uVar3 = DAT_012e3948;
      uVar2 = DAT_012e352c;
      *(undefined4 *)(unaff_x20 + 0x310) = 0;
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = 0;
      FUN_069e4d6c(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x000000a0,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      in_stack_00000088 = in_stack_000000a8;
      in_stack_00000080 = in_stack_000000a0;
      *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
      *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
      if (0x15 < uVar1) {
        uVar11 = *(undefined8 *)(unaff_x21 + 0x14);
        uVar13 = *(undefined8 *)(unaff_x21 + 0xc);
        *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
        *(undefined8 *)(unaff_x20 + 800) = in_stack_000000a8;
        *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
        uVar3 = DAT_012e33f8;
        uVar2 = DAT_012e33f4;
        *(undefined8 *)(unaff_x20 + 0x32c) = uVar11;
        *(undefined8 *)(unaff_x20 + 0x324) = uVar13;
        uVar4 = DAT_012e368c;
        *(undefined4 *)(unaff_x20 + 0x334) = 0;
        in_stack_00000060 = 0;
        uStack0000000000000068 = 0;
        uStack000000000000006c = 0;
        in_stack_00000078 = 0;
        uStack0000000000000070 = 0;
        uStack0000000000000074 = 0;
        FUN_069e4d6c(uVar2,uVar4,uVar3,0,0,0,0xbf800000,&stack0x00000060,0);
        uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
        uStack0000000000000048 = uStack0000000000000068;
        in_stack_00000040 = in_stack_00000060;
        uStack000000000000004c = uStack000000000000006c;
        uStack0000000000000050 = uStack0000000000000070;
        if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
          *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
          *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
          *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
          *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
          uVar4 = DAT_012e3d7c;
          uVar3 = DAT_012e3bd0;
          uVar2 = DAT_012e3bcc;
          *(undefined4 *)(unaff_x20 + 0x358) = 0;
          in_stack_00000020 = 0;
          uStack0000000000000028 = 0;
          uStack000000000000002c = 0;
          in_stack_00000038 = 0;
          uStack0000000000000030 = 0;
          uStack0000000000000034 = 0;
          FUN_069e4d6c(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x00000020,0);
          if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
            *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
            *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
            *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
            *(undefined4 *)(unaff_x20 + 0x37c) = 0;
            if (unaff_x19 != 0) {
              lVar12 = *unaff_x23;
              *(long *)(unaff_x19 + 0x10) = unaff_x20;
              **(long **)(lVar12 + 0xb8) = unaff_x19;
              lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*unaff_x23);
              FUN_05bf3450();
              puVar9 = PTR_DAT_07116de8;
              puVar8 = PTR_DAT_07116de0;
              puVar7 = PTR_DAT_07116dd8;
              puVar6 = PTR_DAT_07116dd0;
              puVar5 = PTR_DAT_07116dc8;
              if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                lVar10 = *(long *)PTR_DAT_07116de8;
                uVar13 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                  lVar10 = *(long *)puVar9;
                }
                uVar14 = **(undefined8 **)(lVar10 + 0xb8);
                uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)puVar7);
                FUN_03df8e90(uVar11,uVar14,*(undefined8 *)puVar8,0);
                uVar13 = FUN_03a84bd0(uVar13,uVar11,*(undefined8 *)puVar5);
                uVar13 = FUN_03a900cc(uVar13,*(undefined8 *)puVar6);
                if (lVar12 != 0) {
                  lVar10 = *unaff_x23;
                  *(undefined8 *)(lVar12 + 0x10) = uVar13;
                  *(long *)(*(long *)(lVar10 + 0xb8) + 8) = lVar12;
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


