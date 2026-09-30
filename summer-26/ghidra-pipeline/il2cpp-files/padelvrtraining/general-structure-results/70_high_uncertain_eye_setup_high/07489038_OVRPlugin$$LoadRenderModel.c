/*
FUNCTION_NAME: OVRPlugin$$LoadRenderModel
ENTRY_POINT: 07489038
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LoadRenderModel(long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

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
  long lVar58;
  long lVar59;
  long *plVar60;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined4 uVar61;
  ulong uVar62;
  undefined8 uVar63;
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
  
  *(long *)(unaff_x20 + 0xd8) = param_2._8_8_;
  *(long *)(unaff_x20 + 0xd0) = param_2._0_8_;
  uVar61 = *(undefined4 *)(param_1 + 0x850);
  *(long *)(unaff_x20 + 0xcc) = param_3._8_8_;
  *(long *)(unaff_x20 + 0xc4) = param_3._0_8_;
  FUN_08a5b7d0(uVar61,&stack0x00000c60,0);
  uVar63 = *(undefined8 *)(unaff_x24 + 0x14);
  uVar62 = *(ulong *)(unaff_x24 + 0xc);
  if (6 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0xe0) = 1;
    *(undefined8 *)(unaff_x20 + 0xf8) = uVar63;
    *(ulong *)(unaff_x20 + 0xf0) = uVar62 & 0xffffffff00000000;
    uVar56 = DAT_01915264;
    uVar26 = DAT_01915260;
    uVar47 = DAT_01914f58;
    uVar44 = DAT_01914ee0;
    uVar40 = DAT_01914d98;
    uVar19 = DAT_0191470c;
    uVar61 = DAT_01914410;
    *(undefined8 *)(unaff_x20 + 0xec) = 0;
    *(undefined8 *)(unaff_x20 + 0xe4) = 0;
    FUN_08a5b7d0(uVar26,uVar44,uVar40,uVar19,uVar47,uVar61,&stack0x00000c20,0);
    if (7 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x100) = 6;
      *(undefined8 *)(unaff_x20 + 0x118) = 0;
      *(undefined8 *)(unaff_x20 + 0x110) = 0;
      *(undefined8 *)(unaff_x20 + 0x10c) = 0;
      *(undefined8 *)(unaff_x20 + 0x104) = 0;
      uVar47 = DAT_01915268;
      uVar61 = DAT_01914a80;
      FUN_08a5b7d0(DAT_01913f6c,DAT_0191421c,DAT_01914978,DAT_01914a80,DAT_01914a84,DAT_01914160,
                   &stack0x00000be0,0);
      if (8 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x120) = 7;
        *(undefined8 *)(unaff_x20 + 0x138) = 0;
        *(undefined8 *)(unaff_x20 + 0x130) = 0;
        *(undefined8 *)(unaff_x20 + 300) = 0;
        *(undefined8 *)(unaff_x20 + 0x124) = 0;
        uVar53 = DAT_019151d0;
        uVar33 = DAT_01914c64;
        uVar31 = DAT_01914bcc;
        uVar26 = DAT_019148f4;
        FUN_08a5b7d0(DAT_0191497c,&stack0x00000ba0,0);
        if (9 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x140) = 8;
          *(undefined8 *)(unaff_x20 + 0x158) = 0;
          *(undefined8 *)(unaff_x20 + 0x150) = 0;
          *(undefined8 *)(unaff_x20 + 0x14c) = 0;
          *(undefined8 *)(unaff_x20 + 0x144) = 0;
          FUN_08a5b7d0(DAT_01914b1c,DAT_01914010,DAT_01914ee4,0,DAT_01915124,0,0x3f800000,
                       &stack0x00000b60,0);
          if (10 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x160) = 9;
            *(undefined8 *)(unaff_x20 + 0x178) = 0;
            *(undefined8 *)(unaff_x20 + 0x170) = 0;
            *(undefined8 *)(unaff_x20 + 0x16c) = 0;
            *(undefined8 *)(unaff_x20 + 0x164) = 0;
            uVar15 = DAT_01914670;
            uVar2 = DAT_019140b0;
            FUN_08a5b7d0(DAT_01914220,DAT_01914670,DAT_019140b0,0,0,0,0x3f800000,&stack0x00000b20,0)
            ;
            if (0xb < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x180) = 1;
              *(undefined8 *)(unaff_x20 + 0x198) = 0;
              *(undefined8 *)(unaff_x20 + 400) = 0;
              *(undefined8 *)(unaff_x20 + 0x18c) = 0;
              *(undefined8 *)(unaff_x20 + 0x184) = 0;
              uVar27 = DAT_019148f8;
              uVar20 = DAT_01914710;
              uVar13 = DAT_019145d0;
              uVar7 = DAT_019142c0;
              FUN_08a5b7d0(DAT_01914854,&stack0x00000ae0,0);
              if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
                *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
                *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
                uVar29 = DAT_01914a88;
                uVar10 = DAT_01914414;
                uVar6 = DAT_01914228;
                uVar5 = DAT_01914224;
                FUN_08a5b7d0(DAT_019147b4,&stack0x00000aa0,0);
                if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
                  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                  uVar34 = DAT_01914c68;
                  uVar32 = DAT_01914bd4;
                  uVar24 = DAT_01914858;
                  uVar21 = DAT_01914714;
                  FUN_08a5b7d0(DAT_0191450c,&stack0x00000a60,0);
                  if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                    *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                    uVar57 = DAT_01915274;
                    uVar48 = DAT_01914f5c;
                    uVar36 = DAT_01914cf0;
                    FUN_08a5b7d0(DAT_019140b4,DAT_01914cf0,DAT_01915274,DAT_01914f5c,0x22800000,
                                 0x23000000,0x3f800000,&stack0x00000a20,0);
                    if (0xf < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                      *(undefined8 *)(unaff_x20 + 0x218) = 0;
                      *(undefined8 *)(unaff_x20 + 0x210) = 0;
                      *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x204) = 0;
                      uVar41 = DAT_01914d9c;
                      uVar37 = DAT_01914cf4;
                      FUN_08a5b7d0(DAT_01913f70,DAT_01914d9c,DAT_01914cf4,0,0,0,0x3f800000,
                                   &stack0x000009e0,0);
                      if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x220) = 1;
                        *(undefined8 *)(unaff_x20 + 0x238) = 0;
                        *(undefined8 *)(unaff_x20 + 0x230) = 0;
                        *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x224) = 0;
                        uVar54 = DAT_019151d4;
                        uVar22 = DAT_01914718;
                        uVar16 = DAT_01914674;
                        uVar11 = DAT_01914474;
                        FUN_08a5b7d0(DAT_019145d4,&stack0x000009a0,0);
                        if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                          *(undefined8 *)(unaff_x20 + 600) = 0;
                          *(undefined8 *)(unaff_x20 + 0x250) = 0;
                          *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x244) = 0;
                          uVar42 = DAT_01914e38;
                          uVar30 = DAT_01914a8c;
                          uVar28 = DAT_01914980;
                          uVar17 = DAT_0191467c;
                          FUN_08a5b7d0(DAT_01914678,&stack0x00000960,0);
                          if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                            *(undefined8 *)(unaff_x20 + 0x278) = 0;
                            *(undefined8 *)(unaff_x20 + 0x270) = 0;
                            *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x264) = 0;
                            uVar35 = DAT_01914c6c;
                            uVar8 = DAT_019142c4;
                            FUN_08a5b7d0(DAT_01914018,DAT_019142c4,DAT_01914c6c,DAT_019145d8,
                                         DAT_01914a90,DAT_01913f74,DAT_01914680,&stack0x00000920,0);
                            if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                              *(undefined8 *)(unaff_x20 + 0x298) = 0;
                              *(undefined8 *)(unaff_x20 + 0x290) = 0;
                              *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x284) = 0;
                              FUN_08a5b7d0(DAT_0191422c,DAT_019147b8,DAT_0191401c,DAT_019151d8,
                                           &stack0x000008e0,0);
                              if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                                *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                                uVar51 = DAT_01915128;
                                uVar50 = DAT_01914ff4;
                                uVar23 = DAT_019147c0;
                                uVar12 = DAT_01914510;
                                FUN_08a5b7d0(DAT_01914230,&stack0x000008a0,0);
                                if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                  uVar45 = DAT_01914eec;
                                  uVar43 = DAT_01914e3c;
                                  uVar38 = DAT_01914cf8;
                                  uVar18 = DAT_01914684;
                                  FUN_08a5b7d0(DAT_01913f78,&stack0x00000860,0);
                                  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                    *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                                    uVar49 = DAT_01914f60;
                                    uVar46 = DAT_01914ef0;
                                    uVar14 = DAT_019145dc;
                                    uVar3 = DAT_019140b8;
                                    FUN_08a5b7d0(DAT_01914514,&stack0x00000820,0);
                                    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                      *(undefined8 *)(unaff_x20 + 0x318) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x310) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x304) = 0;
                                      uVar55 = DAT_019151dc;
                                      uVar52 = DAT_0191512c;
                                      uVar39 = DAT_01914d04;
                                      uVar4 = DAT_01914164;
                                      FUN_08a5b7d0(DAT_01914bd8,&stack0x000007e0,0);
                                      if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                        *(undefined8 *)(unaff_x20 + 0x338) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x330) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x324) = 0;
                                        uVar25 = DAT_01914860;
                                        uVar9 = DAT_01914368;
                                        FUN_08a5b7d0(DAT_01914ffc,&stack0x000007a0,0);
                                        if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                                          *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                                          *(undefined8 *)(unaff_x20 + 0x358) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x350) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x344) = 0;
                                          if (unaff_x19 != 0) {
                                            *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                            thunk_FUN_03d1023c();
                                            **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                                            thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x21 + 0xb8));
                                            lVar58 = thunk_FUN_03d2ef40(*unaff_x21);
                                            FUN_07488c20();
                                            lVar59 = FUN_03d2d394(*unaff_x22,0x1a);
                                            FUN_08a5b7d0(DAT_01914e40,&stack0x00000760,0);
                                            if (lVar59 != 0) {
                                              if (*(int *)(lVar59 + 0x18) != 0) {
                                                *(undefined4 *)(lVar59 + 0x20) = 1;
                                                *(undefined8 *)(lVar59 + 0x38) = 0;
                                                *(undefined8 *)(lVar59 + 0x30) = 0;
                                                *(undefined8 *)(lVar59 + 0x2c) = 0;
                                                *(undefined8 *)(lVar59 + 0x24) = 0;
                                                FUN_08a5b7d0(0,0,0,0,0,0,0x3f800000,&stack0x00000700
                                                             ,0);
                                                if (1 < *(uint *)(lVar59 + 0x18)) {
                                                  *(undefined4 *)(lVar59 + 0x40) = 0xffffffff;
                                                  *(undefined8 *)(lVar59 + 0x58) = 0;
                                                  *(undefined8 *)(lVar59 + 0x50) = 0;
                                                  uVar1 = DAT_0191447c;
                                                  *(undefined8 *)(lVar59 + 0x4c) = 0;
                                                  *(undefined8 *)(lVar59 + 0x44) = 0;
                                                  FUN_08a5b7d0(uVar1,&stack0x000006c0,0);
                                                  if (2 < *(uint *)(lVar59 + 0x18)) {
                                                    *(undefined4 *)(lVar59 + 0x60) = 1;
                                                    *(undefined8 *)(lVar59 + 0x78) = 0;
                                                    *(undefined8 *)(lVar59 + 0x70) = 0;
                                                    uVar1 = DAT_01914688;
                                                    *(undefined8 *)(lVar59 + 0x6c) = 0;
                                                    *(undefined8 *)(lVar59 + 100) = 0;
                                                    FUN_08a5b7d0(uVar1,DAT_0191468c,DAT_01915134,
                                                                 DAT_019147c4,DAT_019147c8,
                                                                 DAT_01913f80,DAT_01914518,
                                                                 &stack0x00000680,0);
                                                    if (3 < *(uint *)(lVar59 + 0x18)) {
                                                      *(undefined4 *)(lVar59 + 0x80) = 2;
                                                      *(undefined8 *)(lVar59 + 0x98) = 0;
                                                      *(undefined8 *)(lVar59 + 0x90) = 0;
                                                      uVar1 = DAT_01914d08;
                                                      *(undefined8 *)(lVar59 + 0x8c) = 0;
                                                      *(undefined8 *)(lVar59 + 0x84) = 0;
                                                      FUN_08a5b7d0(uVar1,DAT_019147cc,DAT_01915138,
                                                                   DAT_01914a1c,DAT_01915094,
                                                                   DAT_019148fc,DAT_01915004,
                                                                   &stack0x00000640,0);
                                                      if (4 < *(uint *)(lVar59 + 0x18)) {
                                                        *(undefined4 *)(lVar59 + 0xa0) = 3;
                                                        *(undefined8 *)(lVar59 + 0xb8) = 0;
                                                        *(undefined8 *)(lVar59 + 0xb0) = 0;
                                                        *(undefined8 *)(lVar59 + 0xac) = 0;
                                                        *(undefined8 *)(lVar59 + 0xa4) = 0;
                                                        FUN_08a5b7d0(DAT_01914720,DAT_01914984,
                                                                     DAT_01914864,DAT_01914b24,0,0,
                                                                     0x3f800000,&stack0x00000600,0);
                                                        if (5 < *(uint *)(lVar59 + 0x18)) {
                                                          *(undefined4 *)(lVar59 + 0xc0) = 4;
                                                          *(undefined8 *)(lVar59 + 0xd8) = 0;
                                                          *(undefined8 *)(lVar59 + 0xd0) = 0;
                                                          uVar1 = DAT_01913f84;
                                                          *(undefined8 *)(lVar59 + 0xcc) = 0;
                                                          *(undefined8 *)(lVar59 + 0xc4) = 0;
                                                          FUN_08a5b7d0(uVar1,&stack0x000005c0,0);
                                                          if (6 < *(uint *)(lVar59 + 0x18)) {
                                                            *(undefined4 *)(lVar59 + 0xe0) = 1;
                                                            *(undefined8 *)(lVar59 + 0xf8) = 0;
                                                            *(undefined8 *)(lVar59 + 0xf0) = 0;
                                                            *(undefined8 *)(lVar59 + 0xec) = 0;
                                                            *(undefined8 *)(lVar59 + 0xe4) = 0;
                                                            FUN_08a5b7d0(DAT_0191527c,uVar44,uVar40,
                                                                         uVar19,DAT_0191513c,
                                                                         DAT_01914d0c,uVar56,
                                                                         &stack0x00000580,0);
                                                            if (7 < *(uint *)(lVar59 + 0x18)) {
                                                              *(undefined4 *)(lVar59 + 0x100) = 6;
                                                              *(undefined8 *)(lVar59 + 0x118) = 0;
                                                              *(undefined8 *)(lVar59 + 0x110) = 0;
                                                              *(undefined8 *)(lVar59 + 0x10c) = 0;
                                                              *(undefined8 *)(lVar59 + 0x104) = 0;
                                                              FUN_08a5b7d0(DAT_019147d0,DAT_01915098
                                                                           ,DAT_01914480,uVar61,
                                                                           DAT_01914724,DAT_01914da0
                                                                           ,uVar47,&stack0x00000540,
                                                                           0);
                                                              if (8 < *(uint *)(lVar59 + 0x18)) {
                                                                *(undefined4 *)(lVar59 + 0x120) = 7;
                                                                *(undefined8 *)(lVar59 + 0x138) = 0;
                                                                *(undefined8 *)(lVar59 + 0x130) = 0;
                                                                *(undefined8 *)(lVar59 + 300) = 0;
                                                                *(undefined8 *)(lVar59 + 0x124) = 0;
                                                                FUN_08a5b7d0(DAT_01914bdc,uVar31,
                                                                             uVar53,uVar33,
                                                                             DAT_01914418,
                                                                             DAT_01914484,uVar26,
                                                                             &stack0x00000500,0);
                                                                if (9 < *(uint *)(lVar59 + 0x18)) {
                                                                  *(undefined4 *)(lVar59 + 0x140) =
                                                                       8;
                                                                  *(undefined8 *)(lVar59 + 0x158) =
                                                                       0;
                                                                  *(undefined8 *)(lVar59 + 0x150) =
                                                                       0;
                                                                  *(undefined8 *)(lVar59 + 0x14c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar59 + 0x144) =
                                                                       0;
                                                                  FUN_08a5b7d0(DAT_01914690,
                                                                               DAT_019147d4,
                                                                               DAT_01914da4,0,
                                                                               DAT_01914728,0,
                                                                               0x3f800000,
                                                                               &stack0x000004c0,0);
                                                                  if (10 < *(uint *)(lVar59 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar59 + 0x160)
                                                                         = 9;
                                                                    *(undefined8 *)(lVar59 + 0x178)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar59 + 0x170)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar59 + 0x16c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar59 + 0x164)
                                                                         = 0;
                                                                    FUN_08a5b7d0(DAT_01914d10,uVar15
                                                                                 ,uVar2,0,0,0,
                                                                                 0x3f800000,
                                                                                 &stack0x00000480,0)
                                                                    ;
                                                                    if (0xb < *(uint *)(lVar59 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar59 + 0x180) = 1;
                                                    *(undefined8 *)(lVar59 + 0x198) = 0;
                                                    *(undefined8 *)(lVar59 + 400) = 0;
                                                    *(undefined8 *)(lVar59 + 0x18c) = 0;
                                                    *(undefined8 *)(lVar59 + 0x184) = 0;
                                                    FUN_08a5b7d0(DAT_01914da8,uVar27,uVar20,uVar7,
                                                                 DAT_01914a98,DAT_019145e4,uVar13,
                                                                 &stack0x00000440,0);
                                                    if (0xc < *(uint *)(lVar59 + 0x18)) {
                                                      *(undefined4 *)(lVar59 + 0x1a0) = 0xb;
                                                      *(undefined8 *)(lVar59 + 0x1b8) = 0;
                                                      *(undefined8 *)(lVar59 + 0x1b0) = 0;
                                                      *(undefined8 *)(lVar59 + 0x1ac) = 0;
                                                      *(undefined8 *)(lVar59 + 0x1a4) = 0;
                                                      FUN_08a5b7d0(DAT_019147d8,uVar10,uVar29,uVar5,
                                                                   DAT_01914868,DAT_01914a9c,uVar6,
                                                                   &stack0x00000400,0);
                                                      if (0xd < *(uint *)(lVar59 + 0x18)) {
                                                        *(undefined4 *)(lVar59 + 0x1c0) = 0xc;
                                                        *(undefined8 *)(lVar59 + 0x1d8) = 0;
                                                        *(undefined8 *)(lVar59 + 0x1d0) = 0;
                                                        *(undefined8 *)(lVar59 + 0x1cc) = 0;
                                                        *(undefined8 *)(lVar59 + 0x1c4) = 0;
                                                        FUN_08a5b7d0(DAT_01913f88,uVar34,uVar24,
                                                                     uVar21,DAT_01914aa0,
                                                                     DAT_01914b28,uVar32,
                                                                     &stack0x000003c0,0);
                                                        if (0xe < *(uint *)(lVar59 + 0x18)) {
                                                          *(undefined4 *)(lVar59 + 0x1e0) = 0xd;
                                                          *(undefined8 *)(lVar59 + 0x1f8) = 0;
                                                          *(undefined8 *)(lVar59 + 0x1f0) = 0;
                                                          *(undefined8 *)(lVar59 + 0x1ec) = 0;
                                                          *(undefined8 *)(lVar59 + 0x1e4) = 0;
                                                          FUN_08a5b7d0(DAT_01914a20,uVar36,uVar57,
                                                                       uVar48,0xa2800000,0xa3000000,
                                                                       0x3f800000,&stack0x00000380,0
                                                                      );
                                                          if (0xf < *(uint *)(lVar59 + 0x18)) {
                                                            *(undefined4 *)(lVar59 + 0x200) = 0xe;
                                                            *(undefined8 *)(lVar59 + 0x218) = 0;
                                                            *(undefined8 *)(lVar59 + 0x210) = 0;
                                                            *(undefined8 *)(lVar59 + 0x20c) = 0;
                                                            *(undefined8 *)(lVar59 + 0x204) = 0;
                                                            FUN_08a5b7d0(DAT_01914020,uVar41,uVar37,
                                                                         0,0,0,0x3f800000,
                                                                         &stack0x00000340,0);
                                                            if (0x10 < *(uint *)(lVar59 + 0x18)) {
                                                              *(undefined4 *)(lVar59 + 0x220) = 1;
                                                              *(undefined8 *)(lVar59 + 0x238) = 0;
                                                              *(undefined8 *)(lVar59 + 0x230) = 0;
                                                              *(undefined8 *)(lVar59 + 0x22c) = 0;
                                                              *(undefined8 *)(lVar59 + 0x224) = 0;
                                                              FUN_08a5b7d0(DAT_019145e8,uVar22,
                                                                           uVar11,uVar16,
                                                                           DAT_01915280,DAT_019151e0
                                                                           ,uVar54,&stack0x00000300,
                                                                           0);
                                                              if (0x11 < *(uint *)(lVar59 + 0x18)) {
                                                                *(undefined4 *)(lVar59 + 0x240) =
                                                                     0x10;
                                                                *(undefined8 *)(lVar59 + 600) = 0;
                                                                *(undefined8 *)(lVar59 + 0x250) = 0;
                                                                *(undefined8 *)(lVar59 + 0x24c) = 0;
                                                                *(undefined8 *)(lVar59 + 0x244) = 0;
                                                                FUN_08a5b7d0(DAT_019142c8,uVar28,
                                                                             uVar17,uVar30,
                                                                             DAT_01914d14,
                                                                             DAT_0191441c,uVar42,
                                                                             &stack0x000002c0,0);
                                                                if (0x12 < *(uint *)(lVar59 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar59 + 0x260) =
                                                                       0x11;
                                                                  *(undefined8 *)(lVar59 + 0x278) =
                                                                       0;
                                                                  *(undefined8 *)(lVar59 + 0x270) =
                                                                       0;
                                                                  *(undefined8 *)(lVar59 + 0x26c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar59 + 0x264) =
                                                                       0;
                                                                  FUN_08a5b7d0(DAT_01914370,uVar8,
                                                                               uVar35,DAT_01914c70,
                                                                               DAT_01914168,
                                                                               DAT_01914374,
                                                                               DAT_01914aa4,
                                                                               &stack0x00000280,0);
                                                                  if (0x13 < *(uint *)(lVar59 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar59 + 0x280)
                                                                         = 0x12;
                                                                    *(undefined8 *)(lVar59 + 0x298)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar59 + 0x290)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar59 + 0x28c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar59 + 0x284)
                                                                         = 0;
                                                                    FUN_08a5b7d0(DAT_01914d18,
                                                                                 DAT_01914e44,
                                                                                 DAT_01914f64,uVar48
                                                                                 ,DAT_0191416c,
                                                                                 0x88000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000240,0)
                                                                    ;
                                                                    if (0x14 < *(uint *)(lVar59 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar59 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar59 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar59 + 0x2b0) = 0;
                                                    *(undefined8 *)(lVar59 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar59 + 0x2a4) = 0;
                                                    FUN_08a5b7d0(DAT_0191509c,uVar23,uVar51,uVar12,
                                                                 DAT_01915008,DAT_01914f68,uVar50,
                                                                 &stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar59 + 0x18)) {
                                                      *(undefined4 *)(lVar59 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar59 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar59 + 0x2d0) = 0;
                                                      *(undefined8 *)(lVar59 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar59 + 0x2c4) = 0;
                                                      in_stack_000001c0 = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      in_stack_000001d8 = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      FUN_08a5b7d0(DAT_01914170,uVar43,uVar38,uVar18
                                                                   ,DAT_01914378,DAT_019140bc,uVar45
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
                                                      if (0x16 < *(uint *)(lVar59 + 0x18)) {
                                                        *(undefined4 *)(lVar59 + 0x2e0) = 0x15;
                                                        *(undefined8 *)(lVar59 + 0x2f8) =
                                                             uStack00000000000001b4;
                                                        *(ulong *)(lVar59 + 0x2f0) =
                                                             CONCAT44(uStack00000000000001d0,
                                                                      uStack00000000000001cc);
                                                        *(ulong *)(lVar59 + 0x2ec) =
                                                             CONCAT44(uStack00000000000001cc,
                                                                      uStack00000000000001c8);
                                                        *(undefined8 *)(lVar59 + 0x2e4) =
                                                             in_stack_000001c0;
                                                        in_stack_00000180 = 0;
                                                        uStack0000000000000188 = 0;
                                                        uStack000000000000018c = 0;
                                                        in_stack_00000198 = 0;
                                                        uStack0000000000000190 = 0;
                                                        uStack0000000000000194 = 0;
                                                        FUN_08a5b7d0(DAT_01914dac,uVar3,uVar46,
                                                                     uVar14,DAT_01914aa8,
                                                                     DAT_01914024,uVar49,
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
                                                        if (0x17 < *(uint *)(lVar59 + 0x18)) {
                                                          *(undefined4 *)(lVar59 + 0x300) = 0x16;
                                                          *(undefined8 *)(lVar59 + 0x318) =
                                                               uStack0000000000000174;
                                                          *(ulong *)(lVar59 + 0x310) =
                                                               CONCAT44(uStack0000000000000190,
                                                                        uStack000000000000018c);
                                                          *(ulong *)(lVar59 + 0x30c) =
                                                               CONCAT44(uStack000000000000018c,
                                                                        uStack0000000000000188);
                                                          *(undefined8 *)(lVar59 + 0x304) =
                                                               in_stack_00000180;
                                                          in_stack_00000140 = 0;
                                                          uStack0000000000000148 = 0;
                                                          uStack000000000000014c = 0;
                                                          in_stack_00000158 = 0;
                                                          uStack0000000000000150 = 0;
                                                          uStack0000000000000154 = 0;
                                                          FUN_08a5b7d0(DAT_019150a0,uVar55,uVar52,
                                                                       uVar39,DAT_01914d1c,
                                                                       DAT_01914694,uVar4,
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
                                                          if (0x18 < *(uint *)(lVar59 + 0x18)) {
                                                            *(undefined4 *)(lVar59 + 800) = 0x17;
                                                            *(undefined8 *)(lVar59 + 0x338) =
                                                                 uStack0000000000000134;
                                                            *(ulong *)(lVar59 + 0x330) =
                                                                 CONCAT44(uStack0000000000000150,
                                                                          uStack000000000000014c);
                                                            *(ulong *)(lVar59 + 0x32c) =
                                                                 CONCAT44(uStack000000000000014c,
                                                                          uStack0000000000000148);
                                                            *(undefined8 *)(lVar59 + 0x324) =
                                                                 in_stack_00000140;
                                                            in_stack_00000100 = 0;
                                                            uStack0000000000000108 = 0;
                                                            uStack000000000000010c = 0;
                                                            in_stack_00000118 = 0;
                                                            uStack0000000000000110 = 0;
                                                            uStack0000000000000114 = 0;
                                                            FUN_08a5b7d0(DAT_01914a24,uVar25,uVar9,
                                                                         &stack0x00000100,0);
                                                            if (0x19 < *(uint *)(lVar59 + 0x18)) {
                                                              *(undefined4 *)(lVar59 + 0x340) = 0x18
                                                              ;
                                                              *(ulong *)(lVar59 + 0x358) =
                                                                   CONCAT44(in_stack_00000118,
                                                                            uStack0000000000000114);
                                                              *(ulong *)(lVar59 + 0x350) =
                                                                   CONCAT44(uStack0000000000000110,
                                                                            uStack000000000000010c);
                                                              *(ulong *)(lVar59 + 0x34c) =
                                                                   CONCAT44(uStack000000000000010c,
                                                                            uStack0000000000000108);
                                                              *(undefined8 *)(lVar59 + 0x344) =
                                                                   in_stack_00000100;
                                                              if (lVar58 != 0) {
                                                                *(long *)(lVar58 + 0x10) = lVar59;
                                                                thunk_FUN_03d1023c((long *)(lVar58 +
                                                                                           0x10),
                                                                                   lVar59);
                                                                plVar60 = (long *)(*(long *)(*
                                                  unaff_x21 + 0xb8) + 8);
                                                  *plVar60 = lVar58;
                                                  thunk_FUN_03d1023c(plVar60,lVar58);
                                                  return;
                                                  }
                                                  goto LAB_0748a854;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                              goto LAB_0748a850;
                                            }
                                          }
LAB_0748a854:
                    /* WARNING: Subroutine does not return */
                                          FUN_03d2d548();
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0748a850:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


