/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 01a2c2a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SaveSpaceList(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

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
  long lVar47;
  long lVar48;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 uVar49;
  ulong uVar50;
  undefined4 unaff_s9;
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
  undefined4 in_stack_000000d8;
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
  
  *(long *)(unaff_x20 + 0x178) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x170) = param_2._0_8_;
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  uStack00000000000000b0 = DAT_02945928;
  uStack00000000000000b4 = DAT_0294592c;
  FUN_02666aac(DAT_02945924,DAT_02945928,DAT_0294592c,0,0,0,0x3f800000,&stack0x00000b20,0);
  *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x24 + 0xd4);
  *(undefined8 *)(unaff_x24 + 0xac) = *(undefined8 *)(unaff_x24 + 0xcc);
  if (0xb < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x180) = 1;
    uVar49 = *(undefined8 *)(unaff_x24 + 0xac);
    *(undefined8 *)(unaff_x20 + 0x198) = *(undefined8 *)(unaff_x24 + 0xb4);
    *(undefined8 *)(unaff_x20 + 400) = uVar49;
    *(undefined8 *)(unaff_x20 + 0x18c) = 0;
    *(undefined8 *)(unaff_x20 + 0x184) = 0;
    uVar4 = DAT_02945948;
    uVar3 = DAT_0294593c;
    uVar2 = DAT_02945938;
    uVar1 = DAT_02945934;
    FUN_02666aac(DAT_02945930,&stack0x00000ae0,0);
    *(undefined8 *)(unaff_x24 + 0x74) = *(undefined8 *)(unaff_x24 + 0x94);
    *(undefined8 *)(unaff_x24 + 0x6c) = *(undefined8 *)(unaff_x24 + 0x8c);
    if (0xc < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
      uVar49 = *(undefined8 *)(unaff_x24 + 0x6c);
      *(undefined8 *)(unaff_x20 + 0x1b8) = *(undefined8 *)(unaff_x24 + 0x74);
      *(undefined8 *)(unaff_x20 + 0x1b0) = uVar49;
      *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
      *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
      uVar8 = DAT_02945964;
      uVar7 = DAT_02945958;
      uVar6 = DAT_02945954;
      uVar5 = DAT_02945950;
      FUN_02666aac(DAT_0294594c,&stack0x00000aa0,0);
      *(undefined8 *)(unaff_x24 + 0x34) = *(undefined8 *)(unaff_x24 + 0x54);
      *(undefined8 *)(unaff_x24 + 0x2c) = *(undefined8 *)(unaff_x24 + 0x4c);
      if (0xd < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
        uVar49 = *(undefined8 *)(unaff_x24 + 0x2c);
        *(undefined8 *)(unaff_x20 + 0x1d8) = *(undefined8 *)(unaff_x24 + 0x34);
        *(undefined8 *)(unaff_x20 + 0x1d0) = uVar49;
        *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
        *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
        uVar12 = DAT_02945980;
        uVar11 = DAT_02945974;
        uVar10 = DAT_02945970;
        uVar9 = DAT_0294596c;
        uStack00000000000000dc = unaff_s9;
        FUN_02666aac(DAT_02945968,&stack0x00000a60,0);
        uVar49 = *(undefined8 *)(unaff_x24 + 0x14);
        uVar50 = *(ulong *)(unaff_x24 + 0xc);
        if (0xe < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
          *(undefined8 *)(unaff_x20 + 0x1f8) = uVar49;
          *(ulong *)(unaff_x20 + 0x1f0) = uVar50 & 0xffffffff00000000;
          *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
          *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
          uVar15 = DAT_02945990;
          uVar14 = DAT_0294598c;
          uVar13 = DAT_02945988;
          FUN_02666aac(DAT_02945984,DAT_02945988,DAT_0294598c,DAT_02945990,0x22800000,0x23000000,
                       0x3f800000,&stack0x00000a20,0);
          if (0xf < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
            *(undefined8 *)(unaff_x20 + 0x218) = 0;
            *(undefined8 *)(unaff_x20 + 0x210) = 0;
            *(undefined8 *)(unaff_x20 + 0x20c) = 0;
            *(undefined8 *)(unaff_x20 + 0x204) = 0;
            uVar17 = DAT_0294599c;
            uVar16 = DAT_02945998;
            FUN_02666aac(DAT_02945994,DAT_02945998,DAT_0294599c,0,0,0,0x3f800000,&stack0x000009e0,0)
            ;
            if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x220) = 1;
              *(undefined8 *)(unaff_x20 + 0x238) = 0;
              *(undefined8 *)(unaff_x20 + 0x230) = 0;
              *(undefined8 *)(unaff_x20 + 0x22c) = 0;
              *(undefined8 *)(unaff_x20 + 0x224) = 0;
              uVar21 = DAT_029459b8;
              uVar20 = DAT_029459ac;
              uVar19 = DAT_029459a8;
              uVar18 = DAT_029459a4;
              FUN_02666aac(DAT_029459a0,&stack0x000009a0,0);
              if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                *(undefined8 *)(unaff_x20 + 600) = 0;
                *(undefined8 *)(unaff_x20 + 0x250) = 0;
                *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                *(undefined8 *)(unaff_x20 + 0x244) = 0;
                uVar25 = DAT_029459d4;
                uVar24 = DAT_029459c8;
                uVar23 = DAT_029459c4;
                uVar22 = DAT_029459c0;
                FUN_02666aac(DAT_029459bc,&stack0x00000960,0);
                if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                  *(undefined8 *)(unaff_x20 + 0x278) = 0;
                  *(undefined8 *)(unaff_x20 + 0x270) = 0;
                  *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x264) = 0;
                  uVar27 = DAT_029459e0;
                  uVar26 = DAT_029459dc;
                  FUN_02666aac(DAT_029459d8,DAT_029459dc,DAT_029459e0,DAT_029459e4,DAT_029459e8,
                               DAT_029459ec,DAT_029459f0,&stack0x00000920,0);
                  if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                    *(undefined8 *)(unaff_x20 + 0x298) = 0;
                    *(undefined8 *)(unaff_x20 + 0x290) = 0;
                    *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x284) = 0;
                    FUN_02666aac(DAT_029459f4,DAT_029459f8,DAT_029459fc,DAT_02945a00,
                                 &stack0x000008e0,0);
                    if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                      *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                      uVar31 = DAT_02945a20;
                      uVar30 = DAT_02945a14;
                      uVar29 = DAT_02945a10;
                      uVar28 = DAT_02945a0c;
                      FUN_02666aac(DAT_02945a08,&stack0x000008a0,0);
                      if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                        *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                        *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                        *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                        *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                        uVar35 = DAT_02945a3c;
                        uVar34 = DAT_02945a30;
                        uVar33 = DAT_02945a2c;
                        uVar32 = DAT_02945a28;
                        FUN_02666aac(DAT_02945a24,&stack0x00000860,0);
                        if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                          *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                          *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                          *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                          *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                          uVar39 = DAT_02945a58;
                          uVar38 = DAT_02945a4c;
                          uVar37 = DAT_02945a48;
                          uVar36 = DAT_02945a44;
                          FUN_02666aac(DAT_02945a40,&stack0x00000820,0);
                          if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                            *(undefined8 *)(unaff_x20 + 0x318) = 0;
                            *(undefined8 *)(unaff_x20 + 0x310) = 0;
                            *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x304) = 0;
                            uVar43 = DAT_02945a74;
                            uVar42 = DAT_02945a68;
                            uVar41 = DAT_02945a64;
                            uVar40 = DAT_02945a60;
                            FUN_02666aac(DAT_02945a5c,&stack0x000007e0,0);
                            if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 800) = 0x17;
                              *(undefined8 *)(unaff_x20 + 0x338) = 0;
                              *(undefined8 *)(unaff_x20 + 0x330) = 0;
                              *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x324) = 0;
                              uVar45 = DAT_02945a80;
                              uVar44 = DAT_02945a7c;
                              FUN_02666aac(DAT_02945a78,&stack0x000007a0,0);
                              if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                                *(undefined8 *)(unaff_x20 + 0x358) = 0;
                                *(undefined8 *)(unaff_x20 + 0x350) = 0;
                                *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                                *(undefined8 *)(unaff_x20 + 0x344) = 0;
                                *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                                lVar47 = thunk_FUN_00d62348(*unaff_x21);
                                if (lVar47 != 0) {
                                  FUN_01a2bbe0();
                                  lVar48 = FUN_00da4fb8(*unaff_x22,0x1a);
                                  FUN_02666aac(DAT_02945a88,&stack0x00000760,0);
                                  if (lVar48 != 0) {
                                    if (*(int *)(lVar48 + 0x18) != 0) {
                                      *(undefined4 *)(lVar48 + 0x20) = 1;
                                      *(undefined8 *)(lVar48 + 0x38) = 0;
                                      *(undefined8 *)(lVar48 + 0x30) = 0;
                                      *(undefined8 *)(lVar48 + 0x2c) = 0;
                                      *(undefined8 *)(lVar48 + 0x24) = 0;
                                      FUN_02666aac(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                                      if (1 < *(uint *)(lVar48 + 0x18)) {
                                        *(undefined4 *)(lVar48 + 0x40) = 0xffffffff;
                                        *(undefined8 *)(lVar48 + 0x58) = 0;
                                        *(undefined8 *)(lVar48 + 0x50) = 0;
                                        uVar46 = DAT_02945a8c;
                                        *(undefined8 *)(lVar48 + 0x4c) = 0;
                                        *(undefined8 *)(lVar48 + 0x44) = 0;
                                        FUN_02666aac(uVar46,&stack0x000006c0,0);
                                        if (2 < *(uint *)(lVar48 + 0x18)) {
                                          *(undefined4 *)(lVar48 + 0x60) = 1;
                                          *(undefined8 *)(lVar48 + 0x78) = 0;
                                          *(undefined8 *)(lVar48 + 0x70) = 0;
                                          uVar46 = DAT_02945aa0;
                                          *(undefined8 *)(lVar48 + 0x6c) = 0;
                                          *(undefined8 *)(lVar48 + 100) = 0;
                                          FUN_02666aac(uVar46,DAT_02945aa4,DAT_02945aa8,DAT_02945aac
                                                       ,DAT_02945ab0,DAT_02945ab4,DAT_02945ab8,
                                                       &stack0x00000680,0);
                                          if (3 < *(uint *)(lVar48 + 0x18)) {
                                            *(undefined4 *)(lVar48 + 0x80) = 2;
                                            *(undefined8 *)(lVar48 + 0x98) = 0;
                                            *(undefined8 *)(lVar48 + 0x90) = 0;
                                            uVar46 = DAT_02945abc;
                                            *(undefined8 *)(lVar48 + 0x8c) = 0;
                                            *(undefined8 *)(lVar48 + 0x84) = 0;
                                            FUN_02666aac(uVar46,DAT_02945ac0,DAT_02945ac4,
                                                         DAT_02945ac8,DAT_02945acc,DAT_02945ad0,
                                                         DAT_02945ad4,&stack0x00000640,0);
                                            if (4 < *(uint *)(lVar48 + 0x18)) {
                                              *(undefined4 *)(lVar48 + 0xa0) = 3;
                                              *(undefined8 *)(lVar48 + 0xb8) = 0;
                                              *(undefined8 *)(lVar48 + 0xb0) = 0;
                                              *(undefined8 *)(lVar48 + 0xac) = 0;
                                              *(undefined8 *)(lVar48 + 0xa4) = 0;
                                              FUN_02666aac(DAT_02945ad8,DAT_02945adc,DAT_02945ae0,
                                                           DAT_02945ae4,0,0,0x3f800000,
                                                           &stack0x00000600,0);
                                              if (5 < *(uint *)(lVar48 + 0x18)) {
                                                *(undefined4 *)(lVar48 + 0xc0) = 4;
                                                *(undefined8 *)(lVar48 + 0xd8) = 0;
                                                *(undefined8 *)(lVar48 + 0xd0) = 0;
                                                uVar46 = DAT_02945ae8;
                                                *(undefined8 *)(lVar48 + 0xcc) = 0;
                                                *(undefined8 *)(lVar48 + 0xc4) = 0;
                                                FUN_02666aac(uVar46,&stack0x000005c0,0);
                                                if (6 < *(uint *)(lVar48 + 0x18)) {
                                                  *(undefined4 *)(lVar48 + 0xe0) = 1;
                                                  *(undefined8 *)(lVar48 + 0xf8) = 0;
                                                  *(undefined8 *)(lVar48 + 0xf0) = 0;
                                                  *(undefined8 *)(lVar48 + 0xec) = 0;
                                                  *(undefined8 *)(lVar48 + 0xe4) = 0;
                                                  FUN_02666aac(DAT_02945aec,uStack00000000000000dc,
                                                               in_stack_000000d8,
                                                               uStack00000000000000d4,DAT_02945af0,
                                                               DAT_02945af4,uStack00000000000000d0,
                                                               &stack0x00000580,0);
                                                  if (7 < *(uint *)(lVar48 + 0x18)) {
                                                    *(undefined4 *)(lVar48 + 0x100) = 6;
                                                    *(undefined8 *)(lVar48 + 0x118) = 0;
                                                    *(undefined8 *)(lVar48 + 0x110) = 0;
                                                    *(undefined8 *)(lVar48 + 0x10c) = 0;
                                                    *(undefined8 *)(lVar48 + 0x104) = 0;
                                                    FUN_02666aac(DAT_02945af8,DAT_02945afc,
                                                                 DAT_02945b00,uStack00000000000000cc
                                                                 ,DAT_02945b04,DAT_02945b08,
                                                                 uStack00000000000000c8,
                                                                 &stack0x00000540,0);
                                                    if (8 < *(uint *)(lVar48 + 0x18)) {
                                                      *(undefined4 *)(lVar48 + 0x120) = 7;
                                                      *(undefined8 *)(lVar48 + 0x138) = 0;
                                                      *(undefined8 *)(lVar48 + 0x130) = 0;
                                                      *(undefined8 *)(lVar48 + 300) = 0;
                                                      *(undefined8 *)(lVar48 + 0x124) = 0;
                                                      FUN_02666aac(DAT_02945b0c,
                                                                   uStack00000000000000c4,
                                                                   uStack00000000000000c0,
                                                                   uStack00000000000000bc,
                                                                   DAT_02945b10,DAT_02945b14,
                                                                   uStack00000000000000b8,
                                                                   &stack0x00000500,0);
                                                      if (9 < *(uint *)(lVar48 + 0x18)) {
                                                        *(undefined4 *)(lVar48 + 0x140) = 8;
                                                        *(undefined8 *)(lVar48 + 0x158) = 0;
                                                        *(undefined8 *)(lVar48 + 0x150) = 0;
                                                        *(undefined8 *)(lVar48 + 0x14c) = 0;
                                                        *(undefined8 *)(lVar48 + 0x144) = 0;
                                                        FUN_02666aac(DAT_02945b18,DAT_02945b1c,
                                                                     DAT_02945b20,0,DAT_02945b24,0,
                                                                     0x3f800000,&stack0x000004c0,0);
                                                        if (10 < *(uint *)(lVar48 + 0x18)) {
                                                          *(undefined4 *)(lVar48 + 0x160) = 9;
                                                          *(undefined8 *)(lVar48 + 0x178) = 0;
                                                          *(undefined8 *)(lVar48 + 0x170) = 0;
                                                          *(undefined8 *)(lVar48 + 0x16c) = 0;
                                                          *(undefined8 *)(lVar48 + 0x164) = 0;
                                                          FUN_02666aac(DAT_02945b28,
                                                                       uStack00000000000000b0,
                                                                       uStack00000000000000b4,0,0,0,
                                                                       0x3f800000,&stack0x00000480,0
                                                                      );
                                                          if (0xb < *(uint *)(lVar48 + 0x18)) {
                                                            *(undefined4 *)(lVar48 + 0x180) = 1;
                                                            *(undefined8 *)(lVar48 + 0x198) = 0;
                                                            *(undefined8 *)(lVar48 + 400) = 0;
                                                            *(undefined8 *)(lVar48 + 0x18c) = 0;
                                                            *(undefined8 *)(lVar48 + 0x184) = 0;
                                                            FUN_02666aac(DAT_02945b2c,uVar1,uVar2,
                                                                         uVar3,DAT_02945b30,
                                                                         DAT_02945b34,uVar4,
                                                                         &stack0x00000440,0);
                                                            if (0xc < *(uint *)(lVar48 + 0x18)) {
                                                              *(undefined4 *)(lVar48 + 0x1a0) = 0xb;
                                                              *(undefined8 *)(lVar48 + 0x1b8) = 0;
                                                              *(undefined8 *)(lVar48 + 0x1b0) = 0;
                                                              *(undefined8 *)(lVar48 + 0x1ac) = 0;
                                                              *(undefined8 *)(lVar48 + 0x1a4) = 0;
                                                              FUN_02666aac(DAT_02945b38,uVar5,uVar6,
                                                                           uVar7,DAT_02945b3c,
                                                                           DAT_02945b40,uVar8,
                                                                           &stack0x00000400,0);
                                                              if (0xd < *(uint *)(lVar48 + 0x18)) {
                                                                *(undefined4 *)(lVar48 + 0x1c0) =
                                                                     0xc;
                                                                *(undefined8 *)(lVar48 + 0x1d8) = 0;
                                                                *(undefined8 *)(lVar48 + 0x1d0) = 0;
                                                                *(undefined8 *)(lVar48 + 0x1cc) = 0;
                                                                *(undefined8 *)(lVar48 + 0x1c4) = 0;
                                                                FUN_02666aac(DAT_02945b44,uVar9,
                                                                             uVar10,uVar11,
                                                                             DAT_02945b48,
                                                                             DAT_02945b4c,uVar12,
                                                                             &stack0x000003c0,0);
                                                                if (0xe < *(uint *)(lVar48 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar48 + 0x1e0) =
                                                                       0xd;
                                                                  *(undefined8 *)(lVar48 + 0x1f8) =
                                                                       0;
                                                                  *(undefined8 *)(lVar48 + 0x1f0) =
                                                                       0;
                                                                  *(undefined8 *)(lVar48 + 0x1ec) =
                                                                       0;
                                                                  *(undefined8 *)(lVar48 + 0x1e4) =
                                                                       0;
                                                                  FUN_02666aac(DAT_02945b50,uVar13,
                                                                               uVar14,uVar15,
                                                                               0xa2800000,0xa3000000
                                                                               ,0x3f800000,
                                                                               &stack0x00000380,0);
                                                                  if (0xf < *(uint *)(lVar48 + 0x18)
                                                                     ) {
                                                                    *(undefined4 *)(lVar48 + 0x200)
                                                                         = 0xe;
                                                                    *(undefined8 *)(lVar48 + 0x218)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar48 + 0x210)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar48 + 0x20c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar48 + 0x204)
                                                                         = 0;
                                                                    FUN_02666aac(DAT_02945b54,uVar16
                                                                                 ,uVar17,0,0,0,
                                                                                 0x3f800000,
                                                                                 &stack0x00000340,0)
                                                                    ;
                                                                    if (0x10 < *(uint *)(lVar48 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar48 + 0x220) = 1;
                                                    *(undefined8 *)(lVar48 + 0x238) = 0;
                                                    *(undefined8 *)(lVar48 + 0x230) = 0;
                                                    *(undefined8 *)(lVar48 + 0x22c) = 0;
                                                    *(undefined8 *)(lVar48 + 0x224) = 0;
                                                    FUN_02666aac(DAT_02945b58,uVar18,uVar19,uVar20,
                                                                 DAT_02945b5c,DAT_02945b60,uVar21,
                                                                 &stack0x00000300,0);
                                                    if (0x11 < *(uint *)(lVar48 + 0x18)) {
                                                      *(undefined4 *)(lVar48 + 0x240) = 0x10;
                                                      *(undefined8 *)(lVar48 + 600) = 0;
                                                      *(undefined8 *)(lVar48 + 0x250) = 0;
                                                      *(undefined8 *)(lVar48 + 0x24c) = 0;
                                                      *(undefined8 *)(lVar48 + 0x244) = 0;
                                                      FUN_02666aac(DAT_02945b64,uVar22,uVar23,uVar24
                                                                   ,DAT_02945b68,DAT_02945b6c,uVar25
                                                                   ,&stack0x000002c0,0);
                                                      if (0x12 < *(uint *)(lVar48 + 0x18)) {
                                                        *(undefined4 *)(lVar48 + 0x260) = 0x11;
                                                        *(undefined8 *)(lVar48 + 0x278) = 0;
                                                        *(undefined8 *)(lVar48 + 0x270) = 0;
                                                        *(undefined8 *)(lVar48 + 0x26c) = 0;
                                                        *(undefined8 *)(lVar48 + 0x264) = 0;
                                                        FUN_02666aac(DAT_02945b70,uVar26,uVar27,
                                                                     DAT_02945b74,DAT_02945b78,
                                                                     DAT_02945b7c,DAT_02945b80,
                                                                     &stack0x00000280,0);
                                                        if (0x13 < *(uint *)(lVar48 + 0x18)) {
                                                          *(undefined4 *)(lVar48 + 0x280) = 0x12;
                                                          *(undefined8 *)(lVar48 + 0x298) = 0;
                                                          *(undefined8 *)(lVar48 + 0x290) = 0;
                                                          *(undefined8 *)(lVar48 + 0x28c) = 0;
                                                          *(undefined8 *)(lVar48 + 0x284) = 0;
                                                          FUN_02666aac(DAT_02945b84,DAT_02945b88,
                                                                       DAT_02945b8c,uVar15,
                                                                       DAT_02945b90,0x88000000,
                                                                       0x3f800000,&stack0x00000240,0
                                                                      );
                                                          if (0x14 < *(uint *)(lVar48 + 0x18)) {
                                                            *(undefined4 *)(lVar48 + 0x2a0) = 0x13;
                                                            *(undefined8 *)(lVar48 + 0x2b8) = 0;
                                                            *(undefined8 *)(lVar48 + 0x2b0) = 0;
                                                            *(undefined8 *)(lVar48 + 0x2ac) = 0;
                                                            *(undefined8 *)(lVar48 + 0x2a4) = 0;
                                                            FUN_02666aac(DAT_02945b94,uVar28,uVar29,
                                                                         uVar30,DAT_02945b98,
                                                                         DAT_02945b9c,uVar31,
                                                                         &stack0x00000200,0);
                                                            in_stack_000001e0 = 0;
                                                            uStack00000000000001e8 = 0;
                                                            uStack00000000000001ec = 0;
                                                            in_stack_000001f0 = 0;
                                                            if (0x15 < *(uint *)(lVar48 + 0x18)) {
                                                              *(undefined4 *)(lVar48 + 0x2c0) = 1;
                                                              *(undefined8 *)(lVar48 + 0x2d8) = 0;
                                                              *(undefined8 *)(lVar48 + 0x2d0) = 0;
                                                              *(undefined8 *)(lVar48 + 0x2cc) = 0;
                                                              *(undefined8 *)(lVar48 + 0x2c4) = 0;
                                                              uStack00000000000001c8 = 0;
                                                              uStack00000000000001cc = 0;
                                                              uStack00000000000001d0 = 0;
                                                              uStack00000000000001d4 = 0;
                                                              in_stack_000001c0 = 0;
                                                              in_stack_000001d8 = 0;
                                                              FUN_02666aac(DAT_02945ba0,uVar32,
                                                                           uVar33,uVar34,
                                                                           DAT_02945ba4,DAT_02945ba8
                                                                           ,uVar35,&stack0x000001c0,
                                                                           0);
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
                                                              if (0x16 < *(uint *)(lVar48 + 0x18)) {
                                                                *(undefined4 *)(lVar48 + 0x2e0) =
                                                                     0x15;
                                                                *(undefined8 *)(lVar48 + 0x2f8) =
                                                                     uStack00000000000001b4;
                                                                *(ulong *)(lVar48 + 0x2f0) =
                                                                     CONCAT44(uStack00000000000001d0
                                                                              ,
                                                  uStack00000000000001cc);
                                                  *(ulong *)(lVar48 + 0x2ec) =
                                                       CONCAT44(uStack00000000000001cc,
                                                                uStack00000000000001c8);
                                                  *(undefined8 *)(lVar48 + 0x2e4) =
                                                       in_stack_000001c0;
                                                  uStack0000000000000188 = 0;
                                                  uStack000000000000018c = 0;
                                                  uStack0000000000000190 = 0;
                                                  uStack0000000000000194 = 0;
                                                  in_stack_00000180 = 0;
                                                  in_stack_00000198 = 0;
                                                  FUN_02666aac(DAT_02945bac,uVar36,uVar37,uVar38,
                                                               DAT_02945bb0,DAT_02945bb4,uVar39,
                                                               &stack0x00000180,0);
                                                  uStack0000000000000174 =
                                                       CONCAT44(in_stack_00000198,
                                                                uStack0000000000000194);
                                                  uStack0000000000000170 = uStack0000000000000190;
                                                  uStack0000000000000168 = uStack0000000000000188;
                                                  uStack000000000000016c = uStack000000000000018c;
                                                  in_stack_00000160 = in_stack_00000180;
                                                  if (0x17 < *(uint *)(lVar48 + 0x18)) {
                                                    *(undefined4 *)(lVar48 + 0x300) = 0x16;
                                                    *(undefined8 *)(lVar48 + 0x318) =
                                                         uStack0000000000000174;
                                                    *(ulong *)(lVar48 + 0x310) =
                                                         CONCAT44(uStack0000000000000190,
                                                                  uStack000000000000018c);
                                                    *(ulong *)(lVar48 + 0x30c) =
                                                         CONCAT44(uStack000000000000018c,
                                                                  uStack0000000000000188);
                                                    *(undefined8 *)(lVar48 + 0x304) =
                                                         in_stack_00000180;
                                                    uStack0000000000000148 = 0;
                                                    uStack000000000000014c = 0;
                                                    uStack0000000000000150 = 0;
                                                    uStack0000000000000154 = 0;
                                                    in_stack_00000140 = 0;
                                                    in_stack_00000158 = 0;
                                                    FUN_02666aac(DAT_02945bb8,uVar40,uVar41,uVar42,
                                                                 DAT_02945bbc,DAT_02945bc0,uVar43,
                                                                 &stack0x00000140,0);
                                                    uStack0000000000000134 =
                                                         CONCAT44(in_stack_00000158,
                                                                  uStack0000000000000154);
                                                    uStack0000000000000130 = uStack0000000000000150;
                                                    uStack0000000000000128 = uStack0000000000000148;
                                                    uStack000000000000012c = uStack000000000000014c;
                                                    in_stack_00000120 = in_stack_00000140;
                                                    if (0x18 < *(uint *)(lVar48 + 0x18)) {
                                                      *(undefined4 *)(lVar48 + 800) = 0x17;
                                                      *(undefined8 *)(lVar48 + 0x338) =
                                                           uStack0000000000000134;
                                                      *(ulong *)(lVar48 + 0x330) =
                                                           CONCAT44(uStack0000000000000150,
                                                                    uStack000000000000014c);
                                                      *(ulong *)(lVar48 + 0x32c) =
                                                           CONCAT44(uStack000000000000014c,
                                                                    uStack0000000000000148);
                                                      *(undefined8 *)(lVar48 + 0x324) =
                                                           in_stack_00000140;
                                                      uStack0000000000000108 = 0;
                                                      uStack000000000000010c = 0;
                                                      uStack0000000000000110 = 0;
                                                      uStack0000000000000114 = 0;
                                                      in_stack_00000100 = 0;
                                                      in_stack_00000118 = 0;
                                                      FUN_02666aac(DAT_02945bc4,uVar44,uVar45,
                                                                   &stack0x00000100,0);
                                                      if (0x19 < *(uint *)(lVar48 + 0x18)) {
                                                        *(undefined4 *)(lVar48 + 0x340) = 0x18;
                                                        *(ulong *)(lVar48 + 0x358) =
                                                             CONCAT44(in_stack_00000118,
                                                                      uStack0000000000000114);
                                                        *(ulong *)(lVar48 + 0x350) =
                                                             CONCAT44(uStack0000000000000110,
                                                                      uStack000000000000010c);
                                                        *(ulong *)(lVar48 + 0x34c) =
                                                             CONCAT44(uStack000000000000010c,
                                                                      uStack0000000000000108);
                                                        *(undefined8 *)(lVar48 + 0x344) =
                                                             in_stack_00000100;
                                                        *(long *)(lVar47 + 0x10) = lVar48;
                                                        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8)
                                                             = lVar47;
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
        }
      }
    }
  }
LAB_01a2d7d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


