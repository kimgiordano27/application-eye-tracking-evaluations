/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceDiscoveryResults
ENTRY_POINT: 074896f8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceDiscoveryResults
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

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
  long lVar22;
  long lVar23;
  long *plVar24;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  ulong uVar25;
  undefined8 uVar26;
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
  
  uStack0000000000000054 = *(undefined4 *)(in_x9 + 0xa8c);
  uStack0000000000000050 = DAT_01914e38;
  uStack0000000000000058 = param_3;
  uStack000000000000005c = param_2;
  FUN_08a5b7d0(&stack0x00000960,0);
  uVar26 = *(undefined8 *)(unaff_x23 + 0x14);
  uVar25 = *(ulong *)(unaff_x23 + 0xc);
  if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
    *(undefined8 *)(unaff_x20 + 0x278) = uVar26;
    *(ulong *)(unaff_x20 + 0x270) = uVar25 & 0xffffffff00000000;
    *(undefined8 *)(unaff_x20 + 0x26c) = 0;
    *(undefined8 *)(unaff_x20 + 0x264) = 0;
    uVar11 = DAT_01914c6c;
    uVar4 = DAT_019142c4;
    FUN_08a5b7d0(DAT_01914018,DAT_019142c4,DAT_01914c6c,DAT_019145d8,DAT_01914a90,DAT_01913f74,
                 DAT_01914680,&stack0x00000920,0);
    if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
      *(undefined8 *)(unaff_x20 + 0x298) = 0;
      *(undefined8 *)(unaff_x20 + 0x290) = 0;
      *(undefined8 *)(unaff_x20 + 0x28c) = 0;
      *(undefined8 *)(unaff_x20 + 0x284) = 0;
      FUN_08a5b7d0(DAT_0191422c,DAT_019147b8,DAT_0191401c,DAT_019151d8,&stack0x000008e0,0);
      if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
        *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
        *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
        *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
        *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
        uVar19 = DAT_01915128;
        uVar18 = DAT_01914ff4;
        uVar9 = DAT_019147c0;
        uVar6 = DAT_01914510;
        FUN_08a5b7d0(DAT_01914230,&stack0x000008a0,0);
        if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
          *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
          *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
          *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
          *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
          uVar15 = DAT_01914eec;
          uVar14 = DAT_01914e3c;
          uVar12 = DAT_01914cf8;
          uVar8 = DAT_01914684;
          FUN_08a5b7d0(DAT_01913f78,&stack0x00000860,0);
          if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
            *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
            *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
            *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
            *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
            uVar17 = DAT_01914f60;
            uVar16 = DAT_01914ef0;
            uVar7 = DAT_019145dc;
            uVar2 = DAT_019140b8;
            FUN_08a5b7d0(DAT_01914514,&stack0x00000820,0);
            if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
              *(undefined8 *)(unaff_x20 + 0x318) = 0;
              *(undefined8 *)(unaff_x20 + 0x310) = 0;
              *(undefined8 *)(unaff_x20 + 0x30c) = 0;
              *(undefined8 *)(unaff_x20 + 0x304) = 0;
              uVar21 = DAT_019151dc;
              uVar20 = DAT_0191512c;
              uVar13 = DAT_01914d04;
              uVar3 = DAT_01914164;
              FUN_08a5b7d0(DAT_01914bd8,&stack0x000007e0,0);
              if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 800) = 0x17;
                *(undefined8 *)(unaff_x20 + 0x338) = 0;
                *(undefined8 *)(unaff_x20 + 0x330) = 0;
                *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                *(undefined8 *)(unaff_x20 + 0x324) = 0;
                uVar10 = DAT_01914860;
                uVar5 = DAT_01914368;
                FUN_08a5b7d0(DAT_01914ffc,&stack0x000007a0,0);
                if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                  *(undefined8 *)(unaff_x20 + 0x358) = 0;
                  *(undefined8 *)(unaff_x20 + 0x350) = 0;
                  *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x344) = 0;
                  if (unaff_x19 != 0) {
                    *(long *)(unaff_x19 + 0x10) = unaff_x20;
                    thunk_FUN_03d1023c();
                    **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                    thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x21 + 0xb8));
                    lVar22 = thunk_FUN_03d2ef40(*unaff_x21);
                    FUN_07488c20();
                    lVar23 = FUN_03d2d394(*unaff_x22,0x1a);
                    FUN_08a5b7d0(DAT_01914e40,&stack0x00000760,0);
                    if (lVar23 != 0) {
                      if (*(int *)(lVar23 + 0x18) != 0) {
                        *(undefined4 *)(lVar23 + 0x20) = 1;
                        *(undefined8 *)(lVar23 + 0x38) = 0;
                        *(undefined8 *)(lVar23 + 0x30) = 0;
                        *(undefined8 *)(lVar23 + 0x2c) = 0;
                        *(undefined8 *)(lVar23 + 0x24) = 0;
                        FUN_08a5b7d0(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                        if (1 < *(uint *)(lVar23 + 0x18)) {
                          *(undefined4 *)(lVar23 + 0x40) = 0xffffffff;
                          *(undefined8 *)(lVar23 + 0x58) = 0;
                          *(undefined8 *)(lVar23 + 0x50) = 0;
                          uVar1 = DAT_0191447c;
                          *(undefined8 *)(lVar23 + 0x4c) = 0;
                          *(undefined8 *)(lVar23 + 0x44) = 0;
                          FUN_08a5b7d0(uVar1,&stack0x000006c0,0);
                          if (2 < *(uint *)(lVar23 + 0x18)) {
                            *(undefined4 *)(lVar23 + 0x60) = 1;
                            *(undefined8 *)(lVar23 + 0x78) = 0;
                            *(undefined8 *)(lVar23 + 0x70) = 0;
                            uVar1 = DAT_01914688;
                            *(undefined8 *)(lVar23 + 0x6c) = 0;
                            *(undefined8 *)(lVar23 + 100) = 0;
                            FUN_08a5b7d0(uVar1,DAT_0191468c,DAT_01915134,DAT_019147c4,DAT_019147c8,
                                         DAT_01913f80,DAT_01914518,&stack0x00000680,0);
                            if (3 < *(uint *)(lVar23 + 0x18)) {
                              *(undefined4 *)(lVar23 + 0x80) = 2;
                              *(undefined8 *)(lVar23 + 0x98) = 0;
                              *(undefined8 *)(lVar23 + 0x90) = 0;
                              uVar1 = DAT_01914d08;
                              *(undefined8 *)(lVar23 + 0x8c) = 0;
                              *(undefined8 *)(lVar23 + 0x84) = 0;
                              FUN_08a5b7d0(uVar1,DAT_019147cc,DAT_01915138,DAT_01914a1c,DAT_01915094
                                           ,DAT_019148fc,DAT_01915004,&stack0x00000640,0);
                              if (4 < *(uint *)(lVar23 + 0x18)) {
                                *(undefined4 *)(lVar23 + 0xa0) = 3;
                                *(undefined8 *)(lVar23 + 0xb8) = 0;
                                *(undefined8 *)(lVar23 + 0xb0) = 0;
                                *(undefined8 *)(lVar23 + 0xac) = 0;
                                *(undefined8 *)(lVar23 + 0xa4) = 0;
                                FUN_08a5b7d0(DAT_01914720,DAT_01914984,DAT_01914864,DAT_01914b24,0,0
                                             ,0x3f800000,&stack0x00000600,0);
                                if (5 < *(uint *)(lVar23 + 0x18)) {
                                  *(undefined4 *)(lVar23 + 0xc0) = 4;
                                  *(undefined8 *)(lVar23 + 0xd8) = 0;
                                  *(undefined8 *)(lVar23 + 0xd0) = 0;
                                  uVar1 = DAT_01913f84;
                                  *(undefined8 *)(lVar23 + 0xcc) = 0;
                                  *(undefined8 *)(lVar23 + 0xc4) = 0;
                                  FUN_08a5b7d0(uVar1,&stack0x000005c0,0);
                                  if (6 < *(uint *)(lVar23 + 0x18)) {
                                    *(undefined4 *)(lVar23 + 0xe0) = 1;
                                    *(undefined8 *)(lVar23 + 0xf8) = 0;
                                    *(undefined8 *)(lVar23 + 0xf0) = 0;
                                    *(undefined8 *)(lVar23 + 0xec) = 0;
                                    *(undefined8 *)(lVar23 + 0xe4) = 0;
                                    FUN_08a5b7d0(DAT_0191527c,uStack00000000000000b8,
                                                 uStack00000000000000dc,uStack00000000000000d8,
                                                 DAT_0191513c,DAT_01914d0c,uStack00000000000000d4,
                                                 &stack0x00000580,0);
                                    if (7 < *(uint *)(lVar23 + 0x18)) {
                                      *(undefined4 *)(lVar23 + 0x100) = 6;
                                      *(undefined8 *)(lVar23 + 0x118) = 0;
                                      *(undefined8 *)(lVar23 + 0x110) = 0;
                                      *(undefined8 *)(lVar23 + 0x10c) = 0;
                                      *(undefined8 *)(lVar23 + 0x104) = 0;
                                      FUN_08a5b7d0(DAT_019147d0,DAT_01915098,DAT_01914480,
                                                   uStack00000000000000d0,DAT_01914724,DAT_01914da0,
                                                   uStack00000000000000cc,&stack0x00000540,0);
                                      if (8 < *(uint *)(lVar23 + 0x18)) {
                                        *(undefined4 *)(lVar23 + 0x120) = 7;
                                        *(undefined8 *)(lVar23 + 0x138) = 0;
                                        *(undefined8 *)(lVar23 + 0x130) = 0;
                                        *(undefined8 *)(lVar23 + 300) = 0;
                                        *(undefined8 *)(lVar23 + 0x124) = 0;
                                        FUN_08a5b7d0(DAT_01914bdc,uStack00000000000000c8,
                                                     uStack00000000000000c4,uStack00000000000000c0,
                                                     DAT_01914418,DAT_01914484,
                                                     uStack00000000000000bc,&stack0x00000500,0);
                                        if (9 < *(uint *)(lVar23 + 0x18)) {
                                          *(undefined4 *)(lVar23 + 0x140) = 8;
                                          *(undefined8 *)(lVar23 + 0x158) = 0;
                                          *(undefined8 *)(lVar23 + 0x150) = 0;
                                          *(undefined8 *)(lVar23 + 0x14c) = 0;
                                          *(undefined8 *)(lVar23 + 0x144) = 0;
                                          FUN_08a5b7d0(DAT_01914690,DAT_019147d4,DAT_01914da4,0,
                                                       DAT_01914728,0,0x3f800000,&stack0x000004c0,0)
                                          ;
                                          if (10 < *(uint *)(lVar23 + 0x18)) {
                                            *(undefined4 *)(lVar23 + 0x160) = 9;
                                            *(undefined8 *)(lVar23 + 0x178) = 0;
                                            *(undefined8 *)(lVar23 + 0x170) = 0;
                                            *(undefined8 *)(lVar23 + 0x16c) = 0;
                                            *(undefined8 *)(lVar23 + 0x164) = 0;
                                            FUN_08a5b7d0(DAT_01914d10,uStack00000000000000b4,
                                                         uStack00000000000000b0,0,0,0,0x3f800000,
                                                         &stack0x00000480,0);
                                            if (0xb < *(uint *)(lVar23 + 0x18)) {
                                              *(undefined4 *)(lVar23 + 0x180) = 1;
                                              *(undefined8 *)(lVar23 + 0x198) = 0;
                                              *(undefined8 *)(lVar23 + 400) = 0;
                                              *(undefined8 *)(lVar23 + 0x18c) = 0;
                                              *(undefined8 *)(lVar23 + 0x184) = 0;
                                              FUN_08a5b7d0(DAT_01914da8,uStack00000000000000ac,
                                                           uStack00000000000000a8,
                                                           uStack00000000000000a4,DAT_01914a98,
                                                           DAT_019145e4,uStack00000000000000a0,
                                                           &stack0x00000440,0);
                                              if (0xc < *(uint *)(lVar23 + 0x18)) {
                                                *(undefined4 *)(lVar23 + 0x1a0) = 0xb;
                                                *(undefined8 *)(lVar23 + 0x1b8) = 0;
                                                *(undefined8 *)(lVar23 + 0x1b0) = 0;
                                                *(undefined8 *)(lVar23 + 0x1ac) = 0;
                                                *(undefined8 *)(lVar23 + 0x1a4) = 0;
                                                FUN_08a5b7d0(DAT_019147d8,uStack000000000000009c,
                                                             uStack0000000000000098,
                                                             uStack0000000000000094,DAT_01914868,
                                                             DAT_01914a9c,uStack0000000000000090,
                                                             &stack0x00000400,0);
                                                if (0xd < *(uint *)(lVar23 + 0x18)) {
                                                  *(undefined4 *)(lVar23 + 0x1c0) = 0xc;
                                                  *(undefined8 *)(lVar23 + 0x1d8) = 0;
                                                  *(undefined8 *)(lVar23 + 0x1d0) = 0;
                                                  *(undefined8 *)(lVar23 + 0x1cc) = 0;
                                                  *(undefined8 *)(lVar23 + 0x1c4) = 0;
                                                  FUN_08a5b7d0(DAT_01913f88,uStack000000000000008c,
                                                               uStack0000000000000088,
                                                               uStack0000000000000084,DAT_01914aa0,
                                                               DAT_01914b28,uStack0000000000000080,
                                                               &stack0x000003c0,0);
                                                  if (0xe < *(uint *)(lVar23 + 0x18)) {
                                                    *(undefined4 *)(lVar23 + 0x1e0) = 0xd;
                                                    *(undefined8 *)(lVar23 + 0x1f8) = 0;
                                                    *(undefined8 *)(lVar23 + 0x1f0) = 0;
                                                    *(undefined8 *)(lVar23 + 0x1ec) = 0;
                                                    *(undefined8 *)(lVar23 + 0x1e4) = 0;
                                                    FUN_08a5b7d0(DAT_01914a20,uStack0000000000000078
                                                                 ,uStack000000000000007c,
                                                                 &stack0x00000380,0);
                                                    if (0xf < *(uint *)(lVar23 + 0x18)) {
                                                      *(undefined4 *)(lVar23 + 0x200) = 0xe;
                                                      *(undefined8 *)(lVar23 + 0x218) = 0;
                                                      *(undefined8 *)(lVar23 + 0x210) = 0;
                                                      *(undefined8 *)(lVar23 + 0x20c) = 0;
                                                      *(undefined8 *)(lVar23 + 0x204) = 0;
                                                      FUN_08a5b7d0(DAT_01914020,
                                                                   uStack0000000000000074,
                                                                   uStack0000000000000070,0,0,0,
                                                                   0x3f800000,&stack0x00000340,0);
                                                      if (0x10 < *(uint *)(lVar23 + 0x18)) {
                                                        *(undefined4 *)(lVar23 + 0x220) = 1;
                                                        *(undefined8 *)(lVar23 + 0x238) = 0;
                                                        *(undefined8 *)(lVar23 + 0x230) = 0;
                                                        *(undefined8 *)(lVar23 + 0x22c) = 0;
                                                        *(undefined8 *)(lVar23 + 0x224) = 0;
                                                        FUN_08a5b7d0(DAT_019145e8,
                                                                     uStack000000000000006c,
                                                                     uStack0000000000000068,
                                                                     uStack0000000000000064,
                                                                     DAT_01915280,DAT_019151e0,
                                                                     uStack0000000000000060,
                                                                     &stack0x00000300,0);
                                                        if (0x11 < *(uint *)(lVar23 + 0x18)) {
                                                          *(undefined4 *)(lVar23 + 0x240) = 0x10;
                                                          *(undefined8 *)(lVar23 + 600) = 0;
                                                          *(undefined8 *)(lVar23 + 0x250) = 0;
                                                          *(undefined8 *)(lVar23 + 0x24c) = 0;
                                                          *(undefined8 *)(lVar23 + 0x244) = 0;
                                                          FUN_08a5b7d0(DAT_019142c8,
                                                                       uStack000000000000005c,
                                                                       uStack0000000000000058,
                                                                       uStack0000000000000054,
                                                                       DAT_01914d14,DAT_0191441c,
                                                                       uStack0000000000000050,
                                                                       &stack0x000002c0,0);
                                                          if (0x12 < *(uint *)(lVar23 + 0x18)) {
                                                            *(undefined4 *)(lVar23 + 0x260) = 0x11;
                                                            *(undefined8 *)(lVar23 + 0x278) = 0;
                                                            *(undefined8 *)(lVar23 + 0x270) = 0;
                                                            *(undefined8 *)(lVar23 + 0x26c) = 0;
                                                            *(undefined8 *)(lVar23 + 0x264) = 0;
                                                            FUN_08a5b7d0(DAT_01914370,uVar4,uVar11,
                                                                         DAT_01914c70,DAT_01914168,
                                                                         DAT_01914374,DAT_01914aa4,
                                                                         &stack0x00000280,0);
                                                            if (0x13 < *(uint *)(lVar23 + 0x18)) {
                                                              *(undefined4 *)(lVar23 + 0x280) = 0x12
                                                              ;
                                                              *(undefined8 *)(lVar23 + 0x298) = 0;
                                                              *(undefined8 *)(lVar23 + 0x290) = 0;
                                                              *(undefined8 *)(lVar23 + 0x28c) = 0;
                                                              *(undefined8 *)(lVar23 + 0x284) = 0;
                                                              FUN_08a5b7d0(DAT_01914d18,DAT_01914e44
                                                                           ,DAT_01914f64,
                                                                           &stack0x00000240,0);
                                                              if (0x14 < *(uint *)(lVar23 + 0x18)) {
                                                                *(undefined4 *)(lVar23 + 0x2a0) =
                                                                     0x13;
                                                                *(undefined8 *)(lVar23 + 0x2b8) = 0;
                                                                *(undefined8 *)(lVar23 + 0x2b0) = 0;
                                                                *(undefined8 *)(lVar23 + 0x2ac) = 0;
                                                                *(undefined8 *)(lVar23 + 0x2a4) = 0;
                                                                FUN_08a5b7d0(DAT_0191509c,uVar9,
                                                                             uVar19,uVar6,
                                                                             DAT_01915008,
                                                                             DAT_01914f68,uVar18,
                                                                             &stack0x00000200,0);
                                                                in_stack_000001e0 = 0;
                                                                uStack00000000000001e8 = 0;
                                                                uStack00000000000001ec = 0;
                                                                in_stack_000001f0 = 0;
                                                                if (0x15 < *(uint *)(lVar23 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar23 + 0x2c0) =
                                                                       1;
                                                                  *(undefined8 *)(lVar23 + 0x2d8) =
                                                                       0;
                                                                  *(undefined8 *)(lVar23 + 0x2d0) =
                                                                       0;
                                                                  *(undefined8 *)(lVar23 + 0x2cc) =
                                                                       0;
                                                                  *(undefined8 *)(lVar23 + 0x2c4) =
                                                                       0;
                                                                  in_stack_000001c0 = 0;
                                                                  uStack00000000000001c8 = 0;
                                                                  uStack00000000000001cc = 0;
                                                                  in_stack_000001d8 = 0;
                                                                  uStack00000000000001d0 = 0;
                                                                  uStack00000000000001d4 = 0;
                                                                  FUN_08a5b7d0(DAT_01914170,uVar14,
                                                                               uVar12,uVar8,
                                                                               DAT_01914378,
                                                                               DAT_019140bc,uVar15,
                                                                               &stack0x000001c0,0);
                                                                  uStack00000000000001b4 =
                                                                       CONCAT44(in_stack_000001d8,
                                                                                                                                                                
                                                  uStack00000000000001d4);
                                                  uStack00000000000001b0 = uStack00000000000001d0;
                                                  uStack00000000000001a8 = uStack00000000000001c8;
                                                  uStack00000000000001ac = uStack00000000000001cc;
                                                  in_stack_000001a0 = in_stack_000001c0;
                                                  if (0x16 < *(uint *)(lVar23 + 0x18)) {
                                                    *(undefined4 *)(lVar23 + 0x2e0) = 0x15;
                                                    *(undefined8 *)(lVar23 + 0x2f8) =
                                                         uStack00000000000001b4;
                                                    *(ulong *)(lVar23 + 0x2f0) =
                                                         CONCAT44(uStack00000000000001d0,
                                                                  uStack00000000000001cc);
                                                    *(ulong *)(lVar23 + 0x2ec) =
                                                         CONCAT44(uStack00000000000001cc,
                                                                  uStack00000000000001c8);
                                                    *(undefined8 *)(lVar23 + 0x2e4) =
                                                         in_stack_000001c0;
                                                    in_stack_00000180 = 0;
                                                    uStack0000000000000188 = 0;
                                                    uStack000000000000018c = 0;
                                                    in_stack_00000198 = 0;
                                                    uStack0000000000000190 = 0;
                                                    uStack0000000000000194 = 0;
                                                    FUN_08a5b7d0(DAT_01914dac,uVar2,uVar16,uVar7,
                                                                 DAT_01914aa8,DAT_01914024,uVar17,
                                                                 &stack0x00000180,0);
                                                    uStack0000000000000174 =
                                                         CONCAT44(in_stack_00000198,
                                                                  uStack0000000000000194);
                                                    uStack0000000000000170 = uStack0000000000000190;
                                                    uStack0000000000000168 = uStack0000000000000188;
                                                    uStack000000000000016c = uStack000000000000018c;
                                                    in_stack_00000160 = in_stack_00000180;
                                                    if (0x17 < *(uint *)(lVar23 + 0x18)) {
                                                      *(undefined4 *)(lVar23 + 0x300) = 0x16;
                                                      *(undefined8 *)(lVar23 + 0x318) =
                                                           uStack0000000000000174;
                                                      *(ulong *)(lVar23 + 0x310) =
                                                           CONCAT44(uStack0000000000000190,
                                                                    uStack000000000000018c);
                                                      *(ulong *)(lVar23 + 0x30c) =
                                                           CONCAT44(uStack000000000000018c,
                                                                    uStack0000000000000188);
                                                      *(undefined8 *)(lVar23 + 0x304) =
                                                           in_stack_00000180;
                                                      in_stack_00000140 = 0;
                                                      uStack0000000000000148 = 0;
                                                      uStack000000000000014c = 0;
                                                      in_stack_00000158 = 0;
                                                      uStack0000000000000150 = 0;
                                                      uStack0000000000000154 = 0;
                                                      FUN_08a5b7d0(DAT_019150a0,uVar21,uVar20,uVar13
                                                                   ,DAT_01914d1c,DAT_01914694,uVar3,
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
                                                      if (0x18 < *(uint *)(lVar23 + 0x18)) {
                                                        *(undefined4 *)(lVar23 + 800) = 0x17;
                                                        *(undefined8 *)(lVar23 + 0x338) =
                                                             uStack0000000000000134;
                                                        *(ulong *)(lVar23 + 0x330) =
                                                             CONCAT44(uStack0000000000000150,
                                                                      uStack000000000000014c);
                                                        *(ulong *)(lVar23 + 0x32c) =
                                                             CONCAT44(uStack000000000000014c,
                                                                      uStack0000000000000148);
                                                        *(undefined8 *)(lVar23 + 0x324) =
                                                             in_stack_00000140;
                                                        in_stack_00000100 = 0;
                                                        uStack0000000000000108 = 0;
                                                        uStack000000000000010c = 0;
                                                        in_stack_00000118 = 0;
                                                        uStack0000000000000110 = 0;
                                                        uStack0000000000000114 = 0;
                                                        FUN_08a5b7d0(DAT_01914a24,uVar10,uVar5,
                                                                     &stack0x00000100,0);
                                                        if (0x19 < *(uint *)(lVar23 + 0x18)) {
                                                          *(undefined4 *)(lVar23 + 0x340) = 0x18;
                                                          *(ulong *)(lVar23 + 0x358) =
                                                               CONCAT44(in_stack_00000118,
                                                                        uStack0000000000000114);
                                                          *(ulong *)(lVar23 + 0x350) =
                                                               CONCAT44(uStack0000000000000110,
                                                                        uStack000000000000010c);
                                                          *(ulong *)(lVar23 + 0x34c) =
                                                               CONCAT44(uStack000000000000010c,
                                                                        uStack0000000000000108);
                                                          *(undefined8 *)(lVar23 + 0x344) =
                                                               in_stack_00000100;
                                                          if (lVar22 != 0) {
                                                            *(long *)(lVar22 + 0x10) = lVar23;
                                                            thunk_FUN_03d1023c((long *)(lVar22 + 
                                                  0x10),lVar23);
                                                  plVar24 = (long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                    8);
                                                  *plVar24 = lVar22;
                                                  thunk_FUN_03d1023c(plVar24,lVar22);
                                                  return;
                                                  }
                                                  goto LAB_0748a854;
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
                      goto LAB_0748a850;
                    }
                  }
LAB_0748a854:
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0748a850:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


