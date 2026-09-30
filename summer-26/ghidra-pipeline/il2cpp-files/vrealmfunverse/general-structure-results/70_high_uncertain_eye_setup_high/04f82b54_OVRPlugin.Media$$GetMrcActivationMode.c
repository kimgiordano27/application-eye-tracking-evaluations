/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcActivationMode
ENTRY_POINT: 04f82b54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcActivationMode
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
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
  undefined4 in_stack_00000e28;
  undefined4 in_stack_00000e2c;
  
  *(long *)(unaff_x20 + 0x318) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x310) = param_2._0_8_;
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  uStack000000000000001c = *(undefined4 *)(in_x9 + 0x3a4);
  uStack0000000000000018 = DAT_01031e8c;
  uStack0000000000000010 = DAT_01032828;
  uStack0000000000000014 = DAT_010327ac;
  FUN_05c99d80(DAT_01031da8,&stack0x000007c0,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x54) = *(undefined8 *)(unaff_x23 + 0x74);
  *(undefined8 *)(unaff_x23 + 0x4c) = *(undefined8 *)(unaff_x23 + 0x6c);
  if (0x18 < uVar1) {
    uVar10 = *(undefined8 *)(unaff_x23 + 0x54);
    uVar9 = *(undefined8 *)(unaff_x23 + 0x4c);
    *(undefined4 *)(unaff_x20 + 800) = 0x17;
    *(undefined8 *)(unaff_x20 + 0x338) = uVar10;
    *(undefined8 *)(unaff_x20 + 0x330) = uVar9;
    *(undefined8 *)(unaff_x20 + 0x32c) = 0;
    *(undefined8 *)(unaff_x20 + 0x324) = 0;
    uVar5 = DAT_01032320;
    uVar4 = DAT_010322c8;
    FUN_05c99d80(DAT_0103218c,DAT_01032320,DAT_010322c8,unaff_s8,unaff_s9,DAT_01031d30,0x3f800000,
                 &stack0x00000780,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
    *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
    if (0x19 < uVar1) {
      uVar10 = *(undefined8 *)(unaff_x23 + 0x14);
      uVar9 = *(undefined8 *)(unaff_x23 + 0xc);
      *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
      *(undefined8 *)(unaff_x20 + 0x358) = uVar10;
      *(undefined8 *)(unaff_x20 + 0x350) = uVar9;
      *(undefined8 *)(unaff_x20 + 0x34c) = 0;
      *(undefined8 *)(unaff_x20 + 0x344) = 0;
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        thunk_FUN_02bb0e9c();
        **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
        thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x21 + 0xb8));
        lVar6 = thunk_FUN_02b79644(*unaff_x21);
        FUN_04f81d44();
        lVar7 = FUN_02b3c908(*unaff_x22,0x1a);
        FUN_05c99d80(DAT_01032460,unaff_s12,unaff_s13,0,0,0,0x3f800000,&stack0x00000740,0);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined8 *)(lVar7 + 0x2c) = 0;
            *(undefined8 *)(lVar7 + 0x24) = 0;
            *(undefined8 *)(lVar7 + 0x38) = 0;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            *(undefined4 *)(lVar7 + 0x20) = 1;
            FUN_05c99d80(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
              *(undefined4 *)(lVar7 + 0x40) = 0xffffffff;
              *(undefined8 *)(lVar7 + 0x4c) = 0;
              *(undefined8 *)(lVar7 + 0x44) = 0;
              uVar2 = DAT_01032540;
              *(undefined8 *)(lVar7 + 0x58) = 0;
              *(undefined8 *)(lVar7 + 0x50) = 0;
              FUN_05c99d80(uVar2,unaff_s10,unaff_s11,DAT_01032324,DAT_01032190,DAT_01031fa0,
                           DAT_01031cbc,&stack0x000006c0,0);
              if (2 < *(uint *)(lVar7 + 0x18)) {
                *(undefined4 *)(lVar7 + 0x60) = 1;
                *(undefined8 *)(lVar7 + 0x6c) = 0;
                *(undefined8 *)(lVar7 + 100) = 0;
                uVar2 = DAT_0103282c;
                *(undefined8 *)(lVar7 + 0x78) = 0;
                *(undefined8 *)(lVar7 + 0x70) = 0;
                FUN_05c99d80(uVar2,DAT_010324c4,DAT_01031c5c,DAT_01032830,DAT_0103296c,DAT_010321f8,
                             DAT_010320ac,&stack0x00000680,0);
                if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined4 *)(lVar7 + 0x80) = 2;
                  *(undefined8 *)(lVar7 + 0x8c) = 0;
                  *(undefined8 *)(lVar7 + 0x84) = 0;
                  uVar2 = DAT_010324c8;
                  *(undefined8 *)(lVar7 + 0x98) = 0;
                  *(undefined8 *)(lVar7 + 0x90) = 0;
                  FUN_05c99d80(uVar2,DAT_01031eec,DAT_010325f0,DAT_01031dac,DAT_010325a4,
                               DAT_010323f4,DAT_01032544,&stack0x00000640,0);
                  if (4 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined4 *)(lVar7 + 0xa0) = 3;
                    *(undefined8 *)(lVar7 + 0xac) = 0;
                    *(undefined8 *)(lVar7 + 0xa4) = 0;
                    *(undefined8 *)(lVar7 + 0xb8) = 0;
                    *(undefined8 *)(lVar7 + 0xb0) = 0;
                    FUN_05c99d80(DAT_01031fa4,DAT_01032194,DAT_010320b0,DAT_01031cc0,0,0,0x3f800000,
                                 &stack0x00000600,0);
                    if (5 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined8 *)(lVar7 + 0xcc) = 0;
                      *(undefined8 *)(lVar7 + 0xc4) = 0;
                      *(undefined8 *)(lVar7 + 0xd8) = 0;
                      *(undefined8 *)(lVar7 + 0xd0) = 0;
                      *(undefined4 *)(lVar7 + 0xc0) = 4;
                      FUN_05c99d80(DAT_010325f4,unaff_s14,unaff_s15,0,0,0,0x3f800000,
                                   &stack0x000005c0,0);
                      if (6 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined4 *)(lVar7 + 0xe0) = 1;
                        *(undefined8 *)(lVar7 + 0xec) = 0;
                        *(undefined8 *)(lVar7 + 0xe4) = 0;
                        uVar2 = DAT_01032198;
                        *(undefined8 *)(lVar7 + 0xf8) = 0;
                        *(undefined8 *)(lVar7 + 0xf0) = 0;
                        FUN_05c99d80(uVar2,uStack00000000000000c0,in_stack_00000e2c,
                                     in_stack_00000e28,DAT_01031ef0,DAT_010323f8,
                                     uStack00000000000000dc,&stack0x00000580,0);
                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) != 0) {
                          *(undefined4 *)(lVar7 + 0x100) = 6;
                          *(undefined8 *)(lVar7 + 0x118) = 0;
                          *(undefined8 *)(lVar7 + 0x110) = 0;
                          *(undefined8 *)(lVar7 + 0x10c) = 0;
                          *(undefined8 *)(lVar7 + 0x104) = 0;
                          FUN_05c99d80(DAT_01032834,DAT_01031db0,DAT_010320b4,uStack00000000000000d8
                                       ,DAT_01032250,DAT_01032970,uStack00000000000000d4,
                                       &stack0x00000540,0);
                          if (8 < *(uint *)(lVar7 + 0x18)) {
                            *(undefined4 *)(lVar7 + 0x120) = 7;
                            *(undefined8 *)(lVar7 + 0x138) = 0;
                            *(undefined8 *)(lVar7 + 0x130) = 0;
                            uVar2 = DAT_01032900;
                            *(undefined8 *)(lVar7 + 300) = 0;
                            *(undefined8 *)(lVar7 + 0x124) = 0;
                            FUN_05c99d80(DAT_010323a8,uStack00000000000000d0,uStack00000000000000cc,
                                         uStack00000000000000c8,uVar2,DAT_01032254,
                                         uStack00000000000000c4,&stack0x00000500,0);
                            if (9 < *(uint *)(lVar7 + 0x18)) {
                              *(undefined4 *)(lVar7 + 0x140) = 8;
                              *(undefined8 *)(lVar7 + 0x158) = 0;
                              *(undefined8 *)(lVar7 + 0x150) = 0;
                              *(undefined8 *)(lVar7 + 0x14c) = 0;
                              *(undefined8 *)(lVar7 + 0x144) = 0;
                              FUN_05c99d80(DAT_010321fc,DAT_01032974,DAT_01031db4,0,DAT_01032328,0,
                                           0x3f800000,&stack0x000004c0,0);
                              if (10 < *(uint *)(lVar7 + 0x18)) {
                                *(undefined4 *)(lVar7 + 0x160) = 9;
                                *(undefined8 *)(lVar7 + 0x178) = 0;
                                *(undefined8 *)(lVar7 + 0x170) = 0;
                                *(undefined8 *)(lVar7 + 0x16c) = 0;
                                *(undefined8 *)(lVar7 + 0x164) = 0;
                                FUN_05c99d80(DAT_010320b8,uStack00000000000000bc,
                                             uStack00000000000000b8,0,0,0,0x3f800000,
                                             &stack0x00000480,0);
                                if (0xb < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined4 *)(lVar7 + 0x180) = 1;
                                  *(undefined8 *)(lVar7 + 0x198) = 0;
                                  *(undefined8 *)(lVar7 + 400) = 0;
                                  uVar2 = DAT_01032660;
                                  *(undefined8 *)(lVar7 + 0x18c) = 0;
                                  *(undefined8 *)(lVar7 + 0x184) = 0;
                                  FUN_05c99d80(DAT_01031c60,uStack00000000000000b4,
                                               uStack00000000000000b0,uStack00000000000000ac,uVar2,
                                               DAT_010328a0,uStack00000000000000a8,&stack0x00000440,
                                               0);
                                  if (0xc < *(uint *)(lVar7 + 0x18)) {
                                    *(undefined4 *)(lVar7 + 0x1a0) = 0xb;
                                    *(undefined8 *)(lVar7 + 0x1b8) = 0;
                                    *(undefined8 *)(lVar7 + 0x1b0) = 0;
                                    uVar2 = DAT_01031d34;
                                    *(undefined8 *)(lVar7 + 0x1ac) = 0;
                                    *(undefined8 *)(lVar7 + 0x1a4) = 0;
                                    FUN_05c99d80(DAT_010320bc,uStack00000000000000a4,
                                                 uStack00000000000000a0,uStack000000000000009c,uVar2
                                                 ,DAT_010328a4,uStack0000000000000098,
                                                 &stack0x00000400,0);
                                    if (0xd < *(uint *)(lVar7 + 0x18)) {
                                      *(undefined4 *)(lVar7 + 0x1c0) = 0xc;
                                      *(undefined8 *)(lVar7 + 0x1d8) = 0;
                                      *(undefined8 *)(lVar7 + 0x1d0) = 0;
                                      uVar2 = DAT_010327b0;
                                      *(undefined8 *)(lVar7 + 0x1cc) = 0;
                                      *(undefined8 *)(lVar7 + 0x1c4) = 0;
                                      FUN_05c99d80(DAT_01031ef4,uStack0000000000000094,
                                                   uStack0000000000000090,uStack000000000000008c,
                                                   uVar2,DAT_01031db8,uStack0000000000000088,
                                                   &stack0x000003c0,0);
                                      if (0xe < *(uint *)(lVar7 + 0x18)) {
                                        *(undefined4 *)(lVar7 + 0x1e0) = 0xd;
                                        *(undefined8 *)(lVar7 + 0x1f8) = 0;
                                        *(undefined8 *)(lVar7 + 0x1f0) = 0;
                                        *(undefined8 *)(lVar7 + 0x1ec) = 0;
                                        *(undefined8 *)(lVar7 + 0x1e4) = 0;
                                        FUN_05c99d80(DAT_01032664,uStack0000000000000084,
                                                     uStack0000000000000080,unaff_s9,0xa2800000,
                                                     0xa3000000a3000000,0x3f800000,&stack0x00000380,
                                                     0);
                                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffff0) != 0) {
                                          *(undefined4 *)(lVar7 + 0x200) = 0xe;
                                          *(undefined8 *)(lVar7 + 0x218) = 0;
                                          *(undefined8 *)(lVar7 + 0x210) = 0;
                                          *(undefined8 *)(lVar7 + 0x20c) = 0;
                                          *(undefined8 *)(lVar7 + 0x204) = 0;
                                          FUN_05c99d80(DAT_010326c8,uStack000000000000007c,
                                                       uStack0000000000000078,0,0,0,0x3f800000,
                                                       &stack0x00000340,0);
                                          if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                            *(undefined4 *)(lVar7 + 0x220) = 1;
                                            *(undefined8 *)(lVar7 + 0x238) = 0;
                                            *(undefined8 *)(lVar7 + 0x230) = 0;
                                            uVar2 = DAT_010325a8;
                                            *(undefined8 *)(lVar7 + 0x22c) = 0;
                                            *(undefined8 *)(lVar7 + 0x224) = 0;
                                            FUN_05c99d80(DAT_010324cc,uStack0000000000000074,
                                                         uStack0000000000000070,
                                                         uStack000000000000006c,uVar2,DAT_01032134,
                                                         uStack0000000000000068,&stack0x00000300,0);
                                            if (0x11 < *(uint *)(lVar7 + 0x18)) {
                                              *(undefined4 *)(lVar7 + 0x240) = 0x10;
                                              *(undefined8 *)(lVar7 + 600) = 0;
                                              *(undefined8 *)(lVar7 + 0x250) = 0;
                                              uVar2 = DAT_01031f54;
                                              *(undefined8 *)(lVar7 + 0x24c) = 0;
                                              *(undefined8 *)(lVar7 + 0x244) = 0;
                                              FUN_05c99d80(DAT_01032548,uStack0000000000000064,
                                                           uStack0000000000000060,
                                                           uStack000000000000005c,uVar2,DAT_010327b4
                                                           ,uStack0000000000000058,&stack0x000002c0,
                                                           0);
                                              if (0x12 < *(uint *)(lVar7 + 0x18)) {
                                                *(undefined4 *)(lVar7 + 0x260) = 0x11;
                                                *(undefined8 *)(lVar7 + 0x278) = 0;
                                                *(undefined8 *)(lVar7 + 0x270) = 0;
                                                uVar2 = DAT_0103254c;
                                                *(undefined8 *)(lVar7 + 0x26c) = 0;
                                                *(undefined8 *)(lVar7 + 0x264) = 0;
                                                FUN_05c99d80(DAT_0103219c,uStack0000000000000054,
                                                             uStack0000000000000050,uVar2,
                                                             DAT_010325ac,DAT_01032740,DAT_010327b8,
                                                             &stack0x00000280,0);
                                                if (0x13 < *(uint *)(lVar7 + 0x18)) {
                                                  *(undefined4 *)(lVar7 + 0x280) = 0x12;
                                                  *(undefined8 *)(lVar7 + 0x298) = 0;
                                                  *(undefined8 *)(lVar7 + 0x290) = 0;
                                                  *(undefined8 *)(lVar7 + 0x28c) = 0;
                                                  *(undefined8 *)(lVar7 + 0x284) = 0;
                                                  uVar2 = DAT_0103283c;
                                                  FUN_05c99d80(DAT_0103232c,DAT_01032838,
                                                               DAT_01032978,unaff_s9,DAT_0103283c,
                                                               0x8800000088000000,0x3f800000,
                                                               &stack0x00000240,0);
                                                  if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined4 *)(lVar7 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar7 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar7 + 0x2b0) = 0;
                                                    uVar3 = DAT_010325f8;
                                                    *(undefined8 *)(lVar7 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar7 + 0x2a4) = 0;
                                                    FUN_05c99d80(DAT_01031ef8,uStack000000000000004c
                                                                 ,uStack0000000000000048,
                                                                 uStack0000000000000044,uVar3,
                                                                 DAT_01031cc4,uStack0000000000000040
                                                                 ,&stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined4 *)(lVar7 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar7 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar7 + 0x2d0) = 0;
                                                      uVar3 = DAT_010324d0;
                                                      *(undefined8 *)(lVar7 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar7 + 0x2c4) = 0;
                                                      in_stack_000001c0 = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      in_stack_000001d8 = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      FUN_05c99d80(DAT_010322cc,
                                                                   uStack000000000000003c,
                                                                   uStack0000000000000038,
                                                                   uStack0000000000000034,uVar3,
                                                                   DAT_01032330,
                                                                   uStack0000000000000030,
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
                                                      if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined4 *)(lVar7 + 0x2e0) = 0x15;
                                                        *(undefined8 *)(lVar7 + 0x2f8) =
                                                             uStack00000000000001b4;
                                                        *(ulong *)(lVar7 + 0x2f0) =
                                                             CONCAT44(uStack00000000000001d0,
                                                                      uStack00000000000001cc);
                                                        uVar3 = DAT_010325fc;
                                                        *(ulong *)(lVar7 + 0x2ec) =
                                                             CONCAT44(uStack00000000000001cc,
                                                                      uStack00000000000001c8);
                                                        *(undefined8 *)(lVar7 + 0x2e4) =
                                                             in_stack_000001c0;
                                                        in_stack_00000180 = 0;
                                                        uStack0000000000000188 = 0;
                                                        uStack000000000000018c = 0;
                                                        in_stack_00000198 = 0;
                                                        uStack0000000000000190 = 0;
                                                        uStack0000000000000194 = 0;
                                                        FUN_05c99d80(DAT_0103297c,
                                                                     uStack000000000000002c,
                                                                     uStack0000000000000028,
                                                                     uStack0000000000000024,uVar3,
                                                                     DAT_01032840,
                                                                     uStack0000000000000020,
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
                                                        if (0x17 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined4 *)(lVar7 + 0x300) = 0x16;
                                                          *(undefined8 *)(lVar7 + 0x318) =
                                                               uStack0000000000000174;
                                                          *(ulong *)(lVar7 + 0x310) =
                                                               CONCAT44(uStack0000000000000190,
                                                                        uStack000000000000018c);
                                                          uVar3 = DAT_01031d38;
                                                          *(ulong *)(lVar7 + 0x30c) =
                                                               CONCAT44(uStack000000000000018c,
                                                                        uStack0000000000000188);
                                                          *(undefined8 *)(lVar7 + 0x304) =
                                                               in_stack_00000180;
                                                          in_stack_00000140 = 0;
                                                          uStack0000000000000148 = 0;
                                                          uStack000000000000014c = 0;
                                                          in_stack_00000158 = 0;
                                                          uStack0000000000000150 = 0;
                                                          uStack0000000000000154 = 0;
                                                          FUN_05c99d80(DAT_010323fc,
                                                                       uStack000000000000001c,
                                                                       uStack0000000000000018,
                                                                       uStack0000000000000014,uVar3,
                                                                       DAT_01031dbc,
                                                                       uStack0000000000000010,
                                                                       &stack0x00000140,0);
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
                                                          if (0x18 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined4 *)(lVar7 + 800) = 0x17;
                                                            *(undefined8 *)(lVar7 + 0x338) =
                                                                 uStack0000000000000134;
                                                            *(ulong *)(lVar7 + 0x330) =
                                                                 CONCAT44(uStack0000000000000150,
                                                                          uStack000000000000014c);
                                                            *(ulong *)(lVar7 + 0x32c) =
                                                                 CONCAT44(uStack000000000000014c,
                                                                          uStack0000000000000148);
                                                            *(undefined8 *)(lVar7 + 0x324) =
                                                                 in_stack_00000140;
                                                            in_stack_00000100 = 0;
                                                            uStack0000000000000108 = 0;
                                                            uStack000000000000010c = 0;
                                                            in_stack_00000118 = 0;
                                                            uStack0000000000000110 = 0;
                                                            uStack0000000000000114 = 0;
                                                            FUN_05c99d80(DAT_01032258,uVar5,uVar4,
                                                                         unaff_s8,unaff_s8,uVar2,
                                                                         0x3f800000,&stack0x00000100
                                                                         ,0);
                                                            if (0x19 < *(uint *)(lVar7 + 0x18)) {
                                                              *(undefined4 *)(lVar7 + 0x340) = 0x18;
                                                              *(ulong *)(lVar7 + 0x358) =
                                                                   CONCAT44(in_stack_00000118,
                                                                            uStack0000000000000114);
                                                              *(ulong *)(lVar7 + 0x350) =
                                                                   CONCAT44(uStack0000000000000110,
                                                                            uStack000000000000010c);
                                                              *(ulong *)(lVar7 + 0x34c) =
                                                                   CONCAT44(uStack000000000000010c,
                                                                            uStack0000000000000108);
                                                              *(undefined8 *)(lVar7 + 0x344) =
                                                                   in_stack_00000100;
                                                              if (lVar6 != 0) {
                                                                *(long *)(lVar6 + 0x10) = lVar7;
                                                                thunk_FUN_02bb0e9c((long *)(lVar6 + 
                                                  0x10),lVar7);
                                                  plVar8 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8
                                                                   );
                                                  *plVar8 = lVar6;
                                                  thunk_FUN_02bb0e9c(plVar8,lVar6);
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
LAB_04f8394c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


