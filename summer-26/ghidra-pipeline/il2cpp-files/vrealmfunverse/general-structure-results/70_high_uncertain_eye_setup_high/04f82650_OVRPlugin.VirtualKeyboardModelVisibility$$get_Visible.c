/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelVisibility$$get_Visible
ENTRY_POINT: 04f82650
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelVisibility__get_Visible
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

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
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 in_d5;
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
  
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  uVar5 = DAT_010326bc;
  uStack0000000000000084 = *(undefined4 *)(in_x9 + 0x7a0);
  uStack0000000000000080 = DAT_010327a4;
  FUN_05c99d80(DAT_01032018,uStack0000000000000084,DAT_010327a4,DAT_010326bc,0x22800000,in_d5,
               0x3f800000,&stack0x00000a00,0);
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
    uVar19 = DAT_0103259c;
    uVar6 = DAT_01031da0;
    FUN_05c99d80(DAT_010320a4,DAT_0103259c,DAT_01031da0,0,0,0,0x3f800000,&stack0x000009c0,0);
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
      uVar13 = DAT_010322bc;
      uVar10 = DAT_0103201c;
      uVar8 = DAT_01031e10;
      uVar3 = DAT_01031d24;
      FUN_05c99d80(DAT_01031f94,&stack0x00000980,0);
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
        uVar32 = DAT_01032960;
        uVar31 = DAT_0103289c;
        uVar30 = DAT_01032898;
        uVar26 = DAT_01032818;
        FUN_05c99d80(DAT_010325ec,&stack0x00000940,0);
        if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
          *(undefined8 *)(unaff_x20 + 0x278) = 0;
          *(undefined8 *)(unaff_x20 + 0x270) = 0;
          *(undefined8 *)(unaff_x20 + 0x26c) = 0;
          *(undefined8 *)(unaff_x20 + 0x264) = 0;
          uVar27 = DAT_0103281c;
          uVar21 = DAT_01032658;
          FUN_05c99d80(DAT_01031ee4,DAT_0103281c,DAT_01032658,DAT_01032964,DAT_010327a8,DAT_01031f98
                       ,DAT_010324c0,&stack0x00000900,0);
          if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
            *(undefined8 *)(unaff_x20 + 0x298) = 0;
            *(undefined8 *)(unaff_x20 + 0x290) = 0;
            *(undefined8 *)(unaff_x20 + 0x28c) = 0;
            *(undefined8 *)(unaff_x20 + 0x284) = 0;
            FUN_05c99d80(DAT_01031d28,DAT_0103253c,DAT_01031ee8,DAT_01031d2c,unaff_s8,DAT_010322c0,
                         0x3f800000,&stack0x000008c0,0);
            if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
              *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
              *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
              *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
              *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
              uVar20 = DAT_010325a0;
              uVar14 = DAT_010322c4;
              uVar12 = DAT_01032188;
              uVar11 = DAT_01032020;
              FUN_05c99d80(DAT_010328fc,&stack0x00000880,0);
              if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                uVar33 = DAT_01032968;
                uVar24 = DAT_01032734;
                uVar22 = DAT_0103265c;
                uVar18 = DAT_010323f0;
                FUN_05c99d80(DAT_010323ec,&stack0x00000840,0);
                if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                  uVar28 = DAT_01032824;
                  uVar23 = DAT_010326c4;
                  uVar7 = DAT_01031da4;
                  uVar2 = DAT_01031cb8;
                  FUN_05c99d80(DAT_01032820,&stack0x00000800,0);
                  if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                    *(undefined8 *)(unaff_x20 + 0x318) = 0;
                    *(undefined8 *)(unaff_x20 + 0x310) = 0;
                    *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x304) = 0;
                    uVar29 = DAT_01032828;
                    uVar25 = DAT_010327ac;
                    uVar17 = DAT_010323a4;
                    uVar9 = DAT_01031e8c;
                    FUN_05c99d80(DAT_01031da8,&stack0x000007c0,0);
                    if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 800) = 0x17;
                      *(undefined8 *)(unaff_x20 + 0x338) = 0;
                      *(undefined8 *)(unaff_x20 + 0x330) = 0;
                      *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x324) = 0;
                      uVar16 = DAT_01032320;
                      uVar15 = DAT_010322c8;
                      FUN_05c99d80(DAT_0103218c,DAT_01032320,DAT_010322c8,unaff_s8,uVar5,
                                   DAT_01031d30,0x3f800000,&stack0x00000780,0);
                      if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                        *(undefined8 *)(unaff_x20 + 0x358) = 0;
                        *(undefined8 *)(unaff_x20 + 0x350) = 0;
                        *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x344) = 0;
                        if (unaff_x19 != 0) {
                          *(long *)(unaff_x19 + 0x10) = unaff_x20;
                          thunk_FUN_02bb0e9c();
                          **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                          thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x21 + 0xb8));
                          lVar34 = thunk_FUN_02b79644(*unaff_x21);
                          FUN_04f81d44();
                          lVar35 = FUN_02b3c908(*unaff_x22,0x1a);
                          FUN_05c99d80(DAT_01032460,unaff_s12,unaff_s13,0,0,0,0x3f800000,
                                       &stack0x00000740,0);
                          if (lVar35 != 0) {
                            if (*(int *)(lVar35 + 0x18) != 0) {
                              *(undefined8 *)(lVar35 + 0x2c) = 0;
                              *(undefined8 *)(lVar35 + 0x24) = 0;
                              *(undefined8 *)(lVar35 + 0x38) = 0;
                              *(undefined8 *)(lVar35 + 0x30) = 0;
                              *(undefined4 *)(lVar35 + 0x20) = 1;
                              FUN_05c99d80(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                              if ((*(uint *)(lVar35 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined4 *)(lVar35 + 0x40) = 0xffffffff;
                                *(undefined8 *)(lVar35 + 0x4c) = 0;
                                *(undefined8 *)(lVar35 + 0x44) = 0;
                                uVar4 = DAT_01032540;
                                *(undefined8 *)(lVar35 + 0x58) = 0;
                                *(undefined8 *)(lVar35 + 0x50) = 0;
                                FUN_05c99d80(uVar4,unaff_s10,unaff_s11,DAT_01032324,DAT_01032190,
                                             DAT_01031fa0,DAT_01031cbc,&stack0x000006c0,0);
                                if (2 < *(uint *)(lVar35 + 0x18)) {
                                  *(undefined4 *)(lVar35 + 0x60) = 1;
                                  *(undefined8 *)(lVar35 + 0x6c) = 0;
                                  *(undefined8 *)(lVar35 + 100) = 0;
                                  uVar4 = DAT_0103282c;
                                  *(undefined8 *)(lVar35 + 0x78) = 0;
                                  *(undefined8 *)(lVar35 + 0x70) = 0;
                                  FUN_05c99d80(uVar4,DAT_010324c4,DAT_01031c5c,DAT_01032830,
                                               DAT_0103296c,DAT_010321f8,DAT_010320ac,
                                               &stack0x00000680,0);
                                  if ((*(uint *)(lVar35 + 0x18) & 0xfffffffc) != 0) {
                                    *(undefined4 *)(lVar35 + 0x80) = 2;
                                    *(undefined8 *)(lVar35 + 0x8c) = 0;
                                    *(undefined8 *)(lVar35 + 0x84) = 0;
                                    uVar4 = DAT_010324c8;
                                    *(undefined8 *)(lVar35 + 0x98) = 0;
                                    *(undefined8 *)(lVar35 + 0x90) = 0;
                                    FUN_05c99d80(uVar4,DAT_01031eec,DAT_010325f0,DAT_01031dac,
                                                 DAT_010325a4,DAT_010323f4,DAT_01032544,
                                                 &stack0x00000640,0);
                                    if (4 < *(uint *)(lVar35 + 0x18)) {
                                      *(undefined4 *)(lVar35 + 0xa0) = 3;
                                      *(undefined8 *)(lVar35 + 0xac) = 0;
                                      *(undefined8 *)(lVar35 + 0xa4) = 0;
                                      *(undefined8 *)(lVar35 + 0xb8) = 0;
                                      *(undefined8 *)(lVar35 + 0xb0) = 0;
                                      FUN_05c99d80(DAT_01031fa4,DAT_01032194,DAT_010320b0,
                                                   DAT_01031cc0,0,0,0x3f800000,&stack0x00000600,0);
                                      if (5 < *(uint *)(lVar35 + 0x18)) {
                                        *(undefined8 *)(lVar35 + 0xcc) = 0;
                                        *(undefined8 *)(lVar35 + 0xc4) = 0;
                                        *(undefined8 *)(lVar35 + 0xd8) = 0;
                                        *(undefined8 *)(lVar35 + 0xd0) = 0;
                                        *(undefined4 *)(lVar35 + 0xc0) = 4;
                                        FUN_05c99d80(DAT_010325f4,unaff_s14,unaff_s15,0,0,0,
                                                     0x3f800000,&stack0x000005c0,0);
                                        if (6 < *(uint *)(lVar35 + 0x18)) {
                                          *(undefined4 *)(lVar35 + 0xe0) = 1;
                                          *(undefined8 *)(lVar35 + 0xec) = 0;
                                          *(undefined8 *)(lVar35 + 0xe4) = 0;
                                          uVar4 = DAT_01032198;
                                          *(undefined8 *)(lVar35 + 0xf8) = 0;
                                          *(undefined8 *)(lVar35 + 0xf0) = 0;
                                          FUN_05c99d80(uVar4,uStack00000000000000c0,
                                                       in_stack_00000e2c,in_stack_00000e28,
                                                       DAT_01031ef0,DAT_010323f8,
                                                       uStack00000000000000dc,&stack0x00000580,0);
                                          if ((*(uint *)(lVar35 + 0x18) & 0xfffffff8) != 0) {
                                            *(undefined4 *)(lVar35 + 0x100) = 6;
                                            *(undefined8 *)(lVar35 + 0x118) = 0;
                                            *(undefined8 *)(lVar35 + 0x110) = 0;
                                            *(undefined8 *)(lVar35 + 0x10c) = 0;
                                            *(undefined8 *)(lVar35 + 0x104) = 0;
                                            FUN_05c99d80(DAT_01032834,DAT_01031db0,DAT_010320b4,
                                                         uStack00000000000000d8,DAT_01032250,
                                                         DAT_01032970,uStack00000000000000d4,
                                                         &stack0x00000540,0);
                                            if (8 < *(uint *)(lVar35 + 0x18)) {
                                              *(undefined4 *)(lVar35 + 0x120) = 7;
                                              *(undefined8 *)(lVar35 + 0x138) = 0;
                                              *(undefined8 *)(lVar35 + 0x130) = 0;
                                              uVar4 = DAT_01032900;
                                              *(undefined8 *)(lVar35 + 300) = 0;
                                              *(undefined8 *)(lVar35 + 0x124) = 0;
                                              FUN_05c99d80(DAT_010323a8,uStack00000000000000d0,
                                                           uStack00000000000000cc,
                                                           uStack00000000000000c8,uVar4,DAT_01032254
                                                           ,uStack00000000000000c4,&stack0x00000500,
                                                           0);
                                              if (9 < *(uint *)(lVar35 + 0x18)) {
                                                *(undefined4 *)(lVar35 + 0x140) = 8;
                                                *(undefined8 *)(lVar35 + 0x158) = 0;
                                                *(undefined8 *)(lVar35 + 0x150) = 0;
                                                *(undefined8 *)(lVar35 + 0x14c) = 0;
                                                *(undefined8 *)(lVar35 + 0x144) = 0;
                                                FUN_05c99d80(DAT_010321fc,DAT_01032974,DAT_01031db4,
                                                             0,DAT_01032328,0,0x3f800000,
                                                             &stack0x000004c0,0);
                                                if (10 < *(uint *)(lVar35 + 0x18)) {
                                                  *(undefined4 *)(lVar35 + 0x160) = 9;
                                                  *(undefined8 *)(lVar35 + 0x178) = 0;
                                                  *(undefined8 *)(lVar35 + 0x170) = 0;
                                                  *(undefined8 *)(lVar35 + 0x16c) = 0;
                                                  *(undefined8 *)(lVar35 + 0x164) = 0;
                                                  FUN_05c99d80(DAT_010320b8,uStack00000000000000bc,
                                                               uStack00000000000000b8,0,0,0,
                                                               0x3f800000,&stack0x00000480,0);
                                                  if (0xb < *(uint *)(lVar35 + 0x18)) {
                                                    *(undefined4 *)(lVar35 + 0x180) = 1;
                                                    *(undefined8 *)(lVar35 + 0x198) = 0;
                                                    *(undefined8 *)(lVar35 + 400) = 0;
                                                    uVar4 = DAT_01032660;
                                                    *(undefined8 *)(lVar35 + 0x18c) = 0;
                                                    *(undefined8 *)(lVar35 + 0x184) = 0;
                                                    FUN_05c99d80(DAT_01031c60,uStack00000000000000b4
                                                                 ,uStack00000000000000b0,
                                                                 uStack00000000000000ac,uVar4,
                                                                 DAT_010328a0,uStack00000000000000a8
                                                                 ,&stack0x00000440,0);
                                                    if (0xc < *(uint *)(lVar35 + 0x18)) {
                                                      *(undefined4 *)(lVar35 + 0x1a0) = 0xb;
                                                      *(undefined8 *)(lVar35 + 0x1b8) = 0;
                                                      *(undefined8 *)(lVar35 + 0x1b0) = 0;
                                                      uVar4 = DAT_01031d34;
                                                      *(undefined8 *)(lVar35 + 0x1ac) = 0;
                                                      *(undefined8 *)(lVar35 + 0x1a4) = 0;
                                                      FUN_05c99d80(DAT_010320bc,
                                                                   uStack00000000000000a4,
                                                                   uStack00000000000000a0,
                                                                   uStack000000000000009c,uVar4,
                                                                   DAT_010328a4,
                                                                   uStack0000000000000098,
                                                                   &stack0x00000400,0);
                                                      if (0xd < *(uint *)(lVar35 + 0x18)) {
                                                        *(undefined4 *)(lVar35 + 0x1c0) = 0xc;
                                                        *(undefined8 *)(lVar35 + 0x1d8) = 0;
                                                        *(undefined8 *)(lVar35 + 0x1d0) = 0;
                                                        uVar4 = DAT_010327b0;
                                                        *(undefined8 *)(lVar35 + 0x1cc) = 0;
                                                        *(undefined8 *)(lVar35 + 0x1c4) = 0;
                                                        FUN_05c99d80(DAT_01031ef4,
                                                                     uStack0000000000000094,
                                                                     uStack0000000000000090,
                                                                     uStack000000000000008c,uVar4,
                                                                     DAT_01031db8,
                                                                     uStack0000000000000088,
                                                                     &stack0x000003c0,0);
                                                        if (0xe < *(uint *)(lVar35 + 0x18)) {
                                                          *(undefined4 *)(lVar35 + 0x1e0) = 0xd;
                                                          *(undefined8 *)(lVar35 + 0x1f8) = 0;
                                                          *(undefined8 *)(lVar35 + 0x1f0) = 0;
                                                          *(undefined8 *)(lVar35 + 0x1ec) = 0;
                                                          *(undefined8 *)(lVar35 + 0x1e4) = 0;
                                                          FUN_05c99d80(DAT_01032664,
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
                                                            FUN_05c99d80(DAT_010326c8,uVar19,uVar6,0
                                                                         ,0,0,0x3f800000,
                                                                         &stack0x00000340,0);
                                                            if (0x10 < *(uint *)(lVar35 + 0x18)) {
                                                              *(undefined4 *)(lVar35 + 0x220) = 1;
                                                              *(undefined8 *)(lVar35 + 0x238) = 0;
                                                              *(undefined8 *)(lVar35 + 0x230) = 0;
                                                              uVar6 = DAT_010325a8;
                                                              *(undefined8 *)(lVar35 + 0x22c) = 0;
                                                              *(undefined8 *)(lVar35 + 0x224) = 0;
                                                              FUN_05c99d80(DAT_010324cc,uVar10,uVar8
                                                                           ,uVar13,uVar6,
                                                                           DAT_01032134,uVar3,
                                                                           &stack0x00000300,0);
                                                              if (0x11 < *(uint *)(lVar35 + 0x18)) {
                                                                *(undefined4 *)(lVar35 + 0x240) =
                                                                     0x10;
                                                                *(undefined8 *)(lVar35 + 600) = 0;
                                                                *(undefined8 *)(lVar35 + 0x250) = 0;
                                                                uVar6 = DAT_01031f54;
                                                                *(undefined8 *)(lVar35 + 0x24c) = 0;
                                                                *(undefined8 *)(lVar35 + 0x244) = 0;
                                                                FUN_05c99d80(DAT_01032548,uVar30,
                                                                             uVar32,uVar31,uVar6,
                                                                             DAT_010327b4,uVar26,
                                                                             &stack0x000002c0,0);
                                                                if (0x12 < *(uint *)(lVar35 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar35 + 0x260) =
                                                                       0x11;
                                                                  *(undefined8 *)(lVar35 + 0x278) =
                                                                       0;
                                                                  *(undefined8 *)(lVar35 + 0x270) =
                                                                       0;
                                                                  uVar6 = DAT_0103254c;
                                                                  *(undefined8 *)(lVar35 + 0x26c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar35 + 0x264) =
                                                                       0;
                                                                  FUN_05c99d80(DAT_0103219c,uVar27,
                                                                               uVar21,uVar6,
                                                                               DAT_010325ac,
                                                                               DAT_01032740,
                                                                               DAT_010327b8,
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
                                                                    uVar6 = DAT_0103283c;
                                                                    FUN_05c99d80(DAT_0103232c,
                                                                                 DAT_01032838,
                                                                                 DAT_01032978,uVar5,
                                                                                 DAT_0103283c,
                                                                                 0x8800000088000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000240,0)
                                                                    ;
                                                                    if (0x14 < *(uint *)(lVar35 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar35 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar35 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar35 + 0x2b0) = 0;
                                                    uVar5 = DAT_010325f8;
                                                    *(undefined8 *)(lVar35 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar35 + 0x2a4) = 0;
                                                    FUN_05c99d80(DAT_01031ef8,uVar11,uVar12,uVar14,
                                                                 uVar5,DAT_01031cc4,uVar20,
                                                                 &stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar35 + 0x18)) {
                                                      *(undefined4 *)(lVar35 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar35 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar35 + 0x2d0) = 0;
                                                      uVar5 = DAT_010324d0;
                                                      *(undefined8 *)(lVar35 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar35 + 0x2c4) = 0;
                                                      in_stack_000001c0 = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      in_stack_000001d8 = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      FUN_05c99d80(DAT_010322cc,uVar18,uVar24,uVar22
                                                                   ,uVar5,DAT_01032330,uVar33,
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
                                                        uVar5 = DAT_010325fc;
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
                                                        FUN_05c99d80(DAT_0103297c,uVar7,uVar2,uVar23
                                                                     ,uVar5,DAT_01032840,uVar28,
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
                                                          uVar5 = DAT_01031d38;
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
                                                          FUN_05c99d80(DAT_010323fc,uVar17,uVar9,
                                                                       uVar25,uVar5,DAT_01031dbc,
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
                                                            FUN_05c99d80(DAT_01032258,uVar16,uVar15,
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
                                                                thunk_FUN_02bb0e9c((long *)(lVar34 +
                                                                                           0x10),
                                                                                   lVar35);
                                                                plVar36 = (long *)(*(long *)(*
                                                  unaff_x21 + 0xb8) + 8);
                                                  *plVar36 = lVar34;
                                                  thunk_FUN_02bb0e9c(plVar36,lVar34);
                                                  return;
                                                  }
                                                  goto LAB_04f83950;
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
                            goto LAB_04f8394c;
                          }
                        }
LAB_04f83950:
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
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
LAB_04f8394c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


