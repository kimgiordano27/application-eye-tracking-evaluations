/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcActivated
ENTRY_POINT: 090c2d38
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Media__IsMrcActivated
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4)

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
  long lVar10;
  long lVar11;
  long *plVar12;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
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
  
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  uStack000000000000002c = *(undefined4 *)(in_x9 + 0x64c);
  uStack0000000000000028 = *(undefined4 *)(in_x10 + 0x56c);
  uStack0000000000000020 = DAT_01df5074;
  uStack0000000000000024 = DAT_01df4f24;
  FUN_0a188128(DAT_01df5070,param_4,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0xb4);
  *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0xac);
  if (0x17 < uVar1) {
    uVar14 = *(undefined8 *)(unaff_x23 + 0x94);
    uVar13 = *(undefined8 *)(unaff_x23 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
    *(undefined8 *)(unaff_x20 + 0x318) = uVar14;
    *(undefined8 *)(unaff_x20 + 0x310) = uVar13;
    *(undefined8 *)(unaff_x20 + 0x30c) = 0;
    *(undefined8 *)(unaff_x20 + 0x304) = 0;
    uVar9 = DAT_01df5078;
    uVar8 = DAT_01df4ff8;
    uVar7 = DAT_01df4c18;
    uVar4 = DAT_01df4734;
    FUN_0a188128(DAT_01df4650,&stack0x000007c0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x54) = *(undefined8 *)(unaff_x23 + 0x74);
    *(undefined8 *)(unaff_x23 + 0x4c) = *(undefined8 *)(unaff_x23 + 0x6c);
    if (0x18 < uVar1) {
      uVar14 = *(undefined8 *)(unaff_x23 + 0x54);
      uVar13 = *(undefined8 *)(unaff_x23 + 0x4c);
      *(undefined4 *)(unaff_x20 + 800) = 0x17;
      *(undefined8 *)(unaff_x20 + 0x338) = uVar14;
      *(undefined8 *)(unaff_x20 + 0x330) = uVar13;
      *(undefined8 *)(unaff_x20 + 0x32c) = 0;
      *(undefined8 *)(unaff_x20 + 0x324) = 0;
      uVar6 = DAT_01df4ba0;
      uVar5 = DAT_01df4b58;
      FUN_0a188128(DAT_01df4a0c,DAT_01df4ba0,DAT_01df4b58,unaff_s8,unaff_s9,DAT_01df45dc,0x3f800000,
                   &stack0x00000780,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
      *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
      if (0x19 < uVar1) {
        uVar14 = *(undefined8 *)(unaff_x23 + 0x14);
        uVar13 = *(undefined8 *)(unaff_x23 + 0xc);
        *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
        *(undefined8 *)(unaff_x20 + 0x358) = uVar14;
        *(undefined8 *)(unaff_x20 + 0x350) = uVar13;
        *(undefined8 *)(unaff_x20 + 0x34c) = 0;
        *(undefined8 *)(unaff_x20 + 0x344) = 0;
        if (unaff_x19 != 0) {
          *(long *)(unaff_x19 + 0x10) = unaff_x20;
          thunk_FUN_049ee3d8();
          **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
          thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x21 + 0xb8));
          lVar10 = thunk_FUN_04983f60(*unaff_x21);
          OVRPlugin_BodyJointLocation__get_OrientationValid();
          lVar11 = FUN_04947fd0(*unaff_x22,0x1a);
          FUN_0a188128(DAT_01df4cdc,unaff_s12,unaff_s13,0,0,0,0x3f800000,&stack0x00000740,0);
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined8 *)(lVar11 + 0x2c) = 0;
              *(undefined8 *)(lVar11 + 0x24) = 0;
              *(undefined8 *)(lVar11 + 0x38) = 0;
              *(undefined8 *)(lVar11 + 0x30) = 0;
              *(undefined4 *)(lVar11 + 0x20) = 1;
              FUN_0a188128(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                *(undefined4 *)(lVar11 + 0x40) = 0xffffffff;
                *(undefined8 *)(lVar11 + 0x4c) = 0;
                *(undefined8 *)(lVar11 + 0x44) = 0;
                uVar2 = DAT_01df4dbc;
                *(undefined8 *)(lVar11 + 0x58) = 0;
                *(undefined8 *)(lVar11 + 0x50) = 0;
                FUN_0a188128(uVar2,unaff_s10,unaff_s11,DAT_01df4ba4,DAT_01df4a10,DAT_01df4850,
                             DAT_01df4570,&stack0x000006c0,0);
                if (2 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined4 *)(lVar11 + 0x60) = 1;
                  *(undefined8 *)(lVar11 + 0x6c) = 0;
                  *(undefined8 *)(lVar11 + 100) = 0;
                  uVar2 = DAT_01df507c;
                  *(undefined8 *)(lVar11 + 0x78) = 0;
                  *(undefined8 *)(lVar11 + 0x70) = 0;
                  FUN_0a188128(uVar2,DAT_01df4d48,DAT_01df451c,DAT_01df5080,DAT_01df51c4,
                               DAT_01df4a78,DAT_01df494c,&stack0x00000680,0);
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined4 *)(lVar11 + 0x80) = 2;
                    *(undefined8 *)(lVar11 + 0x8c) = 0;
                    *(undefined8 *)(lVar11 + 0x84) = 0;
                    uVar2 = DAT_01df4d4c;
                    *(undefined8 *)(lVar11 + 0x98) = 0;
                    *(undefined8 *)(lVar11 + 0x90) = 0;
                    FUN_0a188128(uVar2,DAT_01df478c,DAT_01df4e5c,DAT_01df4654,DAT_01df4e1c,
                                 DAT_01df4c74,DAT_01df4dc0,&stack0x00000640,0);
                    if (4 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined4 *)(lVar11 + 0xa0) = 3;
                      *(undefined8 *)(lVar11 + 0xac) = 0;
                      *(undefined8 *)(lVar11 + 0xa4) = 0;
                      *(undefined8 *)(lVar11 + 0xb8) = 0;
                      *(undefined8 *)(lVar11 + 0xb0) = 0;
                      FUN_0a188128(DAT_01df4854,DAT_01df4a14,DAT_01df4950,DAT_01df4574,0,0,
                                   0x3f800000,&stack0x00000600,0);
                      if (5 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0xcc) = 0;
                        *(undefined8 *)(lVar11 + 0xc4) = 0;
                        *(undefined8 *)(lVar11 + 0xd8) = 0;
                        *(undefined8 *)(lVar11 + 0xd0) = 0;
                        *(undefined4 *)(lVar11 + 0xc0) = 4;
                        FUN_0a188128(DAT_01df4e60,unaff_s14,unaff_s15,0,0,0,0x3f800000,
                                     &stack0x000005c0,0);
                        if (6 < *(uint *)(lVar11 + 0x18)) {
                          *(undefined4 *)(lVar11 + 0xe0) = 1;
                          *(undefined8 *)(lVar11 + 0xec) = 0;
                          *(undefined8 *)(lVar11 + 0xe4) = 0;
                          uVar2 = DAT_01df4a18;
                          *(undefined8 *)(lVar11 + 0xf8) = 0;
                          *(undefined8 *)(lVar11 + 0xf0) = 0;
                          FUN_0a188128(uVar2,uStack00000000000000c0,in_stack_00000e2c,
                                       in_stack_00000e28,DAT_01df4790,DAT_01df4c78,
                                       uStack00000000000000dc,&stack0x00000580,0);
                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                            *(undefined4 *)(lVar11 + 0x100) = 6;
                            *(undefined8 *)(lVar11 + 0x118) = 0;
                            *(undefined8 *)(lVar11 + 0x110) = 0;
                            *(undefined8 *)(lVar11 + 0x10c) = 0;
                            *(undefined8 *)(lVar11 + 0x104) = 0;
                            FUN_0a188128(DAT_01df5084,DAT_01df4658,DAT_01df4954,
                                         uStack00000000000000d8,DAT_01df4ae4,DAT_01df51c8,
                                         uStack00000000000000d4,&stack0x00000540,0);
                            if (8 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined4 *)(lVar11 + 0x120) = 7;
                              *(undefined8 *)(lVar11 + 0x138) = 0;
                              *(undefined8 *)(lVar11 + 0x130) = 0;
                              uVar2 = DAT_01df5160;
                              *(undefined8 *)(lVar11 + 300) = 0;
                              *(undefined8 *)(lVar11 + 0x124) = 0;
                              FUN_0a188128(DAT_01df4c1c,uStack00000000000000d0,
                                           uStack00000000000000cc,uStack00000000000000c8,uVar2,
                                           DAT_01df4ae8,uStack00000000000000c4,&stack0x00000500,0);
                              if (9 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined4 *)(lVar11 + 0x140) = 8;
                                *(undefined8 *)(lVar11 + 0x158) = 0;
                                *(undefined8 *)(lVar11 + 0x150) = 0;
                                *(undefined8 *)(lVar11 + 0x14c) = 0;
                                *(undefined8 *)(lVar11 + 0x144) = 0;
                                FUN_0a188128(DAT_01df4a7c,DAT_01df51cc,DAT_01df465c,0,DAT_01df4ba8,0
                                             ,0x3f800000,&stack0x000004c0,0);
                                if (10 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined4 *)(lVar11 + 0x160) = 9;
                                  *(undefined8 *)(lVar11 + 0x178) = 0;
                                  *(undefined8 *)(lVar11 + 0x170) = 0;
                                  *(undefined8 *)(lVar11 + 0x16c) = 0;
                                  *(undefined8 *)(lVar11 + 0x164) = 0;
                                  FUN_0a188128(DAT_01df4958,uStack00000000000000bc,
                                               uStack00000000000000b8,0,0,0,0x3f800000,
                                               &stack0x00000480,0);
                                  if (0xb < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined4 *)(lVar11 + 0x180) = 1;
                                    *(undefined8 *)(lVar11 + 0x198) = 0;
                                    *(undefined8 *)(lVar11 + 400) = 0;
                                    uVar2 = DAT_01df4ebc;
                                    *(undefined8 *)(lVar11 + 0x18c) = 0;
                                    *(undefined8 *)(lVar11 + 0x184) = 0;
                                    FUN_0a188128(DAT_01df4520,uStack00000000000000b4,
                                                 uStack00000000000000b0,uStack00000000000000ac,uVar2
                                                 ,DAT_01df50fc,uStack00000000000000a8,
                                                 &stack0x00000440,0);
                                    if (0xc < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined4 *)(lVar11 + 0x1a0) = 0xb;
                                      *(undefined8 *)(lVar11 + 0x1b8) = 0;
                                      *(undefined8 *)(lVar11 + 0x1b0) = 0;
                                      uVar2 = DAT_01df45e0;
                                      *(undefined8 *)(lVar11 + 0x1ac) = 0;
                                      *(undefined8 *)(lVar11 + 0x1a4) = 0;
                                      FUN_0a188128(DAT_01df495c,uStack00000000000000a4,
                                                   uStack00000000000000a0,uStack000000000000009c,
                                                   uVar2,DAT_01df5100,uStack0000000000000098,
                                                   &stack0x00000400,0);
                                      if (0xd < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined4 *)(lVar11 + 0x1c0) = 0xc;
                                        *(undefined8 *)(lVar11 + 0x1d8) = 0;
                                        *(undefined8 *)(lVar11 + 0x1d0) = 0;
                                        uVar2 = DAT_01df4ffc;
                                        *(undefined8 *)(lVar11 + 0x1cc) = 0;
                                        *(undefined8 *)(lVar11 + 0x1c4) = 0;
                                        FUN_0a188128(DAT_01df4794,uStack0000000000000094,
                                                     uStack0000000000000090,uStack000000000000008c,
                                                     uVar2,DAT_01df4660,uStack0000000000000088,
                                                     &stack0x000003c0,0);
                                        if (0xe < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined4 *)(lVar11 + 0x1e0) = 0xd;
                                          *(undefined8 *)(lVar11 + 0x1f8) = 0;
                                          *(undefined8 *)(lVar11 + 0x1f0) = 0;
                                          *(undefined8 *)(lVar11 + 0x1ec) = 0;
                                          *(undefined8 *)(lVar11 + 0x1e4) = 0;
                                          FUN_0a188128(DAT_01df4ec0,uStack0000000000000084,
                                                       uStack0000000000000080,unaff_s9,0xa2800000,
                                                       0xa3000000a3000000,0x3f800000,
                                                       &stack0x00000380,0);
                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff0) != 0) {
                                            *(undefined4 *)(lVar11 + 0x200) = 0xe;
                                            *(undefined8 *)(lVar11 + 0x218) = 0;
                                            *(undefined8 *)(lVar11 + 0x210) = 0;
                                            *(undefined8 *)(lVar11 + 0x20c) = 0;
                                            *(undefined8 *)(lVar11 + 0x204) = 0;
                                            FUN_0a188128(DAT_01df4f28,uStack000000000000007c,
                                                         uStack0000000000000078,0,0,0,0x3f800000,
                                                         &stack0x00000340,0);
                                            if (0x10 < *(uint *)(lVar11 + 0x18)) {
                                              *(undefined4 *)(lVar11 + 0x220) = 1;
                                              *(undefined8 *)(lVar11 + 0x238) = 0;
                                              *(undefined8 *)(lVar11 + 0x230) = 0;
                                              uVar2 = DAT_01df4e20;
                                              *(undefined8 *)(lVar11 + 0x22c) = 0;
                                              *(undefined8 *)(lVar11 + 0x224) = 0;
                                              FUN_0a188128(DAT_01df4d50,uStack0000000000000074,
                                                           uStack0000000000000070,
                                                           uStack000000000000006c,uVar2,DAT_01df49c4
                                                           ,uStack0000000000000068,&stack0x00000300,
                                                           0);
                                              if (0x11 < *(uint *)(lVar11 + 0x18)) {
                                                *(undefined4 *)(lVar11 + 0x240) = 0x10;
                                                *(undefined8 *)(lVar11 + 600) = 0;
                                                *(undefined8 *)(lVar11 + 0x250) = 0;
                                                uVar2 = DAT_01df4804;
                                                *(undefined8 *)(lVar11 + 0x24c) = 0;
                                                *(undefined8 *)(lVar11 + 0x244) = 0;
                                                FUN_0a188128(DAT_01df4dc4,uStack0000000000000064,
                                                             uStack0000000000000060,
                                                             uStack000000000000005c,uVar2,
                                                             DAT_01df5000,uStack0000000000000058,
                                                             &stack0x000002c0,0);
                                                if (0x12 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined4 *)(lVar11 + 0x260) = 0x11;
                                                  *(undefined8 *)(lVar11 + 0x278) = 0;
                                                  *(undefined8 *)(lVar11 + 0x270) = 0;
                                                  uVar2 = DAT_01df4dc8;
                                                  *(undefined8 *)(lVar11 + 0x26c) = 0;
                                                  *(undefined8 *)(lVar11 + 0x264) = 0;
                                                  FUN_0a188128(DAT_01df4a1c,uStack0000000000000054,
                                                               uStack0000000000000050,uVar2,
                                                               DAT_01df4e24,DAT_01df4f8c,
                                                               DAT_01df5004,&stack0x00000280,0);
                                                  if (0x13 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined4 *)(lVar11 + 0x280) = 0x12;
                                                    *(undefined8 *)(lVar11 + 0x298) = 0;
                                                    *(undefined8 *)(lVar11 + 0x290) = 0;
                                                    *(undefined8 *)(lVar11 + 0x28c) = 0;
                                                    *(undefined8 *)(lVar11 + 0x284) = 0;
                                                    uVar2 = DAT_01df508c;
                                                    FUN_0a188128(DAT_01df4bac,DAT_01df5088,
                                                                 DAT_01df51d0,unaff_s9,DAT_01df508c,
                                                                 0x8800000088000000,0x3f800000,
                                                                 &stack0x00000240,0);
                                                    if (0x14 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined4 *)(lVar11 + 0x2a0) = 0x13;
                                                      *(undefined8 *)(lVar11 + 0x2b8) = 0;
                                                      *(undefined8 *)(lVar11 + 0x2b0) = 0;
                                                      uVar3 = DAT_01df4e64;
                                                      *(undefined8 *)(lVar11 + 0x2ac) = 0;
                                                      *(undefined8 *)(lVar11 + 0x2a4) = 0;
                                                      FUN_0a188128(DAT_01df4798,
                                                                   uStack000000000000004c,
                                                                   uStack0000000000000048,
                                                                   uStack0000000000000044,uVar3,
                                                                   DAT_01df4578,
                                                                   uStack0000000000000040,
                                                                   &stack0x00000200,0);
                                                      in_stack_000001e0 = 0;
                                                      uStack00000000000001e8 = 0;
                                                      uStack00000000000001ec = 0;
                                                      in_stack_000001f0 = 0;
                                                      if (0x15 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined4 *)(lVar11 + 0x2c0) = 1;
                                                        *(undefined8 *)(lVar11 + 0x2d8) = 0;
                                                        *(undefined8 *)(lVar11 + 0x2d0) = 0;
                                                        uVar3 = DAT_01df4d54;
                                                        *(undefined8 *)(lVar11 + 0x2cc) = 0;
                                                        *(undefined8 *)(lVar11 + 0x2c4) = 0;
                                                        in_stack_000001c0 = 0;
                                                        uStack00000000000001c8 = 0;
                                                        uStack00000000000001cc = 0;
                                                        in_stack_000001d8 = 0;
                                                        uStack00000000000001d0 = 0;
                                                        uStack00000000000001d4 = 0;
                                                        FUN_0a188128(DAT_01df4b5c,
                                                                     uStack000000000000003c,
                                                                     uStack0000000000000038,
                                                                     uStack0000000000000034,uVar3,
                                                                     DAT_01df4bb0,
                                                                     uStack0000000000000030,
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
                                                        if (0x16 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined4 *)(lVar11 + 0x2e0) = 0x15;
                                                          *(undefined8 *)(lVar11 + 0x2f8) =
                                                               uStack00000000000001b4;
                                                          *(ulong *)(lVar11 + 0x2f0) =
                                                               CONCAT44(uStack00000000000001d0,
                                                                        uStack00000000000001cc);
                                                          uVar3 = DAT_01df4e68;
                                                          *(ulong *)(lVar11 + 0x2ec) =
                                                               CONCAT44(uStack00000000000001cc,
                                                                        uStack00000000000001c8);
                                                          *(undefined8 *)(lVar11 + 0x2e4) =
                                                               in_stack_000001c0;
                                                          in_stack_00000180 = 0;
                                                          uStack0000000000000188 = 0;
                                                          uStack000000000000018c = 0;
                                                          in_stack_00000198 = 0;
                                                          uStack0000000000000190 = 0;
                                                          uStack0000000000000194 = 0;
                                                          FUN_0a188128(DAT_01df51d4,
                                                                       uStack000000000000002c,
                                                                       uStack0000000000000028,
                                                                       uStack0000000000000024,uVar3,
                                                                       DAT_01df5090,
                                                                       uStack0000000000000020,
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
                                                          if (0x17 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined4 *)(lVar11 + 0x300) = 0x16;
                                                            *(undefined8 *)(lVar11 + 0x318) =
                                                                 uStack0000000000000174;
                                                            *(ulong *)(lVar11 + 0x310) =
                                                                 CONCAT44(uStack0000000000000190,
                                                                          uStack000000000000018c);
                                                            uVar3 = DAT_01df45e4;
                                                            *(ulong *)(lVar11 + 0x30c) =
                                                                 CONCAT44(uStack000000000000018c,
                                                                          uStack0000000000000188);
                                                            *(undefined8 *)(lVar11 + 0x304) =
                                                                 in_stack_00000180;
                                                            in_stack_00000140 = 0;
                                                            uStack0000000000000148 = 0;
                                                            uStack000000000000014c = 0;
                                                            in_stack_00000158 = 0;
                                                            uStack0000000000000150 = 0;
                                                            uStack0000000000000154 = 0;
                                                            FUN_0a188128(DAT_01df4c7c,uVar7,uVar4,
                                                                         uVar8,uVar3,DAT_01df4664,
                                                                         uVar9,&stack0x00000140,0);
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
                                                            if (0x18 < *(uint *)(lVar11 + 0x18)) {
                                                              *(undefined4 *)(lVar11 + 800) = 0x17;
                                                              *(undefined8 *)(lVar11 + 0x338) =
                                                                   uStack0000000000000134;
                                                              *(ulong *)(lVar11 + 0x330) =
                                                                   CONCAT44(uStack0000000000000150,
                                                                            uStack000000000000014c);
                                                              *(ulong *)(lVar11 + 0x32c) =
                                                                   CONCAT44(uStack000000000000014c,
                                                                            uStack0000000000000148);
                                                              *(undefined8 *)(lVar11 + 0x324) =
                                                                   in_stack_00000140;
                                                              in_stack_00000100 = 0;
                                                              uStack0000000000000108 = 0;
                                                              uStack000000000000010c = 0;
                                                              in_stack_00000118 = 0;
                                                              uStack0000000000000110 = 0;
                                                              uStack0000000000000114 = 0;
                                                              FUN_0a188128(DAT_01df4aec,uVar6,uVar5,
                                                                           unaff_s8,unaff_s8,uVar2,
                                                                           0x3f800000,
                                                                           &stack0x00000100,0);
                                                              if (0x19 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined4 *)(lVar11 + 0x340) =
                                                                     0x18;
                                                                *(ulong *)(lVar11 + 0x358) =
                                                                     CONCAT44(in_stack_00000118,
                                                                              uStack0000000000000114
                                                                             );
                                                                *(ulong *)(lVar11 + 0x350) =
                                                                     CONCAT44(uStack0000000000000110
                                                                              ,
                                                  uStack000000000000010c);
                                                  *(ulong *)(lVar11 + 0x34c) =
                                                       CONCAT44(uStack000000000000010c,
                                                                uStack0000000000000108);
                                                  *(undefined8 *)(lVar11 + 0x344) =
                                                       in_stack_00000100;
                                                  if (lVar10 != 0) {
                                                    *(long *)(lVar10 + 0x10) = lVar11;
                                                    thunk_FUN_049ee3d8((long *)(lVar10 + 0x10),
                                                                       lVar11);
                                                    plVar12 = (long *)(*(long *)(*unaff_x21 + 0xb8)
                                                                      + 8);
                                                    *plVar12 = lVar10;
                                                    thunk_FUN_049ee3d8(plVar12,lVar10);
                                                    return;
                                                  }
                                                  goto LAB_090c3bbc;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_090c3bb8;
          }
        }
LAB_090c3bbc:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
  }
LAB_090c3bb8:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


