/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 01a2c890
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__TryLocateSpace
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
  long lVar16;
  long lVar17;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 uVar18;
  ulong uVar19;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
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
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  
  uStack0000000000000038 = param_7;
  uStack000000000000003c = param_4;
  uStack0000000000000040 = param_3;
  uStack0000000000000044 = param_2;
  FUN_02666aac();
  *(undefined8 *)(unaff_x24 + 0x34) = *(undefined8 *)(unaff_x24 + 0x54);
  *(undefined8 *)(unaff_x24 + 0x2c) = *(undefined8 *)(unaff_x24 + 0x4c);
  if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
    uVar18 = *(undefined8 *)(unaff_x24 + 0x2c);
    *(undefined8 *)(unaff_x20 + 0x2d8) = *(undefined8 *)(unaff_x24 + 0x34);
    *(undefined8 *)(unaff_x20 + 0x2d0) = uVar18;
    *(undefined8 *)(unaff_x20 + 0x2cc) = in_stack_000008a8;
    *(undefined8 *)(unaff_x20 + 0x2c4) = in_stack_000008a0;
    uVar4 = DAT_02945a3c;
    uVar3 = DAT_02945a30;
    uVar2 = DAT_02945a2c;
    uVar1 = DAT_02945a28;
    FUN_02666aac(DAT_02945a24,&stack0x00000860,0);
    uVar18 = *(undefined8 *)(unaff_x24 + 0x14);
    uVar19 = *(ulong *)(unaff_x24 + 0xc);
    if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
      *(undefined8 *)(unaff_x20 + 0x2f8) = uVar18;
      *(ulong *)(unaff_x20 + 0x2f0) = uVar19 & 0xffffffff00000000;
      *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
      *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
      uVar8 = DAT_02945a58;
      uVar7 = DAT_02945a4c;
      uVar6 = DAT_02945a48;
      uVar5 = DAT_02945a44;
      FUN_02666aac(DAT_02945a40,&stack0x00000820,0);
      if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
        *(undefined8 *)(unaff_x20 + 0x318) = 0;
        *(undefined8 *)(unaff_x20 + 0x310) = 0;
        *(undefined8 *)(unaff_x20 + 0x30c) = 0;
        *(undefined8 *)(unaff_x20 + 0x304) = 0;
        uVar12 = DAT_02945a74;
        uVar11 = DAT_02945a68;
        uVar10 = DAT_02945a64;
        uVar9 = DAT_02945a60;
        FUN_02666aac(DAT_02945a5c,&stack0x000007e0,0);
        if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 800) = 0x17;
          *(undefined8 *)(unaff_x20 + 0x338) = 0;
          *(undefined8 *)(unaff_x20 + 0x330) = 0;
          *(undefined8 *)(unaff_x20 + 0x32c) = 0;
          *(undefined8 *)(unaff_x20 + 0x324) = 0;
          uVar14 = DAT_02945a80;
          uVar13 = DAT_02945a7c;
          FUN_02666aac(DAT_02945a78,&stack0x000007a0,0);
          if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
            *(undefined8 *)(unaff_x20 + 0x358) = 0;
            *(undefined8 *)(unaff_x20 + 0x350) = 0;
            *(undefined8 *)(unaff_x20 + 0x34c) = 0;
            *(undefined8 *)(unaff_x20 + 0x344) = 0;
            *(long *)(unaff_x19 + 0x10) = unaff_x20;
            **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
            lVar16 = thunk_FUN_00d62348(*unaff_x21);
            if (lVar16 != 0) {
              FUN_01a2bbe0();
              lVar17 = FUN_00da4fb8(*unaff_x22,0x1a);
              FUN_02666aac(DAT_02945a88,&stack0x00000760,0);
              if (lVar17 != 0) {
                if (*(int *)(lVar17 + 0x18) != 0) {
                  *(undefined4 *)(lVar17 + 0x20) = 1;
                  *(undefined8 *)(lVar17 + 0x38) = 0;
                  *(undefined8 *)(lVar17 + 0x30) = 0;
                  *(undefined8 *)(lVar17 + 0x2c) = 0;
                  *(undefined8 *)(lVar17 + 0x24) = 0;
                  FUN_02666aac(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                  if (1 < *(uint *)(lVar17 + 0x18)) {
                    *(undefined4 *)(lVar17 + 0x40) = 0xffffffff;
                    *(undefined8 *)(lVar17 + 0x58) = 0;
                    *(undefined8 *)(lVar17 + 0x50) = 0;
                    uVar15 = DAT_02945a8c;
                    *(undefined8 *)(lVar17 + 0x4c) = 0;
                    *(undefined8 *)(lVar17 + 0x44) = 0;
                    FUN_02666aac(uVar15,&stack0x000006c0,0);
                    if (2 < *(uint *)(lVar17 + 0x18)) {
                      *(undefined4 *)(lVar17 + 0x60) = 1;
                      *(undefined8 *)(lVar17 + 0x78) = 0;
                      *(undefined8 *)(lVar17 + 0x70) = 0;
                      uVar15 = DAT_02945aa0;
                      *(undefined8 *)(lVar17 + 0x6c) = 0;
                      *(undefined8 *)(lVar17 + 100) = 0;
                      FUN_02666aac(uVar15,DAT_02945aa4,DAT_02945aa8,DAT_02945aac,DAT_02945ab0,
                                   DAT_02945ab4,DAT_02945ab8,&stack0x00000680,0);
                      if (3 < *(uint *)(lVar17 + 0x18)) {
                        *(undefined4 *)(lVar17 + 0x80) = 2;
                        *(undefined8 *)(lVar17 + 0x98) = 0;
                        *(undefined8 *)(lVar17 + 0x90) = 0;
                        uVar15 = DAT_02945abc;
                        *(undefined8 *)(lVar17 + 0x8c) = 0;
                        *(undefined8 *)(lVar17 + 0x84) = 0;
                        FUN_02666aac(uVar15,DAT_02945ac0,DAT_02945ac4,DAT_02945ac8,DAT_02945acc,
                                     DAT_02945ad0,DAT_02945ad4,&stack0x00000640,0);
                        if (4 < *(uint *)(lVar17 + 0x18)) {
                          *(undefined4 *)(lVar17 + 0xa0) = 3;
                          *(undefined8 *)(lVar17 + 0xb8) = 0;
                          *(undefined8 *)(lVar17 + 0xb0) = 0;
                          *(undefined8 *)(lVar17 + 0xac) = 0;
                          *(undefined8 *)(lVar17 + 0xa4) = 0;
                          FUN_02666aac(DAT_02945ad8,DAT_02945adc,DAT_02945ae0,DAT_02945ae4,0,0,
                                       0x3f800000,&stack0x00000600,0);
                          if (5 < *(uint *)(lVar17 + 0x18)) {
                            *(undefined4 *)(lVar17 + 0xc0) = 4;
                            *(undefined8 *)(lVar17 + 0xd8) = 0;
                            *(undefined8 *)(lVar17 + 0xd0) = 0;
                            uVar15 = DAT_02945ae8;
                            *(undefined8 *)(lVar17 + 0xcc) = 0;
                            *(undefined8 *)(lVar17 + 0xc4) = 0;
                            FUN_02666aac(uVar15,&stack0x000005c0,0);
                            if (6 < *(uint *)(lVar17 + 0x18)) {
                              *(undefined4 *)(lVar17 + 0xe0) = 1;
                              *(undefined8 *)(lVar17 + 0xf8) = 0;
                              *(undefined8 *)(lVar17 + 0xf0) = 0;
                              *(undefined8 *)(lVar17 + 0xec) = 0;
                              *(undefined8 *)(lVar17 + 0xe4) = 0;
                              FUN_02666aac(DAT_02945aec,uStack00000000000000dc,
                                           uStack00000000000000d8,uStack00000000000000d4,
                                           DAT_02945af0,DAT_02945af4,uStack00000000000000d0,
                                           &stack0x00000580,0);
                              if (7 < *(uint *)(lVar17 + 0x18)) {
                                *(undefined4 *)(lVar17 + 0x100) = 6;
                                *(undefined8 *)(lVar17 + 0x118) = 0;
                                *(undefined8 *)(lVar17 + 0x110) = 0;
                                *(undefined8 *)(lVar17 + 0x10c) = 0;
                                *(undefined8 *)(lVar17 + 0x104) = 0;
                                FUN_02666aac(DAT_02945af8,DAT_02945afc,DAT_02945b00,
                                             uStack00000000000000cc,DAT_02945b04,DAT_02945b08,
                                             uStack00000000000000c8,&stack0x00000540,0);
                                if (8 < *(uint *)(lVar17 + 0x18)) {
                                  *(undefined4 *)(lVar17 + 0x120) = 7;
                                  *(undefined8 *)(lVar17 + 0x138) = 0;
                                  *(undefined8 *)(lVar17 + 0x130) = 0;
                                  *(undefined8 *)(lVar17 + 300) = 0;
                                  *(undefined8 *)(lVar17 + 0x124) = 0;
                                  FUN_02666aac(DAT_02945b0c,uStack00000000000000c4,
                                               uStack00000000000000c0,uStack00000000000000bc,
                                               DAT_02945b10,DAT_02945b14,uStack00000000000000b8,
                                               &stack0x00000500,0);
                                  if (9 < *(uint *)(lVar17 + 0x18)) {
                                    *(undefined4 *)(lVar17 + 0x140) = 8;
                                    *(undefined8 *)(lVar17 + 0x158) = 0;
                                    *(undefined8 *)(lVar17 + 0x150) = 0;
                                    *(undefined8 *)(lVar17 + 0x14c) = 0;
                                    *(undefined8 *)(lVar17 + 0x144) = 0;
                                    FUN_02666aac(DAT_02945b18,DAT_02945b1c,DAT_02945b20,0,
                                                 DAT_02945b24,0,0x3f800000,&stack0x000004c0,0);
                                    if (10 < *(uint *)(lVar17 + 0x18)) {
                                      *(undefined4 *)(lVar17 + 0x160) = 9;
                                      *(undefined8 *)(lVar17 + 0x178) = 0;
                                      *(undefined8 *)(lVar17 + 0x170) = 0;
                                      *(undefined8 *)(lVar17 + 0x16c) = 0;
                                      *(undefined8 *)(lVar17 + 0x164) = 0;
                                      FUN_02666aac(DAT_02945b28,uStack00000000000000b0,
                                                   uStack00000000000000b4,0,0,0,0x3f800000,
                                                   &stack0x00000480,0);
                                      if (0xb < *(uint *)(lVar17 + 0x18)) {
                                        *(undefined4 *)(lVar17 + 0x180) = 1;
                                        *(undefined8 *)(lVar17 + 0x198) = 0;
                                        *(undefined8 *)(lVar17 + 400) = 0;
                                        *(undefined8 *)(lVar17 + 0x18c) = 0;
                                        *(undefined8 *)(lVar17 + 0x184) = 0;
                                        FUN_02666aac(DAT_02945b2c,uStack00000000000000ac,
                                                     uStack00000000000000a8,uStack00000000000000a4,
                                                     DAT_02945b30,DAT_02945b34,
                                                     uStack00000000000000a0,&stack0x00000440,0);
                                        if (0xc < *(uint *)(lVar17 + 0x18)) {
                                          *(undefined4 *)(lVar17 + 0x1a0) = 0xb;
                                          *(undefined8 *)(lVar17 + 0x1b8) = 0;
                                          *(undefined8 *)(lVar17 + 0x1b0) = 0;
                                          *(undefined8 *)(lVar17 + 0x1ac) = 0;
                                          *(undefined8 *)(lVar17 + 0x1a4) = 0;
                                          FUN_02666aac(DAT_02945b38,uStack000000000000009c,
                                                       uStack0000000000000098,uStack0000000000000094
                                                       ,DAT_02945b3c,DAT_02945b40,
                                                       uStack0000000000000090,&stack0x00000400,0);
                                          if (0xd < *(uint *)(lVar17 + 0x18)) {
                                            *(undefined4 *)(lVar17 + 0x1c0) = 0xc;
                                            *(undefined8 *)(lVar17 + 0x1d8) = 0;
                                            *(undefined8 *)(lVar17 + 0x1d0) = 0;
                                            *(undefined8 *)(lVar17 + 0x1cc) = 0;
                                            *(undefined8 *)(lVar17 + 0x1c4) = 0;
                                            FUN_02666aac(DAT_02945b44,uStack000000000000008c,
                                                         uStack0000000000000088,
                                                         uStack0000000000000084,DAT_02945b48,
                                                         DAT_02945b4c,uStack0000000000000080,
                                                         &stack0x000003c0,0);
                                            if (0xe < *(uint *)(lVar17 + 0x18)) {
                                              *(undefined4 *)(lVar17 + 0x1e0) = 0xd;
                                              *(undefined8 *)(lVar17 + 0x1f8) = 0;
                                              *(undefined8 *)(lVar17 + 0x1f0) = 0;
                                              *(undefined8 *)(lVar17 + 0x1ec) = 0;
                                              *(undefined8 *)(lVar17 + 0x1e4) = 0;
                                              FUN_02666aac(DAT_02945b50,uStack0000000000000078,
                                                           uStack000000000000007c,&stack0x00000380,0
                                                          );
                                              if (0xf < *(uint *)(lVar17 + 0x18)) {
                                                *(undefined4 *)(lVar17 + 0x200) = 0xe;
                                                *(undefined8 *)(lVar17 + 0x218) = 0;
                                                *(undefined8 *)(lVar17 + 0x210) = 0;
                                                *(undefined8 *)(lVar17 + 0x20c) = 0;
                                                *(undefined8 *)(lVar17 + 0x204) = 0;
                                                FUN_02666aac(DAT_02945b54,uStack0000000000000070,
                                                             uStack0000000000000074,0,0,0,0x3f800000
                                                             ,&stack0x00000340,0);
                                                if (0x10 < *(uint *)(lVar17 + 0x18)) {
                                                  *(undefined4 *)(lVar17 + 0x220) = 1;
                                                  *(undefined8 *)(lVar17 + 0x238) = 0;
                                                  *(undefined8 *)(lVar17 + 0x230) = 0;
                                                  *(undefined8 *)(lVar17 + 0x22c) = 0;
                                                  *(undefined8 *)(lVar17 + 0x224) = 0;
                                                  FUN_02666aac(DAT_02945b58,uStack000000000000006c,
                                                               uStack0000000000000068,
                                                               uStack0000000000000064,DAT_02945b5c,
                                                               DAT_02945b60,uStack0000000000000060,
                                                               &stack0x00000300,0);
                                                  if (0x11 < *(uint *)(lVar17 + 0x18)) {
                                                    *(undefined4 *)(lVar17 + 0x240) = 0x10;
                                                    *(undefined8 *)(lVar17 + 600) = 0;
                                                    *(undefined8 *)(lVar17 + 0x250) = 0;
                                                    *(undefined8 *)(lVar17 + 0x24c) = 0;
                                                    *(undefined8 *)(lVar17 + 0x244) = 0;
                                                    FUN_02666aac(DAT_02945b64,uStack000000000000005c
                                                                 ,uStack0000000000000058,
                                                                 uStack0000000000000054,DAT_02945b68
                                                                 ,DAT_02945b6c,
                                                                 uStack0000000000000050,
                                                                 &stack0x000002c0,0);
                                                    if (0x12 < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined4 *)(lVar17 + 0x260) = 0x11;
                                                      *(undefined8 *)(lVar17 + 0x278) = 0;
                                                      *(undefined8 *)(lVar17 + 0x270) = 0;
                                                      *(undefined8 *)(lVar17 + 0x26c) = 0;
                                                      *(undefined8 *)(lVar17 + 0x264) = 0;
                                                      FUN_02666aac(DAT_02945b70,
                                                                   uStack000000000000004c,
                                                                   uStack0000000000000048,
                                                                   DAT_02945b74,DAT_02945b78,
                                                                   DAT_02945b7c,DAT_02945b80,
                                                                   &stack0x00000280,0);
                                                      if (0x13 < *(uint *)(lVar17 + 0x18)) {
                                                        *(undefined4 *)(lVar17 + 0x280) = 0x12;
                                                        *(undefined8 *)(lVar17 + 0x298) = 0;
                                                        *(undefined8 *)(lVar17 + 0x290) = 0;
                                                        *(undefined8 *)(lVar17 + 0x28c) = 0;
                                                        *(undefined8 *)(lVar17 + 0x284) = 0;
                                                        FUN_02666aac(DAT_02945b84,DAT_02945b88,
                                                                     DAT_02945b8c,&stack0x00000240,0
                                                                    );
                                                        if (0x14 < *(uint *)(lVar17 + 0x18)) {
                                                          *(undefined4 *)(lVar17 + 0x2a0) = 0x13;
                                                          *(undefined8 *)(lVar17 + 0x2b8) = 0;
                                                          *(undefined8 *)(lVar17 + 0x2b0) = 0;
                                                          *(undefined8 *)(lVar17 + 0x2ac) = 0;
                                                          *(undefined8 *)(lVar17 + 0x2a4) = 0;
                                                          FUN_02666aac(DAT_02945b94,
                                                                       uStack0000000000000044,
                                                                       uStack0000000000000040,
                                                                       uStack000000000000003c,
                                                                       DAT_02945b98,DAT_02945b9c,
                                                                       uStack0000000000000038,
                                                                       &stack0x00000200,0);
                                                          in_stack_000001e0 = 0;
                                                          uStack00000000000001e8 = 0;
                                                          uStack00000000000001ec = 0;
                                                          in_stack_000001f0 = 0;
                                                          if (0x15 < *(uint *)(lVar17 + 0x18)) {
                                                            *(undefined4 *)(lVar17 + 0x2c0) = 1;
                                                            *(undefined8 *)(lVar17 + 0x2d8) = 0;
                                                            *(undefined8 *)(lVar17 + 0x2d0) = 0;
                                                            *(undefined8 *)(lVar17 + 0x2cc) = 0;
                                                            *(undefined8 *)(lVar17 + 0x2c4) = 0;
                                                            uStack00000000000001c8 = 0;
                                                            uStack00000000000001cc = 0;
                                                            uStack00000000000001d0 = 0;
                                                            uStack00000000000001d4 = 0;
                                                            in_stack_000001c0 = 0;
                                                            in_stack_000001d8 = 0;
                                                            FUN_02666aac(DAT_02945ba0,uVar1,uVar2,
                                                                         uVar3,DAT_02945ba4,
                                                                         DAT_02945ba8,uVar4,
                                                                         &stack0x000001c0,0);
                                                            uStack00000000000001b4 =
                                                                 CONCAT44(in_stack_000001d8,
                                                                          uStack00000000000001d4);
                                                            uStack00000000000001b0 =
                                                                 uStack00000000000001d0;
                                                            uStack00000000000001a8 =
                                                                 uStack00000000000001c8;
                                                            uStack00000000000001ac =
                                                                 uStack00000000000001cc;
                                                            in_stack_000001a0 = in_stack_000001c0;
                                                            if (0x16 < *(uint *)(lVar17 + 0x18)) {
                                                              *(undefined4 *)(lVar17 + 0x2e0) = 0x15
                                                              ;
                                                              *(undefined8 *)(lVar17 + 0x2f8) =
                                                                   uStack00000000000001b4;
                                                              *(ulong *)(lVar17 + 0x2f0) =
                                                                   CONCAT44(uStack00000000000001d0,
                                                                            uStack00000000000001cc);
                                                              *(ulong *)(lVar17 + 0x2ec) =
                                                                   CONCAT44(uStack00000000000001cc,
                                                                            uStack00000000000001c8);
                                                              *(undefined8 *)(lVar17 + 0x2e4) =
                                                                   in_stack_000001c0;
                                                              uStack0000000000000188 = 0;
                                                              uStack000000000000018c = 0;
                                                              uStack0000000000000190 = 0;
                                                              uStack0000000000000194 = 0;
                                                              in_stack_00000180 = 0;
                                                              in_stack_00000198 = 0;
                                                              FUN_02666aac(DAT_02945bac,uVar5,uVar6,
                                                                           uVar7,DAT_02945bb0,
                                                                           DAT_02945bb4,uVar8,
                                                                           &stack0x00000180,0);
                                                              uStack0000000000000174 =
                                                                   CONCAT44(in_stack_00000198,
                                                                            uStack0000000000000194);
                                                              uStack0000000000000170 =
                                                                   uStack0000000000000190;
                                                              uStack0000000000000168 =
                                                                   uStack0000000000000188;
                                                              uStack000000000000016c =
                                                                   uStack000000000000018c;
                                                              in_stack_00000160 = in_stack_00000180;
                                                              if (0x17 < *(uint *)(lVar17 + 0x18)) {
                                                                *(undefined4 *)(lVar17 + 0x300) =
                                                                     0x16;
                                                                *(undefined8 *)(lVar17 + 0x318) =
                                                                     uStack0000000000000174;
                                                                *(ulong *)(lVar17 + 0x310) =
                                                                     CONCAT44(uStack0000000000000190
                                                                              ,
                                                  uStack000000000000018c);
                                                  *(ulong *)(lVar17 + 0x30c) =
                                                       CONCAT44(uStack000000000000018c,
                                                                uStack0000000000000188);
                                                  *(undefined8 *)(lVar17 + 0x304) =
                                                       in_stack_00000180;
                                                  uStack0000000000000148 = 0;
                                                  uStack000000000000014c = 0;
                                                  uStack0000000000000150 = 0;
                                                  uStack0000000000000154 = 0;
                                                  in_stack_00000140 = 0;
                                                  in_stack_00000158 = 0;
                                                  FUN_02666aac(DAT_02945bb8,uVar9,uVar10,uVar11,
                                                               DAT_02945bbc,DAT_02945bc0,uVar12,
                                                               &stack0x00000140,0);
                                                  uStack0000000000000134 =
                                                       CONCAT44(in_stack_00000158,
                                                                uStack0000000000000154);
                                                  uStack0000000000000130 = uStack0000000000000150;
                                                  uStack0000000000000128 = uStack0000000000000148;
                                                  uStack000000000000012c = uStack000000000000014c;
                                                  in_stack_00000120 = in_stack_00000140;
                                                  if (0x18 < *(uint *)(lVar17 + 0x18)) {
                                                    *(undefined4 *)(lVar17 + 800) = 0x17;
                                                    *(undefined8 *)(lVar17 + 0x338) =
                                                         uStack0000000000000134;
                                                    *(ulong *)(lVar17 + 0x330) =
                                                         CONCAT44(uStack0000000000000150,
                                                                  uStack000000000000014c);
                                                    *(ulong *)(lVar17 + 0x32c) =
                                                         CONCAT44(uStack000000000000014c,
                                                                  uStack0000000000000148);
                                                    *(undefined8 *)(lVar17 + 0x324) =
                                                         in_stack_00000140;
                                                    uStack0000000000000108 = 0;
                                                    uStack000000000000010c = 0;
                                                    uStack0000000000000110 = 0;
                                                    uStack0000000000000114 = 0;
                                                    in_stack_00000100 = 0;
                                                    in_stack_00000118 = 0;
                                                    FUN_02666aac(DAT_02945bc4,uVar13,uVar14,
                                                                 &stack0x00000100,0);
                                                    if (0x19 < *(uint *)(lVar17 + 0x18)) {
                                                      *(undefined4 *)(lVar17 + 0x340) = 0x18;
                                                      *(ulong *)(lVar17 + 0x358) =
                                                           CONCAT44(in_stack_00000118,
                                                                    uStack0000000000000114);
                                                      *(ulong *)(lVar17 + 0x350) =
                                                           CONCAT44(uStack0000000000000110,
                                                                    uStack000000000000010c);
                                                      *(ulong *)(lVar17 + 0x34c) =
                                                           CONCAT44(uStack000000000000010c,
                                                                    uStack0000000000000108);
                                                      *(undefined8 *)(lVar17 + 0x344) =
                                                           in_stack_00000100;
                                                      *(long *)(lVar16 + 0x10) = lVar17;
                                                      *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) =
                                                           lVar16;
                                                      return;
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
                goto LAB_01a2d7d0;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
      }
    }
  }
LAB_01a2d7d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


