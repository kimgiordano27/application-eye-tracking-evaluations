/*
FUNCTION_NAME: OVRPlugin.<>c$$.ctor
ENTRY_POINT: 05bfa614
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


void OVRPlugin_<>c___ctor(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

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
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
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
  undefined8 in_stack_000000c0;
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
  uStack00000000000000a4 = *(undefined4 *)(in_x9 + 0x634);
  uStack00000000000000a0 = *(undefined4 *)(in_x10 + 0x6fc);
  uStack0000000000000098 = DAT_012e3700;
  uStack000000000000009c = DAT_012e39ac;
  FUN_069e4d6c(DAT_012e3c6c,&stack0x00000a80,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
  *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
  if (0xd < uVar1) {
    uVar44 = *(undefined8 *)(unaff_x23 + 0x14);
    uVar43 = *(undefined8 *)(unaff_x23 + 0xc);
    *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
    *(undefined8 *)(unaff_x20 + 0x1d8) = uVar44;
    *(undefined8 *)(unaff_x20 + 0x1d0) = uVar43;
    *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
    *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
    uVar37 = DAT_012e3d4c;
    uVar30 = DAT_012e3c74;
    uVar5 = DAT_012e3c70;
    uVar10 = DAT_012e3ae0;
    FUN_069e4d6c(DAT_012e3cd8,&stack0x00000a40,0);
    if (0xe < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
      *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
      *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
      *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
      *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
      uVar28 = DAT_012e3c14;
      uVar27 = DAT_012e3c10;
      uVar24 = DAT_012e3b6c;
      FUN_069e4d6c(DAT_012e36a0,DAT_012e3c10,DAT_012e3c14,DAT_012e3b6c,0x22800000,0x2300000023000000
                   ,0x3f800000,&stack0x00000a00,0);
      if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
        *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
        *(undefined8 *)(unaff_x20 + 0x218) = 0;
        *(undefined8 *)(unaff_x20 + 0x210) = 0;
        *(undefined8 *)(unaff_x20 + 0x20c) = 0;
        *(undefined8 *)(unaff_x20 + 0x204) = 0;
        uVar20 = DAT_012e3a9c;
        uVar6 = DAT_012e34dc;
        FUN_069e4d6c(DAT_012e3704,DAT_012e3a9c,DAT_012e34dc,0,0,0,0x3f800000,&stack0x000009c0,0);
        if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x220) = 1;
          *(undefined8 *)(unaff_x20 + 0x238) = 0;
          *(undefined8 *)(unaff_x20 + 0x230) = 0;
          *(undefined8 *)(unaff_x20 + 0x22c) = 0;
          *(undefined8 *)(unaff_x20 + 0x224) = 0;
          uVar14 = DAT_012e3868;
          uVar11 = DAT_012e36a4;
          uVar8 = DAT_012e3534;
          uVar3 = DAT_012e3480;
          FUN_069e4d6c(DAT_012e3638,&stack0x00000980,0);
          if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
            *(undefined8 *)(unaff_x20 + 600) = 0;
            *(undefined8 *)(unaff_x20 + 0x250) = 0;
            *(undefined8 *)(unaff_x20 + 0x24c) = 0;
            *(undefined8 *)(unaff_x20 + 0x244) = 0;
            uVar38 = DAT_012e3d98;
            uVar36 = DAT_012e3ce0;
            uVar35 = DAT_012e3cdc;
            uVar31 = DAT_012e3c78;
            FUN_069e4d6c(DAT_012e3ae4,&stack0x00000940,0);
            if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
              *(undefined8 *)(unaff_x20 + 0x278) = 0;
              *(undefined8 *)(unaff_x20 + 0x270) = 0;
              *(undefined8 *)(unaff_x20 + 0x26c) = 0;
              *(undefined8 *)(unaff_x20 + 0x264) = 0;
              uVar32 = DAT_012e3c7c;
              uVar22 = DAT_012e3b28;
              FUN_069e4d6c(DAT_012e35a0,DAT_012e3c7c,DAT_012e3b28,DAT_012e3d9c,DAT_012e3c18,
                           DAT_012e363c,DAT_012e39f8,&stack0x00000900,0);
              if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                *(undefined8 *)(unaff_x20 + 0x298) = 0;
                *(undefined8 *)(unaff_x20 + 0x290) = 0;
                *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                *(undefined8 *)(unaff_x20 + 0x284) = 0;
                FUN_069e4d6c(DAT_012e3484,DAT_012e3a48,DAT_012e35a4,DAT_012e3488,unaff_s8,
                             DAT_012e386c,0x3f800000,&stack0x000008c0,0);
                if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                  uVar21 = DAT_012e3aa0;
                  uVar15 = DAT_012e3870;
                  uVar13 = DAT_012e378c;
                  uVar12 = DAT_012e36a8;
                  FUN_069e4d6c(DAT_012e3d50,&stack0x00000880,0);
                  if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                    *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                    uVar39 = DAT_012e3da0;
                    uVar26 = DAT_012e3bd4;
                    uVar23 = DAT_012e3b2c;
                    uVar19 = DAT_012e3958;
                    FUN_069e4d6c(DAT_012e3954,&stack0x00000840,0);
                    if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                      *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                      uVar33 = DAT_012e3c84;
                      uVar25 = DAT_012e3b74;
                      uVar7 = DAT_012e34e0;
                      uVar2 = DAT_012e343c;
                      FUN_069e4d6c(DAT_012e3c80,&stack0x00000800,0);
                      if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                        *(undefined8 *)(unaff_x20 + 0x318) = 0;
                        *(undefined8 *)(unaff_x20 + 0x310) = 0;
                        *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x304) = 0;
                        uVar34 = DAT_012e3c88;
                        uVar29 = DAT_012e3c1c;
                        uVar18 = DAT_012e3914;
                        uVar9 = DAT_012e3568;
                        FUN_069e4d6c(DAT_012e34e4,&stack0x000007c0,0);
                        if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 800) = 0x17;
                          *(undefined8 *)(unaff_x20 + 0x338) = 0;
                          *(undefined8 *)(unaff_x20 + 0x330) = 0;
                          *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x324) = 0;
                          uVar17 = DAT_012e38b4;
                          uVar16 = DAT_012e3874;
                          FUN_069e4d6c(DAT_012e3790,DAT_012e38b4,DAT_012e3874,unaff_s8,uVar24,
                                       DAT_012e348c,0x3f800000,&stack0x00000780,0);
                          if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                            *(undefined8 *)(unaff_x20 + 0x358) = 0;
                            *(undefined8 *)(unaff_x20 + 0x350) = 0;
                            *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x344) = 0;
                            if (unaff_x19 != 0) {
                              lVar41 = *unaff_x21;
                              *(long *)(unaff_x19 + 0x10) = unaff_x20;
                              **(long **)(lVar41 + 0xb8) = unaff_x19;
                              lVar41 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*unaff_x21);
                              FUN_05bf9e40();
                              lVar40 = FUN_03188b1c(*unaff_x22,0x1a);
                              FUN_069e4d6c(DAT_012e39b4,unaff_s12,unaff_s13,0,0,0,0x3f800000,
                                           &stack0x00000740,0);
                              if (lVar40 != 0) {
                                if (*(int *)(lVar40 + 0x18) != 0) {
                                  *(undefined8 *)(lVar40 + 0x2c) = 0;
                                  *(undefined8 *)(lVar40 + 0x24) = 0;
                                  *(undefined8 *)(lVar40 + 0x38) = 0;
                                  *(undefined8 *)(lVar40 + 0x30) = 0;
                                  *(undefined4 *)(lVar40 + 0x20) = 1;
                                  FUN_069e4d6c(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                                  if ((*(uint *)(lVar40 + 0x18) & 0xfffffffe) != 0) {
                                    *(undefined4 *)(lVar40 + 0x40) = 0xffffffff;
                                    *(undefined8 *)(lVar40 + 0x4c) = 0;
                                    *(undefined8 *)(lVar40 + 0x44) = 0;
                                    uVar4 = DAT_012e3a4c;
                                    *(undefined8 *)(lVar40 + 0x58) = 0;
                                    *(undefined8 *)(lVar40 + 0x50) = 0;
                                    FUN_069e4d6c(uVar4,unaff_s10,unaff_s11,DAT_012e38b8,DAT_012e3794
                                                 ,DAT_012e3644,DAT_012e3440,&stack0x000006c0,0);
                                    if (2 < *(uint *)(lVar40 + 0x18)) {
                                      *(undefined4 *)(lVar40 + 0x60) = 1;
                                      *(undefined8 *)(lVar40 + 0x6c) = 0;
                                      *(undefined8 *)(lVar40 + 100) = 0;
                                      uVar4 = DAT_012e3c8c;
                                      *(undefined8 *)(lVar40 + 0x78) = 0;
                                      *(undefined8 *)(lVar40 + 0x70) = 0;
                                      FUN_069e4d6c(uVar4,DAT_012e39fc,DAT_012e3404,DAT_012e3c90,
                                                   DAT_012e3da4,DAT_012e37e8,DAT_012e370c,
                                                   &stack0x00000680,0);
                                      if ((*(uint *)(lVar40 + 0x18) & 0xfffffffc) != 0) {
                                        *(undefined4 *)(lVar40 + 0x80) = 2;
                                        *(undefined8 *)(lVar40 + 0x8c) = 0;
                                        *(undefined8 *)(lVar40 + 0x84) = 0;
                                        uVar4 = DAT_012e3a00;
                                        *(undefined8 *)(lVar40 + 0x98) = 0;
                                        *(undefined8 *)(lVar40 + 0x90) = 0;
                                        FUN_069e4d6c(uVar4,DAT_012e35a8,DAT_012e3ae8,DAT_012e34e8,
                                                     DAT_012e3aa4,DAT_012e395c,DAT_012e3a50,
                                                     &stack0x00000640,0);
                                        if (4 < *(uint *)(lVar40 + 0x18)) {
                                          *(undefined4 *)(lVar40 + 0xa0) = 3;
                                          *(undefined8 *)(lVar40 + 0xac) = 0;
                                          *(undefined8 *)(lVar40 + 0xa4) = 0;
                                          *(undefined8 *)(lVar40 + 0xb8) = 0;
                                          *(undefined8 *)(lVar40 + 0xb0) = 0;
                                          FUN_069e4d6c(DAT_012e3648,DAT_012e3798,DAT_012e3710,
                                                       DAT_012e3444,0,0,0x3f800000,&stack0x00000600,
                                                       0);
                                          if (5 < *(uint *)(lVar40 + 0x18)) {
                                            *(undefined8 *)(lVar40 + 0xcc) = 0;
                                            *(undefined8 *)(lVar40 + 0xc4) = 0;
                                            *(undefined8 *)(lVar40 + 0xd8) = 0;
                                            *(undefined8 *)(lVar40 + 0xd0) = 0;
                                            *(undefined4 *)(lVar40 + 0xc0) = 4;
                                            FUN_069e4d6c(DAT_012e3aec,unaff_s14,unaff_s15,0,0,0,
                                                         0x3f800000,&stack0x000005c0,0);
                                            if (6 < *(uint *)(lVar40 + 0x18)) {
                                              *(undefined4 *)(lVar40 + 0xe0) = 1;
                                              *(undefined8 *)(lVar40 + 0xec) = 0;
                                              *(undefined8 *)(lVar40 + 0xe4) = 0;
                                              uVar4 = DAT_012e379c;
                                              *(undefined8 *)(lVar40 + 0xf8) = 0;
                                              *(undefined8 *)(lVar40 + 0xf0) = 0;
                                              FUN_069e4d6c(uVar4,unaff_s9,in_stack_00000e2c,
                                                           in_stack_00000e28,DAT_012e35ac,
                                                           DAT_012e3960,uStack00000000000000dc,
                                                           &stack0x00000580,0);
                                              if ((*(uint *)(lVar40 + 0x18) & 0xfffffff8) != 0) {
                                                *(undefined4 *)(lVar40 + 0x100) = 6;
                                                *(undefined8 *)(lVar40 + 0x118) = 0;
                                                *(undefined8 *)(lVar40 + 0x110) = 0;
                                                *(undefined8 *)(lVar40 + 0x10c) = 0;
                                                *(undefined8 *)(lVar40 + 0x104) = 0;
                                                FUN_069e4d6c(DAT_012e3c94,DAT_012e34ec,DAT_012e3714,
                                                             uStack00000000000000d8,DAT_012e3830,
                                                             DAT_012e3da8,uStack00000000000000d4,
                                                             &stack0x00000540,0);
                                                if (8 < *(uint *)(lVar40 + 0x18)) {
                                                  *(undefined4 *)(lVar40 + 0x120) = 7;
                                                  *(undefined8 *)(lVar40 + 0x138) = 0;
                                                  *(undefined8 *)(lVar40 + 0x130) = 0;
                                                  uVar4 = DAT_012e3d54;
                                                  *(undefined8 *)(lVar40 + 300) = 0;
                                                  *(undefined8 *)(lVar40 + 0x124) = 0;
                                                  FUN_069e4d6c(DAT_012e3918,uStack00000000000000d0,
                                                               uStack00000000000000cc,
                                                               uStack00000000000000c8,uVar4,
                                                               DAT_012e3834,in_stack_000000c0._4_4_,
                                                               &stack0x00000500,0);
                                                  if (9 < *(uint *)(lVar40 + 0x18)) {
                                                    *(undefined4 *)(lVar40 + 0x140) = 8;
                                                    *(undefined8 *)(lVar40 + 0x158) = 0;
                                                    *(undefined8 *)(lVar40 + 0x150) = 0;
                                                    *(undefined8 *)(lVar40 + 0x14c) = 0;
                                                    *(undefined8 *)(lVar40 + 0x144) = 0;
                                                    FUN_069e4d6c(DAT_012e37ec,DAT_012e3dac,
                                                                 DAT_012e34f0,0,DAT_012e38bc,0,
                                                                 0x3f800000,&stack0x000004c0,0);
                                                    if (10 < *(uint *)(lVar40 + 0x18)) {
                                                      *(undefined4 *)(lVar40 + 0x160) = 9;
                                                      *(undefined8 *)(lVar40 + 0x178) = 0;
                                                      *(undefined8 *)(lVar40 + 0x170) = 0;
                                                      *(undefined8 *)(lVar40 + 0x16c) = 0;
                                                      *(undefined8 *)(lVar40 + 0x164) = 0;
                                                      FUN_069e4d6c(DAT_012e3718,
                                                                   uStack00000000000000bc,
                                                                   uStack00000000000000b8,0,0,0,
                                                                   0x3f800000,&stack0x00000480,0);
                                                      if (0xb < *(uint *)(lVar40 + 0x18)) {
                                                        *(undefined4 *)(lVar40 + 0x180) = 1;
                                                        *(undefined8 *)(lVar40 + 0x198) = 0;
                                                        *(undefined8 *)(lVar40 + 400) = 0;
                                                        uVar4 = DAT_012e3b30;
                                                        *(undefined8 *)(lVar40 + 0x18c) = 0;
                                                        *(undefined8 *)(lVar40 + 0x184) = 0;
                                                        FUN_069e4d6c(DAT_012e3408,
                                                                     uStack00000000000000b4,
                                                                     uStack00000000000000b0,
                                                                     uStack00000000000000ac,uVar4,
                                                                     DAT_012e3ce4,
                                                                     uStack00000000000000a8,
                                                                     &stack0x00000440,0);
                                                        if (0xc < *(uint *)(lVar40 + 0x18)) {
                                                          *(undefined4 *)(lVar40 + 0x1a0) = 0xb;
                                                          *(undefined8 *)(lVar40 + 0x1b8) = 0;
                                                          *(undefined8 *)(lVar40 + 0x1b0) = 0;
                                                          uVar4 = DAT_012e3490;
                                                          *(undefined8 *)(lVar40 + 0x1ac) = 0;
                                                          *(undefined8 *)(lVar40 + 0x1a4) = 0;
                                                          FUN_069e4d6c(DAT_012e371c,
                                                                       uStack00000000000000a4,
                                                                       uStack00000000000000a0,
                                                                       uStack000000000000009c,uVar4,
                                                                       DAT_012e3ce8,
                                                                       uStack0000000000000098,
                                                                       &stack0x00000400,0);
                                                          if (0xd < *(uint *)(lVar40 + 0x18)) {
                                                            *(undefined4 *)(lVar40 + 0x1c0) = 0xc;
                                                            *(undefined8 *)(lVar40 + 0x1d8) = 0;
                                                            *(undefined8 *)(lVar40 + 0x1d0) = 0;
                                                            uVar4 = DAT_012e3c20;
                                                            *(undefined8 *)(lVar40 + 0x1cc) = 0;
                                                            *(undefined8 *)(lVar40 + 0x1c4) = 0;
                                                            FUN_069e4d6c(DAT_012e35b0,uVar10,uVar37,
                                                                         uVar5,uVar4,DAT_012e34f4,
                                                                         uVar30,&stack0x000003c0,0);
                                                            if (0xe < *(uint *)(lVar40 + 0x18)) {
                                                              *(undefined4 *)(lVar40 + 0x1e0) = 0xd;
                                                              *(undefined8 *)(lVar40 + 0x1f8) = 0;
                                                              *(undefined8 *)(lVar40 + 0x1f0) = 0;
                                                              *(undefined8 *)(lVar40 + 0x1ec) = 0;
                                                              *(undefined8 *)(lVar40 + 0x1e4) = 0;
                                                              FUN_069e4d6c(DAT_012e3b34,uVar27,
                                                                           uVar28,uVar24,0xa2800000,
                                                                           0xa3000000a3000000,
                                                                           0x3f800000,
                                                                           &stack0x00000380,0);
                                                              if ((*(uint *)(lVar40 + 0x18) &
                                                                  0xfffffff0) != 0) {
                                                                *(undefined4 *)(lVar40 + 0x200) =
                                                                     0xe;
                                                                *(undefined8 *)(lVar40 + 0x218) = 0;
                                                                *(undefined8 *)(lVar40 + 0x210) = 0;
                                                                *(undefined8 *)(lVar40 + 0x20c) = 0;
                                                                *(undefined8 *)(lVar40 + 0x204) = 0;
                                                                FUN_069e4d6c(DAT_012e3b78,uVar20,
                                                                             uVar6,0,0,0,0x3f800000,
                                                                             &stack0x00000340,0);
                                                                if (0x10 < *(uint *)(lVar40 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar40 + 0x220) =
                                                                       1;
                                                                  *(undefined8 *)(lVar40 + 0x238) =
                                                                       0;
                                                                  *(undefined8 *)(lVar40 + 0x230) =
                                                                       0;
                                                                  uVar10 = DAT_012e3aa8;
                                                                  *(undefined8 *)(lVar40 + 0x22c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar40 + 0x224) =
                                                                       0;
                                                                  FUN_069e4d6c(DAT_012e3a04,uVar11,
                                                                               uVar8,uVar14,uVar10,
                                                                               DAT_012e3754,uVar3,
                                                                               &stack0x00000300,0);
                                                                  if (0x11 < *(uint *)(lVar40 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar40 + 0x240)
                                                                         = 0x10;
                                                                    *(undefined8 *)(lVar40 + 600) =
                                                                         0;
                                                                    *(undefined8 *)(lVar40 + 0x250)
                                                                         = 0;
                                                                    uVar10 = DAT_012e35fc;
                                                                    *(undefined8 *)(lVar40 + 0x24c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar40 + 0x244)
                                                                         = 0;
                                                                    FUN_069e4d6c(DAT_012e3a54,uVar35
                                                                                 ,uVar38,uVar36,
                                                                                 uVar10,DAT_012e3c24
                                                                                 ,uVar31,&
                                                  stack0x000002c0,0);
                                                  if (0x12 < *(uint *)(lVar40 + 0x18)) {
                                                    *(undefined4 *)(lVar40 + 0x260) = 0x11;
                                                    *(undefined8 *)(lVar40 + 0x278) = 0;
                                                    *(undefined8 *)(lVar40 + 0x270) = 0;
                                                    uVar10 = DAT_012e3a58;
                                                    *(undefined8 *)(lVar40 + 0x26c) = 0;
                                                    *(undefined8 *)(lVar40 + 0x264) = 0;
                                                    FUN_069e4d6c(DAT_012e37a0,uVar32,uVar22,uVar10,
                                                                 DAT_012e3aac,DAT_012e3be0,
                                                                 DAT_012e3c28,&stack0x00000280,0);
                                                    if (0x13 < *(uint *)(lVar40 + 0x18)) {
                                                      *(undefined4 *)(lVar40 + 0x280) = 0x12;
                                                      *(undefined8 *)(lVar40 + 0x298) = 0;
                                                      *(undefined8 *)(lVar40 + 0x290) = 0;
                                                      *(undefined8 *)(lVar40 + 0x28c) = 0;
                                                      *(undefined8 *)(lVar40 + 0x284) = 0;
                                                      uVar10 = DAT_012e3c9c;
                                                      FUN_069e4d6c(DAT_012e38c0,DAT_012e3c98,
                                                                   DAT_012e3db0,uVar24,DAT_012e3c9c,
                                                                   0x8800000088000000,0x3f800000,
                                                                   &stack0x00000240,0);
                                                      if (0x14 < *(uint *)(lVar40 + 0x18)) {
                                                        *(undefined4 *)(lVar40 + 0x2a0) = 0x13;
                                                        *(undefined8 *)(lVar40 + 0x2b8) = 0;
                                                        *(undefined8 *)(lVar40 + 0x2b0) = 0;
                                                        uVar5 = DAT_012e3af0;
                                                        *(undefined8 *)(lVar40 + 0x2ac) = 0;
                                                        *(undefined8 *)(lVar40 + 0x2a4) = 0;
                                                        FUN_069e4d6c(DAT_012e35b4,uVar12,uVar13,
                                                                     uVar15,uVar5,DAT_012e3448,
                                                                     uVar21,&stack0x00000200,0);
                                                        in_stack_000001e0 = 0;
                                                        uStack00000000000001e8 = 0;
                                                        uStack00000000000001ec = 0;
                                                        in_stack_000001f0 = 0;
                                                        if (0x15 < *(uint *)(lVar40 + 0x18)) {
                                                          *(undefined4 *)(lVar40 + 0x2c0) = 1;
                                                          *(undefined8 *)(lVar40 + 0x2d8) = 0;
                                                          *(undefined8 *)(lVar40 + 0x2d0) = 0;
                                                          uVar5 = DAT_012e3a08;
                                                          *(undefined8 *)(lVar40 + 0x2cc) = 0;
                                                          *(undefined8 *)(lVar40 + 0x2c4) = 0;
                                                          in_stack_000001c0 = 0;
                                                          uStack00000000000001c8 = 0;
                                                          uStack00000000000001cc = 0;
                                                          in_stack_000001d8 = 0;
                                                          uStack00000000000001d0 = 0;
                                                          uStack00000000000001d4 = 0;
                                                          FUN_069e4d6c(DAT_012e3878,uVar19,uVar26,
                                                                       uVar23,uVar5,DAT_012e38c4,
                                                                       uVar39,&stack0x000001c0,0);
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
                                                          if (0x16 < *(uint *)(lVar40 + 0x18)) {
                                                            *(undefined4 *)(lVar40 + 0x2e0) = 0x15;
                                                            *(undefined8 *)(lVar40 + 0x2f8) =
                                                                 uStack00000000000001b4;
                                                            *(ulong *)(lVar40 + 0x2f0) =
                                                                 CONCAT44(uStack00000000000001d0,
                                                                          uStack00000000000001cc);
                                                            uVar5 = DAT_012e3af4;
                                                            *(ulong *)(lVar40 + 0x2ec) =
                                                                 CONCAT44(uStack00000000000001cc,
                                                                          uStack00000000000001c8);
                                                            *(undefined8 *)(lVar40 + 0x2e4) =
                                                                 in_stack_000001c0;
                                                            in_stack_00000180 = 0;
                                                            uStack0000000000000188 = 0;
                                                            uStack000000000000018c = 0;
                                                            in_stack_00000198 = 0;
                                                            uStack0000000000000190 = 0;
                                                            uStack0000000000000194 = 0;
                                                            FUN_069e4d6c(DAT_012e3db4,uVar7,uVar2,
                                                                         uVar25,uVar5,DAT_012e3ca0,
                                                                         uVar33,&stack0x00000180,0);
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
                                                            if (0x17 < *(uint *)(lVar40 + 0x18)) {
                                                              *(undefined4 *)(lVar40 + 0x300) = 0x16
                                                              ;
                                                              *(undefined8 *)(lVar40 + 0x318) =
                                                                   uStack0000000000000174;
                                                              *(ulong *)(lVar40 + 0x310) =
                                                                   CONCAT44(uStack0000000000000190,
                                                                            uStack000000000000018c);
                                                              uVar5 = DAT_012e3494;
                                                              *(ulong *)(lVar40 + 0x30c) =
                                                                   CONCAT44(uStack000000000000018c,
                                                                            uStack0000000000000188);
                                                              *(undefined8 *)(lVar40 + 0x304) =
                                                                   in_stack_00000180;
                                                              in_stack_00000140 = 0;
                                                              uStack0000000000000148 = 0;
                                                              uStack000000000000014c = 0;
                                                              in_stack_00000158 = 0;
                                                              uStack0000000000000150 = 0;
                                                              uStack0000000000000154 = 0;
                                                              FUN_069e4d6c(DAT_012e3964,uVar18,uVar9
                                                                           ,uVar29,uVar5,
                                                                           DAT_012e34f8,uVar34,
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
                                                              if (0x18 < *(uint *)(lVar40 + 0x18)) {
                                                                *(undefined4 *)(lVar40 + 800) = 0x17
                                                                ;
                                                                *(undefined8 *)(lVar40 + 0x338) =
                                                                     uStack0000000000000134;
                                                                *(ulong *)(lVar40 + 0x330) =
                                                                     CONCAT44(uStack0000000000000150
                                                                              ,
                                                  uStack000000000000014c);
                                                  *(ulong *)(lVar40 + 0x32c) =
                                                       CONCAT44(uStack000000000000014c,
                                                                uStack0000000000000148);
                                                  *(undefined8 *)(lVar40 + 0x324) =
                                                       in_stack_00000140;
                                                  in_stack_00000100 = 0;
                                                  uStack0000000000000108 = 0;
                                                  uStack000000000000010c = 0;
                                                  in_stack_00000118 = 0;
                                                  uStack0000000000000110 = 0;
                                                  uStack0000000000000114 = 0;
                                                  FUN_069e4d6c(DAT_012e3838,uVar17,uVar16,unaff_s8,
                                                               unaff_s8,uVar10,0x3f800000,
                                                               &stack0x00000100,0);
                                                  if (0x19 < *(uint *)(lVar40 + 0x18)) {
                                                    *(undefined4 *)(lVar40 + 0x340) = 0x18;
                                                    *(ulong *)(lVar40 + 0x358) =
                                                         CONCAT44(in_stack_00000118,
                                                                  uStack0000000000000114);
                                                    *(ulong *)(lVar40 + 0x350) =
                                                         CONCAT44(uStack0000000000000110,
                                                                  uStack000000000000010c);
                                                    *(ulong *)(lVar40 + 0x34c) =
                                                         CONCAT44(uStack000000000000010c,
                                                                  uStack0000000000000108);
                                                    *(undefined8 *)(lVar40 + 0x344) =
                                                         in_stack_00000100;
                                                    if (lVar41 != 0) {
                                                      lVar42 = *unaff_x21;
                                                      *(long *)(lVar41 + 0x10) = lVar40;
                                                      *(long *)(*(long *)(lVar42 + 0xb8) + 8) =
                                                           lVar41;
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05bfba10:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


