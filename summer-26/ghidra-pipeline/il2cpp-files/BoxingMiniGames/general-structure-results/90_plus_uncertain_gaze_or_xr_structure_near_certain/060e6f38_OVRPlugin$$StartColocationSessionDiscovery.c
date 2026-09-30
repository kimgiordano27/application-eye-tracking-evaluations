/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 060e6f38
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 125
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery(undefined1 param_1 [16],undefined1 param_2 [16])

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
  long lVar59;
  long lVar60;
  long *plVar61;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 uVar62;
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
  
  uVar62 = *(undefined4 *)(in_x10 + 0x1b0);
  *(long *)(unaff_x20 + 0xcc) = param_1._8_8_;
  *(long *)(unaff_x20 + 0xc4) = param_1._0_8_;
  *(long *)(unaff_x20 + 0xd8) = param_2._8_8_;
  *(long *)(unaff_x20 + 0xd0) = param_2._0_8_;
  *(undefined4 *)(unaff_x20 + 0xc0) = 4;
  FUN_071ce4a0(DAT_0165093c,unaff_s14,uVar62,0,0,0,0x3f800000,&stack0x00000c40,0);
  uVar3 = DAT_01650d10;
  if (6 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0xe0) = 1;
    *(undefined8 *)(unaff_x20 + 0xec) = 0;
    *(undefined8 *)(unaff_x20 + 0xe4) = 0;
    *(undefined8 *)(unaff_x20 + 0xf8) = 0;
    *(undefined8 *)(unaff_x20 + 0xf0) = 0;
    uVar40 = DAT_0165127c;
    uVar28 = DAT_01651000;
    uVar26 = DAT_01650fb0;
    FUN_071ce4a0(DAT_01650c24,uVar3,DAT_01651000,DAT_0165127c,DAT_01650e98,DAT_016509fc,
                 &stack0x00000c00,0);
    if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff8) != 0) {
      *(undefined4 *)(unaff_x20 + 0x100) = 6;
      *(undefined8 *)(unaff_x20 + 0x118) = 0;
      *(undefined8 *)(unaff_x20 + 0x110) = 0;
      *(undefined8 *)(unaff_x20 + 0x10c) = 0;
      *(undefined8 *)(unaff_x20 + 0x104) = 0;
      uVar53 = DAT_016513e0;
      uVar9 = DAT_01650b04;
      FUN_071ce4a0(DAT_01650e54,DAT_01650b74,DAT_01650f04,DAT_01650b04,DAT_01650fb4,DAT_01650b08,
                   &stack0x00000bc0,0);
      if (8 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x120) = 7;
        *(undefined8 *)(unaff_x20 + 0x138) = 0;
        *(undefined8 *)(unaff_x20 + 0x130) = 0;
        *(undefined8 *)(unaff_x20 + 300) = 0;
        *(undefined8 *)(unaff_x20 + 0x124) = 0;
        uVar56 = DAT_01651434;
        uVar54 = DAT_016513e4;
        uVar29 = DAT_01651004;
        uVar14 = DAT_01650c9c;
        FUN_071ce4a0(DAT_01651430,&stack0x00000b80,0);
        if (9 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x140) = 8;
          *(undefined8 *)(unaff_x20 + 0x158) = 0;
          *(undefined8 *)(unaff_x20 + 0x150) = 0;
          *(undefined8 *)(unaff_x20 + 0x14c) = 0;
          *(undefined8 *)(unaff_x20 + 0x144) = 0;
          FUN_071ce4a0(DAT_01650d44,DAT_016508e4,DAT_01651438,0,DAT_0165110c,0,0x3f800000,
                       &stack0x00000b40,0);
          if (10 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x160) = 9;
            *(undefined8 *)(unaff_x20 + 0x178) = 0;
            *(undefined8 *)(unaff_x20 + 0x170) = 0;
            *(undefined8 *)(unaff_x20 + 0x16c) = 0;
            *(undefined8 *)(unaff_x20 + 0x164) = 0;
            uVar24 = DAT_01650f54;
            uVar22 = DAT_01650f08;
            FUN_071ce4a0(DAT_016510c4,DAT_01650f08,DAT_01650f54,0,0,0,0x3f800000,&stack0x00000b00,0)
            ;
            if (0xb < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x180) = 1;
              *(undefined8 *)(unaff_x20 + 0x198) = 0;
              *(undefined8 *)(unaff_x20 + 400) = 0;
              *(undefined8 *)(unaff_x20 + 0x18c) = 0;
              *(undefined8 *)(unaff_x20 + 0x184) = 0;
              uVar50 = DAT_01651370;
              uVar31 = DAT_016510c8;
              uVar10 = DAT_01650b0c;
              uVar4 = DAT_01650a00;
              FUN_071ce4a0(DAT_0165143c,&stack0x00000ac0,0);
              if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
                *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
                *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
                uVar27 = DAT_01650fb8;
                uVar16 = DAT_01650ca4;
                uVar15 = DAT_01650ca0;
                uVar11 = DAT_01650bb8;
                FUN_071ce4a0(DAT_016512f0,&stack0x00000a80,0);
                if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
                  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                  uVar55 = DAT_016513e8;
                  uVar45 = DAT_016512f8;
                  uVar44 = DAT_016512f4;
                  uVar34 = DAT_01651110;
                  FUN_071ce4a0(DAT_01651374,&stack0x00000a40,0);
                  if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                    *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                    uVar42 = DAT_01651288;
                    uVar41 = DAT_01651284;
                    uVar37 = DAT_016511b4;
                    FUN_071ce4a0(DAT_01650c2c,DAT_01651284,DAT_01651288,DAT_016511b4,0x22800000,
                                 0x2300000023000000,0x3f800000,&stack0x00000a00,0);
                    if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                      *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                      *(undefined8 *)(unaff_x20 + 0x218) = 0;
                      *(undefined8 *)(unaff_x20 + 0x210) = 0;
                      *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x204) = 0;
                      uVar32 = DAT_016510cc;
                      uVar5 = DAT_01650a04;
                      FUN_071ce4a0(DAT_01650ca8,DAT_016510cc,DAT_01650a04,0,0,0,0x3f800000,
                                   &stack0x000009c0,0);
                      if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x220) = 1;
                        *(undefined8 *)(unaff_x20 + 0x238) = 0;
                        *(undefined8 *)(unaff_x20 + 0x230) = 0;
                        *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x224) = 0;
                        uVar18 = DAT_01650e5c;
                        uVar12 = DAT_01650c30;
                        uVar7 = DAT_01650a70;
                        uVar2 = DAT_01650990;
                        FUN_071ce4a0(DAT_01650bbc,&stack0x00000980,0);
                        if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                          *(undefined8 *)(unaff_x20 + 600) = 0;
                          *(undefined8 *)(unaff_x20 + 0x250) = 0;
                          *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x244) = 0;
                          uVar57 = DAT_01651440;
                          uVar52 = DAT_0165137c;
                          uVar51 = DAT_01651378;
                          uVar46 = DAT_016512fc;
                          FUN_071ce4a0(DAT_01651114,&stack0x00000940,0);
                          if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                            *(undefined8 *)(unaff_x20 + 0x278) = 0;
                            *(undefined8 *)(unaff_x20 + 0x270) = 0;
                            *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x264) = 0;
                            uVar47 = DAT_01651300;
                            uVar35 = DAT_01651168;
                            FUN_071ce4a0(DAT_01650b10,DAT_01651300,DAT_01651168,DAT_01651444,
                                         DAT_0165128c,DAT_01650bc0,DAT_0165100c,&stack0x00000900,0);
                            if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                              *(undefined8 *)(unaff_x20 + 0x298) = 0;
                              *(undefined8 *)(unaff_x20 + 0x290) = 0;
                              *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x284) = 0;
                              FUN_071ce4a0(DAT_01650994,DAT_0165106c,DAT_01650b14,DAT_01650998,
                                           unaff_s8,DAT_01650e60,0x3f800000,&stack0x000008c0,0);
                              if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                                *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                                uVar33 = DAT_016510d0;
                                uVar19 = DAT_01650e64;
                                uVar17 = DAT_01650d50;
                                uVar13 = DAT_01650c34;
                                FUN_071ce4a0(DAT_016513ec,&stack0x00000880,0);
                                if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                  uVar58 = DAT_01651448;
                                  uVar39 = DAT_01651220;
                                  uVar36 = DAT_0165116c;
                                  uVar25 = DAT_01650f60;
                                  FUN_071ce4a0(DAT_01650f5c,&stack0x00000840,0);
                                  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                    *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                                    uVar48 = DAT_01651308;
                                    uVar38 = DAT_016511bc;
                                    uVar6 = DAT_01650a08;
                                    uVar1 = DAT_01650948;
                                    FUN_071ce4a0(DAT_01651304,&stack0x00000800,0);
                                    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                      *(undefined8 *)(unaff_x20 + 0x318) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x310) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x304) = 0;
                                      uVar49 = DAT_0165130c;
                                      uVar43 = DAT_01651290;
                                      uVar23 = DAT_01650f14;
                                      uVar8 = DAT_01650ac0;
                                      FUN_071ce4a0(DAT_01650a0c,&stack0x000007c0,0);
                                      if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                        *(undefined8 *)(unaff_x20 + 0x338) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x330) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x324) = 0;
                                        uVar21 = DAT_01650ea0;
                                        uVar20 = DAT_01650e68;
                                        FUN_071ce4a0(DAT_01650d54,DAT_01650ea0,DAT_01650e68,unaff_s8
                                                     ,uVar37,DAT_0165099c,0x3f800000,
                                                     &stack0x00000780,0);
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
                                            lVar59 = thunk_FUN_0367fe20(*unaff_x21);
                                            FUN_060e6b40();
                                            lVar60 = FUN_03642a4c(*unaff_x22,0x1a);
                                            FUN_071ce4a0(DAT_01650fc0,unaff_s12,unaff_s13,0,0,0,
                                                         0x3f800000,&stack0x00000740,0);
                                            if (lVar60 != 0) {
                                              if (*(int *)(lVar60 + 0x18) != 0) {
                                                *(undefined8 *)(lVar60 + 0x2c) = 0;
                                                *(undefined8 *)(lVar60 + 0x24) = 0;
                                                *(undefined8 *)(lVar60 + 0x38) = 0;
                                                *(undefined8 *)(lVar60 + 0x30) = 0;
                                                *(undefined4 *)(lVar60 + 0x20) = 1;
                                                FUN_071ce4a0(0,0,0,0,0,0,0x3f800000,&stack0x00000700
                                                             ,0);
                                                if ((*(uint *)(lVar60 + 0x18) & 0xfffffffe) != 0) {
                                                  *(undefined4 *)(lVar60 + 0x40) = 0xffffffff;
                                                  *(undefined8 *)(lVar60 + 0x4c) = 0;
                                                  *(undefined8 *)(lVar60 + 0x44) = 0;
                                                  uVar30 = DAT_01651070;
                                                  *(undefined8 *)(lVar60 + 0x58) = 0;
                                                  *(undefined8 *)(lVar60 + 0x50) = 0;
                                                  FUN_071ce4a0(uVar30,unaff_s10,unaff_s11,
                                                               DAT_01650ea4,DAT_01650d58,
                                                               DAT_01650bc8,DAT_0165094c,
                                                               &stack0x000006c0,0);
                                                  if (2 < *(uint *)(lVar60 + 0x18)) {
                                                    *(undefined4 *)(lVar60 + 0x60) = 1;
                                                    *(undefined8 *)(lVar60 + 0x6c) = 0;
                                                    *(undefined8 *)(lVar60 + 100) = 0;
                                                    uVar30 = DAT_01651310;
                                                    *(undefined8 *)(lVar60 + 0x78) = 0;
                                                    *(undefined8 *)(lVar60 + 0x70) = 0;
                                                    FUN_071ce4a0(uVar30,DAT_01651010,DAT_016508e8,
                                                                 DAT_01651314,DAT_0165144c,
                                                                 DAT_01650dac,DAT_01650cb0,
                                                                 &stack0x00000680,0);
                                                    if ((*(uint *)(lVar60 + 0x18) & 0xfffffffc) != 0
                                                       ) {
                                                      *(undefined4 *)(lVar60 + 0x80) = 2;
                                                      *(undefined8 *)(lVar60 + 0x8c) = 0;
                                                      *(undefined8 *)(lVar60 + 0x84) = 0;
                                                      uVar30 = DAT_01651014;
                                                      *(undefined8 *)(lVar60 + 0x98) = 0;
                                                      *(undefined8 *)(lVar60 + 0x90) = 0;
                                                      FUN_071ce4a0(uVar30,DAT_01650b18,DAT_01651118,
                                                                   DAT_01650a10,DAT_016510d4,
                                                                   DAT_01650f64,DAT_01651074,
                                                                   &stack0x00000640,0);
                                                      if (4 < *(uint *)(lVar60 + 0x18)) {
                                                        *(undefined4 *)(lVar60 + 0xa0) = 3;
                                                        *(undefined8 *)(lVar60 + 0xac) = 0;
                                                        *(undefined8 *)(lVar60 + 0xa4) = 0;
                                                        *(undefined8 *)(lVar60 + 0xb8) = 0;
                                                        *(undefined8 *)(lVar60 + 0xb0) = 0;
                                                        FUN_071ce4a0(DAT_01650bcc,DAT_01650d5c,
                                                                     DAT_01650cb4,DAT_01650950,0,0,
                                                                     0x3f800000,&stack0x00000600,0);
                                                        if (5 < *(uint *)(lVar60 + 0x18)) {
                                                          *(undefined8 *)(lVar60 + 0xcc) = 0;
                                                          *(undefined8 *)(lVar60 + 0xc4) = 0;
                                                          *(undefined8 *)(lVar60 + 0xd8) = 0;
                                                          *(undefined8 *)(lVar60 + 0xd0) = 0;
                                                          *(undefined4 *)(lVar60 + 0xc0) = 4;
                                                          FUN_071ce4a0(DAT_0165111c,unaff_s14,uVar62
                                                                       ,0,0,0,0x3f800000,
                                                                       &stack0x000005c0,0);
                                                          if (6 < *(uint *)(lVar60 + 0x18)) {
                                                            *(undefined4 *)(lVar60 + 0xe0) = 1;
                                                            *(undefined8 *)(lVar60 + 0xec) = 0;
                                                            *(undefined8 *)(lVar60 + 0xe4) = 0;
                                                            uVar62 = DAT_01650d60;
                                                            *(undefined8 *)(lVar60 + 0xf8) = 0;
                                                            *(undefined8 *)(lVar60 + 0xf0) = 0;
                                                            FUN_071ce4a0(uVar62,uVar3,uVar28,uVar40,
                                                                         DAT_01650b1c,DAT_01650f68,
                                                                         uVar26,&stack0x00000580,0);
                                                            if ((*(uint *)(lVar60 + 0x18) &
                                                                0xfffffff8) != 0) {
                                                              *(undefined4 *)(lVar60 + 0x100) = 6;
                                                              *(undefined8 *)(lVar60 + 0x118) = 0;
                                                              *(undefined8 *)(lVar60 + 0x110) = 0;
                                                              *(undefined8 *)(lVar60 + 0x10c) = 0;
                                                              *(undefined8 *)(lVar60 + 0x104) = 0;
                                                              FUN_071ce4a0(DAT_01651318,DAT_01650a14
                                                                           ,DAT_01650cb8,uVar9,
                                                                           DAT_01650e00,DAT_01651450
                                                                           ,uVar53,&stack0x00000540,
                                                                           0);
                                                              if (8 < *(uint *)(lVar60 + 0x18)) {
                                                                *(undefined4 *)(lVar60 + 0x120) = 7;
                                                                *(undefined8 *)(lVar60 + 0x138) = 0;
                                                                *(undefined8 *)(lVar60 + 0x130) = 0;
                                                                uVar3 = DAT_016513f0;
                                                                *(undefined8 *)(lVar60 + 300) = 0;
                                                                *(undefined8 *)(lVar60 + 0x124) = 0;
                                                                FUN_071ce4a0(DAT_01650f18,uVar54,
                                                                             uVar29,uVar14,uVar3,
                                                                             DAT_01650e04,uVar56,
                                                                             &stack0x00000500,0);
                                                                if (9 < *(uint *)(lVar60 + 0x18)) {
                                                                  *(undefined4 *)(lVar60 + 0x140) =
                                                                       8;
                                                                  *(undefined8 *)(lVar60 + 0x158) =
                                                                       0;
                                                                  *(undefined8 *)(lVar60 + 0x150) =
                                                                       0;
                                                                  *(undefined8 *)(lVar60 + 0x14c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar60 + 0x144) =
                                                                       0;
                                                                  FUN_071ce4a0(DAT_01650db0,
                                                                               DAT_01651454,
                                                                               DAT_01650a18,0,
                                                                               DAT_01650ea8,0,
                                                                               0x3f800000,
                                                                               &stack0x000004c0,0);
                                                                  if (10 < *(uint *)(lVar60 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar60 + 0x160)
                                                                         = 9;
                                                                    *(undefined8 *)(lVar60 + 0x178)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar60 + 0x170)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar60 + 0x16c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar60 + 0x164)
                                                                         = 0;
                                                                    FUN_071ce4a0(DAT_01650cbc,uVar22
                                                                                 ,uVar24,0,0,0,
                                                                                 0x3f800000,
                                                                                 &stack0x00000480,0)
                                                                    ;
                                                                    if (0xb < *(uint *)(lVar60 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar60 + 0x180) = 1;
                                                    *(undefined8 *)(lVar60 + 0x198) = 0;
                                                    *(undefined8 *)(lVar60 + 400) = 0;
                                                    uVar3 = DAT_01651170;
                                                    *(undefined8 *)(lVar60 + 0x18c) = 0;
                                                    *(undefined8 *)(lVar60 + 0x184) = 0;
                                                    FUN_071ce4a0(DAT_016508ec,uVar10,uVar4,uVar31,
                                                                 uVar3,DAT_01651380,uVar50,
                                                                 &stack0x00000440,0);
                                                    if (0xc < *(uint *)(lVar60 + 0x18)) {
                                                      *(undefined4 *)(lVar60 + 0x1a0) = 0xb;
                                                      *(undefined8 *)(lVar60 + 0x1b8) = 0;
                                                      *(undefined8 *)(lVar60 + 0x1b0) = 0;
                                                      uVar3 = DAT_016509a0;
                                                      *(undefined8 *)(lVar60 + 0x1ac) = 0;
                                                      *(undefined8 *)(lVar60 + 0x1a4) = 0;
                                                      FUN_071ce4a0(DAT_01650cc0,uVar11,uVar15,uVar27
                                                                   ,uVar3,DAT_01651384,uVar16,
                                                                   &stack0x00000400,0);
                                                      if (0xd < *(uint *)(lVar60 + 0x18)) {
                                                        *(undefined4 *)(lVar60 + 0x1c0) = 0xc;
                                                        *(undefined8 *)(lVar60 + 0x1d8) = 0;
                                                        *(undefined8 *)(lVar60 + 0x1d0) = 0;
                                                        uVar3 = DAT_01651294;
                                                        *(undefined8 *)(lVar60 + 0x1cc) = 0;
                                                        *(undefined8 *)(lVar60 + 0x1c4) = 0;
                                                        FUN_071ce4a0(DAT_01650b20,uVar34,uVar55,
                                                                     uVar44,uVar3,DAT_01650a1c,
                                                                     uVar45,&stack0x000003c0,0);
                                                        if (0xe < *(uint *)(lVar60 + 0x18)) {
                                                          *(undefined4 *)(lVar60 + 0x1e0) = 0xd;
                                                          *(undefined8 *)(lVar60 + 0x1f8) = 0;
                                                          *(undefined8 *)(lVar60 + 0x1f0) = 0;
                                                          *(undefined8 *)(lVar60 + 0x1ec) = 0;
                                                          *(undefined8 *)(lVar60 + 0x1e4) = 0;
                                                          FUN_071ce4a0(DAT_01651174,uVar41,uVar42,
                                                                       uVar37,0xa2800000,
                                                                       0xa3000000a3000000,0x3f800000
                                                                       ,&stack0x00000380,0);
                                                          if ((*(uint *)(lVar60 + 0x18) & 0xfffffff0
                                                              ) != 0) {
                                                            *(undefined4 *)(lVar60 + 0x200) = 0xe;
                                                            *(undefined8 *)(lVar60 + 0x218) = 0;
                                                            *(undefined8 *)(lVar60 + 0x210) = 0;
                                                            *(undefined8 *)(lVar60 + 0x20c) = 0;
                                                            *(undefined8 *)(lVar60 + 0x204) = 0;
                                                            FUN_071ce4a0(DAT_016511c0,uVar32,uVar5,0
                                                                         ,0,0,0x3f800000,
                                                                         &stack0x00000340,0);
                                                            if (0x10 < *(uint *)(lVar60 + 0x18)) {
                                                              *(undefined4 *)(lVar60 + 0x220) = 1;
                                                              *(undefined8 *)(lVar60 + 0x238) = 0;
                                                              *(undefined8 *)(lVar60 + 0x230) = 0;
                                                              uVar3 = DAT_016510d8;
                                                              *(undefined8 *)(lVar60 + 0x22c) = 0;
                                                              *(undefined8 *)(lVar60 + 0x224) = 0;
                                                              FUN_071ce4a0(DAT_01651018,uVar12,uVar7
                                                                           ,uVar18,uVar3,
                                                                           DAT_01650d14,uVar2,
                                                                           &stack0x00000300,0);
                                                              if (0x11 < *(uint *)(lVar60 + 0x18)) {
                                                                *(undefined4 *)(lVar60 + 0x240) =
                                                                     0x10;
                                                                *(undefined8 *)(lVar60 + 600) = 0;
                                                                *(undefined8 *)(lVar60 + 0x250) = 0;
                                                                uVar3 = DAT_01650b78;
                                                                *(undefined8 *)(lVar60 + 0x24c) = 0;
                                                                *(undefined8 *)(lVar60 + 0x244) = 0;
                                                                FUN_071ce4a0(DAT_01651078,uVar51,
                                                                             uVar57,uVar52,uVar3,
                                                                             DAT_01651298,uVar46,
                                                                             &stack0x000002c0,0);
                                                                if (0x12 < *(uint *)(lVar60 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar60 + 0x260) =
                                                                       0x11;
                                                                  *(undefined8 *)(lVar60 + 0x278) =
                                                                       0;
                                                                  *(undefined8 *)(lVar60 + 0x270) =
                                                                       0;
                                                                  uVar3 = DAT_0165107c;
                                                                  *(undefined8 *)(lVar60 + 0x26c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar60 + 0x264) =
                                                                       0;
                                                                  FUN_071ce4a0(DAT_01650d64,uVar47,
                                                                               uVar35,uVar3,
                                                                               DAT_016510dc,
                                                                               DAT_0165122c,
                                                                               DAT_0165129c,
                                                                               &stack0x00000280,0);
                                                                  if (0x13 < *(uint *)(lVar60 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar60 + 0x280)
                                                                         = 0x12;
                                                                    *(undefined8 *)(lVar60 + 0x298)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar60 + 0x290)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar60 + 0x28c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar60 + 0x284)
                                                                         = 0;
                                                                    uVar3 = DAT_01651320;
                                                                    FUN_071ce4a0(DAT_01650eac,
                                                                                 DAT_0165131c,
                                                                                 DAT_01651458,uVar37
                                                                                 ,DAT_01651320,
                                                                                 0x8800000088000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000240,0)
                                                                    ;
                                                                    if (0x14 < *(uint *)(lVar60 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar60 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar60 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar60 + 0x2b0) = 0;
                                                    uVar62 = DAT_01651120;
                                                    *(undefined8 *)(lVar60 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar60 + 0x2a4) = 0;
                                                    FUN_071ce4a0(DAT_01650b24,uVar13,uVar17,uVar19,
                                                                 uVar62,DAT_01650954,uVar33,
                                                                 &stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar60 + 0x18)) {
                                                      *(undefined4 *)(lVar60 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar60 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar60 + 0x2d0) = 0;
                                                      uVar62 = DAT_0165101c;
                                                      *(undefined8 *)(lVar60 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar60 + 0x2c4) = 0;
                                                      in_stack_000001c0 = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      in_stack_000001d8 = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      FUN_071ce4a0(DAT_01650e6c,uVar25,uVar39,uVar36
                                                                   ,uVar62,DAT_01650eb0,uVar58,
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
                                                      if (0x16 < *(uint *)(lVar60 + 0x18)) {
                                                        *(undefined4 *)(lVar60 + 0x2e0) = 0x15;
                                                        *(undefined8 *)(lVar60 + 0x2f8) =
                                                             uStack00000000000001b4;
                                                        *(ulong *)(lVar60 + 0x2f0) =
                                                             CONCAT44(uStack00000000000001d0,
                                                                      uStack00000000000001cc);
                                                        uVar62 = DAT_01651124;
                                                        *(ulong *)(lVar60 + 0x2ec) =
                                                             CONCAT44(uStack00000000000001cc,
                                                                      uStack00000000000001c8);
                                                        *(undefined8 *)(lVar60 + 0x2e4) =
                                                             in_stack_000001c0;
                                                        in_stack_00000180 = 0;
                                                        uStack0000000000000188 = 0;
                                                        uStack000000000000018c = 0;
                                                        in_stack_00000198 = 0;
                                                        uStack0000000000000190 = 0;
                                                        uStack0000000000000194 = 0;
                                                        FUN_071ce4a0(DAT_0165145c,uVar6,uVar1,uVar38
                                                                     ,uVar62,DAT_01651324,uVar48,
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
                                                        if (0x17 < *(uint *)(lVar60 + 0x18)) {
                                                          *(undefined4 *)(lVar60 + 0x300) = 0x16;
                                                          *(undefined8 *)(lVar60 + 0x318) =
                                                               uStack0000000000000174;
                                                          *(ulong *)(lVar60 + 0x310) =
                                                               CONCAT44(uStack0000000000000190,
                                                                        uStack000000000000018c);
                                                          uVar62 = DAT_016509a4;
                                                          *(ulong *)(lVar60 + 0x30c) =
                                                               CONCAT44(uStack000000000000018c,
                                                                        uStack0000000000000188);
                                                          *(undefined8 *)(lVar60 + 0x304) =
                                                               in_stack_00000180;
                                                          in_stack_00000140 = 0;
                                                          uStack0000000000000148 = 0;
                                                          uStack000000000000014c = 0;
                                                          in_stack_00000158 = 0;
                                                          uStack0000000000000150 = 0;
                                                          uStack0000000000000154 = 0;
                                                          FUN_071ce4a0(DAT_01650f6c,uVar23,uVar8,
                                                                       uVar43,uVar62,DAT_01650a20,
                                                                       uVar49,&stack0x00000140,0);
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
                                                          if (0x18 < *(uint *)(lVar60 + 0x18)) {
                                                            *(undefined4 *)(lVar60 + 800) = 0x17;
                                                            *(undefined8 *)(lVar60 + 0x338) =
                                                                 uStack0000000000000134;
                                                            *(ulong *)(lVar60 + 0x330) =
                                                                 CONCAT44(uStack0000000000000150,
                                                                          uStack000000000000014c);
                                                            *(ulong *)(lVar60 + 0x32c) =
                                                                 CONCAT44(uStack000000000000014c,
                                                                          uStack0000000000000148);
                                                            *(undefined8 *)(lVar60 + 0x324) =
                                                                 in_stack_00000140;
                                                            in_stack_00000100 = 0;
                                                            uStack0000000000000108 = 0;
                                                            uStack000000000000010c = 0;
                                                            in_stack_00000118 = 0;
                                                            uStack0000000000000110 = 0;
                                                            uStack0000000000000114 = 0;
                                                            FUN_071ce4a0(DAT_01650e08,uVar21,uVar20,
                                                                         unaff_s8,unaff_s8,uVar3,
                                                                         0x3f800000,&stack0x00000100
                                                                         ,0);
                                                            if (0x19 < *(uint *)(lVar60 + 0x18)) {
                                                              *(undefined4 *)(lVar60 + 0x340) = 0x18
                                                              ;
                                                              *(ulong *)(lVar60 + 0x358) =
                                                                   CONCAT44(in_stack_00000118,
                                                                            uStack0000000000000114);
                                                              *(ulong *)(lVar60 + 0x350) =
                                                                   CONCAT44(uStack0000000000000110,
                                                                            uStack000000000000010c);
                                                              *(ulong *)(lVar60 + 0x34c) =
                                                                   CONCAT44(uStack000000000000010c,
                                                                            uStack0000000000000108);
                                                              *(undefined8 *)(lVar60 + 0x344) =
                                                                   in_stack_00000100;
                                                              if (lVar59 != 0) {
                                                                *(long *)(lVar59 + 0x10) = lVar60;
                                                                thunk_FUN_036b7ad0((long *)(lVar59 +
                                                                                           0x10),
                                                                                   lVar60);
                                                                plVar61 = (long *)(*(long *)(*
                                                  unaff_x21 + 0xb8) + 8);
                                                  *plVar61 = lVar59;
                                                  thunk_FUN_036b7ad0(plVar61,lVar59);
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


