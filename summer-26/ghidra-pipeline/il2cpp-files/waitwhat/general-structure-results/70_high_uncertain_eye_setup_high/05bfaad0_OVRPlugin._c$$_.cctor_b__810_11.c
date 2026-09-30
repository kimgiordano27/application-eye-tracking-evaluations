/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_11
ENTRY_POINT: 05bfaad0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_<>c__<_cctor>b__810_11
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5 [16],undefined1 param_6 [16],undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined8 uStack0000000000000134;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined8 uStack0000000000000174;
  undefined8 in_stack_00000180;
  undefined4 uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined8 uStack00000000000001b4;
  undefined8 in_stack_000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  undefined4 in_stack_000001f0;
  undefined8 in_stack_00000888;
  undefined4 in_stack_00000e28;
  undefined4 in_stack_00000e2c;
  
  uStack0000000000000040 = param_7;
  uStack0000000000000044 = param_4;
  uStack0000000000000048 = param_3;
  uStack000000000000004c = param_2;
  FUN_069e4d6c();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
  *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
  if (0x15 < uVar1) {
    uVar22 = *(undefined8 *)(unaff_x23 + 0x14);
    uVar21 = *(undefined8 *)(unaff_x23 + 0xc);
    *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
    *(undefined8 *)(unaff_x20 + 0x2d8) = uVar22;
    *(undefined8 *)(unaff_x20 + 0x2d0) = uVar21;
    *(undefined8 *)(unaff_x20 + 0x2cc) = in_stack_00000888;
    *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
    uVar17 = DAT_012e3da0;
    uVar13 = DAT_012e3bd4;
    uVar11 = DAT_012e3b2c;
    uVar4 = DAT_012e3958;
    FUN_069e4d6c(DAT_012e3954,&stack0x00000840,0);
    if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
      *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
      *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
      *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
      *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
      uVar15 = DAT_012e3c84;
      uVar12 = DAT_012e3b74;
      uVar5 = DAT_012e34e0;
      uVar2 = DAT_012e343c;
      FUN_069e4d6c(DAT_012e3c80,&stack0x00000800,0);
      if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
        *(undefined8 *)(unaff_x20 + 0x318) = 0;
        *(undefined8 *)(unaff_x20 + 0x310) = 0;
        *(undefined8 *)(unaff_x20 + 0x30c) = 0;
        *(undefined8 *)(unaff_x20 + 0x304) = 0;
        uVar16 = DAT_012e3c88;
        uVar14 = DAT_012e3c1c;
        uVar9 = DAT_012e3914;
        uVar6 = DAT_012e3568;
        FUN_069e4d6c(DAT_012e34e4,&stack0x000007c0,0);
        if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 800) = 0x17;
          *(undefined8 *)(unaff_x20 + 0x338) = 0;
          *(undefined8 *)(unaff_x20 + 0x330) = 0;
          *(undefined8 *)(unaff_x20 + 0x32c) = 0;
          *(undefined8 *)(unaff_x20 + 0x324) = 0;
          uVar8 = DAT_012e38b4;
          uVar7 = DAT_012e3874;
          FUN_069e4d6c(DAT_012e3790,DAT_012e38b4,DAT_012e3874,unaff_s8,unaff_s9,DAT_012e348c,
                       0x3f800000,&stack0x00000780,0);
          if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
            *(undefined8 *)(unaff_x20 + 0x358) = 0;
            *(undefined8 *)(unaff_x20 + 0x350) = 0;
            *(undefined8 *)(unaff_x20 + 0x34c) = 0;
            *(undefined8 *)(unaff_x20 + 0x344) = 0;
            if (unaff_x19 != 0) {
              lVar19 = *unaff_x21;
              *(long *)(unaff_x19 + 0x10) = unaff_x20;
              **(long **)(lVar19 + 0xb8) = unaff_x19;
              lVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*unaff_x21);
              FUN_05bf9e40();
              lVar18 = FUN_03188b1c(*unaff_x22,0x1a);
              FUN_069e4d6c(DAT_012e39b4,unaff_s12,unaff_s13,0,0,0,0x3f800000,&stack0x00000740,0);
              if (lVar18 != 0) {
                if (*(int *)(lVar18 + 0x18) != 0) {
                  *(undefined8 *)(lVar18 + 0x2c) = 0;
                  *(undefined8 *)(lVar18 + 0x24) = 0;
                  *(undefined8 *)(lVar18 + 0x38) = 0;
                  *(undefined8 *)(lVar18 + 0x30) = 0;
                  *(undefined4 *)(lVar18 + 0x20) = 1;
                  FUN_069e4d6c(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                  if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined4 *)(lVar18 + 0x40) = 0xffffffff;
                    *(undefined8 *)(lVar18 + 0x4c) = 0;
                    *(undefined8 *)(lVar18 + 0x44) = 0;
                    uVar3 = DAT_012e3a4c;
                    *(undefined8 *)(lVar18 + 0x58) = 0;
                    *(undefined8 *)(lVar18 + 0x50) = 0;
                    FUN_069e4d6c(uVar3,unaff_s10,unaff_s11,DAT_012e38b8,DAT_012e3794,DAT_012e3644,
                                 DAT_012e3440,&stack0x000006c0,0);
                    if (2 < *(uint *)(lVar18 + 0x18)) {
                      *(undefined4 *)(lVar18 + 0x60) = 1;
                      *(undefined8 *)(lVar18 + 0x6c) = 0;
                      *(undefined8 *)(lVar18 + 100) = 0;
                      uVar3 = DAT_012e3c8c;
                      *(undefined8 *)(lVar18 + 0x78) = 0;
                      *(undefined8 *)(lVar18 + 0x70) = 0;
                      FUN_069e4d6c(uVar3,DAT_012e39fc,DAT_012e3404,DAT_012e3c90,DAT_012e3da4,
                                   DAT_012e37e8,DAT_012e370c,&stack0x00000680,0);
                      if ((*(uint *)(lVar18 + 0x18) & 0xfffffffc) != 0) {
                        *(undefined4 *)(lVar18 + 0x80) = 2;
                        *(undefined8 *)(lVar18 + 0x8c) = 0;
                        *(undefined8 *)(lVar18 + 0x84) = 0;
                        uVar3 = DAT_012e3a00;
                        *(undefined8 *)(lVar18 + 0x98) = 0;
                        *(undefined8 *)(lVar18 + 0x90) = 0;
                        FUN_069e4d6c(uVar3,DAT_012e35a8,DAT_012e3ae8,DAT_012e34e8,DAT_012e3aa4,
                                     DAT_012e395c,DAT_012e3a50,&stack0x00000640,0);
                        if (4 < *(uint *)(lVar18 + 0x18)) {
                          *(undefined4 *)(lVar18 + 0xa0) = 3;
                          *(undefined8 *)(lVar18 + 0xac) = 0;
                          *(undefined8 *)(lVar18 + 0xa4) = 0;
                          *(undefined8 *)(lVar18 + 0xb8) = 0;
                          *(undefined8 *)(lVar18 + 0xb0) = 0;
                          FUN_069e4d6c(DAT_012e3648,DAT_012e3798,DAT_012e3710,DAT_012e3444,0,0,
                                       0x3f800000,&stack0x00000600,0);
                          if (5 < *(uint *)(lVar18 + 0x18)) {
                            *(undefined8 *)(lVar18 + 0xcc) = 0;
                            *(undefined8 *)(lVar18 + 0xc4) = 0;
                            *(undefined8 *)(lVar18 + 0xd8) = 0;
                            *(undefined8 *)(lVar18 + 0xd0) = 0;
                            *(undefined4 *)(lVar18 + 0xc0) = 4;
                            FUN_069e4d6c(DAT_012e3aec,unaff_s14,unaff_s15,0,0,0,0x3f800000,
                                         &stack0x000005c0,0);
                            if (6 < *(uint *)(lVar18 + 0x18)) {
                              *(undefined4 *)(lVar18 + 0xe0) = 1;
                              *(undefined8 *)(lVar18 + 0xec) = 0;
                              *(undefined8 *)(lVar18 + 0xe4) = 0;
                              uVar3 = DAT_012e379c;
                              *(undefined8 *)(lVar18 + 0xf8) = 0;
                              *(undefined8 *)(lVar18 + 0xf0) = 0;
                              FUN_069e4d6c(uVar3,uStack00000000000000c0,in_stack_00000e2c,
                                           in_stack_00000e28,DAT_012e35ac,DAT_012e3960,
                                           uStack00000000000000dc,&stack0x00000580,0);
                              if ((*(uint *)(lVar18 + 0x18) & 0xfffffff8) != 0) {
                                *(undefined4 *)(lVar18 + 0x100) = 6;
                                *(undefined8 *)(lVar18 + 0x118) = 0;
                                *(undefined8 *)(lVar18 + 0x110) = 0;
                                *(undefined8 *)(lVar18 + 0x10c) = 0;
                                *(undefined8 *)(lVar18 + 0x104) = 0;
                                FUN_069e4d6c(DAT_012e3c94,DAT_012e34ec,DAT_012e3714,
                                             uStack00000000000000d8,DAT_012e3830,DAT_012e3da8,
                                             uStack00000000000000d4,&stack0x00000540,0);
                                if (8 < *(uint *)(lVar18 + 0x18)) {
                                  *(undefined4 *)(lVar18 + 0x120) = 7;
                                  *(undefined8 *)(lVar18 + 0x138) = 0;
                                  *(undefined8 *)(lVar18 + 0x130) = 0;
                                  uVar3 = DAT_012e3d54;
                                  *(undefined8 *)(lVar18 + 300) = 0;
                                  *(undefined8 *)(lVar18 + 0x124) = 0;
                                  FUN_069e4d6c(DAT_012e3918,uStack00000000000000d0,
                                               uStack00000000000000cc,uStack00000000000000c8,uVar3,
                                               DAT_012e3834,uStack00000000000000c4,&stack0x00000500,
                                               0);
                                  if (9 < *(uint *)(lVar18 + 0x18)) {
                                    *(undefined4 *)(lVar18 + 0x140) = 8;
                                    *(undefined8 *)(lVar18 + 0x158) = 0;
                                    *(undefined8 *)(lVar18 + 0x150) = 0;
                                    *(undefined8 *)(lVar18 + 0x14c) = 0;
                                    *(undefined8 *)(lVar18 + 0x144) = 0;
                                    FUN_069e4d6c(DAT_012e37ec,DAT_012e3dac,DAT_012e34f0,0,
                                                 DAT_012e38bc,0,0x3f800000,&stack0x000004c0,0);
                                    if (10 < *(uint *)(lVar18 + 0x18)) {
                                      *(undefined4 *)(lVar18 + 0x160) = 9;
                                      *(undefined8 *)(lVar18 + 0x178) = 0;
                                      *(undefined8 *)(lVar18 + 0x170) = 0;
                                      *(undefined8 *)(lVar18 + 0x16c) = 0;
                                      *(undefined8 *)(lVar18 + 0x164) = 0;
                                      FUN_069e4d6c(DAT_012e3718,uStack00000000000000bc,
                                                   uStack00000000000000b8,0,0,0,0x3f800000,
                                                   &stack0x00000480,0);
                                      if (0xb < *(uint *)(lVar18 + 0x18)) {
                                        *(undefined4 *)(lVar18 + 0x180) = 1;
                                        *(undefined8 *)(lVar18 + 0x198) = 0;
                                        *(undefined8 *)(lVar18 + 400) = 0;
                                        uVar3 = DAT_012e3b30;
                                        *(undefined8 *)(lVar18 + 0x18c) = 0;
                                        *(undefined8 *)(lVar18 + 0x184) = 0;
                                        FUN_069e4d6c(DAT_012e3408,uStack00000000000000b4,
                                                     uStack00000000000000b0,uStack00000000000000ac,
                                                     uVar3,DAT_012e3ce4,uStack00000000000000a8,
                                                     &stack0x00000440,0);
                                        if (0xc < *(uint *)(lVar18 + 0x18)) {
                                          *(undefined4 *)(lVar18 + 0x1a0) = 0xb;
                                          *(undefined8 *)(lVar18 + 0x1b8) = 0;
                                          *(undefined8 *)(lVar18 + 0x1b0) = 0;
                                          uVar3 = DAT_012e3490;
                                          *(undefined8 *)(lVar18 + 0x1ac) = 0;
                                          *(undefined8 *)(lVar18 + 0x1a4) = 0;
                                          FUN_069e4d6c(DAT_012e371c,uStack00000000000000a4,
                                                       uStack00000000000000a0,uStack000000000000009c
                                                       ,uVar3,DAT_012e3ce8,uStack0000000000000098,
                                                       &stack0x00000400,0);
                                          if (0xd < *(uint *)(lVar18 + 0x18)) {
                                            *(undefined4 *)(lVar18 + 0x1c0) = 0xc;
                                            *(undefined8 *)(lVar18 + 0x1d8) = 0;
                                            *(undefined8 *)(lVar18 + 0x1d0) = 0;
                                            uVar3 = DAT_012e3c20;
                                            *(undefined8 *)(lVar18 + 0x1cc) = 0;
                                            *(undefined8 *)(lVar18 + 0x1c4) = 0;
                                            FUN_069e4d6c(DAT_012e35b0,uStack0000000000000094,
                                                         uStack0000000000000090,
                                                         uStack000000000000008c,uVar3,DAT_012e34f4,
                                                         uStack0000000000000088,&stack0x000003c0,0);
                                            if (0xe < *(uint *)(lVar18 + 0x18)) {
                                              *(undefined4 *)(lVar18 + 0x1e0) = 0xd;
                                              *(undefined8 *)(lVar18 + 0x1f8) = 0;
                                              *(undefined8 *)(lVar18 + 0x1f0) = 0;
                                              *(undefined8 *)(lVar18 + 0x1ec) = 0;
                                              *(undefined8 *)(lVar18 + 0x1e4) = 0;
                                              FUN_069e4d6c(DAT_012e3b34,uStack0000000000000084,
                                                           uStack0000000000000080,unaff_s9,
                                                           0xa2800000,0xa3000000a3000000,0x3f800000,
                                                           &stack0x00000380,0);
                                              if ((*(uint *)(lVar18 + 0x18) & 0xfffffff0) != 0) {
                                                *(undefined4 *)(lVar18 + 0x200) = 0xe;
                                                *(undefined8 *)(lVar18 + 0x218) = 0;
                                                *(undefined8 *)(lVar18 + 0x210) = 0;
                                                *(undefined8 *)(lVar18 + 0x20c) = 0;
                                                *(undefined8 *)(lVar18 + 0x204) = 0;
                                                FUN_069e4d6c(DAT_012e3b78,uStack000000000000007c,
                                                             uStack0000000000000078,0,0,0,0x3f800000
                                                             ,&stack0x00000340,0);
                                                if (0x10 < *(uint *)(lVar18 + 0x18)) {
                                                  *(undefined4 *)(lVar18 + 0x220) = 1;
                                                  *(undefined8 *)(lVar18 + 0x238) = 0;
                                                  *(undefined8 *)(lVar18 + 0x230) = 0;
                                                  uVar3 = DAT_012e3aa8;
                                                  *(undefined8 *)(lVar18 + 0x22c) = 0;
                                                  *(undefined8 *)(lVar18 + 0x224) = 0;
                                                  FUN_069e4d6c(DAT_012e3a04,uStack0000000000000074,
                                                               uStack0000000000000070,
                                                               uStack000000000000006c,uVar3,
                                                               DAT_012e3754,uStack0000000000000068,
                                                               &stack0x00000300,0);
                                                  if (0x11 < *(uint *)(lVar18 + 0x18)) {
                                                    *(undefined4 *)(lVar18 + 0x240) = 0x10;
                                                    *(undefined8 *)(lVar18 + 600) = 0;
                                                    *(undefined8 *)(lVar18 + 0x250) = 0;
                                                    uVar3 = DAT_012e35fc;
                                                    *(undefined8 *)(lVar18 + 0x24c) = 0;
                                                    *(undefined8 *)(lVar18 + 0x244) = 0;
                                                    FUN_069e4d6c(DAT_012e3a54,uStack0000000000000064
                                                                 ,uStack0000000000000060,
                                                                 uStack000000000000005c,uVar3,
                                                                 DAT_012e3c24,uStack0000000000000058
                                                                 ,&stack0x000002c0,0);
                                                    if (0x12 < *(uint *)(lVar18 + 0x18)) {
                                                      *(undefined4 *)(lVar18 + 0x260) = 0x11;
                                                      *(undefined8 *)(lVar18 + 0x278) = 0;
                                                      *(undefined8 *)(lVar18 + 0x270) = 0;
                                                      uVar3 = DAT_012e3a58;
                                                      *(undefined8 *)(lVar18 + 0x26c) = 0;
                                                      *(undefined8 *)(lVar18 + 0x264) = 0;
                                                      FUN_069e4d6c(DAT_012e37a0,
                                                                   uStack0000000000000054,
                                                                   uStack0000000000000050,uVar3,
                                                                   DAT_012e3aac,DAT_012e3be0,
                                                                   DAT_012e3c28,&stack0x00000280,0);
                                                      if (0x13 < *(uint *)(lVar18 + 0x18)) {
                                                        *(undefined4 *)(lVar18 + 0x280) = 0x12;
                                                        *(undefined8 *)(lVar18 + 0x298) = 0;
                                                        *(undefined8 *)(lVar18 + 0x290) = 0;
                                                        *(undefined8 *)(lVar18 + 0x28c) = 0;
                                                        *(undefined8 *)(lVar18 + 0x284) = 0;
                                                        uVar3 = DAT_012e3c9c;
                                                        FUN_069e4d6c(DAT_012e38c0,DAT_012e3c98,
                                                                     DAT_012e3db0,unaff_s9,
                                                                     DAT_012e3c9c,0x8800000088000000
                                                                     ,0x3f800000,&stack0x00000240,0)
                                                        ;
                                                        if (0x14 < *(uint *)(lVar18 + 0x18)) {
                                                          *(undefined4 *)(lVar18 + 0x2a0) = 0x13;
                                                          *(undefined8 *)(lVar18 + 0x2b8) = 0;
                                                          *(undefined8 *)(lVar18 + 0x2b0) = 0;
                                                          uVar10 = DAT_012e3af0;
                                                          *(undefined8 *)(lVar18 + 0x2ac) = 0;
                                                          *(undefined8 *)(lVar18 + 0x2a4) = 0;
                                                          FUN_069e4d6c(DAT_012e35b4,
                                                                       uStack000000000000004c,
                                                                       uStack0000000000000048,
                                                                       uStack0000000000000044,uVar10
                                                                       ,DAT_012e3448,
                                                                       uStack0000000000000040,
                                                                       &stack0x00000200,0);
                                                          in_stack_000001e0 = 0;
                                                          uStack00000000000001e8 = 0;
                                                          uStack00000000000001ec = 0;
                                                          in_stack_000001f0 = 0;
                                                          if (0x15 < *(uint *)(lVar18 + 0x18)) {
                                                            *(undefined4 *)(lVar18 + 0x2c0) = 1;
                                                            *(undefined8 *)(lVar18 + 0x2d8) = 0;
                                                            *(undefined8 *)(lVar18 + 0x2d0) = 0;
                                                            uVar10 = DAT_012e3a08;
                                                            *(undefined8 *)(lVar18 + 0x2cc) = 0;
                                                            *(undefined8 *)(lVar18 + 0x2c4) = 0;
                                                            in_stack_000001c0 = 0;
                                                            uStack00000000000001c8 = 0;
                                                            uStack00000000000001cc = 0;
                                                            in_stack_000001d8 = 0;
                                                            uStack00000000000001d0 = 0;
                                                            uStack00000000000001d4 = 0;
                                                            FUN_069e4d6c(DAT_012e3878,uVar4,uVar13,
                                                                         uVar11,uVar10,DAT_012e38c4,
                                                                         uVar17,&stack0x000001c0,0);
                                                            uStack00000000000001b4 =
                                                                 CONCAT44(in_stack_000001d8,
                                                                          uStack00000000000001d4);
                                                            uStack00000000000001a8 =
                                                                 uStack00000000000001c8;
                                                            in_stack_000001a0 = in_stack_000001c0;
                                                            uStack00000000000001ac =
                                                                 uStack00000000000001cc;
                                                            uStack00000000000001b0 =
                                                                 uStack00000000000001d0;
                                                            if (0x16 < *(uint *)(lVar18 + 0x18)) {
                                                              *(undefined4 *)(lVar18 + 0x2e0) = 0x15
                                                              ;
                                                              *(undefined8 *)(lVar18 + 0x2f8) =
                                                                   uStack00000000000001b4;
                                                              *(ulong *)(lVar18 + 0x2f0) =
                                                                   CONCAT44(uStack00000000000001d0,
                                                                            uStack00000000000001cc);
                                                              uVar4 = DAT_012e3af4;
                                                              *(ulong *)(lVar18 + 0x2ec) =
                                                                   CONCAT44(uStack00000000000001cc,
                                                                            uStack00000000000001c8);
                                                              *(undefined8 *)(lVar18 + 0x2e4) =
                                                                   in_stack_000001c0;
                                                              in_stack_00000180 = 0;
                                                              uStack0000000000000188 = 0;
                                                              uStack000000000000018c = 0;
                                                              in_stack_00000198 = 0;
                                                              uStack0000000000000190 = 0;
                                                              uStack0000000000000194 = 0;
                                                              FUN_069e4d6c(DAT_012e3db4,uVar5,uVar2,
                                                                           uVar12,uVar4,DAT_012e3ca0
                                                                           ,uVar15,&stack0x00000180,
                                                                           0);
                                                              uStack0000000000000174 =
                                                                   CONCAT44(in_stack_00000198,
                                                                            uStack0000000000000194);
                                                              uStack0000000000000168 =
                                                                   uStack0000000000000188;
                                                              in_stack_00000160 = in_stack_00000180;
                                                              uStack000000000000016c =
                                                                   uStack000000000000018c;
                                                              uStack0000000000000170 =
                                                                   uStack0000000000000190;
                                                              if (0x17 < *(uint *)(lVar18 + 0x18)) {
                                                                *(undefined4 *)(lVar18 + 0x300) =
                                                                     0x16;
                                                                *(undefined8 *)(lVar18 + 0x318) =
                                                                     uStack0000000000000174;
                                                                *(ulong *)(lVar18 + 0x310) =
                                                                     CONCAT44(uStack0000000000000190
                                                                              ,
                                                  uStack000000000000018c);
                                                  uVar4 = DAT_012e3494;
                                                  *(ulong *)(lVar18 + 0x30c) =
                                                       CONCAT44(uStack000000000000018c,
                                                                uStack0000000000000188);
                                                  *(undefined8 *)(lVar18 + 0x304) =
                                                       in_stack_00000180;
                                                  in_stack_00000140 = 0;
                                                  uStack0000000000000148 = 0;
                                                  uStack000000000000014c = 0;
                                                  in_stack_00000158 = 0;
                                                  uStack0000000000000150 = 0;
                                                  uStack0000000000000154 = 0;
                                                  FUN_069e4d6c(DAT_012e3964,uVar9,uVar6,uVar14,uVar4
                                                               ,DAT_012e34f8,uVar16,&stack0x00000140
                                                               ,0);
                                                  uStack0000000000000134 =
                                                       CONCAT44(in_stack_00000158,
                                                                uStack0000000000000154);
                                                  uStack0000000000000128 = uStack0000000000000148;
                                                  in_stack_00000120 = in_stack_00000140;
                                                  uStack000000000000012c = uStack000000000000014c;
                                                  uStack0000000000000130 = uStack0000000000000150;
                                                  if (0x18 < *(uint *)(lVar18 + 0x18)) {
                                                    *(undefined4 *)(lVar18 + 800) = 0x17;
                                                    *(undefined8 *)(lVar18 + 0x338) =
                                                         uStack0000000000000134;
                                                    *(ulong *)(lVar18 + 0x330) =
                                                         CONCAT44(uStack0000000000000150,
                                                                  uStack000000000000014c);
                                                    *(ulong *)(lVar18 + 0x32c) =
                                                         CONCAT44(uStack000000000000014c,
                                                                  uStack0000000000000148);
                                                    *(undefined8 *)(lVar18 + 0x324) =
                                                         in_stack_00000140;
                                                    in_stack_00000100 = 0;
                                                    uStack0000000000000108 = 0;
                                                    uStack000000000000010c = 0;
                                                    in_stack_00000118 = 0;
                                                    uStack0000000000000110 = 0;
                                                    uStack0000000000000114 = 0;
                                                    FUN_069e4d6c(DAT_012e3838,uVar8,uVar7,unaff_s8,
                                                                 unaff_s8,uVar3,0x3f800000,
                                                                 &stack0x00000100,0);
                                                    if (0x19 < *(uint *)(lVar18 + 0x18)) {
                                                      *(undefined4 *)(lVar18 + 0x340) = 0x18;
                                                      *(ulong *)(lVar18 + 0x358) =
                                                           CONCAT44(in_stack_00000118,
                                                                    uStack0000000000000114);
                                                      *(ulong *)(lVar18 + 0x350) =
                                                           CONCAT44(uStack0000000000000110,
                                                                    uStack000000000000010c);
                                                      *(ulong *)(lVar18 + 0x34c) =
                                                           CONCAT44(uStack000000000000010c,
                                                                    uStack0000000000000108);
                                                      *(undefined8 *)(lVar18 + 0x344) =
                                                           in_stack_00000100;
                                                      if (lVar19 != 0) {
                                                        lVar20 = *unaff_x21;
                                                        *(long *)(lVar19 + 0x10) = lVar18;
                                                        *(long *)(*(long *)(lVar20 + 0xb8) + 8) =
                                                             lVar19;
                                                        return;
                                                      }
                                                      goto OVRPlugin_<>c__<_cctor>b__810_47;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_05bfba10;
              }
            }
OVRPlugin_<>c__<_cctor>b__810_47:
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
        }
      }
    }
  }
LAB_05bfba10:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


