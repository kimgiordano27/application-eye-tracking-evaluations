/*
FUNCTION_NAME: OVRPlugin$$EraseSpaces
ENTRY_POINT: 060e7464
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EraseSpaces(long param_1,undefined1 param_2 [16],undefined4 param_3)

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
  undefined4 uVar32;
  undefined4 uVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined4 unaff_s8;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
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
  undefined4 in_stack_00000e28;
  undefined4 in_stack_00000e2c;
  
  uVar5 = DAT_016511b4;
  uStack0000000000000080 = *(undefined4 *)(param_1 + 0x288);
  uStack0000000000000084 = param_3;
  FUN_071ce4a0(&stack0x00000a00,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0xb4);
  *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0xac);
  if ((uVar1 & 0xfffffff0) != 0) {
    uVar38 = *(undefined8 *)(unaff_x23 + 0x94);
    uVar37 = *(undefined8 *)(unaff_x23 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
    *(undefined8 *)(unaff_x20 + 0x218) = uVar38;
    *(undefined8 *)(unaff_x20 + 0x210) = uVar37;
    *(undefined8 *)(unaff_x20 + 0x20c) = 0;
    *(undefined8 *)(unaff_x20 + 0x204) = 0;
    uVar19 = DAT_016510cc;
    uVar6 = DAT_01650a04;
    FUN_071ce4a0(DAT_01650ca8,DAT_016510cc,DAT_01650a04,0,0,0,0x3f800000,&stack0x000009c0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x54) = *(undefined8 *)(unaff_x23 + 0x74);
    *(undefined8 *)(unaff_x23 + 0x4c) = *(undefined8 *)(unaff_x23 + 0x6c);
    if (0x10 < uVar1) {
      uVar38 = *(undefined8 *)(unaff_x23 + 0x54);
      uVar37 = *(undefined8 *)(unaff_x23 + 0x4c);
      *(undefined4 *)(unaff_x20 + 0x220) = 1;
      *(undefined8 *)(unaff_x20 + 0x238) = uVar38;
      *(undefined8 *)(unaff_x20 + 0x230) = uVar37;
      *(undefined8 *)(unaff_x20 + 0x22c) = 0;
      *(undefined8 *)(unaff_x20 + 0x224) = 0;
      uVar13 = DAT_01650e5c;
      uVar10 = DAT_01650c30;
      uVar8 = DAT_01650a70;
      uVar3 = DAT_01650990;
      FUN_071ce4a0(DAT_01650bbc,&stack0x00000980,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
      *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
      if (0x11 < uVar1) {
        uVar38 = *(undefined8 *)(unaff_x23 + 0x14);
        uVar37 = *(undefined8 *)(unaff_x23 + 0xc);
        *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
        *(undefined8 *)(unaff_x20 + 600) = uVar38;
        *(undefined8 *)(unaff_x20 + 0x250) = uVar37;
        *(undefined8 *)(unaff_x20 + 0x24c) = 0;
        *(undefined8 *)(unaff_x20 + 0x244) = 0;
        uVar32 = DAT_01651440;
        uVar31 = DAT_0165137c;
        uVar30 = DAT_01651378;
        uVar26 = DAT_016512fc;
        FUN_071ce4a0(DAT_01651114,&stack0x00000940,0);
        if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
          *(undefined8 *)(unaff_x20 + 0x278) = 0;
          *(undefined8 *)(unaff_x20 + 0x270) = 0;
          *(undefined8 *)(unaff_x20 + 0x26c) = 0;
          *(undefined8 *)(unaff_x20 + 0x264) = 0;
          uVar27 = DAT_01651300;
          uVar21 = DAT_01651168;
          FUN_071ce4a0(DAT_01650b10,DAT_01651300,DAT_01651168,DAT_01651444,DAT_0165128c,DAT_01650bc0
                       ,DAT_0165100c,&stack0x00000900,0);
          if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
            *(undefined8 *)(unaff_x20 + 0x298) = 0;
            *(undefined8 *)(unaff_x20 + 0x290) = 0;
            *(undefined8 *)(unaff_x20 + 0x28c) = 0;
            *(undefined8 *)(unaff_x20 + 0x284) = 0;
            FUN_071ce4a0(DAT_01650994,DAT_0165106c,DAT_01650b14,DAT_01650998,unaff_s8,DAT_01650e60,
                         0x3f800000,&stack0x000008c0,0);
            if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
              *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
              *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
              *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
              *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
              uVar20 = DAT_016510d0;
              uVar14 = DAT_01650e64;
              uVar12 = DAT_01650d50;
              uVar11 = DAT_01650c34;
              FUN_071ce4a0(DAT_016513ec,&stack0x00000880,0);
              if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                uVar33 = DAT_01651448;
                uVar24 = DAT_01651220;
                uVar22 = DAT_0165116c;
                uVar18 = DAT_01650f60;
                FUN_071ce4a0(DAT_01650f5c,&stack0x00000840,0);
                if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                  uVar28 = DAT_01651308;
                  uVar23 = DAT_016511bc;
                  uVar7 = DAT_01650a08;
                  uVar2 = DAT_01650948;
                  FUN_071ce4a0(DAT_01651304,&stack0x00000800,0);
                  if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                    *(undefined8 *)(unaff_x20 + 0x318) = 0;
                    *(undefined8 *)(unaff_x20 + 0x310) = 0;
                    *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x304) = 0;
                    uVar29 = DAT_0165130c;
                    uVar25 = DAT_01651290;
                    uVar17 = DAT_01650f14;
                    uVar9 = DAT_01650ac0;
                    FUN_071ce4a0(DAT_01650a0c,&stack0x000007c0,0);
                    if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 800) = 0x17;
                      *(undefined8 *)(unaff_x20 + 0x338) = 0;
                      *(undefined8 *)(unaff_x20 + 0x330) = 0;
                      *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x324) = 0;
                      uVar16 = DAT_01650ea0;
                      uVar15 = DAT_01650e68;
                      FUN_071ce4a0(DAT_01650d54,DAT_01650ea0,DAT_01650e68,unaff_s8,uVar5,
                                   DAT_0165099c,0x3f800000,&stack0x00000780,0);
                      if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                        *(undefined8 *)(unaff_x20 + 0x358) = 0;
                        *(undefined8 *)(unaff_x20 + 0x350) = 0;
                        *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x344) = 0;
                        if (unaff_x19 != 0) {
                          *(long *)(unaff_x19 + 0x10) = unaff_x20;
                          thunk_FUN_036b7ad0();
                          **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                          thunk_FUN_036b7ad0(*(undefined8 *)(*unaff_x21 + 0xb8));
                          lVar34 = thunk_FUN_0367fe20(*unaff_x21);
                          FUN_060e6b40();
                          lVar35 = FUN_03642a4c(*unaff_x22,0x1a);
                          FUN_071ce4a0(DAT_01650fc0,unaff_s12,unaff_s13,0,0,0,0x3f800000,
                                       &stack0x00000740,0);
                          if (lVar35 != 0) {
                            if (*(int *)(lVar35 + 0x18) != 0) {
                              *(undefined8 *)(lVar35 + 0x2c) = 0;
                              *(undefined8 *)(lVar35 + 0x24) = 0;
                              *(undefined8 *)(lVar35 + 0x38) = 0;
                              *(undefined8 *)(lVar35 + 0x30) = 0;
                              *(undefined4 *)(lVar35 + 0x20) = 1;
                              FUN_071ce4a0(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                              if ((*(uint *)(lVar35 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined4 *)(lVar35 + 0x40) = 0xffffffff;
                                *(undefined8 *)(lVar35 + 0x4c) = 0;
                                *(undefined8 *)(lVar35 + 0x44) = 0;
                                uVar4 = DAT_01651070;
                                *(undefined8 *)(lVar35 + 0x58) = 0;
                                *(undefined8 *)(lVar35 + 0x50) = 0;
                                FUN_071ce4a0(uVar4,unaff_s10,unaff_s11,DAT_01650ea4,DAT_01650d58,
                                             DAT_01650bc8,DAT_0165094c,&stack0x000006c0,0);
                                if (2 < *(uint *)(lVar35 + 0x18)) {
                                  *(undefined4 *)(lVar35 + 0x60) = 1;
                                  *(undefined8 *)(lVar35 + 0x6c) = 0;
                                  *(undefined8 *)(lVar35 + 100) = 0;
                                  uVar4 = DAT_01651310;
                                  *(undefined8 *)(lVar35 + 0x78) = 0;
                                  *(undefined8 *)(lVar35 + 0x70) = 0;
                                  FUN_071ce4a0(uVar4,DAT_01651010,DAT_016508e8,DAT_01651314,
                                               DAT_0165144c,DAT_01650dac,DAT_01650cb0,
                                               &stack0x00000680,0);
                                  if ((*(uint *)(lVar35 + 0x18) & 0xfffffffc) != 0) {
                                    *(undefined4 *)(lVar35 + 0x80) = 2;
                                    *(undefined8 *)(lVar35 + 0x8c) = 0;
                                    *(undefined8 *)(lVar35 + 0x84) = 0;
                                    uVar4 = DAT_01651014;
                                    *(undefined8 *)(lVar35 + 0x98) = 0;
                                    *(undefined8 *)(lVar35 + 0x90) = 0;
                                    FUN_071ce4a0(uVar4,DAT_01650b18,DAT_01651118,DAT_01650a10,
                                                 DAT_016510d4,DAT_01650f64,DAT_01651074,
                                                 &stack0x00000640,0);
                                    if (4 < *(uint *)(lVar35 + 0x18)) {
                                      *(undefined4 *)(lVar35 + 0xa0) = 3;
                                      *(undefined8 *)(lVar35 + 0xac) = 0;
                                      *(undefined8 *)(lVar35 + 0xa4) = 0;
                                      *(undefined8 *)(lVar35 + 0xb8) = 0;
                                      *(undefined8 *)(lVar35 + 0xb0) = 0;
                                      FUN_071ce4a0(DAT_01650bcc,DAT_01650d5c,DAT_01650cb4,
                                                   DAT_01650950,0,0,0x3f800000,&stack0x00000600,0);
                                      if (5 < *(uint *)(lVar35 + 0x18)) {
                                        *(undefined8 *)(lVar35 + 0xcc) = 0;
                                        *(undefined8 *)(lVar35 + 0xc4) = 0;
                                        *(undefined8 *)(lVar35 + 0xd8) = 0;
                                        *(undefined8 *)(lVar35 + 0xd0) = 0;
                                        *(undefined4 *)(lVar35 + 0xc0) = 4;
                                        FUN_071ce4a0(DAT_0165111c,unaff_s14,unaff_s15,0,0,0,
                                                     0x3f800000,&stack0x000005c0,0);
                                        if (6 < *(uint *)(lVar35 + 0x18)) {
                                          *(undefined4 *)(lVar35 + 0xe0) = 1;
                                          *(undefined8 *)(lVar35 + 0xec) = 0;
                                          *(undefined8 *)(lVar35 + 0xe4) = 0;
                                          uVar4 = DAT_01650d60;
                                          *(undefined8 *)(lVar35 + 0xf8) = 0;
                                          *(undefined8 *)(lVar35 + 0xf0) = 0;
                                          FUN_071ce4a0(uVar4,uStack00000000000000c0,
                                                       in_stack_00000e2c,in_stack_00000e28,
                                                       DAT_01650b1c,DAT_01650f68,
                                                       uStack00000000000000dc,&stack0x00000580,0);
                                          if ((*(uint *)(lVar35 + 0x18) & 0xfffffff8) != 0) {
                                            *(undefined4 *)(lVar35 + 0x100) = 6;
                                            *(undefined8 *)(lVar35 + 0x118) = 0;
                                            *(undefined8 *)(lVar35 + 0x110) = 0;
                                            *(undefined8 *)(lVar35 + 0x10c) = 0;
                                            *(undefined8 *)(lVar35 + 0x104) = 0;
                                            FUN_071ce4a0(DAT_01651318,DAT_01650a14,DAT_01650cb8,
                                                         uStack00000000000000d8,DAT_01650e00,
                                                         DAT_01651450,uStack00000000000000d4,
                                                         &stack0x00000540,0);
                                            if (8 < *(uint *)(lVar35 + 0x18)) {
                                              *(undefined4 *)(lVar35 + 0x120) = 7;
                                              *(undefined8 *)(lVar35 + 0x138) = 0;
                                              *(undefined8 *)(lVar35 + 0x130) = 0;
                                              uVar4 = DAT_016513f0;
                                              *(undefined8 *)(lVar35 + 300) = 0;
                                              *(undefined8 *)(lVar35 + 0x124) = 0;
                                              FUN_071ce4a0(DAT_01650f18,uStack00000000000000d0,
                                                           uStack00000000000000cc,
                                                           uStack00000000000000c8,uVar4,DAT_01650e04
                                                           ,uStack00000000000000c4,&stack0x00000500,
                                                           0);
                                              if (9 < *(uint *)(lVar35 + 0x18)) {
                                                *(undefined4 *)(lVar35 + 0x140) = 8;
                                                *(undefined8 *)(lVar35 + 0x158) = 0;
                                                *(undefined8 *)(lVar35 + 0x150) = 0;
                                                *(undefined8 *)(lVar35 + 0x14c) = 0;
                                                *(undefined8 *)(lVar35 + 0x144) = 0;
                                                FUN_071ce4a0(DAT_01650db0,DAT_01651454,DAT_01650a18,
                                                             0,DAT_01650ea8,0,0x3f800000,
                                                             &stack0x000004c0,0);
                                                if (10 < *(uint *)(lVar35 + 0x18)) {
                                                  *(undefined4 *)(lVar35 + 0x160) = 9;
                                                  *(undefined8 *)(lVar35 + 0x178) = 0;
                                                  *(undefined8 *)(lVar35 + 0x170) = 0;
                                                  *(undefined8 *)(lVar35 + 0x16c) = 0;
                                                  *(undefined8 *)(lVar35 + 0x164) = 0;
                                                  FUN_071ce4a0(DAT_01650cbc,uStack00000000000000bc,
                                                               uStack00000000000000b8,0,0,0,
                                                               0x3f800000,&stack0x00000480,0);
                                                  if (0xb < *(uint *)(lVar35 + 0x18)) {
                                                    *(undefined4 *)(lVar35 + 0x180) = 1;
                                                    *(undefined8 *)(lVar35 + 0x198) = 0;
                                                    *(undefined8 *)(lVar35 + 400) = 0;
                                                    uVar4 = DAT_01651170;
                                                    *(undefined8 *)(lVar35 + 0x18c) = 0;
                                                    *(undefined8 *)(lVar35 + 0x184) = 0;
                                                    FUN_071ce4a0(DAT_016508ec,uStack00000000000000b4
                                                                 ,uStack00000000000000b0,
                                                                 uStack00000000000000ac,uVar4,
                                                                 DAT_01651380,uStack00000000000000a8
                                                                 ,&stack0x00000440,0);
                                                    if (0xc < *(uint *)(lVar35 + 0x18)) {
                                                      *(undefined4 *)(lVar35 + 0x1a0) = 0xb;
                                                      *(undefined8 *)(lVar35 + 0x1b8) = 0;
                                                      *(undefined8 *)(lVar35 + 0x1b0) = 0;
                                                      uVar4 = DAT_016509a0;
                                                      *(undefined8 *)(lVar35 + 0x1ac) = 0;
                                                      *(undefined8 *)(lVar35 + 0x1a4) = 0;
                                                      FUN_071ce4a0(DAT_01650cc0,
                                                                   uStack00000000000000a4,
                                                                   uStack00000000000000a0,
                                                                   uStack000000000000009c,uVar4,
                                                                   DAT_01651384,
                                                                   uStack0000000000000098,
                                                                   &stack0x00000400,0);
                                                      if (0xd < *(uint *)(lVar35 + 0x18)) {
                                                        *(undefined4 *)(lVar35 + 0x1c0) = 0xc;
                                                        *(undefined8 *)(lVar35 + 0x1d8) = 0;
                                                        *(undefined8 *)(lVar35 + 0x1d0) = 0;
                                                        uVar4 = DAT_01651294;
                                                        *(undefined8 *)(lVar35 + 0x1cc) = 0;
                                                        *(undefined8 *)(lVar35 + 0x1c4) = 0;
                                                        FUN_071ce4a0(DAT_01650b20,
                                                                     uStack0000000000000094,
                                                                     uStack0000000000000090,
                                                                     uStack000000000000008c,uVar4,
                                                                     DAT_01650a1c,
                                                                     uStack0000000000000088,
                                                                     &stack0x000003c0,0);
                                                        if (0xe < *(uint *)(lVar35 + 0x18)) {
                                                          *(undefined4 *)(lVar35 + 0x1e0) = 0xd;
                                                          *(undefined8 *)(lVar35 + 0x1f8) = 0;
                                                          *(undefined8 *)(lVar35 + 0x1f0) = 0;
                                                          *(undefined8 *)(lVar35 + 0x1ec) = 0;
                                                          *(undefined8 *)(lVar35 + 0x1e4) = 0;
                                                          FUN_071ce4a0(DAT_01651174,
                                                                       uStack0000000000000084,
                                                                       uStack0000000000000080,uVar5,
                                                                       0xa2800000,0xa3000000a3000000
                                                                       ,0x3f800000,&stack0x00000380,
                                                                       0);
                                                          if ((*(uint *)(lVar35 + 0x18) & 0xfffffff0
                                                              ) != 0) {
                                                            *(undefined4 *)(lVar35 + 0x200) = 0xe;
                                                            *(undefined8 *)(lVar35 + 0x218) = 0;
                                                            *(undefined8 *)(lVar35 + 0x210) = 0;
                                                            *(undefined8 *)(lVar35 + 0x20c) = 0;
                                                            *(undefined8 *)(lVar35 + 0x204) = 0;
                                                            FUN_071ce4a0(DAT_016511c0,uVar19,uVar6,0
                                                                         ,0,0,0x3f800000,
                                                                         &stack0x00000340,0);
                                                            if (0x10 < *(uint *)(lVar35 + 0x18)) {
                                                              *(undefined4 *)(lVar35 + 0x220) = 1;
                                                              *(undefined8 *)(lVar35 + 0x238) = 0;
                                                              *(undefined8 *)(lVar35 + 0x230) = 0;
                                                              uVar6 = DAT_016510d8;
                                                              *(undefined8 *)(lVar35 + 0x22c) = 0;
                                                              *(undefined8 *)(lVar35 + 0x224) = 0;
                                                              FUN_071ce4a0(DAT_01651018,uVar10,uVar8
                                                                           ,uVar13,uVar6,
                                                                           DAT_01650d14,uVar3,
                                                                           &stack0x00000300,0);
                                                              if (0x11 < *(uint *)(lVar35 + 0x18)) {
                                                                *(undefined4 *)(lVar35 + 0x240) =
                                                                     0x10;
                                                                *(undefined8 *)(lVar35 + 600) = 0;
                                                                *(undefined8 *)(lVar35 + 0x250) = 0;
                                                                uVar6 = DAT_01650b78;
                                                                *(undefined8 *)(lVar35 + 0x24c) = 0;
                                                                *(undefined8 *)(lVar35 + 0x244) = 0;
                                                                FUN_071ce4a0(DAT_01651078,uVar30,
                                                                             uVar32,uVar31,uVar6,
                                                                             DAT_01651298,uVar26,
                                                                             &stack0x000002c0,0);
                                                                if (0x12 < *(uint *)(lVar35 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar35 + 0x260) =
                                                                       0x11;
                                                                  *(undefined8 *)(lVar35 + 0x278) =
                                                                       0;
                                                                  *(undefined8 *)(lVar35 + 0x270) =
                                                                       0;
                                                                  uVar6 = DAT_0165107c;
                                                                  *(undefined8 *)(lVar35 + 0x26c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar35 + 0x264) =
                                                                       0;
                                                                  FUN_071ce4a0(DAT_01650d64,uVar27,
                                                                               uVar21,uVar6,
                                                                               DAT_016510dc,
                                                                               DAT_0165122c,
                                                                               DAT_0165129c,
                                                                               &stack0x00000280,0);
                                                                  if (0x13 < *(uint *)(lVar35 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar35 + 0x280)
                                                                         = 0x12;
                                                                    *(undefined8 *)(lVar35 + 0x298)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar35 + 0x290)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar35 + 0x28c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar35 + 0x284)
                                                                         = 0;
                                                                    uVar6 = DAT_01651320;
                                                                    FUN_071ce4a0(DAT_01650eac,
                                                                                 DAT_0165131c,
                                                                                 DAT_01651458,uVar5,
                                                                                 DAT_01651320,
                                                                                 0x8800000088000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000240,0)
                                                                    ;
                                                                    if (0x14 < *(uint *)(lVar35 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar35 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar35 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar35 + 0x2b0) = 0;
                                                    uVar5 = DAT_01651120;
                                                    *(undefined8 *)(lVar35 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar35 + 0x2a4) = 0;
                                                    FUN_071ce4a0(DAT_01650b24,uVar11,uVar12,uVar14,
                                                                 uVar5,DAT_01650954,uVar20,
                                                                 &stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar35 + 0x18)) {
                                                      *(undefined4 *)(lVar35 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar35 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar35 + 0x2d0) = 0;
                                                      uVar5 = DAT_0165101c;
                                                      *(undefined8 *)(lVar35 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar35 + 0x2c4) = 0;
                                                      in_stack_000001c0 = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      in_stack_000001d8 = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      FUN_071ce4a0(DAT_01650e6c,uVar18,uVar24,uVar22
                                                                   ,uVar5,DAT_01650eb0,uVar33,
                                                                   &stack0x000001c0,0);
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
                                                      if (0x16 < *(uint *)(lVar35 + 0x18)) {
                                                        *(undefined4 *)(lVar35 + 0x2e0) = 0x15;
                                                        *(undefined8 *)(lVar35 + 0x2f8) =
                                                             uStack00000000000001b4;
                                                        *(ulong *)(lVar35 + 0x2f0) =
                                                             CONCAT44(uStack00000000000001d0,
                                                                      uStack00000000000001cc);
                                                        uVar5 = DAT_01651124;
                                                        *(ulong *)(lVar35 + 0x2ec) =
                                                             CONCAT44(uStack00000000000001cc,
                                                                      uStack00000000000001c8);
                                                        *(undefined8 *)(lVar35 + 0x2e4) =
                                                             in_stack_000001c0;
                                                        in_stack_00000180 = 0;
                                                        uStack0000000000000188 = 0;
                                                        uStack000000000000018c = 0;
                                                        in_stack_00000198 = 0;
                                                        uStack0000000000000190 = 0;
                                                        uStack0000000000000194 = 0;
                                                        FUN_071ce4a0(DAT_0165145c,uVar7,uVar2,uVar23
                                                                     ,uVar5,DAT_01651324,uVar28,
                                                                     &stack0x00000180,0);
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
                                                        if (0x17 < *(uint *)(lVar35 + 0x18)) {
                                                          *(undefined4 *)(lVar35 + 0x300) = 0x16;
                                                          *(undefined8 *)(lVar35 + 0x318) =
                                                               uStack0000000000000174;
                                                          *(ulong *)(lVar35 + 0x310) =
                                                               CONCAT44(uStack0000000000000190,
                                                                        uStack000000000000018c);
                                                          uVar5 = DAT_016509a4;
                                                          *(ulong *)(lVar35 + 0x30c) =
                                                               CONCAT44(uStack000000000000018c,
                                                                        uStack0000000000000188);
                                                          *(undefined8 *)(lVar35 + 0x304) =
                                                               in_stack_00000180;
                                                          in_stack_00000140 = 0;
                                                          uStack0000000000000148 = 0;
                                                          uStack000000000000014c = 0;
                                                          in_stack_00000158 = 0;
                                                          uStack0000000000000150 = 0;
                                                          uStack0000000000000154 = 0;
                                                          FUN_071ce4a0(DAT_01650f6c,uVar17,uVar9,
                                                                       uVar25,uVar5,DAT_01650a20,
                                                                       uVar29,&stack0x00000140,0);
                                                          uStack0000000000000134 =
                                                               CONCAT44(in_stack_00000158,
                                                                        uStack0000000000000154);
                                                          uStack0000000000000128 =
                                                               uStack0000000000000148;
                                                          in_stack_00000120 = in_stack_00000140;
                                                          uStack000000000000012c =
                                                               uStack000000000000014c;
                                                          uStack0000000000000130 =
                                                               uStack0000000000000150;
                                                          if (0x18 < *(uint *)(lVar35 + 0x18)) {
                                                            *(undefined4 *)(lVar35 + 800) = 0x17;
                                                            *(undefined8 *)(lVar35 + 0x338) =
                                                                 uStack0000000000000134;
                                                            *(ulong *)(lVar35 + 0x330) =
                                                                 CONCAT44(uStack0000000000000150,
                                                                          uStack000000000000014c);
                                                            *(ulong *)(lVar35 + 0x32c) =
                                                                 CONCAT44(uStack000000000000014c,
                                                                          uStack0000000000000148);
                                                            *(undefined8 *)(lVar35 + 0x324) =
                                                                 in_stack_00000140;
                                                            in_stack_00000100 = 0;
                                                            uStack0000000000000108 = 0;
                                                            uStack000000000000010c = 0;
                                                            in_stack_00000118 = 0;
                                                            uStack0000000000000110 = 0;
                                                            uStack0000000000000114 = 0;
                                                            FUN_071ce4a0(DAT_01650e08,uVar16,uVar15,
                                                                         unaff_s8,unaff_s8,uVar6,
                                                                         0x3f800000,&stack0x00000100
                                                                         ,0);
                                                            if (0x19 < *(uint *)(lVar35 + 0x18)) {
                                                              *(undefined4 *)(lVar35 + 0x340) = 0x18
                                                              ;
                                                              *(ulong *)(lVar35 + 0x358) =
                                                                   CONCAT44(in_stack_00000118,
                                                                            uStack0000000000000114);
                                                              *(ulong *)(lVar35 + 0x350) =
                                                                   CONCAT44(uStack0000000000000110,
                                                                            uStack000000000000010c);
                                                              *(ulong *)(lVar35 + 0x34c) =
                                                                   CONCAT44(uStack000000000000010c,
                                                                            uStack0000000000000108);
                                                              *(undefined8 *)(lVar35 + 0x344) =
                                                                   in_stack_00000100;
                                                              if (lVar34 != 0) {
                                                                *(long *)(lVar34 + 0x10) = lVar35;
                                                                thunk_FUN_036b7ad0((long *)(lVar34 +
                                                                                           0x10),
                                                                                   lVar35);
                                                                plVar36 = (long *)(*(long *)(*
                                                  unaff_x21 + 0xb8) + 8);
                                                  *plVar36 = lVar34;
                                                  thunk_FUN_036b7ad0(plVar36,lVar34);
                                                  return;
                                                  }
                                                  goto LAB_060e874c;
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
                            goto LAB_060e8748;
                          }
                        }
LAB_060e874c:
                    /* WARNING: Subroutine does not return */
                        FUN_03642c18();
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
LAB_060e8748:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


