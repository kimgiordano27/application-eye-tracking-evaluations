/*
FUNCTION_NAME: OVRPlugin.FovfPair$$get_Item
ENTRY_POINT: 04f82094
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


void OVRPlugin_FovfPair__get_Item(undefined1 param_1 [16],undefined1 param_2 [16])

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
  long lVar63;
  long lVar64;
  long *plVar65;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
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
  
  *(long *)(unaff_x23 + 0x54) = param_2._8_8_;
  *(long *)(unaff_x23 + 0x4c) = param_2._0_8_;
  if (4 < in_w8) {
    uVar67 = *(undefined8 *)(unaff_x23 + 0x54);
    uVar66 = *(undefined8 *)(unaff_x23 + 0x4c);
    *(undefined4 *)(unaff_x20 + 0xa0) = 3;
    *(long *)(unaff_x20 + 0xac) = param_1._8_8_;
    *(long *)(unaff_x20 + 0xa4) = param_1._0_8_;
    uVar5 = DAT_01032538;
    uVar4 = DAT_0103212c;
    uVar13 = DAT_01031f4c;
    *(undefined8 *)(unaff_x20 + 0xb8) = uVar67;
    *(undefined8 *)(unaff_x20 + 0xb0) = uVar66;
    FUN_05c99d80(uVar4,DAT_01032534,uVar5,0x8700000087000000,uVar13,0xa2800000,0x3f800000,
                 &stack0x00000c80,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
    *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
    uVar5 = DAT_010326b8;
    uVar4 = DAT_01031ed4;
    if (5 < uVar1) {
      uVar67 = *(undefined8 *)(unaff_x23 + 0x14);
      uVar66 = *(undefined8 *)(unaff_x23 + 0xc);
      *(undefined8 *)(unaff_x20 + 0xcc) = 0;
      *(undefined8 *)(unaff_x20 + 0xc4) = 0;
      *(undefined8 *)(unaff_x20 + 0xd8) = uVar67;
      *(undefined8 *)(unaff_x20 + 0xd0) = uVar66;
      *(undefined4 *)(unaff_x20 + 0xc0) = 4;
      FUN_05c99d80(DAT_01031cac,uVar4,uVar5,0,0,0,0x3f800000,&stack0x00000c40,0);
      uVar20 = DAT_01032130;
      if (6 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0xe0) = 1;
        *(undefined8 *)(unaff_x20 + 0xec) = 0;
        *(undefined8 *)(unaff_x20 + 0xe4) = 0;
        *(undefined8 *)(unaff_x20 + 0xf8) = 0;
        *(undefined8 *)(unaff_x20 + 0xf0) = 0;
        uVar44 = DAT_01032798;
        uVar32 = DAT_010324b4;
        uVar30 = DAT_01032450;
        FUN_05c99d80(DAT_01032010,uVar20,DAT_010324b4,DAT_01032798,DAT_01032318,DAT_01031d98,
                     &stack0x00000c00,0);
        if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff8) != 0) {
          *(undefined4 *)(unaff_x20 + 0x100) = 6;
          *(undefined8 *)(unaff_x20 + 0x118) = 0;
          *(undefined8 *)(unaff_x20 + 0x110) = 0;
          *(undefined8 *)(unaff_x20 + 0x10c) = 0;
          *(undefined8 *)(unaff_x20 + 0x104) = 0;
          uVar57 = DAT_010328f0;
          uVar11 = DAT_01031ed8;
          FUN_05c99d80(DAT_010322b4,DAT_01031f50,DAT_01032394,DAT_01031ed8,DAT_01032454,DAT_01031edc
                       ,&stack0x00000bc0,0);
          if (8 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x120) = 7;
            *(undefined8 *)(unaff_x20 + 0x138) = 0;
            *(undefined8 *)(unaff_x20 + 0x130) = 0;
            *(undefined8 *)(unaff_x20 + 300) = 0;
            *(undefined8 *)(unaff_x20 + 0x124) = 0;
            uVar60 = DAT_01032954;
            uVar58 = DAT_010328f4;
            uVar33 = DAT_010324b8;
            uVar17 = DAT_01032098;
            FUN_05c99d80(DAT_01032950,&stack0x00000b80,0);
            if (9 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x140) = 8;
              *(undefined8 *)(unaff_x20 + 0x158) = 0;
              *(undefined8 *)(unaff_x20 + 0x150) = 0;
              *(undefined8 *)(unaff_x20 + 0x14c) = 0;
              *(undefined8 *)(unaff_x20 + 0x144) = 0;
              FUN_05c99d80(DAT_0103217c,DAT_01031c58,DAT_01032958,0,DAT_010325e4,0,0x3f800000,
                           &stack0x00000b40,0);
              if (10 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x160) = 9;
                *(undefined8 *)(unaff_x20 + 0x178) = 0;
                *(undefined8 *)(unaff_x20 + 0x170) = 0;
                *(undefined8 *)(unaff_x20 + 0x16c) = 0;
                *(undefined8 *)(unaff_x20 + 0x164) = 0;
                uVar28 = DAT_010323e4;
                uVar26 = DAT_01032398;
                FUN_05c99d80(DAT_01032594,DAT_01032398,DAT_010323e4,0,0,0,0x3f800000,
                             &stack0x00000b00,0);
                if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x180) = 1;
                  *(undefined8 *)(unaff_x20 + 0x198) = 0;
                  *(undefined8 *)(unaff_x20 + 400) = 0;
                  *(undefined8 *)(unaff_x20 + 0x18c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x184) = 0;
                  uVar54 = DAT_01032890;
                  uVar35 = DAT_01032598;
                  uVar12 = DAT_01031ee0;
                  uVar6 = DAT_01031d9c;
                  FUN_05c99d80(DAT_0103295c,&stack0x00000ac0,0);
                  if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
                    *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
                    uVar31 = DAT_01032458;
                    uVar19 = DAT_010320a0;
                    uVar18 = DAT_0103209c;
                    uVar14 = DAT_01031f90;
                    FUN_05c99d80(DAT_0103280c,&stack0x00000a80,0);
                    if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
                      *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                      uVar59 = DAT_010328f8;
                      uVar49 = DAT_01032814;
                      uVar48 = DAT_01032810;
                      uVar38 = DAT_010325e8;
                      FUN_05c99d80(DAT_01032894,&stack0x00000a40,0);
                      if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                        *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                        uVar46 = DAT_010327a4;
                        uVar45 = DAT_010327a0;
                        uVar41 = DAT_010326bc;
                        FUN_05c99d80(DAT_01032018,DAT_010327a0,DAT_010327a4,DAT_010326bc,0x22800000,
                                     0x2300000023000000,0x3f800000,&stack0x00000a00,0);
                        if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                          *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                          *(undefined8 *)(unaff_x20 + 0x218) = 0;
                          *(undefined8 *)(unaff_x20 + 0x210) = 0;
                          *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x204) = 0;
                          uVar36 = DAT_0103259c;
                          uVar7 = DAT_01031da0;
                          FUN_05c99d80(DAT_010320a4,DAT_0103259c,DAT_01031da0,0,0,0,0x3f800000,
                                       &stack0x000009c0,0);
                          if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x220) = 1;
                            *(undefined8 *)(unaff_x20 + 0x238) = 0;
                            *(undefined8 *)(unaff_x20 + 0x230) = 0;
                            *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x224) = 0;
                            uVar22 = DAT_010322bc;
                            uVar15 = DAT_0103201c;
                            uVar9 = DAT_01031e10;
                            uVar3 = DAT_01031d24;
                            FUN_05c99d80(DAT_01031f94,&stack0x00000980,0);
                            if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                              *(undefined8 *)(unaff_x20 + 600) = 0;
                              *(undefined8 *)(unaff_x20 + 0x250) = 0;
                              *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x244) = 0;
                              uVar61 = DAT_01032960;
                              uVar56 = DAT_0103289c;
                              uVar55 = DAT_01032898;
                              uVar50 = DAT_01032818;
                              FUN_05c99d80(DAT_010325ec,&stack0x00000940,0);
                              if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                                *(undefined8 *)(unaff_x20 + 0x278) = 0;
                                *(undefined8 *)(unaff_x20 + 0x270) = 0;
                                *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                                *(undefined8 *)(unaff_x20 + 0x264) = 0;
                                uVar51 = DAT_0103281c;
                                uVar39 = DAT_01032658;
                                FUN_05c99d80(DAT_01031ee4,DAT_0103281c,DAT_01032658,DAT_01032964,
                                             DAT_010327a8,DAT_01031f98,DAT_010324c0,&stack0x00000900
                                             ,0);
                                if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                                  *(undefined8 *)(unaff_x20 + 0x298) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x290) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x284) = 0;
                                  FUN_05c99d80(DAT_01031d28,DAT_0103253c,DAT_01031ee8,DAT_01031d2c,
                                               uVar13,DAT_010322c0,0x3f800000,&stack0x000008c0,0);
                                  if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                                    *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                                    uVar37 = DAT_010325a0;
                                    uVar23 = DAT_010322c4;
                                    uVar21 = DAT_01032188;
                                    uVar16 = DAT_01032020;
                                    FUN_05c99d80(DAT_010328fc,&stack0x00000880,0);
                                    if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                      *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                      uVar62 = DAT_01032968;
                                      uVar43 = DAT_01032734;
                                      uVar40 = DAT_0103265c;
                                      uVar29 = DAT_010323f0;
                                      FUN_05c99d80(DAT_010323ec,&stack0x00000840,0);
                                      if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                        *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                                        uVar52 = DAT_01032824;
                                        uVar42 = DAT_010326c4;
                                        uVar8 = DAT_01031da4;
                                        uVar2 = DAT_01031cb8;
                                        FUN_05c99d80(DAT_01032820,&stack0x00000800,0);
                                        if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                          *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                          *(undefined8 *)(unaff_x20 + 0x318) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x310) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x304) = 0;
                                          uVar53 = DAT_01032828;
                                          uVar47 = DAT_010327ac;
                                          uVar27 = DAT_010323a4;
                                          uVar10 = DAT_01031e8c;
                                          FUN_05c99d80(DAT_01031da8,&stack0x000007c0,0);
                                          if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                            *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                            *(undefined8 *)(unaff_x20 + 0x338) = 0;
                                            *(undefined8 *)(unaff_x20 + 0x330) = 0;
                                            *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                                            *(undefined8 *)(unaff_x20 + 0x324) = 0;
                                            uVar25 = DAT_01032320;
                                            uVar24 = DAT_010322c8;
                                            FUN_05c99d80(DAT_0103218c,DAT_01032320,DAT_010322c8,
                                                         uVar13,uVar41,DAT_01031d30,0x3f800000,
                                                         &stack0x00000780,0);
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
                                                thunk_FUN_02bb0e9c(*(undefined8 *)
                                                                    (*unaff_x21 + 0xb8));
                                                lVar63 = thunk_FUN_02b79644(*unaff_x21);
                                                FUN_04f81d44();
                                                lVar64 = FUN_02b3c908(*unaff_x22,0x1a);
                                                FUN_05c99d80(DAT_01032460,unaff_s12,unaff_s13,0,0,0,
                                                             0x3f800000,&stack0x00000740,0);
                                                if (lVar64 != 0) {
                                                  if (*(int *)(lVar64 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar64 + 0x2c) = 0;
                                                    *(undefined8 *)(lVar64 + 0x24) = 0;
                                                    *(undefined8 *)(lVar64 + 0x38) = 0;
                                                    *(undefined8 *)(lVar64 + 0x30) = 0;
                                                    *(undefined4 *)(lVar64 + 0x20) = 1;
                                                    FUN_05c99d80(0,0,0,0,0,0,0x3f800000,
                                                                 &stack0x00000700,0);
                                                    if ((*(uint *)(lVar64 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined4 *)(lVar64 + 0x40) = 0xffffffff;
                                                      *(undefined8 *)(lVar64 + 0x4c) = 0;
                                                      *(undefined8 *)(lVar64 + 0x44) = 0;
                                                      uVar34 = DAT_01032540;
                                                      *(undefined8 *)(lVar64 + 0x58) = 0;
                                                      *(undefined8 *)(lVar64 + 0x50) = 0;
                                                      FUN_05c99d80(uVar34,unaff_s10,unaff_s11,
                                                                   DAT_01032324,DAT_01032190,
                                                                   DAT_01031fa0,DAT_01031cbc,
                                                                   &stack0x000006c0,0);
                                                      if (2 < *(uint *)(lVar64 + 0x18)) {
                                                        *(undefined4 *)(lVar64 + 0x60) = 1;
                                                        *(undefined8 *)(lVar64 + 0x6c) = 0;
                                                        *(undefined8 *)(lVar64 + 100) = 0;
                                                        uVar34 = DAT_0103282c;
                                                        *(undefined8 *)(lVar64 + 0x78) = 0;
                                                        *(undefined8 *)(lVar64 + 0x70) = 0;
                                                        FUN_05c99d80(uVar34,DAT_010324c4,
                                                                     DAT_01031c5c,DAT_01032830,
                                                                     DAT_0103296c,DAT_010321f8,
                                                                     DAT_010320ac,&stack0x00000680,0
                                                                    );
                                                        if ((*(uint *)(lVar64 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined4 *)(lVar64 + 0x80) = 2;
                                                          *(undefined8 *)(lVar64 + 0x8c) = 0;
                                                          *(undefined8 *)(lVar64 + 0x84) = 0;
                                                          uVar34 = DAT_010324c8;
                                                          *(undefined8 *)(lVar64 + 0x98) = 0;
                                                          *(undefined8 *)(lVar64 + 0x90) = 0;
                                                          FUN_05c99d80(uVar34,DAT_01031eec,
                                                                       DAT_010325f0,DAT_01031dac,
                                                                       DAT_010325a4,DAT_010323f4,
                                                                       DAT_01032544,&stack0x00000640
                                                                       ,0);
                                                          if (4 < *(uint *)(lVar64 + 0x18)) {
                                                            *(undefined4 *)(lVar64 + 0xa0) = 3;
                                                            *(undefined8 *)(lVar64 + 0xac) = 0;
                                                            *(undefined8 *)(lVar64 + 0xa4) = 0;
                                                            *(undefined8 *)(lVar64 + 0xb8) = 0;
                                                            *(undefined8 *)(lVar64 + 0xb0) = 0;
                                                            FUN_05c99d80(DAT_01031fa4,DAT_01032194,
                                                                         DAT_010320b0,DAT_01031cc0,0
                                                                         ,0,0x3f800000,
                                                                         &stack0x00000600,0);
                                                            if (5 < *(uint *)(lVar64 + 0x18)) {
                                                              *(undefined8 *)(lVar64 + 0xcc) = 0;
                                                              *(undefined8 *)(lVar64 + 0xc4) = 0;
                                                              *(undefined8 *)(lVar64 + 0xd8) = 0;
                                                              *(undefined8 *)(lVar64 + 0xd0) = 0;
                                                              *(undefined4 *)(lVar64 + 0xc0) = 4;
                                                              FUN_05c99d80(DAT_010325f4,uVar4,uVar5,
                                                                           0,0,0,0x3f800000,
                                                                           &stack0x000005c0,0);
                                                              if (6 < *(uint *)(lVar64 + 0x18)) {
                                                                *(undefined4 *)(lVar64 + 0xe0) = 1;
                                                                *(undefined8 *)(lVar64 + 0xec) = 0;
                                                                *(undefined8 *)(lVar64 + 0xe4) = 0;
                                                                uVar4 = DAT_01032198;
                                                                *(undefined8 *)(lVar64 + 0xf8) = 0;
                                                                *(undefined8 *)(lVar64 + 0xf0) = 0;
                                                                FUN_05c99d80(uVar4,uVar20,uVar32,
                                                                             uVar44,DAT_01031ef0,
                                                                             DAT_010323f8,uVar30,
                                                                             &stack0x00000580,0);
                                                                if ((*(uint *)(lVar64 + 0x18) &
                                                                    0xfffffff8) != 0) {
                                                                  *(undefined4 *)(lVar64 + 0x100) =
                                                                       6;
                                                                  *(undefined8 *)(lVar64 + 0x118) =
                                                                       0;
                                                                  *(undefined8 *)(lVar64 + 0x110) =
                                                                       0;
                                                                  *(undefined8 *)(lVar64 + 0x10c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar64 + 0x104) =
                                                                       0;
                                                                  FUN_05c99d80(DAT_01032834,
                                                                               DAT_01031db0,
                                                                               DAT_010320b4,uVar11,
                                                                               DAT_01032250,
                                                                               DAT_01032970,uVar57,
                                                                               &stack0x00000540,0);
                                                                  if (8 < *(uint *)(lVar64 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar64 + 0x120)
                                                                         = 7;
                                                                    *(undefined8 *)(lVar64 + 0x138)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar64 + 0x130)
                                                                         = 0;
                                                                    uVar4 = DAT_01032900;
                                                                    *(undefined8 *)(lVar64 + 300) =
                                                                         0;
                                                                    *(undefined8 *)(lVar64 + 0x124)
                                                                         = 0;
                                                                    FUN_05c99d80(DAT_010323a8,uVar58
                                                                                 ,uVar33,uVar17,
                                                                                 uVar4,DAT_01032254,
                                                                                 uVar60,&
                                                  stack0x00000500,0);
                                                  if (9 < *(uint *)(lVar64 + 0x18)) {
                                                    *(undefined4 *)(lVar64 + 0x140) = 8;
                                                    *(undefined8 *)(lVar64 + 0x158) = 0;
                                                    *(undefined8 *)(lVar64 + 0x150) = 0;
                                                    *(undefined8 *)(lVar64 + 0x14c) = 0;
                                                    *(undefined8 *)(lVar64 + 0x144) = 0;
                                                    FUN_05c99d80(DAT_010321fc,DAT_01032974,
                                                                 DAT_01031db4,0,DAT_01032328,0,
                                                                 0x3f800000,&stack0x000004c0,0);
                                                    if (10 < *(uint *)(lVar64 + 0x18)) {
                                                      *(undefined4 *)(lVar64 + 0x160) = 9;
                                                      *(undefined8 *)(lVar64 + 0x178) = 0;
                                                      *(undefined8 *)(lVar64 + 0x170) = 0;
                                                      *(undefined8 *)(lVar64 + 0x16c) = 0;
                                                      *(undefined8 *)(lVar64 + 0x164) = 0;
                                                      FUN_05c99d80(DAT_010320b8,uVar26,uVar28,0,0,0,
                                                                   0x3f800000,&stack0x00000480,0);
                                                      if (0xb < *(uint *)(lVar64 + 0x18)) {
                                                        *(undefined4 *)(lVar64 + 0x180) = 1;
                                                        *(undefined8 *)(lVar64 + 0x198) = 0;
                                                        *(undefined8 *)(lVar64 + 400) = 0;
                                                        uVar4 = DAT_01032660;
                                                        *(undefined8 *)(lVar64 + 0x18c) = 0;
                                                        *(undefined8 *)(lVar64 + 0x184) = 0;
                                                        FUN_05c99d80(DAT_01031c60,uVar12,uVar6,
                                                                     uVar35,uVar4,DAT_010328a0,
                                                                     uVar54,&stack0x00000440,0);
                                                        if (0xc < *(uint *)(lVar64 + 0x18)) {
                                                          *(undefined4 *)(lVar64 + 0x1a0) = 0xb;
                                                          *(undefined8 *)(lVar64 + 0x1b8) = 0;
                                                          *(undefined8 *)(lVar64 + 0x1b0) = 0;
                                                          uVar4 = DAT_01031d34;
                                                          *(undefined8 *)(lVar64 + 0x1ac) = 0;
                                                          *(undefined8 *)(lVar64 + 0x1a4) = 0;
                                                          FUN_05c99d80(DAT_010320bc,uVar14,uVar18,
                                                                       uVar31,uVar4,DAT_010328a4,
                                                                       uVar19,&stack0x00000400,0);
                                                          if (0xd < *(uint *)(lVar64 + 0x18)) {
                                                            *(undefined4 *)(lVar64 + 0x1c0) = 0xc;
                                                            *(undefined8 *)(lVar64 + 0x1d8) = 0;
                                                            *(undefined8 *)(lVar64 + 0x1d0) = 0;
                                                            uVar4 = DAT_010327b0;
                                                            *(undefined8 *)(lVar64 + 0x1cc) = 0;
                                                            *(undefined8 *)(lVar64 + 0x1c4) = 0;
                                                            FUN_05c99d80(DAT_01031ef4,uVar38,uVar59,
                                                                         uVar48,uVar4,DAT_01031db8,
                                                                         uVar49,&stack0x000003c0,0);
                                                            if (0xe < *(uint *)(lVar64 + 0x18)) {
                                                              *(undefined4 *)(lVar64 + 0x1e0) = 0xd;
                                                              *(undefined8 *)(lVar64 + 0x1f8) = 0;
                                                              *(undefined8 *)(lVar64 + 0x1f0) = 0;
                                                              *(undefined8 *)(lVar64 + 0x1ec) = 0;
                                                              *(undefined8 *)(lVar64 + 0x1e4) = 0;
                                                              FUN_05c99d80(DAT_01032664,uVar45,
                                                                           uVar46,uVar41,0xa2800000,
                                                                           0xa3000000a3000000,
                                                                           0x3f800000,
                                                                           &stack0x00000380,0);
                                                              if ((*(uint *)(lVar64 + 0x18) &
                                                                  0xfffffff0) != 0) {
                                                                *(undefined4 *)(lVar64 + 0x200) =
                                                                     0xe;
                                                                *(undefined8 *)(lVar64 + 0x218) = 0;
                                                                *(undefined8 *)(lVar64 + 0x210) = 0;
                                                                *(undefined8 *)(lVar64 + 0x20c) = 0;
                                                                *(undefined8 *)(lVar64 + 0x204) = 0;
                                                                FUN_05c99d80(DAT_010326c8,uVar36,
                                                                             uVar7,0,0,0,0x3f800000,
                                                                             &stack0x00000340,0);
                                                                if (0x10 < *(uint *)(lVar64 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar64 + 0x220) =
                                                                       1;
                                                                  *(undefined8 *)(lVar64 + 0x238) =
                                                                       0;
                                                                  *(undefined8 *)(lVar64 + 0x230) =
                                                                       0;
                                                                  uVar4 = DAT_010325a8;
                                                                  *(undefined8 *)(lVar64 + 0x22c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar64 + 0x224) =
                                                                       0;
                                                                  FUN_05c99d80(DAT_010324cc,uVar15,
                                                                               uVar9,uVar22,uVar4,
                                                                               DAT_01032134,uVar3,
                                                                               &stack0x00000300,0);
                                                                  if (0x11 < *(uint *)(lVar64 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar64 + 0x240)
                                                                         = 0x10;
                                                                    *(undefined8 *)(lVar64 + 600) =
                                                                         0;
                                                                    *(undefined8 *)(lVar64 + 0x250)
                                                                         = 0;
                                                                    uVar4 = DAT_01031f54;
                                                                    *(undefined8 *)(lVar64 + 0x24c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar64 + 0x244)
                                                                         = 0;
                                                                    FUN_05c99d80(DAT_01032548,uVar55
                                                                                 ,uVar61,uVar56,
                                                                                 uVar4,DAT_010327b4,
                                                                                 uVar50,&
                                                  stack0x000002c0,0);
                                                  if (0x12 < *(uint *)(lVar64 + 0x18)) {
                                                    *(undefined4 *)(lVar64 + 0x260) = 0x11;
                                                    *(undefined8 *)(lVar64 + 0x278) = 0;
                                                    *(undefined8 *)(lVar64 + 0x270) = 0;
                                                    uVar4 = DAT_0103254c;
                                                    *(undefined8 *)(lVar64 + 0x26c) = 0;
                                                    *(undefined8 *)(lVar64 + 0x264) = 0;
                                                    FUN_05c99d80(DAT_0103219c,uVar51,uVar39,uVar4,
                                                                 DAT_010325ac,DAT_01032740,
                                                                 DAT_010327b8,&stack0x00000280,0);
                                                    if (0x13 < *(uint *)(lVar64 + 0x18)) {
                                                      *(undefined4 *)(lVar64 + 0x280) = 0x12;
                                                      *(undefined8 *)(lVar64 + 0x298) = 0;
                                                      *(undefined8 *)(lVar64 + 0x290) = 0;
                                                      *(undefined8 *)(lVar64 + 0x28c) = 0;
                                                      *(undefined8 *)(lVar64 + 0x284) = 0;
                                                      uVar4 = DAT_0103283c;
                                                      FUN_05c99d80(DAT_0103232c,DAT_01032838,
                                                                   DAT_01032978,uVar41,DAT_0103283c,
                                                                   0x8800000088000000,0x3f800000,
                                                                   &stack0x00000240,0);
                                                      if (0x14 < *(uint *)(lVar64 + 0x18)) {
                                                        *(undefined4 *)(lVar64 + 0x2a0) = 0x13;
                                                        *(undefined8 *)(lVar64 + 0x2b8) = 0;
                                                        *(undefined8 *)(lVar64 + 0x2b0) = 0;
                                                        uVar5 = DAT_010325f8;
                                                        *(undefined8 *)(lVar64 + 0x2ac) = 0;
                                                        *(undefined8 *)(lVar64 + 0x2a4) = 0;
                                                        FUN_05c99d80(DAT_01031ef8,uVar16,uVar21,
                                                                     uVar23,uVar5,DAT_01031cc4,
                                                                     uVar37,&stack0x00000200,0);
                                                        in_stack_000001e0 = 0;
                                                        uStack00000000000001e8 = 0;
                                                        uStack00000000000001ec = 0;
                                                        in_stack_000001f0 = 0;
                                                        if (0x15 < *(uint *)(lVar64 + 0x18)) {
                                                          *(undefined4 *)(lVar64 + 0x2c0) = 1;
                                                          *(undefined8 *)(lVar64 + 0x2d8) = 0;
                                                          *(undefined8 *)(lVar64 + 0x2d0) = 0;
                                                          uVar5 = DAT_010324d0;
                                                          *(undefined8 *)(lVar64 + 0x2cc) = 0;
                                                          *(undefined8 *)(lVar64 + 0x2c4) = 0;
                                                          in_stack_000001c0 = 0;
                                                          uStack00000000000001c8 = 0;
                                                          uStack00000000000001cc = 0;
                                                          in_stack_000001d8 = 0;
                                                          uStack00000000000001d0 = 0;
                                                          uStack00000000000001d4 = 0;
                                                          FUN_05c99d80(DAT_010322cc,uVar29,uVar43,
                                                                       uVar40,uVar5,DAT_01032330,
                                                                       uVar62,&stack0x000001c0,0);
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
                                                          if (0x16 < *(uint *)(lVar64 + 0x18)) {
                                                            *(undefined4 *)(lVar64 + 0x2e0) = 0x15;
                                                            *(undefined8 *)(lVar64 + 0x2f8) =
                                                                 uStack00000000000001b4;
                                                            *(ulong *)(lVar64 + 0x2f0) =
                                                                 CONCAT44(uStack00000000000001d0,
                                                                          uStack00000000000001cc);
                                                            uVar5 = DAT_010325fc;
                                                            *(ulong *)(lVar64 + 0x2ec) =
                                                                 CONCAT44(uStack00000000000001cc,
                                                                          uStack00000000000001c8);
                                                            *(undefined8 *)(lVar64 + 0x2e4) =
                                                                 in_stack_000001c0;
                                                            in_stack_00000180 = 0;
                                                            uStack0000000000000188 = 0;
                                                            uStack000000000000018c = 0;
                                                            in_stack_00000198 = 0;
                                                            uStack0000000000000190 = 0;
                                                            uStack0000000000000194 = 0;
                                                            FUN_05c99d80(DAT_0103297c,uVar8,uVar2,
                                                                         uVar42,uVar5,DAT_01032840,
                                                                         uVar52,&stack0x00000180,0);
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
                                                            if (0x17 < *(uint *)(lVar64 + 0x18)) {
                                                              *(undefined4 *)(lVar64 + 0x300) = 0x16
                                                              ;
                                                              *(undefined8 *)(lVar64 + 0x318) =
                                                                   uStack0000000000000174;
                                                              *(ulong *)(lVar64 + 0x310) =
                                                                   CONCAT44(uStack0000000000000190,
                                                                            uStack000000000000018c);
                                                              uVar5 = DAT_01031d38;
                                                              *(ulong *)(lVar64 + 0x30c) =
                                                                   CONCAT44(uStack000000000000018c,
                                                                            uStack0000000000000188);
                                                              *(undefined8 *)(lVar64 + 0x304) =
                                                                   in_stack_00000180;
                                                              in_stack_00000140 = 0;
                                                              uStack0000000000000148 = 0;
                                                              uStack000000000000014c = 0;
                                                              in_stack_00000158 = 0;
                                                              uStack0000000000000150 = 0;
                                                              uStack0000000000000154 = 0;
                                                              FUN_05c99d80(DAT_010323fc,uVar27,
                                                                           uVar10,uVar47,uVar5,
                                                                           DAT_01031dbc,uVar53,
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
                                                              if (0x18 < *(uint *)(lVar64 + 0x18)) {
                                                                *(undefined4 *)(lVar64 + 800) = 0x17
                                                                ;
                                                                *(undefined8 *)(lVar64 + 0x338) =
                                                                     uStack0000000000000134;
                                                                *(ulong *)(lVar64 + 0x330) =
                                                                     CONCAT44(uStack0000000000000150
                                                                              ,
                                                  uStack000000000000014c);
                                                  *(ulong *)(lVar64 + 0x32c) =
                                                       CONCAT44(uStack000000000000014c,
                                                                uStack0000000000000148);
                                                  *(undefined8 *)(lVar64 + 0x324) =
                                                       in_stack_00000140;
                                                  in_stack_00000100 = 0;
                                                  uStack0000000000000108 = 0;
                                                  uStack000000000000010c = 0;
                                                  in_stack_00000118 = 0;
                                                  uStack0000000000000110 = 0;
                                                  uStack0000000000000114 = 0;
                                                  FUN_05c99d80(DAT_01032258,uVar25,uVar24,uVar13,
                                                               uVar13,uVar4,0x3f800000,
                                                               &stack0x00000100,0);
                                                  if (0x19 < *(uint *)(lVar64 + 0x18)) {
                                                    *(undefined4 *)(lVar64 + 0x340) = 0x18;
                                                    *(ulong *)(lVar64 + 0x358) =
                                                         CONCAT44(in_stack_00000118,
                                                                  uStack0000000000000114);
                                                    *(ulong *)(lVar64 + 0x350) =
                                                         CONCAT44(uStack0000000000000110,
                                                                  uStack000000000000010c);
                                                    *(ulong *)(lVar64 + 0x34c) =
                                                         CONCAT44(uStack000000000000010c,
                                                                  uStack0000000000000108);
                                                    *(undefined8 *)(lVar64 + 0x344) =
                                                         in_stack_00000100;
                                                    if (lVar63 != 0) {
                                                      *(long *)(lVar63 + 0x10) = lVar64;
                                                      thunk_FUN_02bb0e9c((long *)(lVar63 + 0x10),
                                                                         lVar64);
                                                      plVar65 = (long *)(*(long *)(*unaff_x21 + 0xb8
                                                                                  ) + 8);
                                                      *plVar65 = lVar63;
                                                      thunk_FUN_02bb0e9c(plVar65,lVar63);
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
LAB_04f8394c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


