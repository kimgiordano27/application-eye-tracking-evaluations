/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 07a6319c
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


void OVRPlugin_Qpl_Annotation_Builder__Add
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,undefined1 param_5 [16],undefined1 param_6 [16],undefined4 param_7
               )

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
  long lVar56;
  long lVar57;
  long *plVar58;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
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
  
  uStack00000000000000dc = param_7;
  FUN_089d99f0(&stack0x00000c00,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0xb4);
  *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0xac);
  if ((uVar1 & 0xfffffff8) != 0) {
    uVar60 = *(undefined8 *)(unaff_x23 + 0x94);
    uVar59 = *(undefined8 *)(unaff_x23 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x100) = 6;
    *(undefined8 *)(unaff_x20 + 0x118) = uVar60;
    *(undefined8 *)(unaff_x20 + 0x110) = uVar59;
    *(undefined8 *)(unaff_x20 + 0x10c) = 0;
    *(undefined8 *)(unaff_x20 + 0x104) = 0;
    uVar5 = DAT_01aed134;
    uVar4 = DAT_01aebba8;
    FUN_089d99f0(DAT_01aec398,DAT_01aebc88,DAT_01aec57c,DAT_01aebba8,DAT_01aec6f4,DAT_01aebbac,
                 &stack0x00000bc0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x54) = *(undefined8 *)(unaff_x23 + 0x74);
    *(undefined8 *)(unaff_x23 + 0x4c) = *(undefined8 *)(unaff_x23 + 0x6c);
    if (8 < uVar1) {
      uVar60 = *(undefined8 *)(unaff_x23 + 0x54);
      uVar59 = *(undefined8 *)(unaff_x23 + 0x4c);
      *(undefined4 *)(unaff_x20 + 0x120) = 7;
      *(undefined8 *)(unaff_x20 + 0x138) = uVar60;
      *(undefined8 *)(unaff_x20 + 0x130) = uVar59;
      *(undefined8 *)(unaff_x20 + 300) = 0;
      *(undefined8 *)(unaff_x20 + 0x124) = 0;
      uVar53 = DAT_01aed1e0;
      uVar51 = DAT_01aed138;
      uVar29 = DAT_01aec7e4;
      uVar15 = DAT_01aebf64;
      FUN_089d99f0(DAT_01aed1dc,&stack0x00000b80,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
      *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
      if (9 < uVar1) {
        uVar60 = *(undefined8 *)(unaff_x23 + 0x14);
        uVar59 = *(undefined8 *)(unaff_x23 + 0xc);
        *(undefined4 *)(unaff_x20 + 0x140) = 8;
        *(undefined8 *)(unaff_x20 + 0x158) = uVar60;
        *(undefined8 *)(unaff_x20 + 0x150) = uVar59;
        *(undefined8 *)(unaff_x20 + 0x14c) = 0;
        *(undefined8 *)(unaff_x20 + 0x144) = 0;
        FUN_089d99f0(DAT_01aec0ac,DAT_01aeb648,DAT_01aed1e4,0,DAT_01aeca7c,0,0x3f800000,
                     &stack0x00000b40,0);
        if (10 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x160) = 9;
          *(undefined8 *)(unaff_x20 + 0x178) = 0;
          *(undefined8 *)(unaff_x20 + 0x170) = 0;
          *(undefined8 *)(unaff_x20 + 0x16c) = 0;
          *(undefined8 *)(unaff_x20 + 0x164) = 0;
          uVar26 = DAT_01aec634;
          uVar24 = DAT_01aec580;
          FUN_089d99f0(DAT_01aec9a0,DAT_01aec580,DAT_01aec634,0,0,0,0x3f800000,&stack0x00000b00,0);
          if (0xb < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x180) = 1;
            *(undefined8 *)(unaff_x20 + 0x198) = 0;
            *(undefined8 *)(unaff_x20 + 400) = 0;
            *(undefined8 *)(unaff_x20 + 0x18c) = 0;
            *(undefined8 *)(unaff_x20 + 0x184) = 0;
            uVar48 = DAT_01aed048;
            uVar30 = DAT_01aec9a4;
            uVar11 = DAT_01aebbb0;
            uVar6 = DAT_01aeb8bc;
            FUN_089d99f0(DAT_01aed1e8,&stack0x00000ac0,0);
            if (0xc < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
              *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
              *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
              *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
              *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
              uVar28 = DAT_01aec6f8;
              uVar17 = DAT_01aebf6c;
              uVar16 = DAT_01aebf68;
              uVar12 = DAT_01aebd60;
              FUN_089d99f0(DAT_01aecf2c,&stack0x00000a80,0);
              if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
                *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
                *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
                *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
                *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                uVar52 = DAT_01aed13c;
                uVar43 = DAT_01aecf34;
                uVar42 = DAT_01aecf30;
                uVar33 = DAT_01aeca80;
                FUN_089d99f0(DAT_01aed04c,&stack0x00000a40,0);
                if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                  uVar40 = DAT_01aece48;
                  uVar39 = DAT_01aece44;
                  uVar36 = DAT_01aecc48;
                  FUN_089d99f0(DAT_01aebe58,DAT_01aece44,DAT_01aece48,DAT_01aecc48,0x22800000,
                               0x2300000023000000,0x3f800000,&stack0x00000a00,0);
                  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                    *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                    *(undefined8 *)(unaff_x20 + 0x218) = 0;
                    *(undefined8 *)(unaff_x20 + 0x210) = 0;
                    *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x204) = 0;
                    uVar31 = DAT_01aec9a8;
                    uVar7 = DAT_01aeb8c0;
                    FUN_089d99f0(DAT_01aebf70,DAT_01aec9a8,DAT_01aeb8c0,0,0,0,0x3f800000,
                                 &stack0x000009c0,0);
                    if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x220) = 1;
                      *(undefined8 *)(unaff_x20 + 0x238) = 0;
                      *(undefined8 *)(unaff_x20 + 0x230) = 0;
                      *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x224) = 0;
                      uVar20 = DAT_01aec3a0;
                      uVar13 = DAT_01aebe5c;
                      uVar9 = DAT_01aeb9cc;
                      uVar3 = DAT_01aeb7e0;
                      FUN_089d99f0(DAT_01aebd64,&stack0x00000980,0);
                      if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                        *(undefined8 *)(unaff_x20 + 600) = 0;
                        *(undefined8 *)(unaff_x20 + 0x250) = 0;
                        *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x244) = 0;
                        uVar54 = DAT_01aed1ec;
                        uVar50 = DAT_01aed054;
                        uVar49 = DAT_01aed050;
                        uVar44 = DAT_01aecf38;
                        FUN_089d99f0(DAT_01aeca84,&stack0x00000940,0);
                        if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                          *(undefined8 *)(unaff_x20 + 0x278) = 0;
                          *(undefined8 *)(unaff_x20 + 0x270) = 0;
                          *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x264) = 0;
                          uVar45 = DAT_01aecf3c;
                          uVar34 = DAT_01aecb78;
                          FUN_089d99f0(DAT_01aebbb4,DAT_01aecf3c,DAT_01aecb78,DAT_01aed1f0,
                                       DAT_01aece4c,DAT_01aebd68,DAT_01aec7ec,&stack0x00000900,0);
                          if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                            *(undefined8 *)(unaff_x20 + 0x298) = 0;
                            *(undefined8 *)(unaff_x20 + 0x290) = 0;
                            *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x284) = 0;
                            FUN_089d99f0(DAT_01aeb7e4,DAT_01aec8cc,DAT_01aebbb8,DAT_01aeb7e8,
                                         unaff_s8,DAT_01aec3a4,0x3f800000,&stack0x000008c0,0);
                            if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                              *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                              *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                              *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                              *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                              uVar32 = DAT_01aec9ac;
                              uVar21 = DAT_01aec3a8;
                              uVar18 = DAT_01aec0b8;
                              uVar14 = DAT_01aebe60;
                              FUN_089d99f0(DAT_01aed140,&stack0x00000880,0);
                              if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                uVar55 = DAT_01aed1f4;
                                uVar38 = DAT_01aecd3c;
                                uVar35 = DAT_01aecb7c;
                                uVar27 = DAT_01aec640;
                                FUN_089d99f0(DAT_01aec63c,&stack0x00000840,0);
                                if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                                  uVar46 = DAT_01aecf44;
                                  uVar37 = DAT_01aecc50;
                                  uVar8 = DAT_01aeb8c4;
                                  uVar2 = DAT_01aeb6f8;
                                  FUN_089d99f0(DAT_01aecf40,&stack0x00000800,0);
                                  if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                    *(undefined8 *)(unaff_x20 + 0x318) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x310) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x304) = 0;
                                    uVar47 = DAT_01aecf48;
                                    uVar41 = DAT_01aece50;
                                    uVar25 = DAT_01aec58c;
                                    uVar10 = DAT_01aebad8;
                                    FUN_089d99f0(DAT_01aeb8c8,&stack0x000007c0,0);
                                    if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                      *(undefined8 *)(unaff_x20 + 0x338) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x330) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x324) = 0;
                                      uVar23 = DAT_01aec494;
                                      uVar22 = DAT_01aec3ac;
                                      FUN_089d99f0(DAT_01aec0bc,DAT_01aec494,DAT_01aec3ac,unaff_s8,
                                                   uVar36,DAT_01aeb7ec,0x3f800000,&stack0x00000780,0
                                                  );
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
                                          lVar56 = thunk_FUN_040b4efc(*unaff_x21);
                                          FUN_07a62ce0();
                                          lVar57 = FUN_04077674(*unaff_x22,0x1a);
                                          FUN_089d99f0(DAT_01aec700,unaff_s12,unaff_s13,0,0,0,
                                                       0x3f800000,&stack0x00000740,0);
                                          if (lVar57 != 0) {
                                            if (*(int *)(lVar57 + 0x18) != 0) {
                                              *(undefined8 *)(lVar57 + 0x2c) = 0;
                                              *(undefined8 *)(lVar57 + 0x24) = 0;
                                              *(undefined8 *)(lVar57 + 0x38) = 0;
                                              *(undefined8 *)(lVar57 + 0x30) = 0;
                                              *(undefined4 *)(lVar57 + 0x20) = 1;
                                              FUN_089d99f0(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0
                                                          );
                                              if ((*(uint *)(lVar57 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined4 *)(lVar57 + 0x40) = 0xffffffff;
                                                *(undefined8 *)(lVar57 + 0x4c) = 0;
                                                *(undefined8 *)(lVar57 + 0x44) = 0;
                                                uVar19 = DAT_01aec8d0;
                                                *(undefined8 *)(lVar57 + 0x58) = 0;
                                                *(undefined8 *)(lVar57 + 0x50) = 0;
                                                FUN_089d99f0(uVar19,unaff_s10,unaff_s11,DAT_01aec498
                                                             ,DAT_01aec0c0,DAT_01aebd70,DAT_01aeb6fc
                                                             ,&stack0x000006c0,0);
                                                if (2 < *(uint *)(lVar57 + 0x18)) {
                                                  *(undefined4 *)(lVar57 + 0x60) = 1;
                                                  *(undefined8 *)(lVar57 + 0x6c) = 0;
                                                  *(undefined8 *)(lVar57 + 100) = 0;
                                                  uVar19 = DAT_01aecf4c;
                                                  *(undefined8 *)(lVar57 + 0x78) = 0;
                                                  *(undefined8 *)(lVar57 + 0x70) = 0;
                                                  FUN_089d99f0(uVar19,DAT_01aec7f0,DAT_01aeb64c,
                                                               DAT_01aecf50,DAT_01aed1f8,
                                                               DAT_01aec1ac,DAT_01aebf78,
                                                               &stack0x00000680,0);
                                                  if ((*(uint *)(lVar57 + 0x18) & 0xfffffffc) != 0)
                                                  {
                                                    *(undefined4 *)(lVar57 + 0x80) = 2;
                                                    *(undefined8 *)(lVar57 + 0x8c) = 0;
                                                    *(undefined8 *)(lVar57 + 0x84) = 0;
                                                    uVar19 = DAT_01aec7f4;
                                                    *(undefined8 *)(lVar57 + 0x98) = 0;
                                                    *(undefined8 *)(lVar57 + 0x90) = 0;
                                                    FUN_089d99f0(uVar19,DAT_01aebbbc,DAT_01aeca88,
                                                                 DAT_01aeb8cc,DAT_01aec9b0,
                                                                 DAT_01aec644,DAT_01aec8d4,
                                                                 &stack0x00000640,0);
                                                    if (4 < *(uint *)(lVar57 + 0x18)) {
                                                      *(undefined4 *)(lVar57 + 0xa0) = 3;
                                                      *(undefined8 *)(lVar57 + 0xac) = 0;
                                                      *(undefined8 *)(lVar57 + 0xa4) = 0;
                                                      *(undefined8 *)(lVar57 + 0xb8) = 0;
                                                      *(undefined8 *)(lVar57 + 0xb0) = 0;
                                                      FUN_089d99f0(DAT_01aebd74,DAT_01aec0c4,
                                                                   DAT_01aebf7c,DAT_01aeb700,0,0,
                                                                   0x3f800000,&stack0x00000600,0);
                                                      if (5 < *(uint *)(lVar57 + 0x18)) {
                                                        *(undefined8 *)(lVar57 + 0xcc) = 0;
                                                        *(undefined8 *)(lVar57 + 0xc4) = 0;
                                                        *(undefined8 *)(lVar57 + 0xd8) = 0;
                                                        *(undefined8 *)(lVar57 + 0xd0) = 0;
                                                        *(undefined4 *)(lVar57 + 0xc0) = 4;
                                                        FUN_089d99f0(DAT_01aeca8c,unaff_s14,
                                                                     unaff_s15,0,0,0,0x3f800000,
                                                                     &stack0x000005c0,0);
                                                        if (6 < *(uint *)(lVar57 + 0x18)) {
                                                          *(undefined4 *)(lVar57 + 0xe0) = 1;
                                                          *(undefined8 *)(lVar57 + 0xec) = 0;
                                                          *(undefined8 *)(lVar57 + 0xe4) = 0;
                                                          uVar19 = DAT_01aec0c8;
                                                          *(undefined8 *)(lVar57 + 0xf8) = 0;
                                                          *(undefined8 *)(lVar57 + 0xf0) = 0;
                                                          FUN_089d99f0(uVar19,unaff_s9,param_3,
                                                                       param_4,DAT_01aebbc0,
                                                                       DAT_01aec648,
                                                                       uStack00000000000000dc,
                                                                       &stack0x00000580,0);
                                                          if ((*(uint *)(lVar57 + 0x18) & 0xfffffff8
                                                              ) != 0) {
                                                            *(undefined4 *)(lVar57 + 0x100) = 6;
                                                            *(undefined8 *)(lVar57 + 0x118) = 0;
                                                            *(undefined8 *)(lVar57 + 0x110) = 0;
                                                            *(undefined8 *)(lVar57 + 0x10c) = 0;
                                                            *(undefined8 *)(lVar57 + 0x104) = 0;
                                                            FUN_089d99f0(DAT_01aecf54,DAT_01aeb8d0,
                                                                         DAT_01aebf80,uVar4,
                                                                         DAT_01aec2b0,DAT_01aed1fc,
                                                                         uVar5,&stack0x00000540,0);
                                                            if (8 < *(uint *)(lVar57 + 0x18)) {
                                                              *(undefined4 *)(lVar57 + 0x120) = 7;
                                                              *(undefined8 *)(lVar57 + 0x138) = 0;
                                                              *(undefined8 *)(lVar57 + 0x130) = 0;
                                                              uVar4 = DAT_01aed144;
                                                              *(undefined8 *)(lVar57 + 300) = 0;
                                                              *(undefined8 *)(lVar57 + 0x124) = 0;
                                                              FUN_089d99f0(DAT_01aec590,uVar51,
                                                                           uVar29,uVar15,uVar4,
                                                                           DAT_01aec2b4,uVar53,
                                                                           &stack0x00000500,0);
                                                              if (9 < *(uint *)(lVar57 + 0x18)) {
                                                                *(undefined4 *)(lVar57 + 0x140) = 8;
                                                                *(undefined8 *)(lVar57 + 0x158) = 0;
                                                                *(undefined8 *)(lVar57 + 0x150) = 0;
                                                                *(undefined8 *)(lVar57 + 0x14c) = 0;
                                                                *(undefined8 *)(lVar57 + 0x144) = 0;
                                                                FUN_089d99f0(DAT_01aec1b0,
                                                                             DAT_01aed200,
                                                                             DAT_01aeb8d4,0,
                                                                             DAT_01aec49c,0,
                                                                             0x3f800000,
                                                                             &stack0x000004c0,0);
                                                                if (10 < *(uint *)(lVar57 + 0x18)) {
                                                                  *(undefined4 *)(lVar57 + 0x160) =
                                                                       9;
                                                                  *(undefined8 *)(lVar57 + 0x178) =
                                                                       0;
                                                                  *(undefined8 *)(lVar57 + 0x170) =
                                                                       0;
                                                                  *(undefined8 *)(lVar57 + 0x16c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar57 + 0x164) =
                                                                       0;
                                                                  FUN_089d99f0(DAT_01aebf84,uVar24,
                                                                               uVar26,0,0,0,
                                                                               0x3f800000,
                                                                               &stack0x00000480,0);
                                                                  if (0xb < *(uint *)(lVar57 + 0x18)
                                                                     ) {
                                                                    *(undefined4 *)(lVar57 + 0x180)
                                                                         = 1;
                                                                    *(undefined8 *)(lVar57 + 0x198)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar57 + 400) =
                                                                         0;
                                                                    uVar4 = DAT_01aecb80;
                                                                    *(undefined8 *)(lVar57 + 0x18c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar57 + 0x184)
                                                                         = 0;
                                                                    FUN_089d99f0(DAT_01aeb650,uVar11
                                                                                 ,uVar6,uVar30,uVar4
                                                                                 ,DAT_01aed058,
                                                                                 uVar48,&
                                                  stack0x00000440,0);
                                                  if (0xc < *(uint *)(lVar57 + 0x18)) {
                                                    *(undefined4 *)(lVar57 + 0x1a0) = 0xb;
                                                    *(undefined8 *)(lVar57 + 0x1b8) = 0;
                                                    *(undefined8 *)(lVar57 + 0x1b0) = 0;
                                                    uVar4 = DAT_01aeb7f0;
                                                    *(undefined8 *)(lVar57 + 0x1ac) = 0;
                                                    *(undefined8 *)(lVar57 + 0x1a4) = 0;
                                                    FUN_089d99f0(DAT_01aebf88,uVar12,uVar16,uVar28,
                                                                 uVar4,DAT_01aed05c,uVar17,
                                                                 &stack0x00000400,0);
                                                    if (0xd < *(uint *)(lVar57 + 0x18)) {
                                                      *(undefined4 *)(lVar57 + 0x1c0) = 0xc;
                                                      *(undefined8 *)(lVar57 + 0x1d8) = 0;
                                                      *(undefined8 *)(lVar57 + 0x1d0) = 0;
                                                      uVar4 = DAT_01aece54;
                                                      *(undefined8 *)(lVar57 + 0x1cc) = 0;
                                                      *(undefined8 *)(lVar57 + 0x1c4) = 0;
                                                      FUN_089d99f0(DAT_01aebbc4,uVar33,uVar52,uVar42
                                                                   ,uVar4,DAT_01aeb8d8,uVar43,
                                                                   &stack0x000003c0,0);
                                                      if (0xe < *(uint *)(lVar57 + 0x18)) {
                                                        *(undefined4 *)(lVar57 + 0x1e0) = 0xd;
                                                        *(undefined8 *)(lVar57 + 0x1f8) = 0;
                                                        *(undefined8 *)(lVar57 + 0x1f0) = 0;
                                                        *(undefined8 *)(lVar57 + 0x1ec) = 0;
                                                        *(undefined8 *)(lVar57 + 0x1e4) = 0;
                                                        FUN_089d99f0(DAT_01aecb84,uVar39,uVar40,
                                                                     uVar36,0xa2800000,
                                                                     0xa3000000a3000000,0x3f800000,
                                                                     &stack0x00000380,0);
                                                        if ((*(uint *)(lVar57 + 0x18) & 0xfffffff0)
                                                            != 0) {
                                                          *(undefined4 *)(lVar57 + 0x200) = 0xe;
                                                          *(undefined8 *)(lVar57 + 0x218) = 0;
                                                          *(undefined8 *)(lVar57 + 0x210) = 0;
                                                          *(undefined8 *)(lVar57 + 0x20c) = 0;
                                                          *(undefined8 *)(lVar57 + 0x204) = 0;
                                                          FUN_089d99f0(DAT_01aecc54,uVar31,uVar7,0,0
                                                                       ,0,0x3f800000,
                                                                       &stack0x00000340,0);
                                                          if (0x10 < *(uint *)(lVar57 + 0x18)) {
                                                            *(undefined4 *)(lVar57 + 0x220) = 1;
                                                            *(undefined8 *)(lVar57 + 0x238) = 0;
                                                            *(undefined8 *)(lVar57 + 0x230) = 0;
                                                            uVar4 = DAT_01aec9b4;
                                                            *(undefined8 *)(lVar57 + 0x22c) = 0;
                                                            *(undefined8 *)(lVar57 + 0x224) = 0;
                                                            FUN_089d99f0(DAT_01aec7f8,uVar13,uVar9,
                                                                         uVar20,uVar4,DAT_01aec038,
                                                                         uVar3,&stack0x00000300,0);
                                                            if (0x11 < *(uint *)(lVar57 + 0x18)) {
                                                              *(undefined4 *)(lVar57 + 0x240) = 0x10
                                                              ;
                                                              *(undefined8 *)(lVar57 + 600) = 0;
                                                              *(undefined8 *)(lVar57 + 0x250) = 0;
                                                              uVar4 = DAT_01aebc8c;
                                                              *(undefined8 *)(lVar57 + 0x24c) = 0;
                                                              *(undefined8 *)(lVar57 + 0x244) = 0;
                                                              FUN_089d99f0(DAT_01aec8d8,uVar49,
                                                                           uVar54,uVar50,uVar4,
                                                                           DAT_01aece58,uVar44,
                                                                           &stack0x000002c0,0);
                                                              if (0x12 < *(uint *)(lVar57 + 0x18)) {
                                                                *(undefined4 *)(lVar57 + 0x260) =
                                                                     0x11;
                                                                *(undefined8 *)(lVar57 + 0x278) = 0;
                                                                *(undefined8 *)(lVar57 + 0x270) = 0;
                                                                uVar4 = DAT_01aec8dc;
                                                                *(undefined8 *)(lVar57 + 0x26c) = 0;
                                                                *(undefined8 *)(lVar57 + 0x264) = 0;
                                                                FUN_089d99f0(DAT_01aec0cc,uVar45,
                                                                             uVar34,uVar4,
                                                                             DAT_01aec9b8,
                                                                             DAT_01aecd48,
                                                                             DAT_01aece5c,
                                                                             &stack0x00000280,0);
                                                                if (0x13 < *(uint *)(lVar57 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar57 + 0x280) =
                                                                       0x12;
                                                                  *(undefined8 *)(lVar57 + 0x298) =
                                                                       0;
                                                                  *(undefined8 *)(lVar57 + 0x290) =
                                                                       0;
                                                                  *(undefined8 *)(lVar57 + 0x28c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar57 + 0x284) =
                                                                       0;
                                                                  uVar4 = DAT_01aecf5c;
                                                                  FUN_089d99f0(DAT_01aec4a0,
                                                                               DAT_01aecf58,
                                                                               DAT_01aed204,uVar36,
                                                                               DAT_01aecf5c,
                                                                               0x8800000088000000,
                                                                               0x3f800000,
                                                                               &stack0x00000240,0);
                                                                  if (0x14 < *(uint *)(lVar57 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar57 + 0x2a0)
                                                                         = 0x13;
                                                                    *(undefined8 *)(lVar57 + 0x2b8)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar57 + 0x2b0)
                                                                         = 0;
                                                                    uVar5 = DAT_01aeca90;
                                                                    *(undefined8 *)(lVar57 + 0x2ac)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar57 + 0x2a4)
                                                                         = 0;
                                                                    FUN_089d99f0(DAT_01aebbc8,uVar14
                                                                                 ,uVar18,uVar21,
                                                                                 uVar5,DAT_01aeb704,
                                                                                 uVar32,&
                                                  stack0x00000200,0);
                                                  in_stack_000001e0 = 0;
                                                  uStack00000000000001e8 = 0;
                                                  uStack00000000000001ec = 0;
                                                  in_stack_000001f0 = 0;
                                                  if (0x15 < *(uint *)(lVar57 + 0x18)) {
                                                    *(undefined4 *)(lVar57 + 0x2c0) = 1;
                                                    *(undefined8 *)(lVar57 + 0x2d8) = 0;
                                                    *(undefined8 *)(lVar57 + 0x2d0) = 0;
                                                    uVar5 = DAT_01aec7fc;
                                                    *(undefined8 *)(lVar57 + 0x2cc) = 0;
                                                    *(undefined8 *)(lVar57 + 0x2c4) = 0;
                                                    in_stack_000001c0 = 0;
                                                    uStack00000000000001c8 = 0;
                                                    uStack00000000000001cc = 0;
                                                    in_stack_000001d8 = 0;
                                                    uStack00000000000001d0 = 0;
                                                    uStack00000000000001d4 = 0;
                                                    FUN_089d99f0(DAT_01aec3b0,uVar27,uVar38,uVar35,
                                                                 uVar5,DAT_01aec4a4,uVar55,
                                                                 &stack0x000001c0,0);
                                                    uStack00000000000001b4 =
                                                         CONCAT44(in_stack_000001d8,
                                                                  uStack00000000000001d4);
                                                    uStack00000000000001a8 = uStack00000000000001c8;
                                                    in_stack_000001a0 = in_stack_000001c0;
                                                    uStack00000000000001ac = uStack00000000000001cc;
                                                    uStack00000000000001b0 = uStack00000000000001d0;
                                                    if (0x16 < *(uint *)(lVar57 + 0x18)) {
                                                      *(undefined4 *)(lVar57 + 0x2e0) = 0x15;
                                                      *(undefined8 *)(lVar57 + 0x2f8) =
                                                           uStack00000000000001b4;
                                                      *(ulong *)(lVar57 + 0x2f0) =
                                                           CONCAT44(uStack00000000000001d0,
                                                                    uStack00000000000001cc);
                                                      uVar5 = DAT_01aeca94;
                                                      *(ulong *)(lVar57 + 0x2ec) =
                                                           CONCAT44(uStack00000000000001cc,
                                                                    uStack00000000000001c8);
                                                      *(undefined8 *)(lVar57 + 0x2e4) =
                                                           in_stack_000001c0;
                                                      in_stack_00000180 = 0;
                                                      uStack0000000000000188 = 0;
                                                      uStack000000000000018c = 0;
                                                      in_stack_00000198 = 0;
                                                      uStack0000000000000190 = 0;
                                                      uStack0000000000000194 = 0;
                                                      FUN_089d99f0(DAT_01aed208,uVar8,uVar2,uVar37,
                                                                   uVar5,DAT_01aecf60,uVar46,
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
                                                      if (0x17 < *(uint *)(lVar57 + 0x18)) {
                                                        *(undefined4 *)(lVar57 + 0x300) = 0x16;
                                                        *(undefined8 *)(lVar57 + 0x318) =
                                                             uStack0000000000000174;
                                                        *(ulong *)(lVar57 + 0x310) =
                                                             CONCAT44(uStack0000000000000190,
                                                                      uStack000000000000018c);
                                                        uVar5 = DAT_01aeb7f4;
                                                        *(ulong *)(lVar57 + 0x30c) =
                                                             CONCAT44(uStack000000000000018c,
                                                                      uStack0000000000000188);
                                                        *(undefined8 *)(lVar57 + 0x304) =
                                                             in_stack_00000180;
                                                        in_stack_00000140 = 0;
                                                        uStack0000000000000148 = 0;
                                                        uStack000000000000014c = 0;
                                                        in_stack_00000158 = 0;
                                                        uStack0000000000000150 = 0;
                                                        uStack0000000000000154 = 0;
                                                        FUN_089d99f0(DAT_01aec64c,uVar25,uVar10,
                                                                     uVar41,uVar5,DAT_01aeb8dc,
                                                                     uVar47,&stack0x00000140,0);
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
                                                        if (0x18 < *(uint *)(lVar57 + 0x18)) {
                                                          *(undefined4 *)(lVar57 + 800) = 0x17;
                                                          *(undefined8 *)(lVar57 + 0x338) =
                                                               uStack0000000000000134;
                                                          *(ulong *)(lVar57 + 0x330) =
                                                               CONCAT44(uStack0000000000000150,
                                                                        uStack000000000000014c);
                                                          *(ulong *)(lVar57 + 0x32c) =
                                                               CONCAT44(uStack000000000000014c,
                                                                        uStack0000000000000148);
                                                          *(undefined8 *)(lVar57 + 0x324) =
                                                               in_stack_00000140;
                                                          in_stack_00000100 = 0;
                                                          uStack0000000000000108 = 0;
                                                          uStack000000000000010c = 0;
                                                          in_stack_00000118 = 0;
                                                          uStack0000000000000110 = 0;
                                                          uStack0000000000000114 = 0;
                                                          FUN_089d99f0(DAT_01aec2b8,uVar23,uVar22,
                                                                       unaff_s8,unaff_s8,uVar4,
                                                                       0x3f800000,&stack0x00000100,0
                                                                      );
                                                          if (0x19 < *(uint *)(lVar57 + 0x18)) {
                                                            *(undefined4 *)(lVar57 + 0x340) = 0x18;
                                                            *(ulong *)(lVar57 + 0x358) =
                                                                 CONCAT44(in_stack_00000118,
                                                                          uStack0000000000000114);
                                                            *(ulong *)(lVar57 + 0x350) =
                                                                 CONCAT44(uStack0000000000000110,
                                                                          uStack000000000000010c);
                                                            *(ulong *)(lVar57 + 0x34c) =
                                                                 CONCAT44(uStack000000000000010c,
                                                                          uStack0000000000000108);
                                                            *(undefined8 *)(lVar57 + 0x344) =
                                                                 in_stack_00000100;
                                                            if (lVar56 != 0) {
                                                              *(long *)(lVar56 + 0x10) = lVar57;
                                                              thunk_FUN_040ec700((long *)(lVar56 + 
                                                  0x10),lVar57);
                                                  plVar58 = (long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                    8);
                                                  *plVar58 = lVar56;
                                                  thunk_FUN_040ec700(plVar58,lVar56);
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


