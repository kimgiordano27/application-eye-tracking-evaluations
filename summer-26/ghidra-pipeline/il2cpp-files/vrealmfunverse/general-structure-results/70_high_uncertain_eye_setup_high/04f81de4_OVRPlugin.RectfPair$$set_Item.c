/*
FUNCTION_NAME: OVRPlugin.RectfPair$$set_Item
ENTRY_POINT: 04f81de4
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


void OVRPlugin_RectfPair__set_Item(ulong param_1)

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
  long lVar65;
  long lVar66;
  long *plVar67;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
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
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(System_Func<FocusEvent>_TypeInfo);
    FUN_02b3c81c(System_Dynamic_IDynamicMetaObjectProvider_var);
    *(undefined1 *)(unaff_x19 + 0xcf7) = 1;
  }
  lVar65 = thunk_FUN_02b79644(*unaff_x21);
  FUN_04f81d44();
  lVar66 = FUN_02b3c908(*unaff_x22,0x1a);
  uVar4 = DAT_01032654;
  uVar1 = DAT_01031ca8;
  FUN_05c99d80(DAT_01032090,DAT_01031ca8,DAT_01032654,0,0,0,0x3f800000,&stack0x00000dc0,0);
  if (lVar66 == 0) goto LAB_04f83950;
  if (*(int *)(lVar66 + 0x18) != 0) {
    *(undefined8 *)(lVar66 + 0x2c) = 0;
    *(undefined8 *)(lVar66 + 0x24) = 0;
    *(undefined8 *)(lVar66 + 0x38) = 0;
    *(undefined8 *)(lVar66 + 0x30) = 0;
    *(undefined4 *)(lVar66 + 0x20) = 1;
    FUN_05c99d80(0,0,0,0,0,0,0x3f800000,&stack0x00000d80,0);
    uVar21 = DAT_01032124;
    uVar17 = DAT_01032094;
    if ((*(uint *)(lVar66 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar66 + 0x40) = 0xffffffff;
      *(undefined8 *)(lVar66 + 0x4c) = 0;
      *(undefined8 *)(lVar66 + 0x44) = 0;
      uVar9 = DAT_010328ec;
      *(undefined8 *)(lVar66 + 0x58) = 0;
      *(undefined8 *)(lVar66 + 0x50) = 0;
      FUN_05c99d80(uVar9,uVar21,uVar17,DAT_010326b4,DAT_01031f48,DAT_01031d90,DAT_010324b0,
                   &stack0x00000d40,0);
      if (2 < *(uint *)(lVar66 + 0x18)) {
        *(undefined4 *)(lVar66 + 0x60) = 1;
        *(undefined8 *)(lVar66 + 0x6c) = 0;
        *(undefined8 *)(lVar66 + 100) = 0;
        uVar9 = DAT_01031e84;
        *(undefined8 *)(lVar66 + 0x78) = 0;
        *(undefined8 *)(lVar66 + 0x70) = 0;
        FUN_05c99d80(uVar9,DAT_01032804,DAT_01031e88,DAT_01031d94,DAT_01032008,DAT_01032590,
                     DAT_010322b0,&stack0x00000d00,0);
        if ((*(uint *)(lVar66 + 0x18) & 0xfffffffc) != 0) {
          *(undefined4 *)(lVar66 + 0x80) = 2;
          *(undefined8 *)(lVar66 + 0x8c) = 0;
          *(undefined8 *)(lVar66 + 0x84) = 0;
          uVar9 = DAT_01032948;
          *(undefined8 *)(lVar66 + 0x98) = 0;
          *(undefined8 *)(lVar66 + 0x90) = 0;
          FUN_05c99d80(uVar9,DAT_01031ed0,DAT_0103294c,DAT_01032808,DAT_0103200c,DAT_01032128,
                       DAT_01031c54,&stack0x00000cc0,0);
          if (4 < *(uint *)(lVar66 + 0x18)) {
            *(undefined4 *)(lVar66 + 0xa0) = 3;
            *(undefined8 *)(lVar66 + 0xac) = 0;
            *(undefined8 *)(lVar66 + 0xa4) = 0;
            uVar36 = DAT_01032538;
            uVar9 = DAT_0103212c;
            uVar13 = DAT_01031f4c;
            *(undefined8 *)(lVar66 + 0xb8) = 0;
            *(undefined8 *)(lVar66 + 0xb0) = 0;
            FUN_05c99d80(uVar9,DAT_01032534,uVar36,0x8700000087000000,uVar13,0xa2800000,0x3f800000,
                         &stack0x00000c80,0);
            uVar36 = DAT_010326b8;
            uVar9 = DAT_01031ed4;
            if (5 < *(uint *)(lVar66 + 0x18)) {
              *(undefined8 *)(lVar66 + 0xcc) = 0;
              *(undefined8 *)(lVar66 + 0xc4) = 0;
              *(undefined8 *)(lVar66 + 0xd8) = 0;
              *(undefined8 *)(lVar66 + 0xd0) = 0;
              *(undefined4 *)(lVar66 + 0xc0) = 4;
              FUN_05c99d80(DAT_01031cac,uVar9,uVar36,0,0,0,0x3f800000,&stack0x00000c40,0);
              uVar22 = DAT_01032130;
              if (6 < *(uint *)(lVar66 + 0x18)) {
                *(undefined4 *)(lVar66 + 0xe0) = 1;
                *(undefined8 *)(lVar66 + 0xec) = 0;
                *(undefined8 *)(lVar66 + 0xe4) = 0;
                *(undefined8 *)(lVar66 + 0xf8) = 0;
                *(undefined8 *)(lVar66 + 0xf0) = 0;
                uVar46 = DAT_01032798;
                uVar34 = DAT_010324b4;
                uVar32 = DAT_01032450;
                FUN_05c99d80(DAT_01032010,uVar22,DAT_010324b4,DAT_01032798,DAT_01032318,DAT_01031d98
                             ,&stack0x00000c00,0);
                if ((*(uint *)(lVar66 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined4 *)(lVar66 + 0x100) = 6;
                  *(undefined8 *)(lVar66 + 0x118) = 0;
                  *(undefined8 *)(lVar66 + 0x110) = 0;
                  *(undefined8 *)(lVar66 + 0x10c) = 0;
                  *(undefined8 *)(lVar66 + 0x104) = 0;
                  uVar59 = DAT_010328f0;
                  uVar11 = DAT_01031ed8;
                  FUN_05c99d80(DAT_010322b4,DAT_01031f50,DAT_01032394,DAT_01031ed8,DAT_01032454,
                               DAT_01031edc,&stack0x00000bc0,0);
                  if (8 < *(uint *)(lVar66 + 0x18)) {
                    *(undefined4 *)(lVar66 + 0x120) = 7;
                    *(undefined8 *)(lVar66 + 0x138) = 0;
                    *(undefined8 *)(lVar66 + 0x130) = 0;
                    *(undefined8 *)(lVar66 + 300) = 0;
                    *(undefined8 *)(lVar66 + 0x124) = 0;
                    uVar62 = DAT_01032954;
                    uVar60 = DAT_010328f4;
                    uVar35 = DAT_010324b8;
                    uVar18 = DAT_01032098;
                    FUN_05c99d80(DAT_01032950,&stack0x00000b80,0);
                    if (9 < *(uint *)(lVar66 + 0x18)) {
                      *(undefined4 *)(lVar66 + 0x140) = 8;
                      *(undefined8 *)(lVar66 + 0x158) = 0;
                      *(undefined8 *)(lVar66 + 0x150) = 0;
                      *(undefined8 *)(lVar66 + 0x14c) = 0;
                      *(undefined8 *)(lVar66 + 0x144) = 0;
                      FUN_05c99d80(DAT_0103217c,DAT_01031c58,DAT_01032958,0,DAT_010325e4,0,
                                   0x3f800000,&stack0x00000b40,0);
                      if (10 < *(uint *)(lVar66 + 0x18)) {
                        *(undefined4 *)(lVar66 + 0x160) = 9;
                        *(undefined8 *)(lVar66 + 0x178) = 0;
                        *(undefined8 *)(lVar66 + 0x170) = 0;
                        *(undefined8 *)(lVar66 + 0x16c) = 0;
                        *(undefined8 *)(lVar66 + 0x164) = 0;
                        uVar30 = DAT_010323e4;
                        uVar28 = DAT_01032398;
                        FUN_05c99d80(DAT_01032594,DAT_01032398,DAT_010323e4,0,0,0,0x3f800000,
                                     &stack0x00000b00,0);
                        if (0xb < *(uint *)(lVar66 + 0x18)) {
                          *(undefined4 *)(lVar66 + 0x180) = 1;
                          *(undefined8 *)(lVar66 + 0x198) = 0;
                          *(undefined8 *)(lVar66 + 400) = 0;
                          *(undefined8 *)(lVar66 + 0x18c) = 0;
                          *(undefined8 *)(lVar66 + 0x184) = 0;
                          uVar56 = DAT_01032890;
                          uVar37 = DAT_01032598;
                          uVar12 = DAT_01031ee0;
                          uVar5 = DAT_01031d9c;
                          FUN_05c99d80(DAT_0103295c,&stack0x00000ac0,0);
                          if (0xc < *(uint *)(lVar66 + 0x18)) {
                            *(undefined4 *)(lVar66 + 0x1a0) = 0xb;
                            *(undefined8 *)(lVar66 + 0x1b8) = 0;
                            *(undefined8 *)(lVar66 + 0x1b0) = 0;
                            *(undefined8 *)(lVar66 + 0x1ac) = 0;
                            *(undefined8 *)(lVar66 + 0x1a4) = 0;
                            uVar33 = DAT_01032458;
                            uVar20 = DAT_010320a0;
                            uVar19 = DAT_0103209c;
                            uVar14 = DAT_01031f90;
                            FUN_05c99d80(DAT_0103280c,&stack0x00000a80,0);
                            if (0xd < *(uint *)(lVar66 + 0x18)) {
                              *(undefined4 *)(lVar66 + 0x1c0) = 0xc;
                              *(undefined8 *)(lVar66 + 0x1d8) = 0;
                              *(undefined8 *)(lVar66 + 0x1d0) = 0;
                              *(undefined8 *)(lVar66 + 0x1cc) = 0;
                              *(undefined8 *)(lVar66 + 0x1c4) = 0;
                              uVar61 = DAT_010328f8;
                              uVar51 = DAT_01032814;
                              uVar50 = DAT_01032810;
                              uVar40 = DAT_010325e8;
                              FUN_05c99d80(DAT_01032894,&stack0x00000a40,0);
                              if (0xe < *(uint *)(lVar66 + 0x18)) {
                                *(undefined4 *)(lVar66 + 0x1e0) = 0xd;
                                *(undefined8 *)(lVar66 + 0x1f8) = 0;
                                *(undefined8 *)(lVar66 + 0x1f0) = 0;
                                *(undefined8 *)(lVar66 + 0x1ec) = 0;
                                *(undefined8 *)(lVar66 + 0x1e4) = 0;
                                uVar48 = DAT_010327a4;
                                uVar47 = DAT_010327a0;
                                uVar43 = DAT_010326bc;
                                FUN_05c99d80(DAT_01032018,DAT_010327a0,DAT_010327a4,DAT_010326bc,
                                             0x22800000,0x2300000023000000,0x3f800000,
                                             &stack0x00000a00,0);
                                if ((*(uint *)(lVar66 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined4 *)(lVar66 + 0x200) = 0xe;
                                  *(undefined8 *)(lVar66 + 0x218) = 0;
                                  *(undefined8 *)(lVar66 + 0x210) = 0;
                                  *(undefined8 *)(lVar66 + 0x20c) = 0;
                                  *(undefined8 *)(lVar66 + 0x204) = 0;
                                  uVar38 = DAT_0103259c;
                                  uVar6 = DAT_01031da0;
                                  FUN_05c99d80(DAT_010320a4,DAT_0103259c,DAT_01031da0,0,0,0,
                                               0x3f800000,&stack0x000009c0,0);
                                  if (0x10 < *(uint *)(lVar66 + 0x18)) {
                                    *(undefined4 *)(lVar66 + 0x220) = 1;
                                    *(undefined8 *)(lVar66 + 0x238) = 0;
                                    *(undefined8 *)(lVar66 + 0x230) = 0;
                                    *(undefined8 *)(lVar66 + 0x22c) = 0;
                                    *(undefined8 *)(lVar66 + 0x224) = 0;
                                    uVar24 = DAT_010322bc;
                                    uVar15 = DAT_0103201c;
                                    uVar8 = DAT_01031e10;
                                    uVar3 = DAT_01031d24;
                                    FUN_05c99d80(DAT_01031f94,&stack0x00000980,0);
                                    if (0x11 < *(uint *)(lVar66 + 0x18)) {
                                      *(undefined4 *)(lVar66 + 0x240) = 0x10;
                                      *(undefined8 *)(lVar66 + 600) = 0;
                                      *(undefined8 *)(lVar66 + 0x250) = 0;
                                      *(undefined8 *)(lVar66 + 0x24c) = 0;
                                      *(undefined8 *)(lVar66 + 0x244) = 0;
                                      uVar63 = DAT_01032960;
                                      uVar58 = DAT_0103289c;
                                      uVar57 = DAT_01032898;
                                      uVar52 = DAT_01032818;
                                      FUN_05c99d80(DAT_010325ec,&stack0x00000940,0);
                                      if (0x12 < *(uint *)(lVar66 + 0x18)) {
                                        *(undefined4 *)(lVar66 + 0x260) = 0x11;
                                        *(undefined8 *)(lVar66 + 0x278) = 0;
                                        *(undefined8 *)(lVar66 + 0x270) = 0;
                                        *(undefined8 *)(lVar66 + 0x26c) = 0;
                                        *(undefined8 *)(lVar66 + 0x264) = 0;
                                        uVar53 = DAT_0103281c;
                                        uVar41 = DAT_01032658;
                                        FUN_05c99d80(DAT_01031ee4,DAT_0103281c,DAT_01032658,
                                                     DAT_01032964,DAT_010327a8,DAT_01031f98,
                                                     DAT_010324c0,&stack0x00000900,0);
                                        if (0x13 < *(uint *)(lVar66 + 0x18)) {
                                          *(undefined4 *)(lVar66 + 0x280) = 0x12;
                                          *(undefined8 *)(lVar66 + 0x298) = 0;
                                          *(undefined8 *)(lVar66 + 0x290) = 0;
                                          *(undefined8 *)(lVar66 + 0x28c) = 0;
                                          *(undefined8 *)(lVar66 + 0x284) = 0;
                                          FUN_05c99d80(DAT_01031d28,DAT_0103253c,DAT_01031ee8,
                                                       DAT_01031d2c,uVar13,DAT_010322c0,0x3f800000,
                                                       &stack0x000008c0,0);
                                          if (0x14 < *(uint *)(lVar66 + 0x18)) {
                                            *(undefined4 *)(lVar66 + 0x2a0) = 0x13;
                                            *(undefined8 *)(lVar66 + 0x2b8) = 0;
                                            *(undefined8 *)(lVar66 + 0x2b0) = 0;
                                            *(undefined8 *)(lVar66 + 0x2ac) = 0;
                                            *(undefined8 *)(lVar66 + 0x2a4) = 0;
                                            uVar39 = DAT_010325a0;
                                            uVar25 = DAT_010322c4;
                                            uVar23 = DAT_01032188;
                                            uVar16 = DAT_01032020;
                                            FUN_05c99d80(DAT_010328fc,&stack0x00000880,0);
                                            if (0x15 < *(uint *)(lVar66 + 0x18)) {
                                              *(undefined4 *)(lVar66 + 0x2c0) = 1;
                                              *(undefined8 *)(lVar66 + 0x2d8) = 0;
                                              *(undefined8 *)(lVar66 + 0x2d0) = 0;
                                              *(undefined8 *)(lVar66 + 0x2cc) = 0;
                                              *(undefined8 *)(lVar66 + 0x2c4) = 0;
                                              uVar64 = DAT_01032968;
                                              uVar45 = DAT_01032734;
                                              uVar42 = DAT_0103265c;
                                              uVar31 = DAT_010323f0;
                                              FUN_05c99d80(DAT_010323ec,&stack0x00000840,0);
                                              if (0x16 < *(uint *)(lVar66 + 0x18)) {
                                                *(undefined4 *)(lVar66 + 0x2e0) = 0x15;
                                                *(undefined8 *)(lVar66 + 0x2f8) = 0;
                                                *(undefined8 *)(lVar66 + 0x2f0) = 0;
                                                *(undefined8 *)(lVar66 + 0x2ec) = 0;
                                                *(undefined8 *)(lVar66 + 0x2e4) = 0;
                                                uVar54 = DAT_01032824;
                                                uVar44 = DAT_010326c4;
                                                uVar7 = DAT_01031da4;
                                                uVar2 = DAT_01031cb8;
                                                FUN_05c99d80(DAT_01032820,&stack0x00000800,0);
                                                if (0x17 < *(uint *)(lVar66 + 0x18)) {
                                                  *(undefined4 *)(lVar66 + 0x300) = 0x16;
                                                  *(undefined8 *)(lVar66 + 0x318) = 0;
                                                  *(undefined8 *)(lVar66 + 0x310) = 0;
                                                  *(undefined8 *)(lVar66 + 0x30c) = 0;
                                                  *(undefined8 *)(lVar66 + 0x304) = 0;
                                                  uVar55 = DAT_01032828;
                                                  uVar49 = DAT_010327ac;
                                                  uVar29 = DAT_010323a4;
                                                  uVar10 = DAT_01031e8c;
                                                  FUN_05c99d80(DAT_01031da8,&stack0x000007c0,0);
                                                  if (0x18 < *(uint *)(lVar66 + 0x18)) {
                                                    *(undefined4 *)(lVar66 + 800) = 0x17;
                                                    *(undefined8 *)(lVar66 + 0x338) = 0;
                                                    *(undefined8 *)(lVar66 + 0x330) = 0;
                                                    *(undefined8 *)(lVar66 + 0x32c) = 0;
                                                    *(undefined8 *)(lVar66 + 0x324) = 0;
                                                    uVar27 = DAT_01032320;
                                                    uVar26 = DAT_010322c8;
                                                    FUN_05c99d80(DAT_0103218c,DAT_01032320,
                                                                 DAT_010322c8,uVar13,uVar43,
                                                                 DAT_01031d30,0x3f800000,
                                                                 &stack0x00000780,0);
                                                    if (0x19 < *(uint *)(lVar66 + 0x18)) {
                                                      *(undefined4 *)(lVar66 + 0x340) = 0x18;
                                                      *(undefined8 *)(lVar66 + 0x358) = 0;
                                                      *(undefined8 *)(lVar66 + 0x350) = 0;
                                                      *(undefined8 *)(lVar66 + 0x34c) = 0;
                                                      *(undefined8 *)(lVar66 + 0x344) = 0;
                                                      if (lVar65 != 0) {
                                                        *(long *)(lVar65 + 0x10) = lVar66;
                                                        thunk_FUN_02bb0e9c((long *)(lVar65 + 0x10),
                                                                           lVar66);
                                                        **(long **)(*unaff_x21 + 0xb8) = lVar65;
                                                        thunk_FUN_02bb0e9c(*(undefined8 *)
                                                                            (*unaff_x21 + 0xb8),
                                                                           lVar65);
                                                        lVar65 = thunk_FUN_02b79644(*unaff_x21);
                                                        FUN_04f81d44();
                                                        lVar66 = FUN_02b3c908(*unaff_x22,0x1a);
                                                        FUN_05c99d80(DAT_01032460,uVar1,uVar4,0,0,0,
                                                                     0x3f800000,&stack0x00000740,0);
                                                        if (lVar66 != 0) {
                                                          if (*(int *)(lVar66 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar66 + 0x2c) = 0;
                                                            *(undefined8 *)(lVar66 + 0x24) = 0;
                                                            *(undefined8 *)(lVar66 + 0x38) = 0;
                                                            *(undefined8 *)(lVar66 + 0x30) = 0;
                                                            *(undefined4 *)(lVar66 + 0x20) = 1;
                                                            FUN_05c99d80(0,0,0,0,0,0,0x3f800000,
                                                                         &stack0x00000700,0);
                                                            if ((*(uint *)(lVar66 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined4 *)(lVar66 + 0x40) =
                                                                   0xffffffff;
                                                              *(undefined8 *)(lVar66 + 0x4c) = 0;
                                                              *(undefined8 *)(lVar66 + 0x44) = 0;
                                                              uVar1 = DAT_01032540;
                                                              *(undefined8 *)(lVar66 + 0x58) = 0;
                                                              *(undefined8 *)(lVar66 + 0x50) = 0;
                                                              FUN_05c99d80(uVar1,uVar21,uVar17,
                                                                           DAT_01032324,DAT_01032190
                                                                           ,DAT_01031fa0,
                                                                           DAT_01031cbc,
                                                                           &stack0x000006c0,0);
                                                              if (2 < *(uint *)(lVar66 + 0x18)) {
                                                                *(undefined4 *)(lVar66 + 0x60) = 1;
                                                                *(undefined8 *)(lVar66 + 0x6c) = 0;
                                                                *(undefined8 *)(lVar66 + 100) = 0;
                                                                uVar1 = DAT_0103282c;
                                                                *(undefined8 *)(lVar66 + 0x78) = 0;
                                                                *(undefined8 *)(lVar66 + 0x70) = 0;
                                                                FUN_05c99d80(uVar1,DAT_010324c4,
                                                                             DAT_01031c5c,
                                                                             DAT_01032830,
                                                                             DAT_0103296c,
                                                                             DAT_010321f8,
                                                                             DAT_010320ac,
                                                                             &stack0x00000680,0);
                                                                if ((*(uint *)(lVar66 + 0x18) &
                                                                    0xfffffffc) != 0) {
                                                                  *(undefined4 *)(lVar66 + 0x80) = 2
                                                                  ;
                                                                  *(undefined8 *)(lVar66 + 0x8c) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar66 + 0x84) = 0
                                                                  ;
                                                                  uVar1 = DAT_010324c8;
                                                                  *(undefined8 *)(lVar66 + 0x98) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar66 + 0x90) = 0
                                                                  ;
                                                                  FUN_05c99d80(uVar1,DAT_01031eec,
                                                                               DAT_010325f0,
                                                                               DAT_01031dac,
                                                                               DAT_010325a4,
                                                                               DAT_010323f4,
                                                                               DAT_01032544,
                                                                               &stack0x00000640,0);
                                                                  if (4 < *(uint *)(lVar66 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar66 + 0xa0) =
                                                                         3;
                                                                    *(undefined8 *)(lVar66 + 0xac) =
                                                                         0;
                                                                    *(undefined8 *)(lVar66 + 0xa4) =
                                                                         0;
                                                                    *(undefined8 *)(lVar66 + 0xb8) =
                                                                         0;
                                                                    *(undefined8 *)(lVar66 + 0xb0) =
                                                                         0;
                                                                    FUN_05c99d80(DAT_01031fa4,
                                                                                 DAT_01032194,
                                                                                 DAT_010320b0,
                                                                                 DAT_01031cc0,0,0,
                                                                                 0x3f800000,
                                                                                 &stack0x00000600,0)
                                                                    ;
                                                                    if (5 < *(uint *)(lVar66 + 0x18)
                                                                       ) {
                                                                      *(undefined8 *)(lVar66 + 0xcc)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar66 + 0xc4)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar66 + 0xd8)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar66 + 0xd0)
                                                                           = 0;
                                                                      *(undefined4 *)(lVar66 + 0xc0)
                                                                           = 4;
                                                                      FUN_05c99d80(DAT_010325f4,
                                                                                   uVar9,uVar36,0,0,
                                                                                   0,0x3f800000,
                                                                                   &stack0x000005c0,
                                                                                   0);
                                                                      if (6 < *(uint *)(lVar66 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar66 + 0xe0) = 1;
                                                    *(undefined8 *)(lVar66 + 0xec) = 0;
                                                    *(undefined8 *)(lVar66 + 0xe4) = 0;
                                                    uVar1 = DAT_01032198;
                                                    *(undefined8 *)(lVar66 + 0xf8) = 0;
                                                    *(undefined8 *)(lVar66 + 0xf0) = 0;
                                                    FUN_05c99d80(uVar1,uVar22,uVar34,uVar46,
                                                                 DAT_01031ef0,DAT_010323f8,uVar32,
                                                                 &stack0x00000580,0);
                                                    if ((*(uint *)(lVar66 + 0x18) & 0xfffffff8) != 0
                                                       ) {
                                                      *(undefined4 *)(lVar66 + 0x100) = 6;
                                                      *(undefined8 *)(lVar66 + 0x118) = 0;
                                                      *(undefined8 *)(lVar66 + 0x110) = 0;
                                                      *(undefined8 *)(lVar66 + 0x10c) = 0;
                                                      *(undefined8 *)(lVar66 + 0x104) = 0;
                                                      FUN_05c99d80(DAT_01032834,DAT_01031db0,
                                                                   DAT_010320b4,uVar11,DAT_01032250,
                                                                   DAT_01032970,uVar59,
                                                                   &stack0x00000540,0);
                                                      if (8 < *(uint *)(lVar66 + 0x18)) {
                                                        *(undefined4 *)(lVar66 + 0x120) = 7;
                                                        *(undefined8 *)(lVar66 + 0x138) = 0;
                                                        *(undefined8 *)(lVar66 + 0x130) = 0;
                                                        uVar1 = DAT_01032900;
                                                        *(undefined8 *)(lVar66 + 300) = 0;
                                                        *(undefined8 *)(lVar66 + 0x124) = 0;
                                                        FUN_05c99d80(DAT_010323a8,uVar60,uVar35,
                                                                     uVar18,uVar1,DAT_01032254,
                                                                     uVar62,&stack0x00000500,0);
                                                        if (9 < *(uint *)(lVar66 + 0x18)) {
                                                          *(undefined4 *)(lVar66 + 0x140) = 8;
                                                          *(undefined8 *)(lVar66 + 0x158) = 0;
                                                          *(undefined8 *)(lVar66 + 0x150) = 0;
                                                          *(undefined8 *)(lVar66 + 0x14c) = 0;
                                                          *(undefined8 *)(lVar66 + 0x144) = 0;
                                                          FUN_05c99d80(DAT_010321fc,DAT_01032974,
                                                                       DAT_01031db4,0,DAT_01032328,0
                                                                       ,0x3f800000,&stack0x000004c0,
                                                                       0);
                                                          if (10 < *(uint *)(lVar66 + 0x18)) {
                                                            *(undefined4 *)(lVar66 + 0x160) = 9;
                                                            *(undefined8 *)(lVar66 + 0x178) = 0;
                                                            *(undefined8 *)(lVar66 + 0x170) = 0;
                                                            *(undefined8 *)(lVar66 + 0x16c) = 0;
                                                            *(undefined8 *)(lVar66 + 0x164) = 0;
                                                            FUN_05c99d80(DAT_010320b8,uVar28,uVar30,
                                                                         0,0,0,0x3f800000,
                                                                         &stack0x00000480,0);
                                                            if (0xb < *(uint *)(lVar66 + 0x18)) {
                                                              *(undefined4 *)(lVar66 + 0x180) = 1;
                                                              *(undefined8 *)(lVar66 + 0x198) = 0;
                                                              *(undefined8 *)(lVar66 + 400) = 0;
                                                              uVar1 = DAT_01032660;
                                                              *(undefined8 *)(lVar66 + 0x18c) = 0;
                                                              *(undefined8 *)(lVar66 + 0x184) = 0;
                                                              FUN_05c99d80(DAT_01031c60,uVar12,uVar5
                                                                           ,uVar37,uVar1,
                                                                           DAT_010328a0,uVar56,
                                                                           &stack0x00000440,0);
                                                              if (0xc < *(uint *)(lVar66 + 0x18)) {
                                                                *(undefined4 *)(lVar66 + 0x1a0) =
                                                                     0xb;
                                                                *(undefined8 *)(lVar66 + 0x1b8) = 0;
                                                                *(undefined8 *)(lVar66 + 0x1b0) = 0;
                                                                uVar1 = DAT_01031d34;
                                                                *(undefined8 *)(lVar66 + 0x1ac) = 0;
                                                                *(undefined8 *)(lVar66 + 0x1a4) = 0;
                                                                FUN_05c99d80(DAT_010320bc,uVar14,
                                                                             uVar19,uVar33,uVar1,
                                                                             DAT_010328a4,uVar20,
                                                                             &stack0x00000400,0);
                                                                if (0xd < *(uint *)(lVar66 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar66 + 0x1c0) =
                                                                       0xc;
                                                                  *(undefined8 *)(lVar66 + 0x1d8) =
                                                                       0;
                                                                  *(undefined8 *)(lVar66 + 0x1d0) =
                                                                       0;
                                                                  uVar1 = DAT_010327b0;
                                                                  *(undefined8 *)(lVar66 + 0x1cc) =
                                                                       0;
                                                                  *(undefined8 *)(lVar66 + 0x1c4) =
                                                                       0;
                                                                  FUN_05c99d80(DAT_01031ef4,uVar40,
                                                                               uVar61,uVar50,uVar1,
                                                                               DAT_01031db8,uVar51,
                                                                               &stack0x000003c0,0);
                                                                  if (0xe < *(uint *)(lVar66 + 0x18)
                                                                     ) {
                                                                    *(undefined4 *)(lVar66 + 0x1e0)
                                                                         = 0xd;
                                                                    *(undefined8 *)(lVar66 + 0x1f8)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar66 + 0x1f0)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar66 + 0x1ec)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar66 + 0x1e4)
                                                                         = 0;
                                                                    FUN_05c99d80(DAT_01032664,uVar47
                                                                                 ,uVar48,uVar43,
                                                                                 0xa2800000,
                                                                                 0xa3000000a3000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000380,0)
                                                                    ;
                                                                    if ((*(uint *)(lVar66 + 0x18) &
                                                                        0xfffffff0) != 0) {
                                                                      *(undefined4 *)
                                                                       (lVar66 + 0x200) = 0xe;
                                                                      *(undefined8 *)
                                                                       (lVar66 + 0x218) = 0;
                                                                      *(undefined8 *)
                                                                       (lVar66 + 0x210) = 0;
                                                                      *(undefined8 *)
                                                                       (lVar66 + 0x20c) = 0;
                                                                      *(undefined8 *)
                                                                       (lVar66 + 0x204) = 0;
                                                                      FUN_05c99d80(DAT_010326c8,
                                                                                   uVar38,uVar6,0,0,
                                                                                   0,0x3f800000,
                                                                                   &stack0x00000340,
                                                                                   0);
                                                                      if (0x10 < *(uint *)(lVar66 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar66 + 0x220) = 1;
                                                    *(undefined8 *)(lVar66 + 0x238) = 0;
                                                    *(undefined8 *)(lVar66 + 0x230) = 0;
                                                    uVar1 = DAT_010325a8;
                                                    *(undefined8 *)(lVar66 + 0x22c) = 0;
                                                    *(undefined8 *)(lVar66 + 0x224) = 0;
                                                    FUN_05c99d80(DAT_010324cc,uVar15,uVar8,uVar24,
                                                                 uVar1,DAT_01032134,uVar3,
                                                                 &stack0x00000300,0);
                                                    if (0x11 < *(uint *)(lVar66 + 0x18)) {
                                                      *(undefined4 *)(lVar66 + 0x240) = 0x10;
                                                      *(undefined8 *)(lVar66 + 600) = 0;
                                                      *(undefined8 *)(lVar66 + 0x250) = 0;
                                                      uVar1 = DAT_01031f54;
                                                      *(undefined8 *)(lVar66 + 0x24c) = 0;
                                                      *(undefined8 *)(lVar66 + 0x244) = 0;
                                                      FUN_05c99d80(DAT_01032548,uVar57,uVar63,uVar58
                                                                   ,uVar1,DAT_010327b4,uVar52,
                                                                   &stack0x000002c0,0);
                                                      if (0x12 < *(uint *)(lVar66 + 0x18)) {
                                                        *(undefined4 *)(lVar66 + 0x260) = 0x11;
                                                        *(undefined8 *)(lVar66 + 0x278) = 0;
                                                        *(undefined8 *)(lVar66 + 0x270) = 0;
                                                        uVar1 = DAT_0103254c;
                                                        *(undefined8 *)(lVar66 + 0x26c) = 0;
                                                        *(undefined8 *)(lVar66 + 0x264) = 0;
                                                        FUN_05c99d80(DAT_0103219c,uVar53,uVar41,
                                                                     uVar1,DAT_010325ac,DAT_01032740
                                                                     ,DAT_010327b8,&stack0x00000280,
                                                                     0);
                                                        if (0x13 < *(uint *)(lVar66 + 0x18)) {
                                                          *(undefined4 *)(lVar66 + 0x280) = 0x12;
                                                          *(undefined8 *)(lVar66 + 0x298) = 0;
                                                          *(undefined8 *)(lVar66 + 0x290) = 0;
                                                          *(undefined8 *)(lVar66 + 0x28c) = 0;
                                                          *(undefined8 *)(lVar66 + 0x284) = 0;
                                                          uVar1 = DAT_0103283c;
                                                          FUN_05c99d80(DAT_0103232c,DAT_01032838,
                                                                       DAT_01032978,uVar43,
                                                                       DAT_0103283c,
                                                                       0x8800000088000000,0x3f800000
                                                                       ,&stack0x00000240,0);
                                                          if (0x14 < *(uint *)(lVar66 + 0x18)) {
                                                            *(undefined4 *)(lVar66 + 0x2a0) = 0x13;
                                                            *(undefined8 *)(lVar66 + 0x2b8) = 0;
                                                            *(undefined8 *)(lVar66 + 0x2b0) = 0;
                                                            uVar4 = DAT_010325f8;
                                                            *(undefined8 *)(lVar66 + 0x2ac) = 0;
                                                            *(undefined8 *)(lVar66 + 0x2a4) = 0;
                                                            FUN_05c99d80(DAT_01031ef8,uVar16,uVar23,
                                                                         uVar25,uVar4,DAT_01031cc4,
                                                                         uVar39,&stack0x00000200,0);
                                                            in_stack_000001e0 = 0;
                                                            uStack00000000000001e8 = 0;
                                                            uStack00000000000001ec = 0;
                                                            in_stack_000001f0 = 0;
                                                            if (0x15 < *(uint *)(lVar66 + 0x18)) {
                                                              *(undefined4 *)(lVar66 + 0x2c0) = 1;
                                                              *(undefined8 *)(lVar66 + 0x2d8) = 0;
                                                              *(undefined8 *)(lVar66 + 0x2d0) = 0;
                                                              uVar4 = DAT_010324d0;
                                                              *(undefined8 *)(lVar66 + 0x2cc) = 0;
                                                              *(undefined8 *)(lVar66 + 0x2c4) = 0;
                                                              in_stack_000001c0 = 0;
                                                              uStack00000000000001c8 = 0;
                                                              uStack00000000000001cc = 0;
                                                              in_stack_000001d8 = 0;
                                                              uStack00000000000001d0 = 0;
                                                              uStack00000000000001d4 = 0;
                                                              FUN_05c99d80(DAT_010322cc,uVar31,
                                                                           uVar45,uVar42,uVar4,
                                                                           DAT_01032330,uVar64,
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
                                                              if (0x16 < *(uint *)(lVar66 + 0x18)) {
                                                                *(undefined4 *)(lVar66 + 0x2e0) =
                                                                     0x15;
                                                                *(undefined8 *)(lVar66 + 0x2f8) =
                                                                     uStack00000000000001b4;
                                                                *(ulong *)(lVar66 + 0x2f0) =
                                                                     CONCAT44(uStack00000000000001d0
                                                                              ,
                                                  uStack00000000000001cc);
                                                  uVar4 = DAT_010325fc;
                                                  *(ulong *)(lVar66 + 0x2ec) =
                                                       CONCAT44(uStack00000000000001cc,
                                                                uStack00000000000001c8);
                                                  *(undefined8 *)(lVar66 + 0x2e4) =
                                                       in_stack_000001c0;
                                                  in_stack_00000180 = 0;
                                                  uStack0000000000000188 = 0;
                                                  uStack000000000000018c = 0;
                                                  in_stack_00000198 = 0;
                                                  uStack0000000000000190 = 0;
                                                  uStack0000000000000194 = 0;
                                                  FUN_05c99d80(DAT_0103297c,uVar7,uVar2,uVar44,uVar4
                                                               ,DAT_01032840,uVar54,&stack0x00000180
                                                               ,0);
                                                  uStack0000000000000174 =
                                                       CONCAT44(in_stack_00000198,
                                                                uStack0000000000000194);
                                                  uStack0000000000000168 = uStack0000000000000188;
                                                  in_stack_00000160 = in_stack_00000180;
                                                  uStack000000000000016c = uStack000000000000018c;
                                                  uStack0000000000000170 = uStack0000000000000190;
                                                  if (0x17 < *(uint *)(lVar66 + 0x18)) {
                                                    *(undefined4 *)(lVar66 + 0x300) = 0x16;
                                                    *(undefined8 *)(lVar66 + 0x318) =
                                                         uStack0000000000000174;
                                                    *(ulong *)(lVar66 + 0x310) =
                                                         CONCAT44(uStack0000000000000190,
                                                                  uStack000000000000018c);
                                                    uVar4 = DAT_01031d38;
                                                    *(ulong *)(lVar66 + 0x30c) =
                                                         CONCAT44(uStack000000000000018c,
                                                                  uStack0000000000000188);
                                                    *(undefined8 *)(lVar66 + 0x304) =
                                                         in_stack_00000180;
                                                    in_stack_00000140 = 0;
                                                    uStack0000000000000148 = 0;
                                                    uStack000000000000014c = 0;
                                                    in_stack_00000158 = 0;
                                                    uStack0000000000000150 = 0;
                                                    uStack0000000000000154 = 0;
                                                    FUN_05c99d80(DAT_010323fc,uVar29,uVar10,uVar49,
                                                                 uVar4,DAT_01031dbc,uVar55,
                                                                 &stack0x00000140,0);
                                                    uStack0000000000000134 =
                                                         CONCAT44(in_stack_00000158,
                                                                  uStack0000000000000154);
                                                    uStack0000000000000128 = uStack0000000000000148;
                                                    in_stack_00000120 = in_stack_00000140;
                                                    uStack000000000000012c = uStack000000000000014c;
                                                    uStack0000000000000130 = uStack0000000000000150;
                                                    if (0x18 < *(uint *)(lVar66 + 0x18)) {
                                                      *(undefined4 *)(lVar66 + 800) = 0x17;
                                                      *(undefined8 *)(lVar66 + 0x338) =
                                                           uStack0000000000000134;
                                                      *(ulong *)(lVar66 + 0x330) =
                                                           CONCAT44(uStack0000000000000150,
                                                                    uStack000000000000014c);
                                                      *(ulong *)(lVar66 + 0x32c) =
                                                           CONCAT44(uStack000000000000014c,
                                                                    uStack0000000000000148);
                                                      *(undefined8 *)(lVar66 + 0x324) =
                                                           in_stack_00000140;
                                                      in_stack_00000100 = 0;
                                                      uStack0000000000000108 = 0;
                                                      uStack000000000000010c = 0;
                                                      in_stack_00000118 = 0;
                                                      uStack0000000000000110 = 0;
                                                      uStack0000000000000114 = 0;
                                                      FUN_05c99d80(DAT_01032258,uVar27,uVar26,uVar13
                                                                   ,uVar13,uVar1,0x3f800000,
                                                                   &stack0x00000100,0);
                                                      if (0x19 < *(uint *)(lVar66 + 0x18)) {
                                                        *(undefined4 *)(lVar66 + 0x340) = 0x18;
                                                        *(ulong *)(lVar66 + 0x358) =
                                                             CONCAT44(in_stack_00000118,
                                                                      uStack0000000000000114);
                                                        *(ulong *)(lVar66 + 0x350) =
                                                             CONCAT44(uStack0000000000000110,
                                                                      uStack000000000000010c);
                                                        *(ulong *)(lVar66 + 0x34c) =
                                                             CONCAT44(uStack000000000000010c,
                                                                      uStack0000000000000108);
                                                        *(undefined8 *)(lVar66 + 0x344) =
                                                             in_stack_00000100;
                                                        if (lVar65 != 0) {
                                                          *(long *)(lVar65 + 0x10) = lVar66;
                                                          thunk_FUN_02bb0e9c((long *)(lVar65 + 0x10)
                                                                             ,lVar66);
                                                          plVar67 = (long *)(*(long *)(*unaff_x21 +
                                                                                      0xb8) + 8);
                                                          *plVar67 = lVar65;
                                                          thunk_FUN_02bb0e9c(plVar67,lVar65);
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
LAB_04f8394c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


