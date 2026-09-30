/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryDimensions
ENTRY_POINT: 051e49b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryDimensions(void)

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
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  long lVar68;
  long lVar69;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar70;
  ulong uVar71;
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
  
  lVar68 = thunk_FUN_02cea894(*unaff_x21);
  FUN_051e48f8();
  lVar69 = FUN_02ce7ad4(*unaff_x22,0x1a);
  uVar18 = DAT_013de13c;
  uVar1 = DAT_013ddf68;
  FUN_05effcac(DAT_013ddc7c,DAT_013ddf68,DAT_013de13c,0,0,0,0x3f800000,&stack0x00000e00,0);
  *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0xb4);
  *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0xac);
  if (lVar69 == 0) goto LAB_051e64f0;
  *(undefined8 *)(unaff_x23 + 0x74) = *(undefined8 *)(unaff_x23 + 0x94);
  *(undefined8 *)(unaff_x23 + 0x6c) = *(undefined8 *)(unaff_x23 + 0x8c);
  if (*(int *)(lVar69 + 0x18) != 0) {
    *(undefined4 *)(lVar69 + 0x20) = 1;
    uVar70 = *(undefined8 *)(unaff_x23 + 0x6c);
    *(undefined8 *)(lVar69 + 0x38) = *(undefined8 *)(unaff_x23 + 0x74);
    *(undefined8 *)(lVar69 + 0x30) = uVar70;
    *(undefined8 *)(lVar69 + 0x2c) = 0;
    *(undefined8 *)(lVar69 + 0x24) = 0;
    FUN_05effcac(0,0,0,0,0,0,0x3f800000,&stack0x00000da0,0);
    *(undefined8 *)(unaff_x23 + 0x34) = *(undefined8 *)(unaff_x23 + 0x54);
    *(undefined8 *)(unaff_x23 + 0x2c) = *(undefined8 *)(unaff_x23 + 0x4c);
    if (1 < *(uint *)(lVar69 + 0x18)) {
      *(undefined4 *)(lVar69 + 0x40) = 0xffffffff;
      uVar70 = *(undefined8 *)(unaff_x23 + 0x2c);
      *(undefined8 *)(lVar69 + 0x58) = *(undefined8 *)(unaff_x23 + 0x34);
      *(undefined8 *)(lVar69 + 0x50) = uVar70;
      uVar23 = DAT_013de58c;
      uVar59 = DAT_013de4dc;
      uVar37 = DAT_013de238;
      uVar35 = DAT_013de1e0;
      uVar11 = DAT_013de0a0;
      uVar13 = DAT_013ddf6c;
      uVar2 = DAT_013dde4c;
      *(undefined8 *)(lVar69 + 0x4c) = 0;
      *(undefined8 *)(lVar69 + 0x44) = 0;
      FUN_05effcac(uVar11,uVar59,uVar35,uVar13,uVar2,uVar37,uVar23,&stack0x00000d60,0);
      uVar70 = *(undefined8 *)(unaff_x23 + 0x14);
      uVar71 = *(ulong *)(unaff_x23 + 0xc);
      if (2 < *(uint *)(lVar69 + 0x18)) {
        *(undefined4 *)(lVar69 + 0x60) = 1;
        *(undefined8 *)(lVar69 + 0x78) = uVar70;
        *(ulong *)(lVar69 + 0x70) = uVar71 & 0xffffffff00000000;
        uVar2 = DAT_013de03c;
        *(undefined8 *)(lVar69 + 0x6c) = 0;
        *(undefined8 *)(lVar69 + 100) = 0;
        FUN_05effcac(uVar2,DAT_013ddeb0,DAT_013de590,DAT_013de184,DAT_013de188,DAT_013ddc10,
                     DAT_013de040,&stack0x00000d20,0);
        if (3 < *(uint *)(lVar69 + 0x18)) {
          *(undefined4 *)(lVar69 + 0x80) = 2;
          *(undefined8 *)(lVar69 + 0x98) = 0;
          *(undefined8 *)(lVar69 + 0x90) = 0;
          uVar2 = DAT_013ddb68;
          *(undefined8 *)(lVar69 + 0x8c) = 0;
          *(undefined8 *)(lVar69 + 0x84) = 0;
          FUN_05effcac(uVar2,DAT_013de3e0,DAT_013de538,DAT_013ddb0c,DAT_013dddf0,DAT_013de370,
                       DAT_013ddf70,&stack0x00000ce0,0);
          if (4 < *(uint *)(lVar69 + 0x18)) {
            *(undefined4 *)(lVar69 + 0xa0) = 3;
            *(undefined8 *)(lVar69 + 0xb8) = 0;
            *(undefined8 *)(lVar69 + 0xb0) = 0;
            *(undefined8 *)(lVar69 + 0xac) = 0;
            *(undefined8 *)(lVar69 + 0xa4) = 0;
            uVar2 = DAT_013de140;
            FUN_05effcac(DAT_013de3e4,DAT_013de284,DAT_013ddf74,0x87000000,DAT_013de140,0xa2800000,
                         0x3f800000,&stack0x00000ca0,0);
            if (5 < *(uint *)(lVar69 + 0x18)) {
              *(undefined4 *)(lVar69 + 0xc0) = 4;
              uVar37 = DAT_013de4e0;
              uVar13 = DAT_013dddf4;
              *(undefined8 *)(lVar69 + 0xd8) = 0;
              *(undefined8 *)(lVar69 + 0xd0) = 0;
              uVar11 = DAT_013de044;
              *(undefined8 *)(lVar69 + 0xcc) = 0;
              *(undefined8 *)(lVar69 + 0xc4) = 0;
              FUN_05effcac(uVar11,uVar37,uVar13,0,0,0,0x3f800000,&stack0x00000c60,0);
              if (6 < *(uint *)(lVar69 + 0x18)) {
                *(undefined4 *)(lVar69 + 0xe0) = 1;
                *(undefined8 *)(lVar69 + 0xf8) = 0;
                *(undefined8 *)(lVar69 + 0xf0) = 0;
                uVar66 = DAT_013de5f0;
                uVar30 = DAT_013de5ec;
                uVar54 = DAT_013de430;
                uVar51 = DAT_013de3e8;
                uVar47 = DAT_013de33c;
                uVar23 = DAT_013ddf78;
                uVar11 = DAT_013ddd98;
                *(undefined8 *)(lVar69 + 0xec) = 0;
                *(undefined8 *)(lVar69 + 0xe4) = 0;
                FUN_05effcac(uVar30,uVar51,uVar47,uVar23,uVar54,uVar11,&stack0x00000c20,0);
                if (7 < *(uint *)(lVar69 + 0x18)) {
                  *(undefined4 *)(lVar69 + 0x100) = 6;
                  *(undefined8 *)(lVar69 + 0x118) = 0;
                  *(undefined8 *)(lVar69 + 0x110) = 0;
                  *(undefined8 *)(lVar69 + 0x10c) = 0;
                  *(undefined8 *)(lVar69 + 0x104) = 0;
                  uVar54 = DAT_013de5f4;
                  uVar11 = DAT_013de18c;
                  FUN_05effcac(DAT_013ddb10,DAT_013ddc80,DAT_013de108,DAT_013de18c,DAT_013de190,
                               DAT_013ddc14,&stack0x00000be0,0);
                  if (8 < *(uint *)(lVar69 + 0x18)) {
                    *(undefined4 *)(lVar69 + 0x120) = 7;
                    *(undefined8 *)(lVar69 + 0x138) = 0;
                    *(undefined8 *)(lVar69 + 0x130) = 0;
                    *(undefined8 *)(lVar69 + 300) = 0;
                    *(undefined8 *)(lVar69 + 0x124) = 0;
                    uVar63 = DAT_013de594;
                    uVar40 = DAT_013de288;
                    uVar38 = DAT_013de23c;
                    uVar30 = DAT_013de0a8;
                    FUN_05effcac(DAT_013de10c,&stack0x00000ba0,0);
                    if (9 < *(uint *)(lVar69 + 0x18)) {
                      *(undefined4 *)(lVar69 + 0x140) = 8;
                      *(undefined8 *)(lVar69 + 0x158) = 0;
                      *(undefined8 *)(lVar69 + 0x150) = 0;
                      *(undefined8 *)(lVar69 + 0x14c) = 0;
                      *(undefined8 *)(lVar69 + 0x144) = 0;
                      FUN_05effcac(DAT_013de1e4,DAT_013ddb6c,DAT_013de3ec,0,DAT_013de53c,0,
                                   0x3f800000,&stack0x00000b60,0);
                      if (10 < *(uint *)(lVar69 + 0x18)) {
                        *(undefined4 *)(lVar69 + 0x160) = 9;
                        *(undefined8 *)(lVar69 + 0x178) = 0;
                        *(undefined8 *)(lVar69 + 0x170) = 0;
                        *(undefined8 *)(lVar69 + 0x16c) = 0;
                        *(undefined8 *)(lVar69 + 0x164) = 0;
                        uVar19 = DAT_013ddf10;
                        uVar3 = DAT_013ddbc0;
                        FUN_05effcac(DAT_013ddc84,DAT_013ddf10,DAT_013ddbc0,0,0,0,0x3f800000,
                                     &stack0x00000b20,0);
                        if (0xb < *(uint *)(lVar69 + 0x18)) {
                          *(undefined4 *)(lVar69 + 0x180) = 1;
                          *(undefined8 *)(lVar69 + 0x198) = 0;
                          *(undefined8 *)(lVar69 + 400) = 0;
                          *(undefined8 *)(lVar69 + 0x18c) = 0;
                          *(undefined8 *)(lVar69 + 0x184) = 0;
                          uVar31 = DAT_013de0ac;
                          uVar24 = DAT_013ddf7c;
                          uVar16 = DAT_013ddeb4;
                          uVar8 = DAT_013ddce0;
                          FUN_05effcac(DAT_013de048,&stack0x00000ae0,0);
                          if (0xc < *(uint *)(lVar69 + 0x18)) {
                            *(undefined4 *)(lVar69 + 0x1a0) = 0xb;
                            *(undefined8 *)(lVar69 + 0x1b8) = 0;
                            *(undefined8 *)(lVar69 + 0x1b0) = 0;
                            *(undefined8 *)(lVar69 + 0x1ac) = 0;
                            *(undefined8 *)(lVar69 + 0x1a4) = 0;
                            uVar33 = DAT_013de194;
                            uVar12 = DAT_013ddd9c;
                            uVar7 = DAT_013ddc8c;
                            uVar6 = DAT_013ddc88;
                            FUN_05effcac(DAT_013ddfe4,&stack0x00000aa0,0);
                            if (0xd < *(uint *)(lVar69 + 0x18)) {
                              *(undefined4 *)(lVar69 + 0x1c0) = 0xc;
                              *(undefined8 *)(lVar69 + 0x1d8) = 0;
                              *(undefined8 *)(lVar69 + 0x1d0) = 0;
                              *(undefined8 *)(lVar69 + 0x1cc) = 0;
                              *(undefined8 *)(lVar69 + 0x1c4) = 0;
                              uVar41 = DAT_013de28c;
                              uVar39 = DAT_013de244;
                              uVar28 = DAT_013de04c;
                              uVar25 = DAT_013ddf80;
                              FUN_05effcac(DAT_013dde50,&stack0x00000a60,0);
                              if (0xe < *(uint *)(lVar69 + 0x18)) {
                                *(undefined4 *)(lVar69 + 0x1e0) = 0xd;
                                *(undefined8 *)(lVar69 + 0x1f8) = 0;
                                *(undefined8 *)(lVar69 + 0x1f0) = 0;
                                *(undefined8 *)(lVar69 + 0x1ec) = 0;
                                *(undefined8 *)(lVar69 + 0x1e4) = 0;
                                uVar67 = DAT_013de600;
                                uVar55 = DAT_013de434;
                                uVar43 = DAT_013de2c0;
                                FUN_05effcac(DAT_013ddbc4,DAT_013de2c0,DAT_013de600,DAT_013de434,
                                             0x22800000,0x23000000,0x3f800000,&stack0x00000a20,0);
                                if (0xf < *(uint *)(lVar69 + 0x18)) {
                                  *(undefined4 *)(lVar69 + 0x200) = 0xe;
                                  *(undefined8 *)(lVar69 + 0x218) = 0;
                                  *(undefined8 *)(lVar69 + 0x210) = 0;
                                  *(undefined8 *)(lVar69 + 0x20c) = 0;
                                  *(undefined8 *)(lVar69 + 0x204) = 0;
                                  uVar48 = DAT_013de340;
                                  uVar44 = DAT_013de2c4;
                                  FUN_05effcac(DAT_013ddb14,DAT_013de340,DAT_013de2c4,0,0,0,
                                               0x3f800000,&stack0x000009e0,0);
                                  if (0x10 < *(uint *)(lVar69 + 0x18)) {
                                    *(undefined4 *)(lVar69 + 0x220) = 1;
                                    *(undefined8 *)(lVar69 + 0x238) = 0;
                                    *(undefined8 *)(lVar69 + 0x230) = 0;
                                    *(undefined8 *)(lVar69 + 0x22c) = 0;
                                    *(undefined8 *)(lVar69 + 0x224) = 0;
                                    uVar64 = DAT_013de598;
                                    uVar26 = DAT_013ddf84;
                                    uVar20 = DAT_013ddf14;
                                    uVar14 = DAT_013dddf8;
                                    FUN_05effcac(DAT_013ddeb8,&stack0x000009a0,0);
                                    if (0x11 < *(uint *)(lVar69 + 0x18)) {
                                      *(undefined4 *)(lVar69 + 0x240) = 0x10;
                                      *(undefined8 *)(lVar69 + 600) = 0;
                                      *(undefined8 *)(lVar69 + 0x250) = 0;
                                      *(undefined8 *)(lVar69 + 0x24c) = 0;
                                      *(undefined8 *)(lVar69 + 0x244) = 0;
                                      uVar49 = DAT_013de378;
                                      uVar34 = DAT_013de198;
                                      uVar32 = DAT_013de110;
                                      uVar21 = DAT_013ddf1c;
                                      FUN_05effcac(DAT_013ddf18,&stack0x00000960,0);
                                      if (0x12 < *(uint *)(lVar69 + 0x18)) {
                                        *(undefined4 *)(lVar69 + 0x260) = 0x11;
                                        *(undefined8 *)(lVar69 + 0x278) = 0;
                                        *(undefined8 *)(lVar69 + 0x270) = 0;
                                        *(undefined8 *)(lVar69 + 0x26c) = 0;
                                        *(undefined8 *)(lVar69 + 0x264) = 0;
                                        uVar42 = DAT_013de290;
                                        uVar9 = DAT_013ddce4;
                                        FUN_05effcac(DAT_013ddb74,DAT_013ddce4,DAT_013de290,
                                                     DAT_013ddebc,DAT_013de19c,DAT_013ddb18,
                                                     DAT_013ddf20,&stack0x00000920,0);
                                        if (0x13 < *(uint *)(lVar69 + 0x18)) {
                                          *(undefined4 *)(lVar69 + 0x280) = 0x12;
                                          *(undefined8 *)(lVar69 + 0x298) = 0;
                                          *(undefined8 *)(lVar69 + 0x290) = 0;
                                          *(undefined8 *)(lVar69 + 0x28c) = 0;
                                          *(undefined8 *)(lVar69 + 0x284) = 0;
                                          FUN_05effcac(DAT_013ddc90,DAT_013ddfe8,DAT_013ddb78,
                                                       DAT_013de59c,uVar2,DAT_013ddfec,0x3f800000,
                                                       &stack0x000008e0,0);
                                          if (0x14 < *(uint *)(lVar69 + 0x18)) {
                                            *(undefined4 *)(lVar69 + 0x2a0) = 0x13;
                                            *(undefined8 *)(lVar69 + 0x2b8) = 0;
                                            *(undefined8 *)(lVar69 + 0x2b0) = 0;
                                            *(undefined8 *)(lVar69 + 0x2ac) = 0;
                                            *(undefined8 *)(lVar69 + 0x2a4) = 0;
                                            uVar60 = DAT_013de540;
                                            uVar57 = DAT_013de484;
                                            uVar27 = DAT_013ddff0;
                                            uVar15 = DAT_013dde54;
                                            FUN_05effcac(DAT_013ddc94,&stack0x000008a0,0);
                                            if (0x15 < *(uint *)(lVar69 + 0x18)) {
                                              *(undefined4 *)(lVar69 + 0x2c0) = 1;
                                              *(undefined8 *)(lVar69 + 0x2d8) = 0;
                                              *(undefined8 *)(lVar69 + 0x2d0) = 0;
                                              *(undefined8 *)(lVar69 + 0x2cc) = 0;
                                              *(undefined8 *)(lVar69 + 0x2c4) = 0;
                                              uVar52 = DAT_013de3f4;
                                              uVar50 = DAT_013de37c;
                                              uVar45 = DAT_013de2c8;
                                              uVar22 = DAT_013ddf24;
                                              FUN_05effcac(DAT_013ddb1c,&stack0x00000860,0);
                                              if (0x16 < *(uint *)(lVar69 + 0x18)) {
                                                *(undefined4 *)(lVar69 + 0x2e0) = 0x15;
                                                *(undefined8 *)(lVar69 + 0x2f8) = 0;
                                                *(undefined8 *)(lVar69 + 0x2f0) = 0;
                                                *(undefined8 *)(lVar69 + 0x2ec) = 0;
                                                *(undefined8 *)(lVar69 + 0x2e4) = 0;
                                                uVar56 = DAT_013de438;
                                                uVar53 = DAT_013de3f8;
                                                uVar17 = DAT_013ddec0;
                                                uVar4 = DAT_013ddbc8;
                                                FUN_05effcac(DAT_013dde58,&stack0x00000820,0);
                                                if (0x17 < *(uint *)(lVar69 + 0x18)) {
                                                  *(undefined4 *)(lVar69 + 0x300) = 0x16;
                                                  *(undefined8 *)(lVar69 + 0x318) = 0;
                                                  *(undefined8 *)(lVar69 + 0x310) = 0;
                                                  *(undefined8 *)(lVar69 + 0x30c) = 0;
                                                  *(undefined8 *)(lVar69 + 0x304) = 0;
                                                  uVar65 = DAT_013de5a0;
                                                  uVar61 = DAT_013de544;
                                                  uVar46 = DAT_013de2d4;
                                                  uVar5 = DAT_013ddc18;
                                                  FUN_05effcac(DAT_013de248,&stack0x000007e0,0);
                                                  if (0x18 < *(uint *)(lVar69 + 0x18)) {
                                                    *(undefined4 *)(lVar69 + 800) = 0x17;
                                                    *(undefined8 *)(lVar69 + 0x338) = 0;
                                                    *(undefined8 *)(lVar69 + 0x330) = 0;
                                                    *(undefined8 *)(lVar69 + 0x32c) = 0;
                                                    *(undefined8 *)(lVar69 + 0x324) = 0;
                                                    uVar29 = DAT_013de054;
                                                    uVar10 = DAT_013ddd3c;
                                                    FUN_05effcac(DAT_013de48c,DAT_013de054,
                                                                 DAT_013ddd3c,uVar2,uVar55,
                                                                 DAT_013ddd40,0x3f800000,
                                                                 &stack0x000007a0,0);
                                                    if (0x19 < *(uint *)(lVar69 + 0x18)) {
                                                      *(undefined4 *)(lVar69 + 0x340) = 0x18;
                                                      *(undefined8 *)(lVar69 + 0x358) = 0;
                                                      *(undefined8 *)(lVar69 + 0x350) = 0;
                                                      *(undefined8 *)(lVar69 + 0x34c) = 0;
                                                      *(undefined8 *)(lVar69 + 0x344) = 0;
                                                      if (lVar68 != 0) {
                                                        *(long *)(lVar68 + 0x10) = lVar69;
                                                        **(long **)(*unaff_x21 + 0xb8) = lVar68;
                                                        lVar68 = thunk_FUN_02cea894(*unaff_x21);
                                                        FUN_051e48f8();
                                                        lVar69 = FUN_02ce7ad4(*unaff_x22,0x1a);
                                                        FUN_05effcac(DAT_013de380,uVar1,uVar18,0,0,0
                                                                     ,0x3f800000,&stack0x00000760,0)
                                                        ;
                                                        if (lVar69 != 0) {
                                                          if (*(int *)(lVar69 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar69 + 0x20) = 1;
                                                            *(undefined8 *)(lVar69 + 0x38) = 0;
                                                            *(undefined8 *)(lVar69 + 0x30) = 0;
                                                            *(undefined8 *)(lVar69 + 0x2c) = 0;
                                                            *(undefined8 *)(lVar69 + 0x24) = 0;
                                                            FUN_05effcac(0,0,0,0,0,0,0x3f800000,
                                                                         &stack0x00000700,0);
                                                            if (1 < *(uint *)(lVar69 + 0x18)) {
                                                              *(undefined4 *)(lVar69 + 0x40) =
                                                                   0xffffffff;
                                                              *(undefined8 *)(lVar69 + 0x58) = 0;
                                                              *(undefined8 *)(lVar69 + 0x50) = 0;
                                                              uVar62 = DAT_013de548;
                                                              uVar58 = DAT_013de490;
                                                              uVar36 = DAT_013de1e8;
                                                              uVar18 = DAT_013ddec4;
                                                              uVar1 = DAT_013dde00;
                                                              *(undefined8 *)(lVar69 + 0x4c) = 0;
                                                              *(undefined8 *)(lVar69 + 0x44) = 0;
                                                              FUN_05effcac(uVar1,uVar59,uVar35,
                                                                           uVar62,uVar18,uVar36,
                                                                           uVar58,&stack0x000006c0,0
                                                                          );
                                                              if (2 < *(uint *)(lVar69 + 0x18)) {
                                                                *(undefined4 *)(lVar69 + 0x60) = 1;
                                                                *(undefined8 *)(lVar69 + 0x78) = 0;
                                                                *(undefined8 *)(lVar69 + 0x70) = 0;
                                                                uVar1 = DAT_013ddf28;
                                                                *(undefined8 *)(lVar69 + 0x6c) = 0;
                                                                *(undefined8 *)(lVar69 + 100) = 0;
                                                                FUN_05effcac(uVar1,DAT_013ddf2c,
                                                                             DAT_013de54c,
                                                                             DAT_013ddff4,
                                                                             DAT_013ddff8,
                                                                             DAT_013ddb24,
                                                                             DAT_013dde5c,
                                                                             &stack0x00000680,0);
                                                                if (3 < *(uint *)(lVar69 + 0x18)) {
                                                                  *(undefined4 *)(lVar69 + 0x80) = 2
                                                                  ;
                                                                  *(undefined8 *)(lVar69 + 0x98) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar69 + 0x90) = 0
                                                                  ;
                                                                  uVar1 = DAT_013de2d8;
                                                                  *(undefined8 *)(lVar69 + 0x8c) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar69 + 0x84) = 0
                                                                  ;
                                                                  FUN_05effcac(uVar1,DAT_013ddffc,
                                                                               DAT_013de550,
                                                                               DAT_013de144,
                                                                               DAT_013de4e4,
                                                                               DAT_013de0b0,
                                                                               DAT_013de494,
                                                                               &stack0x00000640,0);
                                                                  if (4 < *(uint *)(lVar69 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar69 + 0xa0) =
                                                                         3;
                                                                    *(undefined8 *)(lVar69 + 0xb8) =
                                                                         0;
                                                                    *(undefined8 *)(lVar69 + 0xb0) =
                                                                         0;
                                                                    *(undefined8 *)(lVar69 + 0xac) =
                                                                         0;
                                                                    *(undefined8 *)(lVar69 + 0xa4) =
                                                                         0;
                                                                    FUN_05effcac(DAT_013ddf8c,
                                                                                 DAT_013de114,
                                                                                 DAT_013de058,
                                                                                 DAT_013de1ec,0,0,
                                                                                 0x3f800000,
                                                                                 &stack0x00000600,0)
                                                                    ;
                                                                    if (5 < *(uint *)(lVar69 + 0x18)
                                                                       ) {
                                                                      *(undefined4 *)(lVar69 + 0xc0)
                                                                           = 4;
                                                                      *(undefined8 *)(lVar69 + 0xd8)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar69 + 0xd0)
                                                                           = 0;
                                                                      uVar1 = DAT_013ddb28;
                                                                      *(undefined8 *)(lVar69 + 0xcc)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar69 + 0xc4)
                                                                           = 0;
                                                                      FUN_05effcac(uVar1,uVar37,
                                                                                   uVar13,0,0,0,
                                                                                   0x3f800000,
                                                                                   &stack0x000005c0,
                                                                                   0);
                                                                      if (6 < *(uint *)(lVar69 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar69 + 0xe0) = 1;
                                                    *(undefined8 *)(lVar69 + 0xf8) = 0;
                                                    *(undefined8 *)(lVar69 + 0xf0) = 0;
                                                    *(undefined8 *)(lVar69 + 0xec) = 0;
                                                    *(undefined8 *)(lVar69 + 0xe4) = 0;
                                                    FUN_05effcac(DAT_013de608,uVar51,uVar47,uVar23,
                                                                 DAT_013de554,DAT_013de2dc,uVar66,
                                                                 &stack0x00000580,0);
                                                    if (7 < *(uint *)(lVar69 + 0x18)) {
                                                      *(undefined4 *)(lVar69 + 0x100) = 6;
                                                      *(undefined8 *)(lVar69 + 0x118) = 0;
                                                      *(undefined8 *)(lVar69 + 0x110) = 0;
                                                      *(undefined8 *)(lVar69 + 0x10c) = 0;
                                                      *(undefined8 *)(lVar69 + 0x104) = 0;
                                                      FUN_05effcac(DAT_013de000,DAT_013de4e8,
                                                                   DAT_013dde04,uVar11,DAT_013ddf90,
                                                                   DAT_013de344,uVar54,
                                                                   &stack0x00000540,0);
                                                      if (8 < *(uint *)(lVar69 + 0x18)) {
                                                        *(undefined4 *)(lVar69 + 0x120) = 7;
                                                        *(undefined8 *)(lVar69 + 0x138) = 0;
                                                        *(undefined8 *)(lVar69 + 0x130) = 0;
                                                        *(undefined8 *)(lVar69 + 300) = 0;
                                                        *(undefined8 *)(lVar69 + 0x124) = 0;
                                                        FUN_05effcac(DAT_013de24c,uVar38,uVar63,
                                                                     uVar40,DAT_013ddda0,
                                                                     DAT_013dde08,uVar30,
                                                                     &stack0x00000500,0);
                                                        if (9 < *(uint *)(lVar69 + 0x18)) {
                                                          *(undefined4 *)(lVar69 + 0x140) = 8;
                                                          *(undefined8 *)(lVar69 + 0x158) = 0;
                                                          *(undefined8 *)(lVar69 + 0x150) = 0;
                                                          *(undefined8 *)(lVar69 + 0x14c) = 0;
                                                          *(undefined8 *)(lVar69 + 0x144) = 0;
                                                          FUN_05effcac(DAT_013ddf30,DAT_013de004,
                                                                       DAT_013de348,0,DAT_013ddf94,0
                                                                       ,0x3f800000,&stack0x000004c0,
                                                                       0);
                                                          if (10 < *(uint *)(lVar69 + 0x18)) {
                                                            *(undefined4 *)(lVar69 + 0x160) = 9;
                                                            *(undefined8 *)(lVar69 + 0x178) = 0;
                                                            *(undefined8 *)(lVar69 + 0x170) = 0;
                                                            *(undefined8 *)(lVar69 + 0x16c) = 0;
                                                            *(undefined8 *)(lVar69 + 0x164) = 0;
                                                            FUN_05effcac(DAT_013de2e0,uVar19,uVar3,0
                                                                         ,0,0,0x3f800000,
                                                                         &stack0x00000480,0);
                                                            if (0xb < *(uint *)(lVar69 + 0x18)) {
                                                              *(undefined4 *)(lVar69 + 0x180) = 1;
                                                              *(undefined8 *)(lVar69 + 0x198) = 0;
                                                              *(undefined8 *)(lVar69 + 400) = 0;
                                                              *(undefined8 *)(lVar69 + 0x18c) = 0;
                                                              *(undefined8 *)(lVar69 + 0x184) = 0;
                                                              FUN_05effcac(DAT_013de34c,uVar31,
                                                                           uVar24,uVar8,DAT_013de1a4
                                                                           ,DAT_013ddec8,uVar16,
                                                                           &stack0x00000440,0);
                                                              if (0xc < *(uint *)(lVar69 + 0x18)) {
                                                                *(undefined4 *)(lVar69 + 0x1a0) =
                                                                     0xb;
                                                                *(undefined8 *)(lVar69 + 0x1b8) = 0;
                                                                *(undefined8 *)(lVar69 + 0x1b0) = 0;
                                                                *(undefined8 *)(lVar69 + 0x1ac) = 0;
                                                                *(undefined8 *)(lVar69 + 0x1a4) = 0;
                                                                FUN_05effcac(DAT_013de008,uVar12,
                                                                             uVar33,uVar6,
                                                                             DAT_013de05c,
                                                                             DAT_013de1a8,uVar7,
                                                                             &stack0x00000400,0);
                                                                if (0xd < *(uint *)(lVar69 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar69 + 0x1c0) =
                                                                       0xc;
                                                                  *(undefined8 *)(lVar69 + 0x1d8) =
                                                                       0;
                                                                  *(undefined8 *)(lVar69 + 0x1d0) =
                                                                       0;
                                                                  *(undefined8 *)(lVar69 + 0x1cc) =
                                                                       0;
                                                                  *(undefined8 *)(lVar69 + 0x1c4) =
                                                                       0;
                                                                  FUN_05effcac(DAT_013ddb2c,uVar41,
                                                                               uVar28,uVar25,
                                                                               DAT_013de1ac,
                                                                               DAT_013de1f0,uVar39,
                                                                               &stack0x000003c0,0);
                                                                  if (0xe < *(uint *)(lVar69 + 0x18)
                                                                     ) {
                                                                    *(undefined4 *)(lVar69 + 0x1e0)
                                                                         = 0xd;
                                                                    *(undefined8 *)(lVar69 + 0x1f8)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar69 + 0x1f0)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar69 + 0x1ec)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar69 + 0x1e4)
                                                                         = 0;
                                                                    FUN_05effcac(DAT_013de148,uVar43
                                                                                 ,uVar67,uVar55,
                                                                                 0xa2800000,
                                                                                 0xa3000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000380,0)
                                                                    ;
                                                                    if (0xf < *(uint *)(lVar69 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar69 + 0x200) = 0xe;
                                                    *(undefined8 *)(lVar69 + 0x218) = 0;
                                                    *(undefined8 *)(lVar69 + 0x210) = 0;
                                                    *(undefined8 *)(lVar69 + 0x20c) = 0;
                                                    *(undefined8 *)(lVar69 + 0x204) = 0;
                                                    FUN_05effcac(DAT_013ddb7c,uVar48,uVar44,0,0,0,
                                                                 0x3f800000,&stack0x00000340,0);
                                                    if (0x10 < *(uint *)(lVar69 + 0x18)) {
                                                      *(undefined4 *)(lVar69 + 0x220) = 1;
                                                      *(undefined8 *)(lVar69 + 0x238) = 0;
                                                      *(undefined8 *)(lVar69 + 0x230) = 0;
                                                      *(undefined8 *)(lVar69 + 0x22c) = 0;
                                                      *(undefined8 *)(lVar69 + 0x224) = 0;
                                                      FUN_05effcac(DAT_013ddecc,uVar26,uVar14,uVar20
                                                                   ,DAT_013de60c,DAT_013de5a4,uVar64
                                                                   ,&stack0x00000300,0);
                                                      if (0x11 < *(uint *)(lVar69 + 0x18)) {
                                                        *(undefined4 *)(lVar69 + 0x240) = 0x10;
                                                        *(undefined8 *)(lVar69 + 600) = 0;
                                                        *(undefined8 *)(lVar69 + 0x250) = 0;
                                                        *(undefined8 *)(lVar69 + 0x24c) = 0;
                                                        *(undefined8 *)(lVar69 + 0x244) = 0;
                                                        FUN_05effcac(DAT_013ddce8,uVar32,uVar21,
                                                                     uVar34,DAT_013de2e4,
                                                                     DAT_013ddda4,uVar49,
                                                                     &stack0x000002c0,0);
                                                        if (0x12 < *(uint *)(lVar69 + 0x18)) {
                                                          *(undefined4 *)(lVar69 + 0x260) = 0x11;
                                                          *(undefined8 *)(lVar69 + 0x278) = 0;
                                                          *(undefined8 *)(lVar69 + 0x270) = 0;
                                                          *(undefined8 *)(lVar69 + 0x26c) = 0;
                                                          *(undefined8 *)(lVar69 + 0x264) = 0;
                                                          FUN_05effcac(DAT_013ddd44,uVar9,uVar42,
                                                                       DAT_013de294,DAT_013ddc1c,
                                                                       DAT_013ddd48,DAT_013de1b0,
                                                                       &stack0x00000280,0);
                                                          if (0x13 < *(uint *)(lVar69 + 0x18)) {
                                                            *(undefined4 *)(lVar69 + 0x280) = 0x12;
                                                            *(undefined8 *)(lVar69 + 0x298) = 0;
                                                            *(undefined8 *)(lVar69 + 0x290) = 0;
                                                            *(undefined8 *)(lVar69 + 0x28c) = 0;
                                                            *(undefined8 *)(lVar69 + 0x284) = 0;
                                                            uVar1 = DAT_013ddc20;
                                                            FUN_05effcac(DAT_013de2e8,DAT_013de384,
                                                                         DAT_013de43c,uVar55,
                                                                         DAT_013ddc20,0x88000000,
                                                                         0x3f800000,&stack0x00000240
                                                                         ,0);
                                                            if (0x14 < *(uint *)(lVar69 + 0x18)) {
                                                              *(undefined4 *)(lVar69 + 0x2a0) = 0x13
                                                              ;
                                                              *(undefined8 *)(lVar69 + 0x2b8) = 0;
                                                              *(undefined8 *)(lVar69 + 0x2b0) = 0;
                                                              *(undefined8 *)(lVar69 + 0x2ac) = 0;
                                                              *(undefined8 *)(lVar69 + 0x2a4) = 0;
                                                              FUN_05effcac(DAT_013de4ec,uVar27,
                                                                           uVar60,uVar15,
                                                                           DAT_013de498,DAT_013de440
                                                                           ,uVar57,&stack0x00000200,
                                                                           0);
                                                              in_stack_000001e0 = 0;
                                                              uStack00000000000001e8 = 0;
                                                              uStack00000000000001ec = 0;
                                                              in_stack_000001f0 = 0;
                                                              if (0x15 < *(uint *)(lVar69 + 0x18)) {
                                                                *(undefined4 *)(lVar69 + 0x2c0) = 1;
                                                                *(undefined8 *)(lVar69 + 0x2d8) = 0;
                                                                *(undefined8 *)(lVar69 + 0x2d0) = 0;
                                                                *(undefined8 *)(lVar69 + 0x2cc) = 0;
                                                                *(undefined8 *)(lVar69 + 0x2c4) = 0;
                                                                in_stack_000001c0 = 0;
                                                                uStack00000000000001c8 = 0;
                                                                uStack00000000000001cc = 0;
                                                                in_stack_000001d8 = 0;
                                                                uStack00000000000001d0 = 0;
                                                                uStack00000000000001d4 = 0;
                                                                FUN_05effcac(DAT_013ddc24,uVar50,
                                                                             uVar45,uVar22,
                                                                             DAT_013ddd4c,
                                                                             DAT_013ddbcc,uVar52,
                                                                             &stack0x000001c0,0);
                                                                uStack00000000000001b4 =
                                                                     CONCAT44(in_stack_000001d8,
                                                                              uStack00000000000001d4
                                                                             );
                                                                uStack00000000000001b0 =
                                                                     uStack00000000000001d0;
                                                                uStack00000000000001a8 =
                                                                     uStack00000000000001c8;
                                                                uStack00000000000001ac =
                                                                     uStack00000000000001cc;
                                                                in_stack_000001a0 =
                                                                     in_stack_000001c0;
                                                                if (0x16 < *(uint *)(lVar69 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar69 + 0x2e0) =
                                                                       0x15;
                                                                  *(undefined8 *)(lVar69 + 0x2f8) =
                                                                       uStack00000000000001b4;
                                                                  *(ulong *)(lVar69 + 0x2f0) =
                                                                       CONCAT44(
                                                  uStack00000000000001d0,uStack00000000000001cc);
                                                  *(ulong *)(lVar69 + 0x2ec) =
                                                       CONCAT44(uStack00000000000001cc,
                                                                uStack00000000000001c8);
                                                  *(undefined8 *)(lVar69 + 0x2e4) =
                                                       in_stack_000001c0;
                                                  in_stack_00000180 = 0;
                                                  uStack0000000000000188 = 0;
                                                  uStack000000000000018c = 0;
                                                  in_stack_00000198 = 0;
                                                  uStack0000000000000190 = 0;
                                                  uStack0000000000000194 = 0;
                                                  FUN_05effcac(DAT_013de350,uVar4,uVar53,uVar17,
                                                               DAT_013de1b4,DAT_013ddb80,uVar56,
                                                               &stack0x00000180,0);
                                                  uStack0000000000000174 =
                                                       CONCAT44(in_stack_00000198,
                                                                uStack0000000000000194);
                                                  uStack0000000000000170 = uStack0000000000000190;
                                                  uStack0000000000000168 = uStack0000000000000188;
                                                  uStack000000000000016c = uStack000000000000018c;
                                                  in_stack_00000160 = in_stack_00000180;
                                                  if (0x17 < *(uint *)(lVar69 + 0x18)) {
                                                    *(undefined4 *)(lVar69 + 0x300) = 0x16;
                                                    *(undefined8 *)(lVar69 + 0x318) =
                                                         uStack0000000000000174;
                                                    *(ulong *)(lVar69 + 0x310) =
                                                         CONCAT44(uStack0000000000000190,
                                                                  uStack000000000000018c);
                                                    *(ulong *)(lVar69 + 0x30c) =
                                                         CONCAT44(uStack000000000000018c,
                                                                  uStack0000000000000188);
                                                    *(undefined8 *)(lVar69 + 0x304) =
                                                         in_stack_00000180;
                                                    in_stack_00000140 = 0;
                                                    uStack0000000000000148 = 0;
                                                    uStack000000000000014c = 0;
                                                    in_stack_00000158 = 0;
                                                    uStack0000000000000150 = 0;
                                                    uStack0000000000000154 = 0;
                                                    FUN_05effcac(DAT_013de4f0,uVar65,uVar61,uVar46,
                                                                 DAT_013de2ec,DAT_013ddf34,uVar5,
                                                                 &stack0x00000140,0);
                                                    uStack0000000000000134 =
                                                         CONCAT44(in_stack_00000158,
                                                                  uStack0000000000000154);
                                                    uStack0000000000000130 = uStack0000000000000150;
                                                    uStack0000000000000128 = uStack0000000000000148;
                                                    uStack000000000000012c = uStack000000000000014c;
                                                    in_stack_00000120 = in_stack_00000140;
                                                    if (0x18 < *(uint *)(lVar69 + 0x18)) {
                                                      *(undefined4 *)(lVar69 + 800) = 0x17;
                                                      *(undefined8 *)(lVar69 + 0x338) =
                                                           uStack0000000000000134;
                                                      *(ulong *)(lVar69 + 0x330) =
                                                           CONCAT44(uStack0000000000000150,
                                                                    uStack000000000000014c);
                                                      *(ulong *)(lVar69 + 0x32c) =
                                                           CONCAT44(uStack000000000000014c,
                                                                    uStack0000000000000148);
                                                      *(undefined8 *)(lVar69 + 0x324) =
                                                           in_stack_00000140;
                                                      in_stack_00000100 = 0;
                                                      uStack0000000000000108 = 0;
                                                      uStack000000000000010c = 0;
                                                      in_stack_00000118 = 0;
                                                      uStack0000000000000110 = 0;
                                                      uStack0000000000000114 = 0;
                                                      FUN_05effcac(DAT_013de14c,uVar29,uVar10,uVar2,
                                                                   uVar2,uVar1,0x3f800000,
                                                                   &stack0x00000100,0);
                                                      if (0x19 < *(uint *)(lVar69 + 0x18)) {
                                                        *(undefined4 *)(lVar69 + 0x340) = 0x18;
                                                        *(ulong *)(lVar69 + 0x358) =
                                                             CONCAT44(in_stack_00000118,
                                                                      uStack0000000000000114);
                                                        *(ulong *)(lVar69 + 0x350) =
                                                             CONCAT44(uStack0000000000000110,
                                                                      uStack000000000000010c);
                                                        *(ulong *)(lVar69 + 0x34c) =
                                                             CONCAT44(uStack000000000000010c,
                                                                      uStack0000000000000108);
                                                        *(undefined8 *)(lVar69 + 0x344) =
                                                             in_stack_00000100;
                                                        if (lVar68 != 0) {
                                                          *(long *)(lVar68 + 0x10) = lVar69;
                                                          *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8
                                                                   ) = lVar68;
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
LAB_051e64ec:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


