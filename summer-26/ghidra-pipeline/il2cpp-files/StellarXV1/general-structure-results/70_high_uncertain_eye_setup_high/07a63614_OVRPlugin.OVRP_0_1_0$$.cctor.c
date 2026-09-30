/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$.cctor
ENTRY_POINT: 07a63614
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_0___cctor
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

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
  long lVar33;
  long lVar34;
  long *plVar35;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined4 unaff_s8;
  undefined4 uVar38;
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
  
  uVar38 = *(undefined4 *)(param_1 + 0xc48);
  uStack0000000000000080 = param_4;
  uStack0000000000000084 = param_3;
  FUN_089d99f0();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0xb4);
  *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0xac);
  if ((uVar1 & 0xfffffff0) != 0) {
    uVar37 = *(undefined8 *)(unaff_x23 + 0x94);
    uVar36 = *(undefined8 *)(unaff_x23 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
    *(undefined8 *)(unaff_x20 + 0x218) = uVar37;
    *(undefined8 *)(unaff_x20 + 0x210) = uVar36;
    *(undefined8 *)(unaff_x20 + 0x20c) = 0;
    *(undefined8 *)(unaff_x20 + 0x204) = 0;
    uVar18 = DAT_01aec9a8;
    uVar5 = DAT_01aeb8c0;
    FUN_089d99f0(DAT_01aebf70,DAT_01aec9a8,DAT_01aeb8c0,0,0,0,0x3f800000,&stack0x000009c0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x54) = *(undefined8 *)(unaff_x23 + 0x74);
    *(undefined8 *)(unaff_x23 + 0x4c) = *(undefined8 *)(unaff_x23 + 0x6c);
    if (0x10 < uVar1) {
      uVar37 = *(undefined8 *)(unaff_x23 + 0x54);
      uVar36 = *(undefined8 *)(unaff_x23 + 0x4c);
      *(undefined4 *)(unaff_x20 + 0x220) = 1;
      *(undefined8 *)(unaff_x20 + 0x238) = uVar37;
      *(undefined8 *)(unaff_x20 + 0x230) = uVar36;
      *(undefined8 *)(unaff_x20 + 0x22c) = 0;
      *(undefined8 *)(unaff_x20 + 0x224) = 0;
      uVar12 = DAT_01aec3a0;
      uVar9 = DAT_01aebe5c;
      uVar7 = DAT_01aeb9cc;
      uVar3 = DAT_01aeb7e0;
      FUN_089d99f0(DAT_01aebd64,&stack0x00000980,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
      *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
      if (0x11 < uVar1) {
        uVar37 = *(undefined8 *)(unaff_x23 + 0x14);
        uVar36 = *(undefined8 *)(unaff_x23 + 0xc);
        *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
        *(undefined8 *)(unaff_x20 + 600) = uVar37;
        *(undefined8 *)(unaff_x20 + 0x250) = uVar36;
        *(undefined8 *)(unaff_x20 + 0x24c) = 0;
        *(undefined8 *)(unaff_x20 + 0x244) = 0;
        uVar31 = DAT_01aed1ec;
        uVar30 = DAT_01aed054;
        uVar29 = DAT_01aed050;
        uVar25 = DAT_01aecf38;
        FUN_089d99f0(DAT_01aeca84,&stack0x00000940,0);
        if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
          *(undefined8 *)(unaff_x20 + 0x278) = 0;
          *(undefined8 *)(unaff_x20 + 0x270) = 0;
          *(undefined8 *)(unaff_x20 + 0x26c) = 0;
          *(undefined8 *)(unaff_x20 + 0x264) = 0;
          uVar26 = DAT_01aecf3c;
          uVar20 = DAT_01aecb78;
          FUN_089d99f0(DAT_01aebbb4,DAT_01aecf3c,DAT_01aecb78,DAT_01aed1f0,DAT_01aece4c,DAT_01aebd68
                       ,DAT_01aec7ec,&stack0x00000900,0);
          if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
            *(undefined8 *)(unaff_x20 + 0x298) = 0;
            *(undefined8 *)(unaff_x20 + 0x290) = 0;
            *(undefined8 *)(unaff_x20 + 0x28c) = 0;
            *(undefined8 *)(unaff_x20 + 0x284) = 0;
            FUN_089d99f0(DAT_01aeb7e4,DAT_01aec8cc,DAT_01aebbb8,DAT_01aeb7e8,unaff_s8,DAT_01aec3a4,
                         0x3f800000,&stack0x000008c0,0);
            if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
              *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
              *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
              *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
              *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
              uVar19 = DAT_01aec9ac;
              uVar13 = DAT_01aec3a8;
              uVar11 = DAT_01aec0b8;
              uVar10 = DAT_01aebe60;
              FUN_089d99f0(DAT_01aed140,&stack0x00000880,0);
              if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                uVar32 = DAT_01aed1f4;
                uVar23 = DAT_01aecd3c;
                uVar21 = DAT_01aecb7c;
                uVar17 = DAT_01aec640;
                FUN_089d99f0(DAT_01aec63c,&stack0x00000840,0);
                if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                  uVar27 = DAT_01aecf44;
                  uVar22 = DAT_01aecc50;
                  uVar6 = DAT_01aeb8c4;
                  uVar2 = DAT_01aeb6f8;
                  FUN_089d99f0(DAT_01aecf40,&stack0x00000800,0);
                  if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                    *(undefined8 *)(unaff_x20 + 0x318) = 0;
                    *(undefined8 *)(unaff_x20 + 0x310) = 0;
                    *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x304) = 0;
                    uVar28 = DAT_01aecf48;
                    uVar24 = DAT_01aece50;
                    uVar16 = DAT_01aec58c;
                    uVar8 = DAT_01aebad8;
                    FUN_089d99f0(DAT_01aeb8c8,&stack0x000007c0,0);
                    if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 800) = 0x17;
                      *(undefined8 *)(unaff_x20 + 0x338) = 0;
                      *(undefined8 *)(unaff_x20 + 0x330) = 0;
                      *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x324) = 0;
                      uVar15 = DAT_01aec494;
                      uVar14 = DAT_01aec3ac;
                      FUN_089d99f0(DAT_01aec0bc,DAT_01aec494,DAT_01aec3ac,unaff_s8,uVar38,
                                   DAT_01aeb7ec,0x3f800000,&stack0x00000780,0);
                      if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                        *(undefined8 *)(unaff_x20 + 0x358) = 0;
                        *(undefined8 *)(unaff_x20 + 0x350) = 0;
                        *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x344) = 0;
                        if (unaff_x19 != 0) {
                          *(long *)(unaff_x19 + 0x10) = unaff_x20;
                          thunk_FUN_040ec700();
                          **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                          thunk_FUN_040ec700(*(undefined8 *)(*unaff_x21 + 0xb8));
                          lVar33 = thunk_FUN_040b4efc(*unaff_x21);
                          FUN_07a62ce0();
                          lVar34 = FUN_04077674(*unaff_x22,0x1a);
                          FUN_089d99f0(DAT_01aec700,unaff_s12,unaff_s13,0,0,0,0x3f800000,
                                       &stack0x00000740,0);
                          if (lVar34 != 0) {
                            if (*(int *)(lVar34 + 0x18) != 0) {
                              *(undefined8 *)(lVar34 + 0x2c) = 0;
                              *(undefined8 *)(lVar34 + 0x24) = 0;
                              *(undefined8 *)(lVar34 + 0x38) = 0;
                              *(undefined8 *)(lVar34 + 0x30) = 0;
                              *(undefined4 *)(lVar34 + 0x20) = 1;
                              FUN_089d99f0(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                              if ((*(uint *)(lVar34 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined4 *)(lVar34 + 0x40) = 0xffffffff;
                                *(undefined8 *)(lVar34 + 0x4c) = 0;
                                *(undefined8 *)(lVar34 + 0x44) = 0;
                                uVar4 = DAT_01aec8d0;
                                *(undefined8 *)(lVar34 + 0x58) = 0;
                                *(undefined8 *)(lVar34 + 0x50) = 0;
                                FUN_089d99f0(uVar4,unaff_s10,unaff_s11,DAT_01aec498,DAT_01aec0c0,
                                             DAT_01aebd70,DAT_01aeb6fc,&stack0x000006c0,0);
                                if (2 < *(uint *)(lVar34 + 0x18)) {
                                  *(undefined4 *)(lVar34 + 0x60) = 1;
                                  *(undefined8 *)(lVar34 + 0x6c) = 0;
                                  *(undefined8 *)(lVar34 + 100) = 0;
                                  uVar4 = DAT_01aecf4c;
                                  *(undefined8 *)(lVar34 + 0x78) = 0;
                                  *(undefined8 *)(lVar34 + 0x70) = 0;
                                  FUN_089d99f0(uVar4,DAT_01aec7f0,DAT_01aeb64c,DAT_01aecf50,
                                               DAT_01aed1f8,DAT_01aec1ac,DAT_01aebf78,
                                               &stack0x00000680,0);
                                  if ((*(uint *)(lVar34 + 0x18) & 0xfffffffc) != 0) {
                                    *(undefined4 *)(lVar34 + 0x80) = 2;
                                    *(undefined8 *)(lVar34 + 0x8c) = 0;
                                    *(undefined8 *)(lVar34 + 0x84) = 0;
                                    uVar4 = DAT_01aec7f4;
                                    *(undefined8 *)(lVar34 + 0x98) = 0;
                                    *(undefined8 *)(lVar34 + 0x90) = 0;
                                    FUN_089d99f0(uVar4,DAT_01aebbbc,DAT_01aeca88,DAT_01aeb8cc,
                                                 DAT_01aec9b0,DAT_01aec644,DAT_01aec8d4,
                                                 &stack0x00000640,0);
                                    if (4 < *(uint *)(lVar34 + 0x18)) {
                                      *(undefined4 *)(lVar34 + 0xa0) = 3;
                                      *(undefined8 *)(lVar34 + 0xac) = 0;
                                      *(undefined8 *)(lVar34 + 0xa4) = 0;
                                      *(undefined8 *)(lVar34 + 0xb8) = 0;
                                      *(undefined8 *)(lVar34 + 0xb0) = 0;
                                      FUN_089d99f0(DAT_01aebd74,DAT_01aec0c4,DAT_01aebf7c,
                                                   DAT_01aeb700,0,0,0x3f800000,&stack0x00000600,0);
                                      if (5 < *(uint *)(lVar34 + 0x18)) {
                                        *(undefined8 *)(lVar34 + 0xcc) = 0;
                                        *(undefined8 *)(lVar34 + 0xc4) = 0;
                                        *(undefined8 *)(lVar34 + 0xd8) = 0;
                                        *(undefined8 *)(lVar34 + 0xd0) = 0;
                                        *(undefined4 *)(lVar34 + 0xc0) = 4;
                                        FUN_089d99f0(DAT_01aeca8c,unaff_s14,unaff_s15,0,0,0,
                                                     0x3f800000,&stack0x000005c0,0);
                                        if (6 < *(uint *)(lVar34 + 0x18)) {
                                          *(undefined4 *)(lVar34 + 0xe0) = 1;
                                          *(undefined8 *)(lVar34 + 0xec) = 0;
                                          *(undefined8 *)(lVar34 + 0xe4) = 0;
                                          uVar4 = DAT_01aec0c8;
                                          *(undefined8 *)(lVar34 + 0xf8) = 0;
                                          *(undefined8 *)(lVar34 + 0xf0) = 0;
                                          FUN_089d99f0(uVar4,uStack00000000000000c0,
                                                       in_stack_00000e2c,in_stack_00000e28,
                                                       DAT_01aebbc0,DAT_01aec648,
                                                       uStack00000000000000dc,&stack0x00000580,0);
                                          if ((*(uint *)(lVar34 + 0x18) & 0xfffffff8) != 0) {
                                            *(undefined4 *)(lVar34 + 0x100) = 6;
                                            *(undefined8 *)(lVar34 + 0x118) = 0;
                                            *(undefined8 *)(lVar34 + 0x110) = 0;
                                            *(undefined8 *)(lVar34 + 0x10c) = 0;
                                            *(undefined8 *)(lVar34 + 0x104) = 0;
                                            FUN_089d99f0(DAT_01aecf54,DAT_01aeb8d0,DAT_01aebf80,
                                                         uStack00000000000000d8,DAT_01aec2b0,
                                                         DAT_01aed1fc,uStack00000000000000d4,
                                                         &stack0x00000540,0);
                                            if (8 < *(uint *)(lVar34 + 0x18)) {
                                              *(undefined4 *)(lVar34 + 0x120) = 7;
                                              *(undefined8 *)(lVar34 + 0x138) = 0;
                                              *(undefined8 *)(lVar34 + 0x130) = 0;
                                              uVar4 = DAT_01aed144;
                                              *(undefined8 *)(lVar34 + 300) = 0;
                                              *(undefined8 *)(lVar34 + 0x124) = 0;
                                              FUN_089d99f0(DAT_01aec590,uStack00000000000000d0,
                                                           uStack00000000000000cc,
                                                           uStack00000000000000c8,uVar4,DAT_01aec2b4
                                                           ,uStack00000000000000c4,&stack0x00000500,
                                                           0);
                                              if (9 < *(uint *)(lVar34 + 0x18)) {
                                                *(undefined4 *)(lVar34 + 0x140) = 8;
                                                *(undefined8 *)(lVar34 + 0x158) = 0;
                                                *(undefined8 *)(lVar34 + 0x150) = 0;
                                                *(undefined8 *)(lVar34 + 0x14c) = 0;
                                                *(undefined8 *)(lVar34 + 0x144) = 0;
                                                FUN_089d99f0(DAT_01aec1b0,DAT_01aed200,DAT_01aeb8d4,
                                                             0,DAT_01aec49c,0,0x3f800000,
                                                             &stack0x000004c0,0);
                                                if (10 < *(uint *)(lVar34 + 0x18)) {
                                                  *(undefined4 *)(lVar34 + 0x160) = 9;
                                                  *(undefined8 *)(lVar34 + 0x178) = 0;
                                                  *(undefined8 *)(lVar34 + 0x170) = 0;
                                                  *(undefined8 *)(lVar34 + 0x16c) = 0;
                                                  *(undefined8 *)(lVar34 + 0x164) = 0;
                                                  FUN_089d99f0(DAT_01aebf84,uStack00000000000000bc,
                                                               uStack00000000000000b8,0,0,0,
                                                               0x3f800000,&stack0x00000480,0);
                                                  if (0xb < *(uint *)(lVar34 + 0x18)) {
                                                    *(undefined4 *)(lVar34 + 0x180) = 1;
                                                    *(undefined8 *)(lVar34 + 0x198) = 0;
                                                    *(undefined8 *)(lVar34 + 400) = 0;
                                                    uVar4 = DAT_01aecb80;
                                                    *(undefined8 *)(lVar34 + 0x18c) = 0;
                                                    *(undefined8 *)(lVar34 + 0x184) = 0;
                                                    FUN_089d99f0(DAT_01aeb650,uStack00000000000000b4
                                                                 ,uStack00000000000000b0,
                                                                 uStack00000000000000ac,uVar4,
                                                                 DAT_01aed058,uStack00000000000000a8
                                                                 ,&stack0x00000440,0);
                                                    if (0xc < *(uint *)(lVar34 + 0x18)) {
                                                      *(undefined4 *)(lVar34 + 0x1a0) = 0xb;
                                                      *(undefined8 *)(lVar34 + 0x1b8) = 0;
                                                      *(undefined8 *)(lVar34 + 0x1b0) = 0;
                                                      uVar4 = DAT_01aeb7f0;
                                                      *(undefined8 *)(lVar34 + 0x1ac) = 0;
                                                      *(undefined8 *)(lVar34 + 0x1a4) = 0;
                                                      FUN_089d99f0(DAT_01aebf88,
                                                                   uStack00000000000000a4,
                                                                   uStack00000000000000a0,
                                                                   uStack000000000000009c,uVar4,
                                                                   DAT_01aed05c,
                                                                   uStack0000000000000098,
                                                                   &stack0x00000400,0);
                                                      if (0xd < *(uint *)(lVar34 + 0x18)) {
                                                        *(undefined4 *)(lVar34 + 0x1c0) = 0xc;
                                                        *(undefined8 *)(lVar34 + 0x1d8) = 0;
                                                        *(undefined8 *)(lVar34 + 0x1d0) = 0;
                                                        uVar4 = DAT_01aece54;
                                                        *(undefined8 *)(lVar34 + 0x1cc) = 0;
                                                        *(undefined8 *)(lVar34 + 0x1c4) = 0;
                                                        FUN_089d99f0(DAT_01aebbc4,
                                                                     uStack0000000000000094,
                                                                     uStack0000000000000090,
                                                                     uStack000000000000008c,uVar4,
                                                                     DAT_01aeb8d8,
                                                                     uStack0000000000000088,
                                                                     &stack0x000003c0,0);
                                                        if (0xe < *(uint *)(lVar34 + 0x18)) {
                                                          *(undefined4 *)(lVar34 + 0x1e0) = 0xd;
                                                          *(undefined8 *)(lVar34 + 0x1f8) = 0;
                                                          *(undefined8 *)(lVar34 + 0x1f0) = 0;
                                                          *(undefined8 *)(lVar34 + 0x1ec) = 0;
                                                          *(undefined8 *)(lVar34 + 0x1e4) = 0;
                                                          FUN_089d99f0(DAT_01aecb84,
                                                                       uStack0000000000000084,
                                                                       uStack0000000000000080,uVar38
                                                                       ,0xa2800000,
                                                                       0xa3000000a3000000,0x3f800000
                                                                       ,&stack0x00000380,0);
                                                          if ((*(uint *)(lVar34 + 0x18) & 0xfffffff0
                                                              ) != 0) {
                                                            *(undefined4 *)(lVar34 + 0x200) = 0xe;
                                                            *(undefined8 *)(lVar34 + 0x218) = 0;
                                                            *(undefined8 *)(lVar34 + 0x210) = 0;
                                                            *(undefined8 *)(lVar34 + 0x20c) = 0;
                                                            *(undefined8 *)(lVar34 + 0x204) = 0;
                                                            FUN_089d99f0(DAT_01aecc54,uVar18,uVar5,0
                                                                         ,0,0,0x3f800000,
                                                                         &stack0x00000340,0);
                                                            if (0x10 < *(uint *)(lVar34 + 0x18)) {
                                                              *(undefined4 *)(lVar34 + 0x220) = 1;
                                                              *(undefined8 *)(lVar34 + 0x238) = 0;
                                                              *(undefined8 *)(lVar34 + 0x230) = 0;
                                                              uVar5 = DAT_01aec9b4;
                                                              *(undefined8 *)(lVar34 + 0x22c) = 0;
                                                              *(undefined8 *)(lVar34 + 0x224) = 0;
                                                              FUN_089d99f0(DAT_01aec7f8,uVar9,uVar7,
                                                                           uVar12,uVar5,DAT_01aec038
                                                                           ,uVar3,&stack0x00000300,0
                                                                          );
                                                              if (0x11 < *(uint *)(lVar34 + 0x18)) {
                                                                *(undefined4 *)(lVar34 + 0x240) =
                                                                     0x10;
                                                                *(undefined8 *)(lVar34 + 600) = 0;
                                                                *(undefined8 *)(lVar34 + 0x250) = 0;
                                                                uVar5 = DAT_01aebc8c;
                                                                *(undefined8 *)(lVar34 + 0x24c) = 0;
                                                                *(undefined8 *)(lVar34 + 0x244) = 0;
                                                                FUN_089d99f0(DAT_01aec8d8,uVar29,
                                                                             uVar31,uVar30,uVar5,
                                                                             DAT_01aece58,uVar25,
                                                                             &stack0x000002c0,0);
                                                                if (0x12 < *(uint *)(lVar34 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar34 + 0x260) =
                                                                       0x11;
                                                                  *(undefined8 *)(lVar34 + 0x278) =
                                                                       0;
                                                                  *(undefined8 *)(lVar34 + 0x270) =
                                                                       0;
                                                                  uVar5 = DAT_01aec8dc;
                                                                  *(undefined8 *)(lVar34 + 0x26c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar34 + 0x264) =
                                                                       0;
                                                                  FUN_089d99f0(DAT_01aec0cc,uVar26,
                                                                               uVar20,uVar5,
                                                                               DAT_01aec9b8,
                                                                               DAT_01aecd48,
                                                                               DAT_01aece5c,
                                                                               &stack0x00000280,0);
                                                                  if (0x13 < *(uint *)(lVar34 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar34 + 0x280)
                                                                         = 0x12;
                                                                    *(undefined8 *)(lVar34 + 0x298)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar34 + 0x290)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar34 + 0x28c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar34 + 0x284)
                                                                         = 0;
                                                                    uVar5 = DAT_01aecf5c;
                                                                    FUN_089d99f0(DAT_01aec4a0,
                                                                                 DAT_01aecf58,
                                                                                 DAT_01aed204,uVar38
                                                                                 ,DAT_01aecf5c,
                                                                                 0x8800000088000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000240,0)
                                                                    ;
                                                                    if (0x14 < *(uint *)(lVar34 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar34 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar34 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar34 + 0x2b0) = 0;
                                                    uVar38 = DAT_01aeca90;
                                                    *(undefined8 *)(lVar34 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar34 + 0x2a4) = 0;
                                                    FUN_089d99f0(DAT_01aebbc8,uVar10,uVar11,uVar13,
                                                                 uVar38,DAT_01aeb704,uVar19,
                                                                 &stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar34 + 0x18)) {
                                                      *(undefined4 *)(lVar34 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar34 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar34 + 0x2d0) = 0;
                                                      uVar38 = DAT_01aec7fc;
                                                      *(undefined8 *)(lVar34 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar34 + 0x2c4) = 0;
                                                      in_stack_000001c0 = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      in_stack_000001d8 = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      FUN_089d99f0(DAT_01aec3b0,uVar17,uVar23,uVar21
                                                                   ,uVar38,DAT_01aec4a4,uVar32,
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
                                                      if (0x16 < *(uint *)(lVar34 + 0x18)) {
                                                        *(undefined4 *)(lVar34 + 0x2e0) = 0x15;
                                                        *(undefined8 *)(lVar34 + 0x2f8) =
                                                             uStack00000000000001b4;
                                                        *(ulong *)(lVar34 + 0x2f0) =
                                                             CONCAT44(uStack00000000000001d0,
                                                                      uStack00000000000001cc);
                                                        uVar38 = DAT_01aeca94;
                                                        *(ulong *)(lVar34 + 0x2ec) =
                                                             CONCAT44(uStack00000000000001cc,
                                                                      uStack00000000000001c8);
                                                        *(undefined8 *)(lVar34 + 0x2e4) =
                                                             in_stack_000001c0;
                                                        in_stack_00000180 = 0;
                                                        uStack0000000000000188 = 0;
                                                        uStack000000000000018c = 0;
                                                        in_stack_00000198 = 0;
                                                        uStack0000000000000190 = 0;
                                                        uStack0000000000000194 = 0;
                                                        FUN_089d99f0(DAT_01aed208,uVar6,uVar2,uVar22
                                                                     ,uVar38,DAT_01aecf60,uVar27,
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
                                                        if (0x17 < *(uint *)(lVar34 + 0x18)) {
                                                          *(undefined4 *)(lVar34 + 0x300) = 0x16;
                                                          *(undefined8 *)(lVar34 + 0x318) =
                                                               uStack0000000000000174;
                                                          *(ulong *)(lVar34 + 0x310) =
                                                               CONCAT44(uStack0000000000000190,
                                                                        uStack000000000000018c);
                                                          uVar38 = DAT_01aeb7f4;
                                                          *(ulong *)(lVar34 + 0x30c) =
                                                               CONCAT44(uStack000000000000018c,
                                                                        uStack0000000000000188);
                                                          *(undefined8 *)(lVar34 + 0x304) =
                                                               in_stack_00000180;
                                                          in_stack_00000140 = 0;
                                                          uStack0000000000000148 = 0;
                                                          uStack000000000000014c = 0;
                                                          in_stack_00000158 = 0;
                                                          uStack0000000000000150 = 0;
                                                          uStack0000000000000154 = 0;
                                                          FUN_089d99f0(DAT_01aec64c,uVar16,uVar8,
                                                                       uVar24,uVar38,DAT_01aeb8dc,
                                                                       uVar28,&stack0x00000140,0);
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
                                                          if (0x18 < *(uint *)(lVar34 + 0x18)) {
                                                            *(undefined4 *)(lVar34 + 800) = 0x17;
                                                            *(undefined8 *)(lVar34 + 0x338) =
                                                                 uStack0000000000000134;
                                                            *(ulong *)(lVar34 + 0x330) =
                                                                 CONCAT44(uStack0000000000000150,
                                                                          uStack000000000000014c);
                                                            *(ulong *)(lVar34 + 0x32c) =
                                                                 CONCAT44(uStack000000000000014c,
                                                                          uStack0000000000000148);
                                                            *(undefined8 *)(lVar34 + 0x324) =
                                                                 in_stack_00000140;
                                                            in_stack_00000100 = 0;
                                                            uStack0000000000000108 = 0;
                                                            uStack000000000000010c = 0;
                                                            in_stack_00000118 = 0;
                                                            uStack0000000000000110 = 0;
                                                            uStack0000000000000114 = 0;
                                                            FUN_089d99f0(DAT_01aec2b8,uVar15,uVar14,
                                                                         unaff_s8,unaff_s8,uVar5,
                                                                         0x3f800000,&stack0x00000100
                                                                         ,0);
                                                            if (0x19 < *(uint *)(lVar34 + 0x18)) {
                                                              *(undefined4 *)(lVar34 + 0x340) = 0x18
                                                              ;
                                                              *(ulong *)(lVar34 + 0x358) =
                                                                   CONCAT44(in_stack_00000118,
                                                                            uStack0000000000000114);
                                                              *(ulong *)(lVar34 + 0x350) =
                                                                   CONCAT44(uStack0000000000000110,
                                                                            uStack000000000000010c);
                                                              *(ulong *)(lVar34 + 0x34c) =
                                                                   CONCAT44(uStack000000000000010c,
                                                                            uStack0000000000000108);
                                                              *(undefined8 *)(lVar34 + 0x344) =
                                                                   in_stack_00000100;
                                                              if (lVar33 != 0) {
                                                                *(long *)(lVar33 + 0x10) = lVar34;
                                                                thunk_FUN_040ec700((long *)(lVar33 +
                                                                                           0x10),
                                                                                   lVar34);
                                                                plVar35 = (long *)(*(long *)(*
                                                  unaff_x21 + 0xb8) + 8);
                                                  *plVar35 = lVar33;
                                                  thunk_FUN_040ec700(plVar35,lVar33);
                                                  return;
                                                  }
                                                  goto LAB_07a648ec;
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
                            goto LAB_07a648e8;
                          }
                        }
LAB_07a648ec:
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
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
LAB_07a648e8:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


