/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceComponentStatus
ENTRY_POINT: 05bf3f50
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceComponentStatus(undefined8 param_1)

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
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined4 in_stack_00000148;
  undefined4 uStack000000000000014c;
  undefined4 in_stack_00000150;
  undefined8 uStack0000000000000154;
  undefined8 uStack0000000000000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  
                    /* try { // try from 05bf3f50 to 05cf3f53 has its CatchHandler @ 05bf3f74 */
                    /* try { // try from 05bf3f54 to 05cf3f77 has its CatchHandler @ 05bf3b54 */
  *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
  uStack0000000000000160 = 0;
  uStack0000000000000168 = 0;
  uStack000000000000016c = 0;
  uStack0000000000000178 = 0;
  uStack0000000000000170 = 0;
  uStack0000000000000174 = 0;
  FUN_069e4d6c(param_1,0);
                    /* catch() { ... } // from try @ 05bf3f50 with catch @ 05bf3f74 */
  uStack0000000000000154 = CONCAT44(uStack0000000000000178,uStack0000000000000174);
  in_stack_00000148 = uStack0000000000000168;
                    /* try { // try from 05bf3f78 to 05cf3f7f has its CatchHandler @ 05bf3f88 */
  in_stack_00000140 = uStack0000000000000160;
                    /* try { // try from 05bf3f80 to 05cf3f8b has its CatchHandler @ 05bf3b54 */
  uStack000000000000014c = uStack000000000000016c;
  in_stack_00000150 = uStack0000000000000170;
  if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                    /* catch() { ... } // from try @ 05bf3edc with catch @ 05bf3f88
                       catch() { ... } // from try @ 05bf3f28 with catch @ 05bf3f88
                       catch() { ... } // from try @ 05bf3f78 with catch @ 05bf3f88 */
    *(undefined4 *)(unaff_x20 + 0x2a8) = 0x11;
    *(ulong *)(unaff_x22 + 0x2c) = CONCAT44(uStack000000000000016c,uStack0000000000000168);
    *(undefined8 *)(unaff_x22 + 0x24) = uStack0000000000000160;
    *(undefined8 *)(unaff_x22 + 0x38) = uStack0000000000000154;
    *(ulong *)(unaff_x22 + 0x30) = CONCAT44(uStack0000000000000170,uStack000000000000016c);
    uVar3 = DAT_012e3bc8;
    uVar2 = DAT_012e36ec;
    uVar1 = DAT_012e33ec;
    *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
    in_stack_00000120 = 0;
    uStack0000000000000128 = 0;
    uStack000000000000012c = 0;
    in_stack_00000138 = 0;
    uStack0000000000000130 = 0;
    uStack0000000000000134 = 0;
    FUN_069e4d6c(uVar3,uVar1,uVar2,0,0,0,0xbf800000,&stack0x00000120,0);
    uStack0000000000000114 = CONCAT44(in_stack_00000138,uStack0000000000000134);
    uStack0000000000000108 = uStack0000000000000128;
    in_stack_00000100 = in_stack_00000120;
    uStack000000000000010c = uStack000000000000012c;
    uStack0000000000000110 = uStack0000000000000130;
    if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
      *(ulong *)(unaff_x20 + 0x2d8) = CONCAT44(uStack000000000000012c,uStack0000000000000128);
      *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
      *(undefined8 *)(unaff_x20 + 0x2e4) = uStack0000000000000114;
      *(ulong *)(unaff_x20 + 0x2dc) = CONCAT44(uStack0000000000000130,uStack000000000000012c);
      uVar3 = DAT_012e38a8;
      uVar2 = DAT_012e35ec;
      uVar1 = DAT_012e33f0;
      *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
      in_stack_000000e0 = 0;
      uStack00000000000000e8 = 0;
      uStack00000000000000ec = 0;
      in_stack_000000f8 = 0;
      uStack00000000000000f0 = 0;
      uStack00000000000000f4 = 0;
      FUN_069e4d6c(uVar2,uVar1,uVar3,0,0,0,0xbf800000,&stack0x000000e0,0);
      uStack00000000000000d4 = CONCAT44(in_stack_000000f8,uStack00000000000000f4);
      uStack00000000000000c8 = uStack00000000000000e8;
      in_stack_000000c0 = in_stack_000000e0;
      uStack00000000000000cc = uStack00000000000000ec;
      uStack00000000000000d0 = uStack00000000000000f0;
      if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
        *(undefined8 *)(unaff_x20 + 0x308) = uStack00000000000000d4;
        *(ulong *)(unaff_x20 + 0x300) = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
        *(ulong *)(unaff_x20 + 0x2fc) = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
        *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
        uVar3 = DAT_012e3c04;
        uVar2 = DAT_012e3948;
        uVar1 = DAT_012e352c;
        *(undefined4 *)(unaff_x20 + 0x310) = 0;
        in_stack_000000a0 = 0;
        uStack00000000000000a8 = 0;
        uStack00000000000000ac = 0;
        in_stack_000000b8 = 0;
        uStack00000000000000b0 = 0;
        uStack00000000000000b4 = 0;
        FUN_069e4d6c(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000a0,0);
        uStack0000000000000094 = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
        uStack0000000000000088 = uStack00000000000000a8;
        in_stack_00000080 = in_stack_000000a0;
        uStack000000000000008c = uStack00000000000000ac;
        uStack0000000000000090 = uStack00000000000000b0;
        if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
          *(ulong *)(unaff_x20 + 800) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
          *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
          uVar2 = DAT_012e33f8;
          uVar1 = DAT_012e33f4;
          *(undefined8 *)(unaff_x20 + 0x32c) = uStack0000000000000094;
          *(ulong *)(unaff_x20 + 0x324) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
          uVar3 = DAT_012e368c;
          *(undefined4 *)(unaff_x20 + 0x334) = 0;
          in_stack_00000060 = 0;
          uStack0000000000000068 = 0;
          uStack000000000000006c = 0;
          in_stack_00000078 = 0;
          uStack0000000000000070 = 0;
          uStack0000000000000074 = 0;
          FUN_069e4d6c(uVar1,uVar3,uVar2,0,0,0,0xbf800000,&stack0x00000060,0);
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
            uVar3 = DAT_012e3d7c;
            uVar2 = DAT_012e3bd0;
            uVar1 = DAT_012e3bcc;
            *(undefined4 *)(unaff_x20 + 0x358) = 0;
            in_stack_00000020 = 0;
            uStack0000000000000028 = 0;
            uStack000000000000002c = 0;
            in_stack_00000038 = 0;
            uStack0000000000000030 = 0;
            uStack0000000000000034 = 0;
            FUN_069e4d6c(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
            if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
              *(ulong *)(unaff_x20 + 0x368) =
                   CONCAT44(uStack000000000000002c,uStack0000000000000028);
              *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
              *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
              *(ulong *)(unaff_x20 + 0x36c) =
                   CONCAT44(uStack0000000000000030,uStack000000000000002c);
              *(undefined4 *)(unaff_x20 + 0x37c) = 0;
              if (unaff_x19 != 0) {
                lVar11 = *unaff_x23;
                *(long *)(unaff_x19 + 0x10) = unaff_x20;
                **(long **)(lVar11 + 0xb8) = unaff_x19;
                lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*unaff_x23);
                FUN_05bf3450();
                puVar8 = PTR_DAT_07116de8;
                puVar7 = PTR_DAT_07116de0;
                puVar6 = PTR_DAT_07116dd8;
                puVar5 = PTR_DAT_07116dd0;
                puVar4 = PTR_DAT_07116dc8;
                if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                  lVar9 = *(long *)PTR_DAT_07116de8;
                  uVar12 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                    lVar9 = *(long *)puVar8;
                  }
                  uVar13 = **(undefined8 **)(lVar9 + 0xb8);
                  uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar6);
                  FUN_03df8e90(uVar10,uVar13,*(undefined8 *)puVar7,0);
                  uVar12 = FUN_03a84bd0(uVar12,uVar10,*(undefined8 *)puVar4);
                  uVar12 = FUN_03a900cc(uVar12,*(undefined8 *)puVar5);
                  if (lVar11 != 0) {
                    lVar9 = *unaff_x23;
                    *(undefined8 *)(lVar11 + 0x10) = uVar12;
                    *(long *)(*(long *)(lVar9 + 0xb8) + 8) = lVar11;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


