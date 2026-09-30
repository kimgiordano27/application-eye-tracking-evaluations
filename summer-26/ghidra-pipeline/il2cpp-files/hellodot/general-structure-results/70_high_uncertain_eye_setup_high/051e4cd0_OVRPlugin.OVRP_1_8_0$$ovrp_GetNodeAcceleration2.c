/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeAcceleration2
ENTRY_POINT: 051e4cd0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeAcceleration2
               (undefined1 param_1 [16],undefined1 param_2 [16])

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
  long lVar61;
  long lVar62;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 uVar63;
  ulong uVar64;
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
  
  *(long *)(unaff_x24 + 0x34) = param_1._8_8_;
  *(long *)(unaff_x24 + 0x2c) = param_1._0_8_;
  if (5 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0xc0) = 4;
    uVar53 = DAT_013de4e0;
    uVar12 = DAT_013dddf4;
    uVar63 = *(undefined8 *)(unaff_x24 + 0x2c);
    *(undefined8 *)(unaff_x20 + 0xd8) = *(undefined8 *)(unaff_x24 + 0x34);
    *(undefined8 *)(unaff_x20 + 0xd0) = uVar63;
    uVar10 = DAT_013de044;
    *(long *)(unaff_x20 + 0xcc) = param_2._8_8_;
    *(long *)(unaff_x20 + 0xc4) = param_2._0_8_;
    FUN_05effcac(uVar10,uVar53,uVar12,0,0,0,0x3f800000,&stack0x00000c60,0);
    uVar63 = *(undefined8 *)(unaff_x24 + 0x14);
    uVar64 = *(ulong *)(unaff_x24 + 0xc);
    if (6 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0xe0) = 1;
      *(undefined8 *)(unaff_x20 + 0xf8) = uVar63;
      *(ulong *)(unaff_x20 + 0xf0) = uVar64 & 0xffffffff00000000;
      uVar59 = DAT_013de5f0;
      uVar28 = DAT_013de5ec;
      uVar49 = DAT_013de430;
      uVar46 = DAT_013de3e8;
      uVar42 = DAT_013de33c;
      uVar21 = DAT_013ddf78;
      uVar10 = DAT_013ddd98;
      *(undefined8 *)(unaff_x20 + 0xec) = 0;
      *(undefined8 *)(unaff_x20 + 0xe4) = 0;
      FUN_05effcac(uVar28,uVar46,uVar42,uVar21,uVar49,uVar10,&stack0x00000c20,0);
      if (7 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x100) = 6;
        *(undefined8 *)(unaff_x20 + 0x118) = 0;
        *(undefined8 *)(unaff_x20 + 0x110) = 0;
        *(undefined8 *)(unaff_x20 + 0x10c) = 0;
        *(undefined8 *)(unaff_x20 + 0x104) = 0;
        uVar49 = DAT_013de5f4;
        uVar10 = DAT_013de18c;
        FUN_05effcac(DAT_013ddb10,DAT_013ddc80,DAT_013de108,DAT_013de18c,DAT_013de190,DAT_013ddc14,
                     &stack0x00000be0,0);
        if (8 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x120) = 7;
          *(undefined8 *)(unaff_x20 + 0x138) = 0;
          *(undefined8 *)(unaff_x20 + 0x130) = 0;
          *(undefined8 *)(unaff_x20 + 300) = 0;
          *(undefined8 *)(unaff_x20 + 0x124) = 0;
          uVar56 = DAT_013de594;
          uVar35 = DAT_013de288;
          uVar33 = DAT_013de23c;
          uVar28 = DAT_013de0a8;
          FUN_05effcac(DAT_013de10c,&stack0x00000ba0,0);
          if (9 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x140) = 8;
            *(undefined8 *)(unaff_x20 + 0x158) = 0;
            *(undefined8 *)(unaff_x20 + 0x150) = 0;
            *(undefined8 *)(unaff_x20 + 0x14c) = 0;
            *(undefined8 *)(unaff_x20 + 0x144) = 0;
            FUN_05effcac(DAT_013de1e4,DAT_013ddb6c,DAT_013de3ec,0,DAT_013de53c,0,0x3f800000,
                         &stack0x00000b60,0);
            if (10 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x160) = 9;
              *(undefined8 *)(unaff_x20 + 0x178) = 0;
              *(undefined8 *)(unaff_x20 + 0x170) = 0;
              *(undefined8 *)(unaff_x20 + 0x16c) = 0;
              *(undefined8 *)(unaff_x20 + 0x164) = 0;
              uVar17 = DAT_013ddf10;
              uVar2 = DAT_013ddbc0;
              FUN_05effcac(DAT_013ddc84,DAT_013ddf10,DAT_013ddbc0,0,0,0,0x3f800000,&stack0x00000b20,
                           0);
              if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x180) = 1;
                *(undefined8 *)(unaff_x20 + 0x198) = 0;
                *(undefined8 *)(unaff_x20 + 400) = 0;
                *(undefined8 *)(unaff_x20 + 0x18c) = 0;
                *(undefined8 *)(unaff_x20 + 0x184) = 0;
                uVar29 = DAT_013de0ac;
                uVar22 = DAT_013ddf7c;
                uVar15 = DAT_013ddeb4;
                uVar7 = DAT_013ddce0;
                FUN_05effcac(DAT_013de048,&stack0x00000ae0,0);
                if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
                  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
                  uVar31 = DAT_013de194;
                  uVar11 = DAT_013ddd9c;
                  uVar6 = DAT_013ddc8c;
                  uVar5 = DAT_013ddc88;
                  FUN_05effcac(DAT_013ddfe4,&stack0x00000aa0,0);
                  if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
                    *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                    uVar36 = DAT_013de28c;
                    uVar34 = DAT_013de244;
                    uVar26 = DAT_013de04c;
                    uVar23 = DAT_013ddf80;
                    FUN_05effcac(DAT_013dde50,&stack0x00000a60,0);
                    if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                      *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                      uVar60 = DAT_013de600;
                      uVar50 = DAT_013de434;
                      uVar38 = DAT_013de2c0;
                      FUN_05effcac(DAT_013ddbc4,DAT_013de2c0,DAT_013de600,DAT_013de434,0x22800000,
                                   0x23000000,0x3f800000,&stack0x00000a20,0);
                      if (0xf < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                        *(undefined8 *)(unaff_x20 + 0x218) = 0;
                        *(undefined8 *)(unaff_x20 + 0x210) = 0;
                        *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x204) = 0;
                        uVar43 = DAT_013de340;
                        uVar39 = DAT_013de2c4;
                        FUN_05effcac(DAT_013ddb14,DAT_013de340,DAT_013de2c4,0,0,0,0x3f800000,
                                     &stack0x000009e0,0);
                        if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x220) = 1;
                          *(undefined8 *)(unaff_x20 + 0x238) = 0;
                          *(undefined8 *)(unaff_x20 + 0x230) = 0;
                          *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x224) = 0;
                          uVar57 = DAT_013de598;
                          uVar24 = DAT_013ddf84;
                          uVar18 = DAT_013ddf14;
                          uVar13 = DAT_013dddf8;
                          FUN_05effcac(DAT_013ddeb8,&stack0x000009a0,0);
                          if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                            *(undefined8 *)(unaff_x20 + 600) = 0;
                            *(undefined8 *)(unaff_x20 + 0x250) = 0;
                            *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x244) = 0;
                            uVar44 = DAT_013de378;
                            uVar32 = DAT_013de198;
                            uVar30 = DAT_013de110;
                            uVar19 = DAT_013ddf1c;
                            FUN_05effcac(DAT_013ddf18,&stack0x00000960,0);
                            if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                              *(undefined8 *)(unaff_x20 + 0x278) = 0;
                              *(undefined8 *)(unaff_x20 + 0x270) = 0;
                              *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x264) = 0;
                              uVar37 = DAT_013de290;
                              uVar8 = DAT_013ddce4;
                              FUN_05effcac(DAT_013ddb74,DAT_013ddce4,DAT_013de290,DAT_013ddebc,
                                           DAT_013de19c,DAT_013ddb18,DAT_013ddf20,&stack0x00000920,0
                                          );
                              if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                                *(undefined8 *)(unaff_x20 + 0x298) = 0;
                                *(undefined8 *)(unaff_x20 + 0x290) = 0;
                                *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                                *(undefined8 *)(unaff_x20 + 0x284) = 0;
                                FUN_05effcac(DAT_013ddc90,DAT_013ddfe8,DAT_013ddb78,DAT_013de59c,
                                             &stack0x000008e0,0);
                                if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                                  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                                  uVar54 = DAT_013de540;
                                  uVar52 = DAT_013de484;
                                  uVar25 = DAT_013ddff0;
                                  uVar14 = DAT_013dde54;
                                  FUN_05effcac(DAT_013ddc94,&stack0x000008a0,0);
                                  if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                    *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                    uVar47 = DAT_013de3f4;
                                    uVar45 = DAT_013de37c;
                                    uVar40 = DAT_013de2c8;
                                    uVar20 = DAT_013ddf24;
                                    FUN_05effcac(DAT_013ddb1c,&stack0x00000860,0);
                                    if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                      *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                                      uVar51 = DAT_013de438;
                                      uVar48 = DAT_013de3f8;
                                      uVar16 = DAT_013ddec0;
                                      uVar3 = DAT_013ddbc8;
                                      FUN_05effcac(DAT_013dde58,&stack0x00000820,0);
                                      if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                        *(undefined8 *)(unaff_x20 + 0x318) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x310) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x304) = 0;
                                        uVar58 = DAT_013de5a0;
                                        uVar55 = DAT_013de544;
                                        uVar41 = DAT_013de2d4;
                                        uVar4 = DAT_013ddc18;
                                        FUN_05effcac(DAT_013de248,&stack0x000007e0,0);
                                        if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                          *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                          *(undefined8 *)(unaff_x20 + 0x338) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x330) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x324) = 0;
                                          uVar27 = DAT_013de054;
                                          uVar9 = DAT_013ddd3c;
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
                                              lVar61 = thunk_FUN_02cea894(*unaff_x21);
                                              FUN_051e48f8();
                                              lVar62 = FUN_02ce7ad4(*unaff_x22,0x1a);
                                              FUN_05effcac(DAT_013de380,&stack0x00000760,0);
                                              if (lVar62 != 0) {
                                                if (*(int *)(lVar62 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar62 + 0x20) = 1;
                                                  *(undefined8 *)(lVar62 + 0x38) = 0;
                                                  *(undefined8 *)(lVar62 + 0x30) = 0;
                                                  *(undefined8 *)(lVar62 + 0x2c) = 0;
                                                  *(undefined8 *)(lVar62 + 0x24) = 0;
                                                  FUN_05effcac(0,0,0,0,0,0,0x3f800000,
                                                               &stack0x00000700,0);
                                                  if (1 < *(uint *)(lVar62 + 0x18)) {
                                                    *(undefined4 *)(lVar62 + 0x40) = 0xffffffff;
                                                    *(undefined8 *)(lVar62 + 0x58) = 0;
                                                    *(undefined8 *)(lVar62 + 0x50) = 0;
                                                    uVar1 = DAT_013dde00;
                                                    *(undefined8 *)(lVar62 + 0x4c) = 0;
                                                    *(undefined8 *)(lVar62 + 0x44) = 0;
                                                    FUN_05effcac(uVar1,&stack0x000006c0,0);
                                                    if (2 < *(uint *)(lVar62 + 0x18)) {
                                                      *(undefined4 *)(lVar62 + 0x60) = 1;
                                                      *(undefined8 *)(lVar62 + 0x78) = 0;
                                                      *(undefined8 *)(lVar62 + 0x70) = 0;
                                                      uVar1 = DAT_013ddf28;
                                                      *(undefined8 *)(lVar62 + 0x6c) = 0;
                                                      *(undefined8 *)(lVar62 + 100) = 0;
                                                      FUN_05effcac(uVar1,DAT_013ddf2c,DAT_013de54c,
                                                                   DAT_013ddff4,DAT_013ddff8,
                                                                   DAT_013ddb24,DAT_013dde5c,
                                                                   &stack0x00000680,0);
                                                      if (3 < *(uint *)(lVar62 + 0x18)) {
                                                        *(undefined4 *)(lVar62 + 0x80) = 2;
                                                        *(undefined8 *)(lVar62 + 0x98) = 0;
                                                        *(undefined8 *)(lVar62 + 0x90) = 0;
                                                        uVar1 = DAT_013de2d8;
                                                        *(undefined8 *)(lVar62 + 0x8c) = 0;
                                                        *(undefined8 *)(lVar62 + 0x84) = 0;
                                                        FUN_05effcac(uVar1,DAT_013ddffc,DAT_013de550
                                                                     ,DAT_013de144,DAT_013de4e4,
                                                                     DAT_013de0b0,DAT_013de494,
                                                                     &stack0x00000640,0);
                                                        if (4 < *(uint *)(lVar62 + 0x18)) {
                                                          *(undefined4 *)(lVar62 + 0xa0) = 3;
                                                          *(undefined8 *)(lVar62 + 0xb8) = 0;
                                                          *(undefined8 *)(lVar62 + 0xb0) = 0;
                                                          *(undefined8 *)(lVar62 + 0xac) = 0;
                                                          *(undefined8 *)(lVar62 + 0xa4) = 0;
                                                          FUN_05effcac(DAT_013ddf8c,DAT_013de114,
                                                                       DAT_013de058,DAT_013de1ec,0,0
                                                                       ,0x3f800000,&stack0x00000600,
                                                                       0);
                                                          if (5 < *(uint *)(lVar62 + 0x18)) {
                                                            *(undefined4 *)(lVar62 + 0xc0) = 4;
                                                            *(undefined8 *)(lVar62 + 0xd8) = 0;
                                                            *(undefined8 *)(lVar62 + 0xd0) = 0;
                                                            uVar1 = DAT_013ddb28;
                                                            *(undefined8 *)(lVar62 + 0xcc) = 0;
                                                            *(undefined8 *)(lVar62 + 0xc4) = 0;
                                                            FUN_05effcac(uVar1,uVar53,uVar12,0,0,0,
                                                                         0x3f800000,&stack0x000005c0
                                                                         ,0);
                                                            if (6 < *(uint *)(lVar62 + 0x18)) {
                                                              *(undefined4 *)(lVar62 + 0xe0) = 1;
                                                              *(undefined8 *)(lVar62 + 0xf8) = 0;
                                                              *(undefined8 *)(lVar62 + 0xf0) = 0;
                                                              *(undefined8 *)(lVar62 + 0xec) = 0;
                                                              *(undefined8 *)(lVar62 + 0xe4) = 0;
                                                              FUN_05effcac(DAT_013de608,uVar46,
                                                                           uVar42,uVar21,
                                                                           DAT_013de554,DAT_013de2dc
                                                                           ,uVar59,&stack0x00000580,
                                                                           0);
                                                              if (7 < *(uint *)(lVar62 + 0x18)) {
                                                                *(undefined4 *)(lVar62 + 0x100) = 6;
                                                                *(undefined8 *)(lVar62 + 0x118) = 0;
                                                                *(undefined8 *)(lVar62 + 0x110) = 0;
                                                                *(undefined8 *)(lVar62 + 0x10c) = 0;
                                                                *(undefined8 *)(lVar62 + 0x104) = 0;
                                                                FUN_05effcac(DAT_013de000,
                                                                             DAT_013de4e8,
                                                                             DAT_013dde04,uVar10,
                                                                             DAT_013ddf90,
                                                                             DAT_013de344,uVar49,
                                                                             &stack0x00000540,0);
                                                                if (8 < *(uint *)(lVar62 + 0x18)) {
                                                                  *(undefined4 *)(lVar62 + 0x120) =
                                                                       7;
                                                                  *(undefined8 *)(lVar62 + 0x138) =
                                                                       0;
                                                                  *(undefined8 *)(lVar62 + 0x130) =
                                                                       0;
                                                                  *(undefined8 *)(lVar62 + 300) = 0;
                                                                  *(undefined8 *)(lVar62 + 0x124) =
                                                                       0;
                                                                  FUN_05effcac(DAT_013de24c,uVar33,
                                                                               uVar56,uVar35,
                                                                               DAT_013ddda0,
                                                                               DAT_013dde08,uVar28,
                                                                               &stack0x00000500,0);
                                                                  if (9 < *(uint *)(lVar62 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar62 + 0x140)
                                                                         = 8;
                                                                    *(undefined8 *)(lVar62 + 0x158)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar62 + 0x150)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar62 + 0x14c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar62 + 0x144)
                                                                         = 0;
                                                                    FUN_05effcac(DAT_013ddf30,
                                                                                 DAT_013de004,
                                                                                 DAT_013de348,0,
                                                                                 DAT_013ddf94,0,
                                                                                 0x3f800000,
                                                                                 &stack0x000004c0,0)
                                                                    ;
                                                                    if (10 < *(uint *)(lVar62 + 0x18
                                                                                      )) {
                                                                      *(undefined4 *)
                                                                       (lVar62 + 0x160) = 9;
                                                                      *(undefined8 *)
                                                                       (lVar62 + 0x178) = 0;
                                                                      *(undefined8 *)
                                                                       (lVar62 + 0x170) = 0;
                                                                      *(undefined8 *)
                                                                       (lVar62 + 0x16c) = 0;
                                                                      *(undefined8 *)
                                                                       (lVar62 + 0x164) = 0;
                                                                      FUN_05effcac(DAT_013de2e0,
                                                                                   uVar17,uVar2,0,0,
                                                                                   0,0x3f800000,
                                                                                   &stack0x00000480,
                                                                                   0);
                                                                      if (0xb < *(uint *)(lVar62 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar62 + 0x180) = 1;
                                                    *(undefined8 *)(lVar62 + 0x198) = 0;
                                                    *(undefined8 *)(lVar62 + 400) = 0;
                                                    *(undefined8 *)(lVar62 + 0x18c) = 0;
                                                    *(undefined8 *)(lVar62 + 0x184) = 0;
                                                    FUN_05effcac(DAT_013de34c,uVar29,uVar22,uVar7,
                                                                 DAT_013de1a4,DAT_013ddec8,uVar15,
                                                                 &stack0x00000440,0);
                                                    if (0xc < *(uint *)(lVar62 + 0x18)) {
                                                      *(undefined4 *)(lVar62 + 0x1a0) = 0xb;
                                                      *(undefined8 *)(lVar62 + 0x1b8) = 0;
                                                      *(undefined8 *)(lVar62 + 0x1b0) = 0;
                                                      *(undefined8 *)(lVar62 + 0x1ac) = 0;
                                                      *(undefined8 *)(lVar62 + 0x1a4) = 0;
                                                      FUN_05effcac(DAT_013de008,uVar11,uVar31,uVar5,
                                                                   DAT_013de05c,DAT_013de1a8,uVar6,
                                                                   &stack0x00000400,0);
                                                      if (0xd < *(uint *)(lVar62 + 0x18)) {
                                                        *(undefined4 *)(lVar62 + 0x1c0) = 0xc;
                                                        *(undefined8 *)(lVar62 + 0x1d8) = 0;
                                                        *(undefined8 *)(lVar62 + 0x1d0) = 0;
                                                        *(undefined8 *)(lVar62 + 0x1cc) = 0;
                                                        *(undefined8 *)(lVar62 + 0x1c4) = 0;
                                                        FUN_05effcac(DAT_013ddb2c,uVar36,uVar26,
                                                                     uVar23,DAT_013de1ac,
                                                                     DAT_013de1f0,uVar34,
                                                                     &stack0x000003c0,0);
                                                        if (0xe < *(uint *)(lVar62 + 0x18)) {
                                                          *(undefined4 *)(lVar62 + 0x1e0) = 0xd;
                                                          *(undefined8 *)(lVar62 + 0x1f8) = 0;
                                                          *(undefined8 *)(lVar62 + 0x1f0) = 0;
                                                          *(undefined8 *)(lVar62 + 0x1ec) = 0;
                                                          *(undefined8 *)(lVar62 + 0x1e4) = 0;
                                                          FUN_05effcac(DAT_013de148,uVar38,uVar60,
                                                                       uVar50,0xa2800000,0xa3000000,
                                                                       0x3f800000,&stack0x00000380,0
                                                                      );
                                                          if (0xf < *(uint *)(lVar62 + 0x18)) {
                                                            *(undefined4 *)(lVar62 + 0x200) = 0xe;
                                                            *(undefined8 *)(lVar62 + 0x218) = 0;
                                                            *(undefined8 *)(lVar62 + 0x210) = 0;
                                                            *(undefined8 *)(lVar62 + 0x20c) = 0;
                                                            *(undefined8 *)(lVar62 + 0x204) = 0;
                                                            FUN_05effcac(DAT_013ddb7c,uVar43,uVar39,
                                                                         0,0,0,0x3f800000,
                                                                         &stack0x00000340,0);
                                                            if (0x10 < *(uint *)(lVar62 + 0x18)) {
                                                              *(undefined4 *)(lVar62 + 0x220) = 1;
                                                              *(undefined8 *)(lVar62 + 0x238) = 0;
                                                              *(undefined8 *)(lVar62 + 0x230) = 0;
                                                              *(undefined8 *)(lVar62 + 0x22c) = 0;
                                                              *(undefined8 *)(lVar62 + 0x224) = 0;
                                                              FUN_05effcac(DAT_013ddecc,uVar24,
                                                                           uVar13,uVar18,
                                                                           DAT_013de60c,DAT_013de5a4
                                                                           ,uVar57,&stack0x00000300,
                                                                           0);
                                                              if (0x11 < *(uint *)(lVar62 + 0x18)) {
                                                                *(undefined4 *)(lVar62 + 0x240) =
                                                                     0x10;
                                                                *(undefined8 *)(lVar62 + 600) = 0;
                                                                *(undefined8 *)(lVar62 + 0x250) = 0;
                                                                *(undefined8 *)(lVar62 + 0x24c) = 0;
                                                                *(undefined8 *)(lVar62 + 0x244) = 0;
                                                                FUN_05effcac(DAT_013ddce8,uVar30,
                                                                             uVar19,uVar32,
                                                                             DAT_013de2e4,
                                                                             DAT_013ddda4,uVar44,
                                                                             &stack0x000002c0,0);
                                                                if (0x12 < *(uint *)(lVar62 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar62 + 0x260) =
                                                                       0x11;
                                                                  *(undefined8 *)(lVar62 + 0x278) =
                                                                       0;
                                                                  *(undefined8 *)(lVar62 + 0x270) =
                                                                       0;
                                                                  *(undefined8 *)(lVar62 + 0x26c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar62 + 0x264) =
                                                                       0;
                                                                  FUN_05effcac(DAT_013ddd44,uVar8,
                                                                               uVar37,DAT_013de294,
                                                                               DAT_013ddc1c,
                                                                               DAT_013ddd48,
                                                                               DAT_013de1b0,
                                                                               &stack0x00000280,0);
                                                                  if (0x13 < *(uint *)(lVar62 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar62 + 0x280)
                                                                         = 0x12;
                                                                    *(undefined8 *)(lVar62 + 0x298)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar62 + 0x290)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar62 + 0x28c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar62 + 0x284)
                                                                         = 0;
                                                                    FUN_05effcac(DAT_013de2e8,
                                                                                 DAT_013de384,
                                                                                 DAT_013de43c,uVar50
                                                                                 ,DAT_013ddc20,
                                                                                 0x88000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000240,0)
                                                                    ;
                                                                    if (0x14 < *(uint *)(lVar62 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar62 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar62 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar62 + 0x2b0) = 0;
                                                    *(undefined8 *)(lVar62 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar62 + 0x2a4) = 0;
                                                    FUN_05effcac(DAT_013de4ec,uVar25,uVar54,uVar14,
                                                                 DAT_013de498,DAT_013de440,uVar52,
                                                                 &stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar62 + 0x18)) {
                                                      *(undefined4 *)(lVar62 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar62 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar62 + 0x2d0) = 0;
                                                      *(undefined8 *)(lVar62 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar62 + 0x2c4) = 0;
                                                      in_stack_000001c0 = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      in_stack_000001d8 = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      FUN_05effcac(DAT_013ddc24,uVar45,uVar40,uVar20
                                                                   ,DAT_013ddd4c,DAT_013ddbcc,uVar47
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
                                                      if (0x16 < *(uint *)(lVar62 + 0x18)) {
                                                        *(undefined4 *)(lVar62 + 0x2e0) = 0x15;
                                                        *(undefined8 *)(lVar62 + 0x2f8) =
                                                             uStack00000000000001b4;
                                                        *(ulong *)(lVar62 + 0x2f0) =
                                                             CONCAT44(uStack00000000000001d0,
                                                                      uStack00000000000001cc);
                                                        *(ulong *)(lVar62 + 0x2ec) =
                                                             CONCAT44(uStack00000000000001cc,
                                                                      uStack00000000000001c8);
                                                        *(undefined8 *)(lVar62 + 0x2e4) =
                                                             in_stack_000001c0;
                                                        in_stack_00000180 = 0;
                                                        uStack0000000000000188 = 0;
                                                        uStack000000000000018c = 0;
                                                        in_stack_00000198 = 0;
                                                        uStack0000000000000190 = 0;
                                                        uStack0000000000000194 = 0;
                                                        FUN_05effcac(DAT_013de350,uVar3,uVar48,
                                                                     uVar16,DAT_013de1b4,
                                                                     DAT_013ddb80,uVar51,
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
                                                        if (0x17 < *(uint *)(lVar62 + 0x18)) {
                                                          *(undefined4 *)(lVar62 + 0x300) = 0x16;
                                                          *(undefined8 *)(lVar62 + 0x318) =
                                                               uStack0000000000000174;
                                                          *(ulong *)(lVar62 + 0x310) =
                                                               CONCAT44(uStack0000000000000190,
                                                                        uStack000000000000018c);
                                                          *(ulong *)(lVar62 + 0x30c) =
                                                               CONCAT44(uStack000000000000018c,
                                                                        uStack0000000000000188);
                                                          *(undefined8 *)(lVar62 + 0x304) =
                                                               in_stack_00000180;
                                                          in_stack_00000140 = 0;
                                                          uStack0000000000000148 = 0;
                                                          uStack000000000000014c = 0;
                                                          in_stack_00000158 = 0;
                                                          uStack0000000000000150 = 0;
                                                          uStack0000000000000154 = 0;
                                                          FUN_05effcac(DAT_013de4f0,uVar58,uVar55,
                                                                       uVar41,DAT_013de2ec,
                                                                       DAT_013ddf34,uVar4,
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
                                                          if (0x18 < *(uint *)(lVar62 + 0x18)) {
                                                            *(undefined4 *)(lVar62 + 800) = 0x17;
                                                            *(undefined8 *)(lVar62 + 0x338) =
                                                                 uStack0000000000000134;
                                                            *(ulong *)(lVar62 + 0x330) =
                                                                 CONCAT44(uStack0000000000000150,
                                                                          uStack000000000000014c);
                                                            *(ulong *)(lVar62 + 0x32c) =
                                                                 CONCAT44(uStack000000000000014c,
                                                                          uStack0000000000000148);
                                                            *(undefined8 *)(lVar62 + 0x324) =
                                                                 in_stack_00000140;
                                                            in_stack_00000100 = 0;
                                                            uStack0000000000000108 = 0;
                                                            uStack000000000000010c = 0;
                                                            in_stack_00000118 = 0;
                                                            uStack0000000000000110 = 0;
                                                            uStack0000000000000114 = 0;
                                                            FUN_05effcac(DAT_013de14c,uVar27,uVar9,
                                                                         &stack0x00000100,0);
                                                            if (0x19 < *(uint *)(lVar62 + 0x18)) {
                                                              *(undefined4 *)(lVar62 + 0x340) = 0x18
                                                              ;
                                                              *(ulong *)(lVar62 + 0x358) =
                                                                   CONCAT44(in_stack_00000118,
                                                                            uStack0000000000000114);
                                                              *(ulong *)(lVar62 + 0x350) =
                                                                   CONCAT44(uStack0000000000000110,
                                                                            uStack000000000000010c);
                                                              *(ulong *)(lVar62 + 0x34c) =
                                                                   CONCAT44(uStack000000000000010c,
                                                                            uStack0000000000000108);
                                                              *(undefined8 *)(lVar62 + 0x344) =
                                                                   in_stack_00000100;
                                                              if (lVar61 != 0) {
                                                                *(long *)(lVar61 + 0x10) = lVar62;
                                                                *(long *)(*(long *)(*unaff_x21 +
                                                                                   0xb8) + 8) =
                                                                     lVar61;
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
LAB_051e64ec:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


