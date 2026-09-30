/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetNodePoseState
ENTRY_POINT: 051e5358
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetNodePoseState
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5 [16],undefined1 param_6 [16],undefined4 param_7)

{
  undefined4 uVar1;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  long lVar26;
  long lVar27;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar28;
  ulong uVar29;
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
  undefined8 in_stack_000009a8;
  
  uStack0000000000000060 = param_7;
  uStack0000000000000064 = param_4;
  uStack0000000000000068 = param_3;
  uStack000000000000006c = param_2;
  FUN_05effcac();
  *(undefined8 *)(unaff_x23 + 0x34) = *(undefined8 *)(unaff_x23 + 0x54);
  *(undefined8 *)(unaff_x23 + 0x2c) = *(undefined8 *)(unaff_x23 + 0x4c);
  if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
    uVar28 = *(undefined8 *)(unaff_x23 + 0x2c);
    *(undefined8 *)(unaff_x20 + 600) = *(undefined8 *)(unaff_x23 + 0x34);
    *(undefined8 *)(unaff_x20 + 0x250) = uVar28;
    *(undefined8 *)(unaff_x20 + 0x24c) = in_stack_000009a8;
    *(undefined8 *)(unaff_x20 + 0x244) = 0;
    uVar17 = DAT_013de378;
    uVar13 = DAT_013de198;
    uVar12 = DAT_013de110;
    uVar8 = DAT_013ddf1c;
    FUN_05effcac(DAT_013ddf18,&stack0x00000960,0);
    uVar28 = *(undefined8 *)(unaff_x23 + 0x14);
    uVar29 = *(ulong *)(unaff_x23 + 0xc);
    if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
      *(undefined8 *)(unaff_x20 + 0x278) = uVar28;
      *(ulong *)(unaff_x20 + 0x270) = uVar29 & 0xffffffff00000000;
      *(undefined8 *)(unaff_x20 + 0x26c) = 0;
      *(undefined8 *)(unaff_x20 + 0x264) = 0;
      uVar14 = DAT_013de290;
      uVar4 = DAT_013ddce4;
      FUN_05effcac(DAT_013ddb74,DAT_013ddce4,DAT_013de290,DAT_013ddebc,DAT_013de19c,DAT_013ddb18,
                   DAT_013ddf20,&stack0x00000920,0);
      if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
        *(undefined8 *)(unaff_x20 + 0x298) = 0;
        *(undefined8 *)(unaff_x20 + 0x290) = 0;
        *(undefined8 *)(unaff_x20 + 0x28c) = 0;
        *(undefined8 *)(unaff_x20 + 0x284) = 0;
        FUN_05effcac(DAT_013ddc90,DAT_013ddfe8,DAT_013ddb78,DAT_013de59c,&stack0x000008e0,0);
        if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
          *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
          *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
          *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
          *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
          uVar23 = DAT_013de540;
          uVar22 = DAT_013de484;
          uVar10 = DAT_013ddff0;
          uVar6 = DAT_013dde54;
          FUN_05effcac(DAT_013ddc94,&stack0x000008a0,0);
          if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
            *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
            *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
            *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
            *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
            uVar19 = DAT_013de3f4;
            uVar18 = DAT_013de37c;
            uVar15 = DAT_013de2c8;
            uVar9 = DAT_013ddf24;
            FUN_05effcac(DAT_013ddb1c,&stack0x00000860,0);
            if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
              *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
              *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
              *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
              *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
              uVar21 = DAT_013de438;
              uVar20 = DAT_013de3f8;
              uVar7 = DAT_013ddec0;
              uVar2 = DAT_013ddbc8;
              FUN_05effcac(DAT_013dde58,&stack0x00000820,0);
              if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                *(undefined8 *)(unaff_x20 + 0x318) = 0;
                *(undefined8 *)(unaff_x20 + 0x310) = 0;
                *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                *(undefined8 *)(unaff_x20 + 0x304) = 0;
                uVar25 = DAT_013de5a0;
                uVar24 = DAT_013de544;
                uVar16 = DAT_013de2d4;
                uVar3 = DAT_013ddc18;
                FUN_05effcac(DAT_013de248,&stack0x000007e0,0);
                if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 800) = 0x17;
                  *(undefined8 *)(unaff_x20 + 0x338) = 0;
                  *(undefined8 *)(unaff_x20 + 0x330) = 0;
                  *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x324) = 0;
                  uVar11 = DAT_013de054;
                  uVar5 = DAT_013ddd3c;
                  FUN_05effcac(DAT_013de48c,&stack0x000007a0,0);
                  if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                    *(undefined8 *)(unaff_x20 + 0x358) = 0;
                    *(undefined8 *)(unaff_x20 + 0x350) = 0;
                    *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x344) = 0;
                    if (unaff_x19 != 0) {
                      *(long *)(unaff_x19 + 0x10) = unaff_x20;
                      **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                      lVar26 = thunk_FUN_02cea894(*unaff_x21);
                      FUN_051e48f8();
                      lVar27 = FUN_02ce7ad4(*unaff_x22,0x1a);
                      FUN_05effcac(DAT_013de380,&stack0x00000760,0);
                      if (lVar27 != 0) {
                        if (*(int *)(lVar27 + 0x18) != 0) {
                          *(undefined4 *)(lVar27 + 0x20) = 1;
                          *(undefined8 *)(lVar27 + 0x38) = 0;
                          *(undefined8 *)(lVar27 + 0x30) = 0;
                          *(undefined8 *)(lVar27 + 0x2c) = 0;
                          *(undefined8 *)(lVar27 + 0x24) = 0;
                          FUN_05effcac(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                          if (1 < *(uint *)(lVar27 + 0x18)) {
                            *(undefined4 *)(lVar27 + 0x40) = 0xffffffff;
                            *(undefined8 *)(lVar27 + 0x58) = 0;
                            *(undefined8 *)(lVar27 + 0x50) = 0;
                            uVar1 = DAT_013dde00;
                            *(undefined8 *)(lVar27 + 0x4c) = 0;
                            *(undefined8 *)(lVar27 + 0x44) = 0;
                            FUN_05effcac(uVar1,&stack0x000006c0,0);
                            if (2 < *(uint *)(lVar27 + 0x18)) {
                              *(undefined4 *)(lVar27 + 0x60) = 1;
                              *(undefined8 *)(lVar27 + 0x78) = 0;
                              *(undefined8 *)(lVar27 + 0x70) = 0;
                              uVar1 = DAT_013ddf28;
                              *(undefined8 *)(lVar27 + 0x6c) = 0;
                              *(undefined8 *)(lVar27 + 100) = 0;
                              FUN_05effcac(uVar1,DAT_013ddf2c,DAT_013de54c,DAT_013ddff4,DAT_013ddff8
                                           ,DAT_013ddb24,DAT_013dde5c,&stack0x00000680,0);
                              if (3 < *(uint *)(lVar27 + 0x18)) {
                                *(undefined4 *)(lVar27 + 0x80) = 2;
                                *(undefined8 *)(lVar27 + 0x98) = 0;
                                *(undefined8 *)(lVar27 + 0x90) = 0;
                                uVar1 = DAT_013de2d8;
                                *(undefined8 *)(lVar27 + 0x8c) = 0;
                                *(undefined8 *)(lVar27 + 0x84) = 0;
                                FUN_05effcac(uVar1,DAT_013ddffc,DAT_013de550,DAT_013de144,
                                             DAT_013de4e4,DAT_013de0b0,DAT_013de494,&stack0x00000640
                                             ,0);
                                if (4 < *(uint *)(lVar27 + 0x18)) {
                                  *(undefined4 *)(lVar27 + 0xa0) = 3;
                                  *(undefined8 *)(lVar27 + 0xb8) = 0;
                                  *(undefined8 *)(lVar27 + 0xb0) = 0;
                                  *(undefined8 *)(lVar27 + 0xac) = 0;
                                  *(undefined8 *)(lVar27 + 0xa4) = 0;
                                  FUN_05effcac(DAT_013ddf8c,DAT_013de114,DAT_013de058,DAT_013de1ec,0
                                               ,0,0x3f800000,&stack0x00000600,0);
                                  if (5 < *(uint *)(lVar27 + 0x18)) {
                                    *(undefined4 *)(lVar27 + 0xc0) = 4;
                                    *(undefined8 *)(lVar27 + 0xd8) = 0;
                                    *(undefined8 *)(lVar27 + 0xd0) = 0;
                                    uVar1 = DAT_013ddb28;
                                    *(undefined8 *)(lVar27 + 0xcc) = 0;
                                    *(undefined8 *)(lVar27 + 0xc4) = 0;
                                    FUN_05effcac(uVar1,&stack0x000005c0,0);
                                    if (6 < *(uint *)(lVar27 + 0x18)) {
                                      *(undefined4 *)(lVar27 + 0xe0) = 1;
                                      *(undefined8 *)(lVar27 + 0xf8) = 0;
                                      *(undefined8 *)(lVar27 + 0xf0) = 0;
                                      *(undefined8 *)(lVar27 + 0xec) = 0;
                                      *(undefined8 *)(lVar27 + 0xe4) = 0;
                                      FUN_05effcac(DAT_013de608,uStack00000000000000b8,
                                                   uStack00000000000000dc,uStack00000000000000d8,
                                                   DAT_013de554,DAT_013de2dc,uStack00000000000000d4,
                                                   &stack0x00000580,0);
                                      if (7 < *(uint *)(lVar27 + 0x18)) {
                                        *(undefined4 *)(lVar27 + 0x100) = 6;
                                        *(undefined8 *)(lVar27 + 0x118) = 0;
                                        *(undefined8 *)(lVar27 + 0x110) = 0;
                                        *(undefined8 *)(lVar27 + 0x10c) = 0;
                                        *(undefined8 *)(lVar27 + 0x104) = 0;
                                        FUN_05effcac(DAT_013de000,DAT_013de4e8,DAT_013dde04,
                                                     uStack00000000000000d0,DAT_013ddf90,
                                                     DAT_013de344,uStack00000000000000cc,
                                                     &stack0x00000540,0);
                                        if (8 < *(uint *)(lVar27 + 0x18)) {
                                          *(undefined4 *)(lVar27 + 0x120) = 7;
                                          *(undefined8 *)(lVar27 + 0x138) = 0;
                                          *(undefined8 *)(lVar27 + 0x130) = 0;
                                          *(undefined8 *)(lVar27 + 300) = 0;
                                          *(undefined8 *)(lVar27 + 0x124) = 0;
                                          FUN_05effcac(DAT_013de24c,uStack00000000000000c8,
                                                       uStack00000000000000c4,uStack00000000000000c0
                                                       ,DAT_013ddda0,DAT_013dde08,
                                                       uStack00000000000000bc,&stack0x00000500,0);
                                          if (9 < *(uint *)(lVar27 + 0x18)) {
                                            *(undefined4 *)(lVar27 + 0x140) = 8;
                                            *(undefined8 *)(lVar27 + 0x158) = 0;
                                            *(undefined8 *)(lVar27 + 0x150) = 0;
                                            *(undefined8 *)(lVar27 + 0x14c) = 0;
                                            *(undefined8 *)(lVar27 + 0x144) = 0;
                                            FUN_05effcac(DAT_013ddf30,DAT_013de004,DAT_013de348,0,
                                                         DAT_013ddf94,0,0x3f800000,&stack0x000004c0,
                                                         0);
                                            if (10 < *(uint *)(lVar27 + 0x18)) {
                                              *(undefined4 *)(lVar27 + 0x160) = 9;
                                              *(undefined8 *)(lVar27 + 0x178) = 0;
                                              *(undefined8 *)(lVar27 + 0x170) = 0;
                                              *(undefined8 *)(lVar27 + 0x16c) = 0;
                                              *(undefined8 *)(lVar27 + 0x164) = 0;
                                              FUN_05effcac(DAT_013de2e0,uStack00000000000000b4,
                                                           uStack00000000000000b0,0,0,0,0x3f800000,
                                                           &stack0x00000480,0);
                                              if (0xb < *(uint *)(lVar27 + 0x18)) {
                                                *(undefined4 *)(lVar27 + 0x180) = 1;
                                                *(undefined8 *)(lVar27 + 0x198) = 0;
                                                *(undefined8 *)(lVar27 + 400) = 0;
                                                *(undefined8 *)(lVar27 + 0x18c) = 0;
                                                *(undefined8 *)(lVar27 + 0x184) = 0;
                                                FUN_05effcac(DAT_013de34c,uStack00000000000000ac,
                                                             uStack00000000000000a8,
                                                             uStack00000000000000a4,DAT_013de1a4,
                                                             DAT_013ddec8,uStack00000000000000a0,
                                                             &stack0x00000440,0);
                                                if (0xc < *(uint *)(lVar27 + 0x18)) {
                                                  *(undefined4 *)(lVar27 + 0x1a0) = 0xb;
                                                  *(undefined8 *)(lVar27 + 0x1b8) = 0;
                                                  *(undefined8 *)(lVar27 + 0x1b0) = 0;
                                                  *(undefined8 *)(lVar27 + 0x1ac) = 0;
                                                  *(undefined8 *)(lVar27 + 0x1a4) = 0;
                                                  FUN_05effcac(DAT_013de008,uStack000000000000009c,
                                                               uStack0000000000000098,
                                                               uStack0000000000000094,DAT_013de05c,
                                                               DAT_013de1a8,uStack0000000000000090,
                                                               &stack0x00000400,0);
                                                  if (0xd < *(uint *)(lVar27 + 0x18)) {
                                                    *(undefined4 *)(lVar27 + 0x1c0) = 0xc;
                                                    *(undefined8 *)(lVar27 + 0x1d8) = 0;
                                                    *(undefined8 *)(lVar27 + 0x1d0) = 0;
                                                    *(undefined8 *)(lVar27 + 0x1cc) = 0;
                                                    *(undefined8 *)(lVar27 + 0x1c4) = 0;
                                                    FUN_05effcac(DAT_013ddb2c,uStack000000000000008c
                                                                 ,uStack0000000000000088,
                                                                 uStack0000000000000084,DAT_013de1ac
                                                                 ,DAT_013de1f0,
                                                                 uStack0000000000000080,
                                                                 &stack0x000003c0,0);
                                                    if (0xe < *(uint *)(lVar27 + 0x18)) {
                                                      *(undefined4 *)(lVar27 + 0x1e0) = 0xd;
                                                      *(undefined8 *)(lVar27 + 0x1f8) = 0;
                                                      *(undefined8 *)(lVar27 + 0x1f0) = 0;
                                                      *(undefined8 *)(lVar27 + 0x1ec) = 0;
                                                      *(undefined8 *)(lVar27 + 0x1e4) = 0;
                                                      FUN_05effcac(DAT_013de148,
                                                                   uStack0000000000000078,
                                                                   uStack000000000000007c,
                                                                   &stack0x00000380,0);
                                                      if (0xf < *(uint *)(lVar27 + 0x18)) {
                                                        *(undefined4 *)(lVar27 + 0x200) = 0xe;
                                                        *(undefined8 *)(lVar27 + 0x218) = 0;
                                                        *(undefined8 *)(lVar27 + 0x210) = 0;
                                                        *(undefined8 *)(lVar27 + 0x20c) = 0;
                                                        *(undefined8 *)(lVar27 + 0x204) = 0;
                                                        FUN_05effcac(DAT_013ddb7c,
                                                                     uStack0000000000000074,
                                                                     uStack0000000000000070,0,0,0,
                                                                     0x3f800000,&stack0x00000340,0);
                                                        if (0x10 < *(uint *)(lVar27 + 0x18)) {
                                                          *(undefined4 *)(lVar27 + 0x220) = 1;
                                                          *(undefined8 *)(lVar27 + 0x238) = 0;
                                                          *(undefined8 *)(lVar27 + 0x230) = 0;
                                                          *(undefined8 *)(lVar27 + 0x22c) = 0;
                                                          *(undefined8 *)(lVar27 + 0x224) = 0;
                                                          FUN_05effcac(DAT_013ddecc,
                                                                       uStack000000000000006c,
                                                                       uStack0000000000000068,
                                                                       uStack0000000000000064,
                                                                       DAT_013de60c,DAT_013de5a4,
                                                                       uStack0000000000000060,
                                                                       &stack0x00000300,0);
                                                          if (0x11 < *(uint *)(lVar27 + 0x18)) {
                                                            *(undefined4 *)(lVar27 + 0x240) = 0x10;
                                                            *(undefined8 *)(lVar27 + 600) = 0;
                                                            *(undefined8 *)(lVar27 + 0x250) = 0;
                                                            *(undefined8 *)(lVar27 + 0x24c) = 0;
                                                            *(undefined8 *)(lVar27 + 0x244) = 0;
                                                            FUN_05effcac(DAT_013ddce8,uVar12,uVar8,
                                                                         uVar13,DAT_013de2e4,
                                                                         DAT_013ddda4,uVar17,
                                                                         &stack0x000002c0,0);
                                                            if (0x12 < *(uint *)(lVar27 + 0x18)) {
                                                              *(undefined4 *)(lVar27 + 0x260) = 0x11
                                                              ;
                                                              *(undefined8 *)(lVar27 + 0x278) = 0;
                                                              *(undefined8 *)(lVar27 + 0x270) = 0;
                                                              *(undefined8 *)(lVar27 + 0x26c) = 0;
                                                              *(undefined8 *)(lVar27 + 0x264) = 0;
                                                              FUN_05effcac(DAT_013ddd44,uVar4,uVar14
                                                                           ,DAT_013de294,
                                                                           DAT_013ddc1c,DAT_013ddd48
                                                                           ,DAT_013de1b0,
                                                                           &stack0x00000280,0);
                                                              if (0x13 < *(uint *)(lVar27 + 0x18)) {
                                                                *(undefined4 *)(lVar27 + 0x280) =
                                                                     0x12;
                                                                *(undefined8 *)(lVar27 + 0x298) = 0;
                                                                *(undefined8 *)(lVar27 + 0x290) = 0;
                                                                *(undefined8 *)(lVar27 + 0x28c) = 0;
                                                                *(undefined8 *)(lVar27 + 0x284) = 0;
                                                                FUN_05effcac(DAT_013de2e8,
                                                                             DAT_013de384,
                                                                             DAT_013de43c,
                                                                             &stack0x00000240,0);
                                                                if (0x14 < *(uint *)(lVar27 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar27 + 0x2a0) =
                                                                       0x13;
                                                                  *(undefined8 *)(lVar27 + 0x2b8) =
                                                                       0;
                                                                  *(undefined8 *)(lVar27 + 0x2b0) =
                                                                       0;
                                                                  *(undefined8 *)(lVar27 + 0x2ac) =
                                                                       0;
                                                                  *(undefined8 *)(lVar27 + 0x2a4) =
                                                                       0;
                                                                  FUN_05effcac(DAT_013de4ec,uVar10,
                                                                               uVar23,uVar6,
                                                                               DAT_013de498,
                                                                               DAT_013de440,uVar22,
                                                                               &stack0x00000200,0);
                                                                  in_stack_000001e0 = 0;
                                                                  uStack00000000000001e8 = 0;
                                                                  uStack00000000000001ec = 0;
                                                                  in_stack_000001f0 = 0;
                                                                  if (0x15 < *(uint *)(lVar27 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar27 + 0x2c0)
                                                                         = 1;
                                                                    *(undefined8 *)(lVar27 + 0x2d8)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar27 + 0x2d0)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar27 + 0x2cc)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar27 + 0x2c4)
                                                                         = 0;
                                                                    in_stack_000001c0 = 0;
                                                                    uStack00000000000001c8 = 0;
                                                                    uStack00000000000001cc = 0;
                                                                    in_stack_000001d8 = 0;
                                                                    uStack00000000000001d0 = 0;
                                                                    uStack00000000000001d4 = 0;
                                                                    FUN_05effcac(DAT_013ddc24,uVar18
                                                                                 ,uVar15,uVar9,
                                                                                 DAT_013ddd4c,
                                                                                 DAT_013ddbcc,uVar19
                                                                                 ,&stack0x000001c0,0
                                                                                );
                                                                    uStack00000000000001b4 =
                                                                         CONCAT44(in_stack_000001d8,
                                                                                                                                                                    
                                                  uStack00000000000001d4);
                                                  uStack00000000000001b0 = uStack00000000000001d0;
                                                  uStack00000000000001a8 = uStack00000000000001c8;
                                                  uStack00000000000001ac = uStack00000000000001cc;
                                                  in_stack_000001a0 = in_stack_000001c0;
                                                  if (0x16 < *(uint *)(lVar27 + 0x18)) {
                                                    *(undefined4 *)(lVar27 + 0x2e0) = 0x15;
                                                    *(undefined8 *)(lVar27 + 0x2f8) =
                                                         uStack00000000000001b4;
                                                    *(ulong *)(lVar27 + 0x2f0) =
                                                         CONCAT44(uStack00000000000001d0,
                                                                  uStack00000000000001cc);
                                                    *(ulong *)(lVar27 + 0x2ec) =
                                                         CONCAT44(uStack00000000000001cc,
                                                                  uStack00000000000001c8);
                                                    *(undefined8 *)(lVar27 + 0x2e4) =
                                                         in_stack_000001c0;
                                                    in_stack_00000180 = 0;
                                                    uStack0000000000000188 = 0;
                                                    uStack000000000000018c = 0;
                                                    in_stack_00000198 = 0;
                                                    uStack0000000000000190 = 0;
                                                    uStack0000000000000194 = 0;
                                                    FUN_05effcac(DAT_013de350,uVar2,uVar20,uVar7,
                                                                 DAT_013de1b4,DAT_013ddb80,uVar21,
                                                                 &stack0x00000180,0);
                                                    uStack0000000000000174 =
                                                         CONCAT44(in_stack_00000198,
                                                                  uStack0000000000000194);
                                                    uStack0000000000000170 = uStack0000000000000190;
                                                    uStack0000000000000168 = uStack0000000000000188;
                                                    uStack000000000000016c = uStack000000000000018c;
                                                    in_stack_00000160 = in_stack_00000180;
                                                    if (0x17 < *(uint *)(lVar27 + 0x18)) {
                                                      *(undefined4 *)(lVar27 + 0x300) = 0x16;
                                                      *(undefined8 *)(lVar27 + 0x318) =
                                                           uStack0000000000000174;
                                                      *(ulong *)(lVar27 + 0x310) =
                                                           CONCAT44(uStack0000000000000190,
                                                                    uStack000000000000018c);
                                                      *(ulong *)(lVar27 + 0x30c) =
                                                           CONCAT44(uStack000000000000018c,
                                                                    uStack0000000000000188);
                                                      *(undefined8 *)(lVar27 + 0x304) =
                                                           in_stack_00000180;
                                                      in_stack_00000140 = 0;
                                                      uStack0000000000000148 = 0;
                                                      uStack000000000000014c = 0;
                                                      in_stack_00000158 = 0;
                                                      uStack0000000000000150 = 0;
                                                      uStack0000000000000154 = 0;
                                                      FUN_05effcac(DAT_013de4f0,uVar25,uVar24,uVar16
                                                                   ,DAT_013de2ec,DAT_013ddf34,uVar3,
                                                                   &stack0x00000140,0);
                                                      uStack0000000000000134 =
                                                           CONCAT44(in_stack_00000158,
                                                                    uStack0000000000000154);
                                                      uStack0000000000000130 =
                                                           uStack0000000000000150;
                                                      uStack0000000000000128 =
                                                           uStack0000000000000148;
                                                      uStack000000000000012c =
                                                           uStack000000000000014c;
                                                      in_stack_00000120 = in_stack_00000140;
                                                      if (0x18 < *(uint *)(lVar27 + 0x18)) {
                                                        *(undefined4 *)(lVar27 + 800) = 0x17;
                                                        *(undefined8 *)(lVar27 + 0x338) =
                                                             uStack0000000000000134;
                                                        *(ulong *)(lVar27 + 0x330) =
                                                             CONCAT44(uStack0000000000000150,
                                                                      uStack000000000000014c);
                                                        *(ulong *)(lVar27 + 0x32c) =
                                                             CONCAT44(uStack000000000000014c,
                                                                      uStack0000000000000148);
                                                        *(undefined8 *)(lVar27 + 0x324) =
                                                             in_stack_00000140;
                                                        in_stack_00000100 = 0;
                                                        uStack0000000000000108 = 0;
                                                        uStack000000000000010c = 0;
                                                        in_stack_00000118 = 0;
                                                        uStack0000000000000110 = 0;
                                                        uStack0000000000000114 = 0;
                                                        FUN_05effcac(DAT_013de14c,uVar11,uVar5,
                                                                     &stack0x00000100,0);
                                                        if (0x19 < *(uint *)(lVar27 + 0x18)) {
                                                          *(undefined4 *)(lVar27 + 0x340) = 0x18;
                                                          *(ulong *)(lVar27 + 0x358) =
                                                               CONCAT44(in_stack_00000118,
                                                                        uStack0000000000000114);
                                                          *(ulong *)(lVar27 + 0x350) =
                                                               CONCAT44(uStack0000000000000110,
                                                                        uStack000000000000010c);
                                                          *(ulong *)(lVar27 + 0x34c) =
                                                               CONCAT44(uStack000000000000010c,
                                                                        uStack0000000000000108);
                                                          *(undefined8 *)(lVar27 + 0x344) =
                                                               in_stack_00000100;
                                                          if (lVar26 != 0) {
                                                            *(long *)(lVar26 + 0x10) = lVar27;
                                                            *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     8) = lVar26;
                                                            return;
                                                          }
                                                          goto LAB_051e64f0;
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
                        goto LAB_051e64ec;
                      }
                    }
LAB_051e64f0:
                    /* WARNING: Subroutine does not return */
                    FUN_02ce7c7c();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_051e64ec:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


