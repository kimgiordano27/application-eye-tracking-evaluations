/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 01a2c520
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


void OVRPlugin__CreateSpaceUser
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

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
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  long lVar32;
  long lVar33;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar34;
  ulong uVar35;
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
  
  uStack0000000000000078 = param_2;
  uStack000000000000007c = param_3;
  FUN_02666aac(param_4,0);
  *(undefined8 *)(unaff_x23 + 0xb4) = *(undefined8 *)(unaff_x23 + 0xd4);
  *(undefined8 *)(unaff_x23 + 0xac) = *(undefined8 *)(unaff_x23 + 0xcc);
  if (0xf < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
    uVar34 = *(undefined8 *)(unaff_x23 + 0xac);
    *(undefined8 *)(unaff_x20 + 0x218) = *(undefined8 *)(unaff_x23 + 0xb4);
    *(undefined8 *)(unaff_x20 + 0x210) = uVar34;
    *(undefined8 *)(unaff_x20 + 0x20c) = 0;
    *(undefined8 *)(unaff_x20 + 0x204) = 0;
    uVar2 = DAT_0294599c;
    uVar1 = DAT_02945998;
    FUN_02666aac(DAT_02945994,DAT_02945998,DAT_0294599c,0,0,0,0x3f800000,&stack0x000009e0,0);
    *(undefined8 *)(unaff_x23 + 0x74) = *(undefined8 *)(unaff_x23 + 0x94);
    *(undefined8 *)(unaff_x23 + 0x6c) = *(undefined8 *)(unaff_x23 + 0x8c);
    if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x220) = 1;
      uVar34 = *(undefined8 *)(unaff_x23 + 0x6c);
      *(undefined8 *)(unaff_x20 + 0x238) = *(undefined8 *)(unaff_x23 + 0x74);
      *(undefined8 *)(unaff_x20 + 0x230) = uVar34;
      *(undefined8 *)(unaff_x20 + 0x22c) = 0;
      *(undefined8 *)(unaff_x20 + 0x224) = 0;
      uVar6 = DAT_029459b8;
      uVar5 = DAT_029459ac;
      uVar4 = DAT_029459a8;
      uVar3 = DAT_029459a4;
      FUN_02666aac(DAT_029459a0,&stack0x000009a0,0);
      *(undefined8 *)(unaff_x23 + 0x34) = *(undefined8 *)(unaff_x23 + 0x54);
      *(undefined8 *)(unaff_x23 + 0x2c) = *(undefined8 *)(unaff_x23 + 0x4c);
      if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
        uVar34 = *(undefined8 *)(unaff_x23 + 0x2c);
        *(undefined8 *)(unaff_x20 + 600) = *(undefined8 *)(unaff_x23 + 0x34);
        *(undefined8 *)(unaff_x20 + 0x250) = uVar34;
        *(undefined8 *)(unaff_x20 + 0x24c) = 0;
        *(undefined8 *)(unaff_x20 + 0x244) = 0;
        uVar10 = DAT_029459d4;
        uVar9 = DAT_029459c8;
        uVar8 = DAT_029459c4;
        uVar7 = DAT_029459c0;
        FUN_02666aac(DAT_029459bc,&stack0x00000960,0);
        uVar34 = *(undefined8 *)(unaff_x23 + 0x14);
        uVar35 = *(ulong *)(unaff_x23 + 0xc);
        if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
          *(undefined8 *)(unaff_x20 + 0x278) = uVar34;
          *(ulong *)(unaff_x20 + 0x270) = uVar35 & 0xffffffff00000000;
          *(undefined8 *)(unaff_x20 + 0x26c) = 0;
          *(undefined8 *)(unaff_x20 + 0x264) = 0;
          uVar12 = DAT_029459e0;
          uVar11 = DAT_029459dc;
          FUN_02666aac(DAT_029459d8,DAT_029459dc,DAT_029459e0,DAT_029459e4,DAT_029459e8,DAT_029459ec
                       ,DAT_029459f0,&stack0x00000920,0);
          if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
            *(undefined8 *)(unaff_x20 + 0x298) = 0;
            *(undefined8 *)(unaff_x20 + 0x290) = 0;
            *(undefined8 *)(unaff_x20 + 0x28c) = 0;
            *(undefined8 *)(unaff_x20 + 0x284) = 0;
            FUN_02666aac(DAT_029459f4,DAT_029459f8,DAT_029459fc,DAT_02945a00,&stack0x000008e0,0);
            if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
              *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
              *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
              *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
              *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
              uVar16 = DAT_02945a20;
              uVar15 = DAT_02945a14;
              uVar14 = DAT_02945a10;
              uVar13 = DAT_02945a0c;
              FUN_02666aac(DAT_02945a08,&stack0x000008a0,0);
              if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                uVar20 = DAT_02945a3c;
                uVar19 = DAT_02945a30;
                uVar18 = DAT_02945a2c;
                uVar17 = DAT_02945a28;
                FUN_02666aac(DAT_02945a24,&stack0x00000860,0);
                if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                  uVar24 = DAT_02945a58;
                  uVar23 = DAT_02945a4c;
                  uVar22 = DAT_02945a48;
                  uVar21 = DAT_02945a44;
                  FUN_02666aac(DAT_02945a40,&stack0x00000820,0);
                  if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                    *(undefined8 *)(unaff_x20 + 0x318) = 0;
                    *(undefined8 *)(unaff_x20 + 0x310) = 0;
                    *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x304) = 0;
                    uVar28 = DAT_02945a74;
                    uVar27 = DAT_02945a68;
                    uVar26 = DAT_02945a64;
                    uVar25 = DAT_02945a60;
                    FUN_02666aac(DAT_02945a5c,&stack0x000007e0,0);
                    if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 800) = 0x17;
                      *(undefined8 *)(unaff_x20 + 0x338) = 0;
                      *(undefined8 *)(unaff_x20 + 0x330) = 0;
                      *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x324) = 0;
                      uVar30 = DAT_02945a80;
                      uVar29 = DAT_02945a7c;
                      FUN_02666aac(DAT_02945a78,&stack0x000007a0,0);
                      if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                        *(undefined8 *)(unaff_x20 + 0x358) = 0;
                        *(undefined8 *)(unaff_x20 + 0x350) = 0;
                        *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x344) = 0;
                        *(long *)(unaff_x19 + 0x10) = unaff_x20;
                        **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                        lVar32 = thunk_FUN_00d62348(*unaff_x21);
                        if (lVar32 != 0) {
                          FUN_01a2bbe0();
                          lVar33 = FUN_00da4fb8(*unaff_x22,0x1a);
                          FUN_02666aac(DAT_02945a88,&stack0x00000760,0);
                          if (lVar33 != 0) {
                            if (*(int *)(lVar33 + 0x18) != 0) {
                              *(undefined4 *)(lVar33 + 0x20) = 1;
                              *(undefined8 *)(lVar33 + 0x38) = 0;
                              *(undefined8 *)(lVar33 + 0x30) = 0;
                              *(undefined8 *)(lVar33 + 0x2c) = 0;
                              *(undefined8 *)(lVar33 + 0x24) = 0;
                              FUN_02666aac(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                              if (1 < *(uint *)(lVar33 + 0x18)) {
                                *(undefined4 *)(lVar33 + 0x40) = 0xffffffff;
                                *(undefined8 *)(lVar33 + 0x58) = 0;
                                *(undefined8 *)(lVar33 + 0x50) = 0;
                                uVar31 = DAT_02945a8c;
                                *(undefined8 *)(lVar33 + 0x4c) = 0;
                                *(undefined8 *)(lVar33 + 0x44) = 0;
                                FUN_02666aac(uVar31,&stack0x000006c0,0);
                                if (2 < *(uint *)(lVar33 + 0x18)) {
                                  *(undefined4 *)(lVar33 + 0x60) = 1;
                                  *(undefined8 *)(lVar33 + 0x78) = 0;
                                  *(undefined8 *)(lVar33 + 0x70) = 0;
                                  uVar31 = DAT_02945aa0;
                                  *(undefined8 *)(lVar33 + 0x6c) = 0;
                                  *(undefined8 *)(lVar33 + 100) = 0;
                                  FUN_02666aac(uVar31,DAT_02945aa4,DAT_02945aa8,DAT_02945aac,
                                               DAT_02945ab0,DAT_02945ab4,DAT_02945ab8,
                                               &stack0x00000680,0);
                                  if (3 < *(uint *)(lVar33 + 0x18)) {
                                    *(undefined4 *)(lVar33 + 0x80) = 2;
                                    *(undefined8 *)(lVar33 + 0x98) = 0;
                                    *(undefined8 *)(lVar33 + 0x90) = 0;
                                    uVar31 = DAT_02945abc;
                                    *(undefined8 *)(lVar33 + 0x8c) = 0;
                                    *(undefined8 *)(lVar33 + 0x84) = 0;
                                    FUN_02666aac(uVar31,DAT_02945ac0,DAT_02945ac4,DAT_02945ac8,
                                                 DAT_02945acc,DAT_02945ad0,DAT_02945ad4,
                                                 &stack0x00000640,0);
                                    if (4 < *(uint *)(lVar33 + 0x18)) {
                                      *(undefined4 *)(lVar33 + 0xa0) = 3;
                                      *(undefined8 *)(lVar33 + 0xb8) = 0;
                                      *(undefined8 *)(lVar33 + 0xb0) = 0;
                                      *(undefined8 *)(lVar33 + 0xac) = 0;
                                      *(undefined8 *)(lVar33 + 0xa4) = 0;
                                      FUN_02666aac(DAT_02945ad8,DAT_02945adc,DAT_02945ae0,
                                                   DAT_02945ae4,0,0,0x3f800000,&stack0x00000600,0);
                                      if (5 < *(uint *)(lVar33 + 0x18)) {
                                        *(undefined4 *)(lVar33 + 0xc0) = 4;
                                        *(undefined8 *)(lVar33 + 0xd8) = 0;
                                        *(undefined8 *)(lVar33 + 0xd0) = 0;
                                        uVar31 = DAT_02945ae8;
                                        *(undefined8 *)(lVar33 + 0xcc) = 0;
                                        *(undefined8 *)(lVar33 + 0xc4) = 0;
                                        FUN_02666aac(uVar31,&stack0x000005c0,0);
                                        if (6 < *(uint *)(lVar33 + 0x18)) {
                                          *(undefined4 *)(lVar33 + 0xe0) = 1;
                                          *(undefined8 *)(lVar33 + 0xf8) = 0;
                                          *(undefined8 *)(lVar33 + 0xf0) = 0;
                                          *(undefined8 *)(lVar33 + 0xec) = 0;
                                          *(undefined8 *)(lVar33 + 0xe4) = 0;
                                          FUN_02666aac(DAT_02945aec,uStack00000000000000dc,
                                                       uStack00000000000000d8,uStack00000000000000d4
                                                       ,DAT_02945af0,DAT_02945af4,
                                                       uStack00000000000000d0,&stack0x00000580,0);
                                          if (7 < *(uint *)(lVar33 + 0x18)) {
                                            *(undefined4 *)(lVar33 + 0x100) = 6;
                                            *(undefined8 *)(lVar33 + 0x118) = 0;
                                            *(undefined8 *)(lVar33 + 0x110) = 0;
                                            *(undefined8 *)(lVar33 + 0x10c) = 0;
                                            *(undefined8 *)(lVar33 + 0x104) = 0;
                                            FUN_02666aac(DAT_02945af8,DAT_02945afc,DAT_02945b00,
                                                         uStack00000000000000cc,DAT_02945b04,
                                                         DAT_02945b08,uStack00000000000000c8,
                                                         &stack0x00000540,0);
                                            if (8 < *(uint *)(lVar33 + 0x18)) {
                                              *(undefined4 *)(lVar33 + 0x120) = 7;
                                              *(undefined8 *)(lVar33 + 0x138) = 0;
                                              *(undefined8 *)(lVar33 + 0x130) = 0;
                                              *(undefined8 *)(lVar33 + 300) = 0;
                                              *(undefined8 *)(lVar33 + 0x124) = 0;
                                              FUN_02666aac(DAT_02945b0c,uStack00000000000000c4,
                                                           uStack00000000000000c0,
                                                           uStack00000000000000bc,DAT_02945b10,
                                                           DAT_02945b14,uStack00000000000000b8,
                                                           &stack0x00000500,0);
                                              if (9 < *(uint *)(lVar33 + 0x18)) {
                                                *(undefined4 *)(lVar33 + 0x140) = 8;
                                                *(undefined8 *)(lVar33 + 0x158) = 0;
                                                *(undefined8 *)(lVar33 + 0x150) = 0;
                                                *(undefined8 *)(lVar33 + 0x14c) = 0;
                                                *(undefined8 *)(lVar33 + 0x144) = 0;
                                                FUN_02666aac(DAT_02945b18,DAT_02945b1c,DAT_02945b20,
                                                             0,DAT_02945b24,0,0x3f800000,
                                                             &stack0x000004c0,0);
                                                if (10 < *(uint *)(lVar33 + 0x18)) {
                                                  *(undefined4 *)(lVar33 + 0x160) = 9;
                                                  *(undefined8 *)(lVar33 + 0x178) = 0;
                                                  *(undefined8 *)(lVar33 + 0x170) = 0;
                                                  *(undefined8 *)(lVar33 + 0x16c) = 0;
                                                  *(undefined8 *)(lVar33 + 0x164) = 0;
                                                  FUN_02666aac(DAT_02945b28,uStack00000000000000b0,
                                                               uStack00000000000000b4,0,0,0,
                                                               0x3f800000,&stack0x00000480,0);
                                                  if (0xb < *(uint *)(lVar33 + 0x18)) {
                                                    *(undefined4 *)(lVar33 + 0x180) = 1;
                                                    *(undefined8 *)(lVar33 + 0x198) = 0;
                                                    *(undefined8 *)(lVar33 + 400) = 0;
                                                    *(undefined8 *)(lVar33 + 0x18c) = 0;
                                                    *(undefined8 *)(lVar33 + 0x184) = 0;
                                                    FUN_02666aac(DAT_02945b2c,uStack00000000000000ac
                                                                 ,uStack00000000000000a8,
                                                                 uStack00000000000000a4,DAT_02945b30
                                                                 ,DAT_02945b34,
                                                                 uStack00000000000000a0,
                                                                 &stack0x00000440,0);
                                                    if (0xc < *(uint *)(lVar33 + 0x18)) {
                                                      *(undefined4 *)(lVar33 + 0x1a0) = 0xb;
                                                      *(undefined8 *)(lVar33 + 0x1b8) = 0;
                                                      *(undefined8 *)(lVar33 + 0x1b0) = 0;
                                                      *(undefined8 *)(lVar33 + 0x1ac) = 0;
                                                      *(undefined8 *)(lVar33 + 0x1a4) = 0;
                                                      FUN_02666aac(DAT_02945b38,
                                                                   uStack000000000000009c,
                                                                   uStack0000000000000098,
                                                                   uStack0000000000000094,
                                                                   DAT_02945b3c,DAT_02945b40,
                                                                   uStack0000000000000090,
                                                                   &stack0x00000400,0);
                                                      if (0xd < *(uint *)(lVar33 + 0x18)) {
                                                        *(undefined4 *)(lVar33 + 0x1c0) = 0xc;
                                                        *(undefined8 *)(lVar33 + 0x1d8) = 0;
                                                        *(undefined8 *)(lVar33 + 0x1d0) = 0;
                                                        *(undefined8 *)(lVar33 + 0x1cc) = 0;
                                                        *(undefined8 *)(lVar33 + 0x1c4) = 0;
                                                        FUN_02666aac(DAT_02945b44,
                                                                     uStack000000000000008c,
                                                                     uStack0000000000000088,
                                                                     uStack0000000000000084,
                                                                     DAT_02945b48,DAT_02945b4c,
                                                                     uStack0000000000000080,
                                                                     &stack0x000003c0,0);
                                                        if (0xe < *(uint *)(lVar33 + 0x18)) {
                                                          *(undefined4 *)(lVar33 + 0x1e0) = 0xd;
                                                          *(undefined8 *)(lVar33 + 0x1f8) = 0;
                                                          *(undefined8 *)(lVar33 + 0x1f0) = 0;
                                                          *(undefined8 *)(lVar33 + 0x1ec) = 0;
                                                          *(undefined8 *)(lVar33 + 0x1e4) = 0;
                                                          FUN_02666aac(DAT_02945b50,
                                                                       uStack0000000000000078,
                                                                       uStack000000000000007c,
                                                                       &stack0x00000380,0);
                                                          if (0xf < *(uint *)(lVar33 + 0x18)) {
                                                            *(undefined4 *)(lVar33 + 0x200) = 0xe;
                                                            *(undefined8 *)(lVar33 + 0x218) = 0;
                                                            *(undefined8 *)(lVar33 + 0x210) = 0;
                                                            *(undefined8 *)(lVar33 + 0x20c) = 0;
                                                            *(undefined8 *)(lVar33 + 0x204) = 0;
                                                            FUN_02666aac(DAT_02945b54,uVar1,uVar2,0,
                                                                         0,0,0x3f800000,
                                                                         &stack0x00000340,0);
                                                            if (0x10 < *(uint *)(lVar33 + 0x18)) {
                                                              *(undefined4 *)(lVar33 + 0x220) = 1;
                                                              *(undefined8 *)(lVar33 + 0x238) = 0;
                                                              *(undefined8 *)(lVar33 + 0x230) = 0;
                                                              *(undefined8 *)(lVar33 + 0x22c) = 0;
                                                              *(undefined8 *)(lVar33 + 0x224) = 0;
                                                              FUN_02666aac(DAT_02945b58,uVar3,uVar4,
                                                                           uVar5,DAT_02945b5c,
                                                                           DAT_02945b60,uVar6,
                                                                           &stack0x00000300,0);
                                                              if (0x11 < *(uint *)(lVar33 + 0x18)) {
                                                                *(undefined4 *)(lVar33 + 0x240) =
                                                                     0x10;
                                                                *(undefined8 *)(lVar33 + 600) = 0;
                                                                *(undefined8 *)(lVar33 + 0x250) = 0;
                                                                *(undefined8 *)(lVar33 + 0x24c) = 0;
                                                                *(undefined8 *)(lVar33 + 0x244) = 0;
                                                                FUN_02666aac(DAT_02945b64,uVar7,
                                                                             uVar8,uVar9,
                                                                             DAT_02945b68,
                                                                             DAT_02945b6c,uVar10,
                                                                             &stack0x000002c0,0);
                                                                if (0x12 < *(uint *)(lVar33 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar33 + 0x260) =
                                                                       0x11;
                                                                  *(undefined8 *)(lVar33 + 0x278) =
                                                                       0;
                                                                  *(undefined8 *)(lVar33 + 0x270) =
                                                                       0;
                                                                  *(undefined8 *)(lVar33 + 0x26c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar33 + 0x264) =
                                                                       0;
                                                                  FUN_02666aac(DAT_02945b70,uVar11,
                                                                               uVar12,DAT_02945b74,
                                                                               DAT_02945b78,
                                                                               DAT_02945b7c,
                                                                               DAT_02945b80,
                                                                               &stack0x00000280,0);
                                                                  if (0x13 < *(uint *)(lVar33 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar33 + 0x280)
                                                                         = 0x12;
                                                                    *(undefined8 *)(lVar33 + 0x298)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar33 + 0x290)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar33 + 0x28c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar33 + 0x284)
                                                                         = 0;
                                                                    FUN_02666aac(DAT_02945b84,
                                                                                 DAT_02945b88,
                                                                                 DAT_02945b8c,
                                                                                 &stack0x00000240,0)
                                                                    ;
                                                                    if (0x14 < *(uint *)(lVar33 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar33 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar33 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar33 + 0x2b0) = 0;
                                                    *(undefined8 *)(lVar33 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar33 + 0x2a4) = 0;
                                                    FUN_02666aac(DAT_02945b94,uVar13,uVar14,uVar15,
                                                                 DAT_02945b98,DAT_02945b9c,uVar16,
                                                                 &stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar33 + 0x18)) {
                                                      *(undefined4 *)(lVar33 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar33 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar33 + 0x2d0) = 0;
                                                      *(undefined8 *)(lVar33 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar33 + 0x2c4) = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      in_stack_000001c0 = 0;
                                                      in_stack_000001d8 = 0;
                                                      FUN_02666aac(DAT_02945ba0,uVar17,uVar18,uVar19
                                                                   ,DAT_02945ba4,DAT_02945ba8,uVar20
                                                                   ,&stack0x000001c0,0);
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
                                                      if (0x16 < *(uint *)(lVar33 + 0x18)) {
                                                        *(undefined4 *)(lVar33 + 0x2e0) = 0x15;
                                                        *(undefined8 *)(lVar33 + 0x2f8) =
                                                             uStack00000000000001b4;
                                                        *(ulong *)(lVar33 + 0x2f0) =
                                                             CONCAT44(uStack00000000000001d0,
                                                                      uStack00000000000001cc);
                                                        *(ulong *)(lVar33 + 0x2ec) =
                                                             CONCAT44(uStack00000000000001cc,
                                                                      uStack00000000000001c8);
                                                        *(undefined8 *)(lVar33 + 0x2e4) =
                                                             in_stack_000001c0;
                                                        uStack0000000000000188 = 0;
                                                        uStack000000000000018c = 0;
                                                        uStack0000000000000190 = 0;
                                                        uStack0000000000000194 = 0;
                                                        in_stack_00000180 = 0;
                                                        in_stack_00000198 = 0;
                                                        FUN_02666aac(DAT_02945bac,uVar21,uVar22,
                                                                     uVar23,DAT_02945bb0,
                                                                     DAT_02945bb4,uVar24,
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
                                                        if (0x17 < *(uint *)(lVar33 + 0x18)) {
                                                          *(undefined4 *)(lVar33 + 0x300) = 0x16;
                                                          *(undefined8 *)(lVar33 + 0x318) =
                                                               uStack0000000000000174;
                                                          *(ulong *)(lVar33 + 0x310) =
                                                               CONCAT44(uStack0000000000000190,
                                                                        uStack000000000000018c);
                                                          *(ulong *)(lVar33 + 0x30c) =
                                                               CONCAT44(uStack000000000000018c,
                                                                        uStack0000000000000188);
                                                          *(undefined8 *)(lVar33 + 0x304) =
                                                               in_stack_00000180;
                                                          uStack0000000000000148 = 0;
                                                          uStack000000000000014c = 0;
                                                          uStack0000000000000150 = 0;
                                                          uStack0000000000000154 = 0;
                                                          in_stack_00000140 = 0;
                                                          in_stack_00000158 = 0;
                                                          FUN_02666aac(DAT_02945bb8,uVar25,uVar26,
                                                                       uVar27,DAT_02945bbc,
                                                                       DAT_02945bc0,uVar28,
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
                                                          if (0x18 < *(uint *)(lVar33 + 0x18)) {
                                                            *(undefined4 *)(lVar33 + 800) = 0x17;
                                                            *(undefined8 *)(lVar33 + 0x338) =
                                                                 uStack0000000000000134;
                                                            *(ulong *)(lVar33 + 0x330) =
                                                                 CONCAT44(uStack0000000000000150,
                                                                          uStack000000000000014c);
                                                            *(ulong *)(lVar33 + 0x32c) =
                                                                 CONCAT44(uStack000000000000014c,
                                                                          uStack0000000000000148);
                                                            *(undefined8 *)(lVar33 + 0x324) =
                                                                 in_stack_00000140;
                                                            uStack0000000000000108 = 0;
                                                            uStack000000000000010c = 0;
                                                            uStack0000000000000110 = 0;
                                                            uStack0000000000000114 = 0;
                                                            in_stack_00000100 = 0;
                                                            in_stack_00000118 = 0;
                                                            FUN_02666aac(DAT_02945bc4,uVar29,uVar30,
                                                                         &stack0x00000100,0);
                                                            if (0x19 < *(uint *)(lVar33 + 0x18)) {
                                                              *(undefined4 *)(lVar33 + 0x340) = 0x18
                                                              ;
                                                              *(ulong *)(lVar33 + 0x358) =
                                                                   CONCAT44(in_stack_00000118,
                                                                            uStack0000000000000114);
                                                              *(ulong *)(lVar33 + 0x350) =
                                                                   CONCAT44(uStack0000000000000110,
                                                                            uStack000000000000010c);
                                                              *(ulong *)(lVar33 + 0x34c) =
                                                                   CONCAT44(uStack000000000000010c,
                                                                            uStack0000000000000108);
                                                              *(undefined8 *)(lVar33 + 0x344) =
                                                                   in_stack_00000100;
                                                              *(long *)(lVar32 + 0x10) = lVar33;
                                                              *(long *)(*(long *)(*unaff_x21 + 0xb8)
                                                                       + 8) = lVar32;
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
            }
          }
        }
      }
    }
  }
LAB_01a2d7d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


