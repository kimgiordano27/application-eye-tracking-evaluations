/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcEnabled
ENTRY_POINT: 090c2cbc
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcEnabled
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

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
  long lVar13;
  long lVar14;
  long *plVar15;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
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
  
                    /* try { // try from 090c2ccc to 091c2ccf has its CatchHandler @ 090c2cf8 */
                    /* try { // try from 090c2cd0 to 091c2d13 has its CatchHandler @ 090c2c88 */
  uStack0000000000000030 = DAT_01df51c0;
  uStack0000000000000034 = param_4;
  uStack0000000000000038 = param_3;
  uStack000000000000003c = param_2;
  FUN_0a188128(param_5,0);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090c2ccc with catch @ 090c2cf8
                        */
  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                    /* try { // try from 090c2d14 to 091c2d17 has its CatchHandler @ 090c2d1c */
                    /* catch() { ... } // from try @ 090c2d14 with catch @ 090c2d1c */
                    /* try { // try from 090c2d20 to 091c2d27 has its CatchHandler @ 090c2d30 */
    *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                    /* try { // try from 090c2d28 to 091c2d33 has its CatchHandler @ 090c2c88 */
    *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
    *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 090c2d20 with catch @ 090c2d30
                        */
                    /* try { // try from 090c2d34 to 091c2e4f has its CatchHandler @ 090c2d34
                       catch() { ... } // from try @ 090c2d34 with catch @ 090c2d34
                       catch() { ... } // from try @ 090c31dc with catch @ 090c2d34
                       catch() { ... } // from try @ 090c3230 with catch @ 090c2d34
                       catch() { ... } // from try @ 090c3258 with catch @ 090c2d34 */
    *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
    *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
    uVar11 = DAT_01df5074;
    uVar9 = DAT_01df4f24;
    uVar3 = DAT_01df464c;
    uVar1 = DAT_01df456c;
    FUN_0a188128(DAT_01df5070,&stack0x00000800,0);
    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
      *(undefined8 *)(unaff_x20 + 0x318) = 0;
      *(undefined8 *)(unaff_x20 + 0x310) = 0;
      *(undefined8 *)(unaff_x20 + 0x30c) = 0;
      *(undefined8 *)(unaff_x20 + 0x304) = 0;
      uVar12 = DAT_01df5078;
      uVar10 = DAT_01df4ff8;
      uVar7 = DAT_01df4c18;
      uVar4 = DAT_01df4734;
      FUN_0a188128(DAT_01df4650,&stack0x000007c0,0);
      if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 800) = 0x17;
        *(undefined8 *)(unaff_x20 + 0x338) = 0;
        *(undefined8 *)(unaff_x20 + 0x330) = 0;
        *(undefined8 *)(unaff_x20 + 0x32c) = 0;
        *(undefined8 *)(unaff_x20 + 0x324) = 0;
        uVar6 = DAT_01df4ba0;
        uVar5 = DAT_01df4b58;
        FUN_0a188128(DAT_01df4a0c,DAT_01df4ba0,DAT_01df4b58,unaff_s8,unaff_s9,DAT_01df45dc,
                     0x3f800000,&stack0x00000780,0);
        if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
          *(undefined8 *)(unaff_x20 + 0x358) = 0;
          *(undefined8 *)(unaff_x20 + 0x350) = 0;
          *(undefined8 *)(unaff_x20 + 0x34c) = 0;
          *(undefined8 *)(unaff_x20 + 0x344) = 0;
          if (unaff_x19 != 0) {
            *(long *)(unaff_x19 + 0x10) = unaff_x20;
            thunk_FUN_049ee3d8();
            **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
            thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x21 + 0xb8));
            lVar13 = thunk_FUN_04983f60(*unaff_x21);
            OVRPlugin_BodyJointLocation__get_OrientationValid();
            lVar14 = FUN_04947fd0(*unaff_x22,0x1a);
            FUN_0a188128(DAT_01df4cdc,unaff_s12,unaff_s13,0,0,0,0x3f800000,&stack0x00000740,0);
            if (lVar14 != 0) {
              if (*(int *)(lVar14 + 0x18) != 0) {
                *(undefined8 *)(lVar14 + 0x2c) = 0;
                *(undefined8 *)(lVar14 + 0x24) = 0;
                *(undefined8 *)(lVar14 + 0x38) = 0;
                *(undefined8 *)(lVar14 + 0x30) = 0;
                *(undefined4 *)(lVar14 + 0x20) = 1;
                FUN_0a188128(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined4 *)(lVar14 + 0x40) = 0xffffffff;
                  *(undefined8 *)(lVar14 + 0x4c) = 0;
                  *(undefined8 *)(lVar14 + 0x44) = 0;
                  uVar2 = DAT_01df4dbc;
                  *(undefined8 *)(lVar14 + 0x58) = 0;
                  *(undefined8 *)(lVar14 + 0x50) = 0;
                  FUN_0a188128(uVar2,unaff_s10,unaff_s11,DAT_01df4ba4,DAT_01df4a10,DAT_01df4850,
                               DAT_01df4570,&stack0x000006c0,0);
                  if (2 < *(uint *)(lVar14 + 0x18)) {
                    *(undefined4 *)(lVar14 + 0x60) = 1;
                    *(undefined8 *)(lVar14 + 0x6c) = 0;
                    *(undefined8 *)(lVar14 + 100) = 0;
                    uVar2 = DAT_01df507c;
                    *(undefined8 *)(lVar14 + 0x78) = 0;
                    *(undefined8 *)(lVar14 + 0x70) = 0;
                    FUN_0a188128(uVar2,DAT_01df4d48,DAT_01df451c,DAT_01df5080,DAT_01df51c4,
                                 DAT_01df4a78,DAT_01df494c,&stack0x00000680,0);
                    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined4 *)(lVar14 + 0x80) = 2;
                      *(undefined8 *)(lVar14 + 0x8c) = 0;
                      *(undefined8 *)(lVar14 + 0x84) = 0;
                      uVar2 = DAT_01df4d4c;
                      *(undefined8 *)(lVar14 + 0x98) = 0;
                      *(undefined8 *)(lVar14 + 0x90) = 0;
                      FUN_0a188128(uVar2,DAT_01df478c,DAT_01df4e5c,DAT_01df4654,DAT_01df4e1c,
                                   DAT_01df4c74,DAT_01df4dc0,&stack0x00000640,0);
                      if (4 < *(uint *)(lVar14 + 0x18)) {
                        *(undefined4 *)(lVar14 + 0xa0) = 3;
                        *(undefined8 *)(lVar14 + 0xac) = 0;
                        *(undefined8 *)(lVar14 + 0xa4) = 0;
                        *(undefined8 *)(lVar14 + 0xb8) = 0;
                        *(undefined8 *)(lVar14 + 0xb0) = 0;
                        FUN_0a188128(DAT_01df4854,DAT_01df4a14,DAT_01df4950,DAT_01df4574,0,0,
                                     0x3f800000,&stack0x00000600,0);
                        if (5 < *(uint *)(lVar14 + 0x18)) {
                          *(undefined8 *)(lVar14 + 0xcc) = 0;
                          *(undefined8 *)(lVar14 + 0xc4) = 0;
                          *(undefined8 *)(lVar14 + 0xd8) = 0;
                          *(undefined8 *)(lVar14 + 0xd0) = 0;
                          *(undefined4 *)(lVar14 + 0xc0) = 4;
                          FUN_0a188128(DAT_01df4e60,unaff_s14,unaff_s15,0,0,0,0x3f800000,
                                       &stack0x000005c0,0);
                          if (6 < *(uint *)(lVar14 + 0x18)) {
                            *(undefined4 *)(lVar14 + 0xe0) = 1;
                            *(undefined8 *)(lVar14 + 0xec) = 0;
                            *(undefined8 *)(lVar14 + 0xe4) = 0;
                            uVar2 = DAT_01df4a18;
                            *(undefined8 *)(lVar14 + 0xf8) = 0;
                            *(undefined8 *)(lVar14 + 0xf0) = 0;
                            FUN_0a188128(uVar2,uStack00000000000000c0,in_stack_00000e2c,
                                         in_stack_00000e28,DAT_01df4790,DAT_01df4c78,
                                         uStack00000000000000dc,&stack0x00000580,0);
                            if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) != 0) {
                              *(undefined4 *)(lVar14 + 0x100) = 6;
                              *(undefined8 *)(lVar14 + 0x118) = 0;
                              *(undefined8 *)(lVar14 + 0x110) = 0;
                              *(undefined8 *)(lVar14 + 0x10c) = 0;
                              *(undefined8 *)(lVar14 + 0x104) = 0;
                              FUN_0a188128(DAT_01df5084,DAT_01df4658,DAT_01df4954,
                                           uStack00000000000000d8,DAT_01df4ae4,DAT_01df51c8,
                                           uStack00000000000000d4,&stack0x00000540,0);
                              if (8 < *(uint *)(lVar14 + 0x18)) {
                                *(undefined4 *)(lVar14 + 0x120) = 7;
                                *(undefined8 *)(lVar14 + 0x138) = 0;
                                *(undefined8 *)(lVar14 + 0x130) = 0;
                                uVar2 = DAT_01df5160;
                                *(undefined8 *)(lVar14 + 300) = 0;
                                *(undefined8 *)(lVar14 + 0x124) = 0;
                                FUN_0a188128(DAT_01df4c1c,uStack00000000000000d0,
                                             uStack00000000000000cc,uStack00000000000000c8,uVar2,
                                             DAT_01df4ae8,uStack00000000000000c4,&stack0x00000500,0)
                                ;
                                if (9 < *(uint *)(lVar14 + 0x18)) {
                                  *(undefined4 *)(lVar14 + 0x140) = 8;
                                  *(undefined8 *)(lVar14 + 0x158) = 0;
                                  *(undefined8 *)(lVar14 + 0x150) = 0;
                                  *(undefined8 *)(lVar14 + 0x14c) = 0;
                                  *(undefined8 *)(lVar14 + 0x144) = 0;
                                  FUN_0a188128(DAT_01df4a7c,DAT_01df51cc,DAT_01df465c,0,DAT_01df4ba8
                                               ,0,0x3f800000,&stack0x000004c0,0);
                                  if (10 < *(uint *)(lVar14 + 0x18)) {
                                    *(undefined4 *)(lVar14 + 0x160) = 9;
                                    *(undefined8 *)(lVar14 + 0x178) = 0;
                                    *(undefined8 *)(lVar14 + 0x170) = 0;
                                    *(undefined8 *)(lVar14 + 0x16c) = 0;
                                    *(undefined8 *)(lVar14 + 0x164) = 0;
                                    FUN_0a188128(DAT_01df4958,uStack00000000000000bc,
                                                 uStack00000000000000b8,0,0,0,0x3f800000,
                                                 &stack0x00000480,0);
                                    if (0xb < *(uint *)(lVar14 + 0x18)) {
                                      *(undefined4 *)(lVar14 + 0x180) = 1;
                                      *(undefined8 *)(lVar14 + 0x198) = 0;
                                      *(undefined8 *)(lVar14 + 400) = 0;
                                      uVar2 = DAT_01df4ebc;
                                      *(undefined8 *)(lVar14 + 0x18c) = 0;
                                      *(undefined8 *)(lVar14 + 0x184) = 0;
                                      FUN_0a188128(DAT_01df4520,uStack00000000000000b4,
                                                   uStack00000000000000b0,uStack00000000000000ac,
                                                   uVar2,DAT_01df50fc,uStack00000000000000a8,
                                                   &stack0x00000440,0);
                                      if (0xc < *(uint *)(lVar14 + 0x18)) {
                                        *(undefined4 *)(lVar14 + 0x1a0) = 0xb;
                                        *(undefined8 *)(lVar14 + 0x1b8) = 0;
                                        *(undefined8 *)(lVar14 + 0x1b0) = 0;
                                        uVar2 = DAT_01df45e0;
                                        *(undefined8 *)(lVar14 + 0x1ac) = 0;
                                        *(undefined8 *)(lVar14 + 0x1a4) = 0;
                                        FUN_0a188128(DAT_01df495c,uStack00000000000000a4,
                                                     uStack00000000000000a0,uStack000000000000009c,
                                                     uVar2,DAT_01df5100,uStack0000000000000098,
                                                     &stack0x00000400,0);
                                        if (0xd < *(uint *)(lVar14 + 0x18)) {
                                          *(undefined4 *)(lVar14 + 0x1c0) = 0xc;
                                          *(undefined8 *)(lVar14 + 0x1d8) = 0;
                                          *(undefined8 *)(lVar14 + 0x1d0) = 0;
                                          uVar2 = DAT_01df4ffc;
                                          *(undefined8 *)(lVar14 + 0x1cc) = 0;
                                          *(undefined8 *)(lVar14 + 0x1c4) = 0;
                                          FUN_0a188128(DAT_01df4794,uStack0000000000000094,
                                                       uStack0000000000000090,uStack000000000000008c
                                                       ,uVar2,DAT_01df4660,uStack0000000000000088,
                                                       &stack0x000003c0,0);
                                          if (0xe < *(uint *)(lVar14 + 0x18)) {
                                            *(undefined4 *)(lVar14 + 0x1e0) = 0xd;
                                            *(undefined8 *)(lVar14 + 0x1f8) = 0;
                                            *(undefined8 *)(lVar14 + 0x1f0) = 0;
                                            *(undefined8 *)(lVar14 + 0x1ec) = 0;
                                            *(undefined8 *)(lVar14 + 0x1e4) = 0;
                                            FUN_0a188128(DAT_01df4ec0,uStack0000000000000084,
                                                         uStack0000000000000080,unaff_s9,0xa2800000,
                                                         0xa3000000a3000000,0x3f800000,
                                                         &stack0x00000380,0);
                                            if ((*(uint *)(lVar14 + 0x18) & 0xfffffff0) != 0) {
                                              *(undefined4 *)(lVar14 + 0x200) = 0xe;
                                              *(undefined8 *)(lVar14 + 0x218) = 0;
                                              *(undefined8 *)(lVar14 + 0x210) = 0;
                                              *(undefined8 *)(lVar14 + 0x20c) = 0;
                                              *(undefined8 *)(lVar14 + 0x204) = 0;
                                              FUN_0a188128(DAT_01df4f28,uStack000000000000007c,
                                                           uStack0000000000000078,0,0,0,0x3f800000,
                                                           &stack0x00000340,0);
                                              if (0x10 < *(uint *)(lVar14 + 0x18)) {
                                                *(undefined4 *)(lVar14 + 0x220) = 1;
                                                *(undefined8 *)(lVar14 + 0x238) = 0;
                                                *(undefined8 *)(lVar14 + 0x230) = 0;
                                                uVar2 = DAT_01df4e20;
                                                *(undefined8 *)(lVar14 + 0x22c) = 0;
                                                *(undefined8 *)(lVar14 + 0x224) = 0;
                                                FUN_0a188128(DAT_01df4d50,uStack0000000000000074,
                                                             uStack0000000000000070,
                                                             uStack000000000000006c,uVar2,
                                                             DAT_01df49c4,uStack0000000000000068,
                                                             &stack0x00000300,0);
                                                if (0x11 < *(uint *)(lVar14 + 0x18)) {
                                                  *(undefined4 *)(lVar14 + 0x240) = 0x10;
                                                  *(undefined8 *)(lVar14 + 600) = 0;
                                                  *(undefined8 *)(lVar14 + 0x250) = 0;
                                                  uVar2 = DAT_01df4804;
                                                  *(undefined8 *)(lVar14 + 0x24c) = 0;
                                                  *(undefined8 *)(lVar14 + 0x244) = 0;
                                                  FUN_0a188128(DAT_01df4dc4,uStack0000000000000064,
                                                               uStack0000000000000060,
                                                               uStack000000000000005c,uVar2,
                                                               DAT_01df5000,uStack0000000000000058,
                                                               &stack0x000002c0,0);
                                                  if (0x12 < *(uint *)(lVar14 + 0x18)) {
                                                    *(undefined4 *)(lVar14 + 0x260) = 0x11;
                                                    *(undefined8 *)(lVar14 + 0x278) = 0;
                                                    *(undefined8 *)(lVar14 + 0x270) = 0;
                                                    uVar2 = DAT_01df4dc8;
                                                    *(undefined8 *)(lVar14 + 0x26c) = 0;
                                                    *(undefined8 *)(lVar14 + 0x264) = 0;
                                                    FUN_0a188128(DAT_01df4a1c,uStack0000000000000054
                                                                 ,uStack0000000000000050,uVar2,
                                                                 DAT_01df4e24,DAT_01df4f8c,
                                                                 DAT_01df5004,&stack0x00000280,0);
                                                    if (0x13 < *(uint *)(lVar14 + 0x18)) {
                                                      *(undefined4 *)(lVar14 + 0x280) = 0x12;
                                                      *(undefined8 *)(lVar14 + 0x298) = 0;
                                                      *(undefined8 *)(lVar14 + 0x290) = 0;
                                                      *(undefined8 *)(lVar14 + 0x28c) = 0;
                                                      *(undefined8 *)(lVar14 + 0x284) = 0;
                                                      uVar2 = DAT_01df508c;
                                                      FUN_0a188128(DAT_01df4bac,DAT_01df5088,
                                                                   DAT_01df51d0,unaff_s9,
                                                                   DAT_01df508c,0x8800000088000000,
                                                                   0x3f800000,&stack0x00000240,0);
                                                      if (0x14 < *(uint *)(lVar14 + 0x18)) {
                                                        *(undefined4 *)(lVar14 + 0x2a0) = 0x13;
                                                        *(undefined8 *)(lVar14 + 0x2b8) = 0;
                                                        *(undefined8 *)(lVar14 + 0x2b0) = 0;
                                                        uVar8 = DAT_01df4e64;
                                                        *(undefined8 *)(lVar14 + 0x2ac) = 0;
                                                        *(undefined8 *)(lVar14 + 0x2a4) = 0;
                                                        FUN_0a188128(DAT_01df4798,
                                                                     uStack000000000000004c,
                                                                     uStack0000000000000048,
                                                                     uStack0000000000000044,uVar8,
                                                                     DAT_01df4578,
                                                                     uStack0000000000000040,
                                                                     &stack0x00000200,0);
                                                        in_stack_000001e0 = 0;
                                                        uStack00000000000001e8 = 0;
                                                        uStack00000000000001ec = 0;
                                                        in_stack_000001f0 = 0;
                                                        if (0x15 < *(uint *)(lVar14 + 0x18)) {
                                                          *(undefined4 *)(lVar14 + 0x2c0) = 1;
                                                          *(undefined8 *)(lVar14 + 0x2d8) = 0;
                                                          *(undefined8 *)(lVar14 + 0x2d0) = 0;
                                                          uVar8 = DAT_01df4d54;
                                                          *(undefined8 *)(lVar14 + 0x2cc) = 0;
                                                          *(undefined8 *)(lVar14 + 0x2c4) = 0;
                                                          in_stack_000001c0 = 0;
                                                          uStack00000000000001c8 = 0;
                                                          uStack00000000000001cc = 0;
                                                          in_stack_000001d8 = 0;
                                                          uStack00000000000001d0 = 0;
                                                          uStack00000000000001d4 = 0;
                                                          FUN_0a188128(DAT_01df4b5c,
                                                                       uStack000000000000003c,
                                                                       uStack0000000000000038,
                                                                       uStack0000000000000034,uVar8,
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
                                                          if (0x16 < *(uint *)(lVar14 + 0x18)) {
                                                            *(undefined4 *)(lVar14 + 0x2e0) = 0x15;
                                                            *(undefined8 *)(lVar14 + 0x2f8) =
                                                                 uStack00000000000001b4;
                                                            *(ulong *)(lVar14 + 0x2f0) =
                                                                 CONCAT44(uStack00000000000001d0,
                                                                          uStack00000000000001cc);
                                                            uVar8 = DAT_01df4e68;
                                                            *(ulong *)(lVar14 + 0x2ec) =
                                                                 CONCAT44(uStack00000000000001cc,
                                                                          uStack00000000000001c8);
                                                            *(undefined8 *)(lVar14 + 0x2e4) =
                                                                 in_stack_000001c0;
                                                            in_stack_00000180 = 0;
                                                            uStack0000000000000188 = 0;
                                                            uStack000000000000018c = 0;
                                                            in_stack_00000198 = 0;
                                                            uStack0000000000000190 = 0;
                                                            uStack0000000000000194 = 0;
                                                            FUN_0a188128(DAT_01df51d4,uVar3,uVar1,
                                                                         uVar9,uVar8,DAT_01df5090,
                                                                         uVar11,&stack0x00000180,0);
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
                                                            if (0x17 < *(uint *)(lVar14 + 0x18)) {
                                                              *(undefined4 *)(lVar14 + 0x300) = 0x16
                                                              ;
                                                              *(undefined8 *)(lVar14 + 0x318) =
                                                                   uStack0000000000000174;
                                                              *(ulong *)(lVar14 + 0x310) =
                                                                   CONCAT44(uStack0000000000000190,
                                                                            uStack000000000000018c);
                                                              uVar1 = DAT_01df45e4;
                                                              *(ulong *)(lVar14 + 0x30c) =
                                                                   CONCAT44(uStack000000000000018c,
                                                                            uStack0000000000000188);
                                                              *(undefined8 *)(lVar14 + 0x304) =
                                                                   in_stack_00000180;
                                                              in_stack_00000140 = 0;
                                                              uStack0000000000000148 = 0;
                                                              uStack000000000000014c = 0;
                                                              in_stack_00000158 = 0;
                                                              uStack0000000000000150 = 0;
                                                              uStack0000000000000154 = 0;
                                                              FUN_0a188128(DAT_01df4c7c,uVar7,uVar4,
                                                                           uVar10,uVar1,DAT_01df4664
                                                                           ,uVar12,&stack0x00000140,
                                                                           0);
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
                                                              if (0x18 < *(uint *)(lVar14 + 0x18)) {
                                                                *(undefined4 *)(lVar14 + 800) = 0x17
                                                                ;
                                                                *(undefined8 *)(lVar14 + 0x338) =
                                                                     uStack0000000000000134;
                                                                *(ulong *)(lVar14 + 0x330) =
                                                                     CONCAT44(uStack0000000000000150
                                                                              ,
                                                  uStack000000000000014c);
                                                  *(ulong *)(lVar14 + 0x32c) =
                                                       CONCAT44(uStack000000000000014c,
                                                                uStack0000000000000148);
                                                  *(undefined8 *)(lVar14 + 0x324) =
                                                       in_stack_00000140;
                                                  in_stack_00000100 = 0;
                                                  uStack0000000000000108 = 0;
                                                  uStack000000000000010c = 0;
                                                  in_stack_00000118 = 0;
                                                  uStack0000000000000110 = 0;
                                                  uStack0000000000000114 = 0;
                                                  FUN_0a188128(DAT_01df4aec,uVar6,uVar5,unaff_s8,
                                                               unaff_s8,uVar2,0x3f800000,
                                                               &stack0x00000100,0);
                                                  if (0x19 < *(uint *)(lVar14 + 0x18)) {
                                                    *(undefined4 *)(lVar14 + 0x340) = 0x18;
                                                    *(ulong *)(lVar14 + 0x358) =
                                                         CONCAT44(in_stack_00000118,
                                                                  uStack0000000000000114);
                                                    *(ulong *)(lVar14 + 0x350) =
                                                         CONCAT44(uStack0000000000000110,
                                                                  uStack000000000000010c);
                                                    *(ulong *)(lVar14 + 0x34c) =
                                                         CONCAT44(uStack000000000000010c,
                                                                  uStack0000000000000108);
                                                    *(undefined8 *)(lVar14 + 0x344) =
                                                         in_stack_00000100;
                                                    if (lVar13 != 0) {
                                                      *(long *)(lVar13 + 0x10) = lVar14;
                                                      thunk_FUN_049ee3d8((long *)(lVar13 + 0x10),
                                                                         lVar14);
                                                      plVar15 = (long *)(*(long *)(*unaff_x21 + 0xb8
                                                                                  ) + 8);
                                                      *plVar15 = lVar13;
                                                      thunk_FUN_049ee3d8(plVar15,lVar13);
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
  }
LAB_090c3bb8:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


