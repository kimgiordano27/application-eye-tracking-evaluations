/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_SetTrackingOriginType
ENTRY_POINT: 0740a378
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_SetTrackingOriginType
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

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
  long lVar35;
  long lVar36;
  long *plVar37;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  ulong uVar38;
  undefined8 uVar39;
  undefined4 unaff_s9;
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
  undefined8 in_stack_000000b8;
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
  
                    /* try { // try from 0740a378 to 0750a37b has its CatchHandler @ 0740a380 */
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
                    /* try { // try from 0740a37c to 0750a39b has its CatchHandler @ 0740a200 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0740a378 with catch @ 0740a380
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0740a344 with catch @ 0740a384
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0740a2d0 with catch @ 0740a388
                        */
  uStack000000000000008c = *(undefined4 *)(in_x9 + 0xa74);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0740a314 with catch @ 0740a38c
                        */
                    /* try { // try from 0740a39c to 0750a39f has its CatchHandler @ 0740a3c4 */
                    /* try { // try from 0740a3a0 to 0750a3cb has its CatchHandler @ 0740a200 */
                    /* catch() { ... } // from try @ 0740a39c with catch @ 0740a3c4 */
                    /* try { // try from 0740a3cc to 0750a3d3 has its CatchHandler @ 0740a3e8 */
  uStack0000000000000088 = DAT_018b0640;
                    /* try { // try from 0740a3d4 to 0750a3df has its CatchHandler @ 0740a200 */
  uStack0000000000000080 = DAT_018b09c4;
  uStack0000000000000084 = DAT_018b04f0;
  FUN_085e9668(DAT_018b02a4,&stack0x00000a60,0);
  uVar39 = *(undefined8 *)(unaff_x24 + 0x14);
  uVar38 = *(ulong *)(unaff_x24 + 0xc);
                    /* try { // try from 0740a3e0 to 0750a3e7 has its CatchHandler @ 0740a3e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0740a3cc with catch @ 0740a3e8
                       catch(type#2 @ 00000000) { ... } // from try @ 0740a3e0 with catch @ 0740a3e8
                        */
                    /* try { // try from 0740a3ec to 0750a4bb has its CatchHandler @ 0740a3ec
                       catch() { ... } // from try @ 0740a3ec with catch @ 0740a3ec
                       catch() { ... } // from try @ 0740a534 with catch @ 0740a3ec
                       catch() { ... } // from try @ 0740a568 with catch @ 0740a3ec
                       catch() { ... } // from try @ 0740a58c with catch @ 0740a3ec
                       catch() { ... } // from try @ 0740a5c0 with catch @ 0740a3ec */
  if (0xe < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
    *(undefined8 *)(unaff_x20 + 0x1f8) = uVar39;
    *(ulong *)(unaff_x20 + 0x1f0) = uVar38 & 0xffffffff00000000;
    *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
    *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
    uVar34 = DAT_018b10a4;
    uVar27 = DAT_018b0dac;
    uVar18 = DAT_018b0af4;
    FUN_085e9668(DAT_018afe4c,DAT_018b0af4,DAT_018b10a4,DAT_018b0dac,0x22800000,0x23000000,
                 0x3f800000,&stack0x00000a20,0);
    if (0xf < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
      *(undefined8 *)(unaff_x20 + 0x218) = 0;
      *(undefined8 *)(unaff_x20 + 0x210) = 0;
      *(undefined8 *)(unaff_x20 + 0x20c) = 0;
      *(undefined8 *)(unaff_x20 + 0x204) = 0;
      uVar22 = DAT_018b0bac;
      uVar19 = DAT_018b0af8;
      FUN_085e9668(DAT_018afd34,DAT_018b0bac,DAT_018b0af8,0,0,0,0x3f800000,&stack0x000009e0,0);
      if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x220) = 1;
        *(undefined8 *)(unaff_x20 + 0x238) = 0;
        *(undefined8 *)(unaff_x20 + 0x230) = 0;
        *(undefined8 *)(unaff_x20 + 0x22c) = 0;
        *(undefined8 *)(unaff_x20 + 0x224) = 0;
        uVar32 = DAT_018b0ff8;
        uVar12 = DAT_018b04f4;
        uVar9 = DAT_018b0434;
        uVar6 = DAT_018b0204;
        FUN_085e9668(DAT_018b0378,&stack0x000009a0,0);
        if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
          *(undefined8 *)(unaff_x20 + 600) = 0;
          *(undefined8 *)(unaff_x20 + 0x250) = 0;
          *(undefined8 *)(unaff_x20 + 0x24c) = 0;
          *(undefined8 *)(unaff_x20 + 0x244) = 0;
          uVar23 = DAT_018b0c40;
          uVar16 = DAT_018b08ac;
          uVar15 = DAT_018b07a0;
          uVar10 = DAT_018b043c;
          FUN_085e9668(DAT_018b0438,&stack0x00000960,0);
          if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
            *(undefined8 *)(unaff_x20 + 0x278) = 0;
            *(undefined8 *)(unaff_x20 + 0x270) = 0;
            *(undefined8 *)(unaff_x20 + 0x26c) = 0;
            *(undefined8 *)(unaff_x20 + 0x264) = 0;
            uVar17 = DAT_018b0a78;
            uVar4 = DAT_018b0050;
            FUN_085e9668(DAT_018afdd4,DAT_018b0050,DAT_018b0a78,DAT_018b037c,DAT_018b08b0,
                         DAT_018afd38,DAT_018b0440,&stack0x00000920,0);
            if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
              *(undefined8 *)(unaff_x20 + 0x298) = 0;
              *(undefined8 *)(unaff_x20 + 0x290) = 0;
              *(undefined8 *)(unaff_x20 + 0x28c) = 0;
              *(undefined8 *)(unaff_x20 + 0x284) = 0;
              FUN_085e9668(DAT_018affa8,DAT_018b05a4,DAT_018afdd8,DAT_018b0ffc,&stack0x000008e0,0);
              if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                uVar30 = DAT_018b0f6c;
                uVar29 = DAT_018b0e54;
                uVar13 = DAT_018b05ac;
                uVar7 = DAT_018b02a8;
                FUN_085e9668(DAT_018affac,&stack0x000008a0,0);
                if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                  *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                  uVar25 = DAT_018b0d18;
                  uVar24 = DAT_018b0c44;
                  uVar20 = DAT_018b0afc;
                  uVar11 = DAT_018b0444;
                  FUN_085e9668(DAT_018afd3c,&stack0x00000860,0);
                  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                    *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                    uVar28 = DAT_018b0db0;
                    uVar26 = DAT_018b0d1c;
                    uVar8 = DAT_018b0380;
                    uVar2 = DAT_018afe50;
                    FUN_085e9668(DAT_018b02ac,&stack0x00000820,0);
                    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                      *(undefined8 *)(unaff_x20 + 0x318) = 0;
                      *(undefined8 *)(unaff_x20 + 0x310) = 0;
                      *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x304) = 0;
                      uVar33 = DAT_018b1000;
                      uVar31 = DAT_018b0f70;
                      uVar21 = DAT_018b0b08;
                      uVar3 = DAT_018afee8;
                      FUN_085e9668(DAT_018b09c8,&stack0x000007e0,0);
                      if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 800) = 0x17;
                        *(undefined8 *)(unaff_x20 + 0x338) = 0;
                        *(undefined8 *)(unaff_x20 + 0x330) = 0;
                        *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x324) = 0;
                        uVar14 = DAT_018b0648;
                        uVar5 = DAT_018b00f4;
                        FUN_085e9668(DAT_018b0e5c,&stack0x000007a0,0);
                        if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                          *(undefined8 *)(unaff_x20 + 0x358) = 0;
                          *(undefined8 *)(unaff_x20 + 0x350) = 0;
                          *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x344) = 0;
                          if (unaff_x19 != 0) {
                            *(long *)(unaff_x19 + 0x10) = unaff_x20;
                            thunk_FUN_03d233cc();
                            **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                            thunk_FUN_03d233cc(*(undefined8 *)(*unaff_x21 + 0xb8));
                            lVar35 = thunk_FUN_03cf5234(*unaff_x21);
                            FUN_07409afc();
                            lVar36 = FUN_03c8f97c(*unaff_x22,0x1a);
                            FUN_085e9668(DAT_018b0c48,&stack0x00000760,0);
                            if (lVar36 != 0) {
                              if (*(int *)(lVar36 + 0x18) != 0) {
                                *(undefined4 *)(lVar36 + 0x20) = 1;
                                *(undefined8 *)(lVar36 + 0x38) = 0;
                                *(undefined8 *)(lVar36 + 0x30) = 0;
                                *(undefined8 *)(lVar36 + 0x2c) = 0;
                                *(undefined8 *)(lVar36 + 0x24) = 0;
                                FUN_085e9668(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                                if (1 < *(uint *)(lVar36 + 0x18)) {
                                  *(undefined4 *)(lVar36 + 0x40) = 0xffffffff;
                                  *(undefined8 *)(lVar36 + 0x58) = 0;
                                  *(undefined8 *)(lVar36 + 0x50) = 0;
                                  uVar1 = DAT_018b020c;
                                  *(undefined8 *)(lVar36 + 0x4c) = 0;
                                  *(undefined8 *)(lVar36 + 0x44) = 0;
                                  FUN_085e9668(uVar1,&stack0x000006c0,0);
                                  if (2 < *(uint *)(lVar36 + 0x18)) {
                                    *(undefined4 *)(lVar36 + 0x60) = 1;
                                    *(undefined8 *)(lVar36 + 0x78) = 0;
                                    *(undefined8 *)(lVar36 + 0x70) = 0;
                                    uVar1 = DAT_018b0448;
                                    *(undefined8 *)(lVar36 + 0x6c) = 0;
                                    *(undefined8 *)(lVar36 + 100) = 0;
                                    FUN_085e9668(uVar1,DAT_018b044c,DAT_018b0f78,DAT_018b05b0,
                                                 DAT_018b05b4,DAT_018afd44,DAT_018b02b0,
                                                 &stack0x00000680,0);
                                    if (3 < *(uint *)(lVar36 + 0x18)) {
                                      *(undefined4 *)(lVar36 + 0x80) = 2;
                                      *(undefined8 *)(lVar36 + 0x98) = 0;
                                      *(undefined8 *)(lVar36 + 0x90) = 0;
                                      uVar1 = DAT_018b0b0c;
                                      *(undefined8 *)(lVar36 + 0x8c) = 0;
                                      *(undefined8 *)(lVar36 + 0x84) = 0;
                                      FUN_085e9668(uVar1,DAT_018b05b8,DAT_018b0f7c,DAT_018b081c,
                                                   DAT_018b0edc,DAT_018b06fc,DAT_018b0e64,
                                                   &stack0x00000640,0);
                                      if (4 < *(uint *)(lVar36 + 0x18)) {
                                        *(undefined4 *)(lVar36 + 0xa0) = 3;
                                        *(undefined8 *)(lVar36 + 0xb8) = 0;
                                        *(undefined8 *)(lVar36 + 0xb0) = 0;
                                        *(undefined8 *)(lVar36 + 0xac) = 0;
                                        *(undefined8 *)(lVar36 + 0xa4) = 0;
                                        FUN_085e9668(DAT_018b04fc,DAT_018b07a4,DAT_018b064c,
                                                     DAT_018b0934,0,0,0x3f800000,&stack0x00000600,0)
                                        ;
                                        if (5 < *(uint *)(lVar36 + 0x18)) {
                                          *(undefined4 *)(lVar36 + 0xc0) = 4;
                                          *(undefined8 *)(lVar36 + 0xd8) = 0;
                                          *(undefined8 *)(lVar36 + 0xd0) = 0;
                                          uVar1 = DAT_018afd48;
                                          *(undefined8 *)(lVar36 + 0xcc) = 0;
                                          *(undefined8 *)(lVar36 + 0xc4) = 0;
                                          FUN_085e9668(uVar1,&stack0x000005c0,0);
                                          if (6 < *(uint *)(lVar36 + 0x18)) {
                                            *(undefined4 *)(lVar36 + 0xe0) = 1;
                                            *(undefined8 *)(lVar36 + 0xf8) = 0;
                                            *(undefined8 *)(lVar36 + 0xf0) = 0;
                                            *(undefined8 *)(lVar36 + 0xec) = 0;
                                            *(undefined8 *)(lVar36 + 0xe4) = 0;
                                            FUN_085e9668(DAT_018b10ac,unaff_s9,
                                                         uStack00000000000000dc,
                                                         uStack00000000000000d8,DAT_018b0f80,
                                                         DAT_018b0b10,uStack00000000000000d4,
                                                         &stack0x00000580,0);
                                            if (7 < *(uint *)(lVar36 + 0x18)) {
                                              *(undefined4 *)(lVar36 + 0x100) = 6;
                                              *(undefined8 *)(lVar36 + 0x118) = 0;
                                              *(undefined8 *)(lVar36 + 0x110) = 0;
                                              *(undefined8 *)(lVar36 + 0x10c) = 0;
                                              *(undefined8 *)(lVar36 + 0x104) = 0;
                                              FUN_085e9668(DAT_018b05bc,DAT_018b0ee0,DAT_018b0210,
                                                           uStack00000000000000d0,DAT_018b0500,
                                                           DAT_018b0bb0,uStack00000000000000cc,
                                                           &stack0x00000540,0);
                                              if (8 < *(uint *)(lVar36 + 0x18)) {
                                                *(undefined4 *)(lVar36 + 0x120) = 7;
                                                *(undefined8 *)(lVar36 + 0x138) = 0;
                                                *(undefined8 *)(lVar36 + 0x130) = 0;
                                                *(undefined8 *)(lVar36 + 300) = 0;
                                                *(undefined8 *)(lVar36 + 0x124) = 0;
                                                FUN_085e9668(DAT_018b09cc,uStack00000000000000c8,
                                                             uStack00000000000000c4,
                                                             uStack00000000000000c0,DAT_018b0190,
                                                             DAT_018b0214,in_stack_000000b8._4_4_,
                                                             &stack0x00000500,0);
                                                if (9 < *(uint *)(lVar36 + 0x18)) {
                                                  *(undefined4 *)(lVar36 + 0x140) = 8;
                                                  *(undefined8 *)(lVar36 + 0x158) = 0;
                                                  *(undefined8 *)(lVar36 + 0x150) = 0;
                                                  *(undefined8 *)(lVar36 + 0x14c) = 0;
                                                  *(undefined8 *)(lVar36 + 0x144) = 0;
                                                  FUN_085e9668(DAT_018b0450,DAT_018b05c0,
                                                               DAT_018b0bb4,0,DAT_018b0504,0,
                                                               0x3f800000,&stack0x000004c0,0);
                                                  if (10 < *(uint *)(lVar36 + 0x18)) {
                                                    *(undefined4 *)(lVar36 + 0x160) = 9;
                                                    *(undefined8 *)(lVar36 + 0x178) = 0;
                                                    *(undefined8 *)(lVar36 + 0x170) = 0;
                                                    *(undefined8 *)(lVar36 + 0x16c) = 0;
                                                    *(undefined8 *)(lVar36 + 0x164) = 0;
                                                    FUN_085e9668(DAT_018b0b14,uStack00000000000000b4
                                                                 ,uStack00000000000000b0,0,0,0,
                                                                 0x3f800000,&stack0x00000480,0);
                                                    if (0xb < *(uint *)(lVar36 + 0x18)) {
                                                      *(undefined4 *)(lVar36 + 0x180) = 1;
                                                      *(undefined8 *)(lVar36 + 0x198) = 0;
                                                      *(undefined8 *)(lVar36 + 400) = 0;
                                                      *(undefined8 *)(lVar36 + 0x18c) = 0;
                                                      *(undefined8 *)(lVar36 + 0x184) = 0;
                                                      FUN_085e9668(DAT_018b0bb8,
                                                                   uStack00000000000000ac,
                                                                   uStack00000000000000a8,
                                                                   uStack00000000000000a4,
                                                                   DAT_018b08b8,DAT_018b0388,
                                                                   uStack00000000000000a0,
                                                                   &stack0x00000440,0);
                                                      if (0xc < *(uint *)(lVar36 + 0x18)) {
                                                        *(undefined4 *)(lVar36 + 0x1a0) = 0xb;
                                                        *(undefined8 *)(lVar36 + 0x1b8) = 0;
                                                        *(undefined8 *)(lVar36 + 0x1b0) = 0;
                                                        *(undefined8 *)(lVar36 + 0x1ac) = 0;
                                                        *(undefined8 *)(lVar36 + 0x1a4) = 0;
                                                        FUN_085e9668(DAT_018b05c4,
                                                                     uStack000000000000009c,
                                                                     uStack0000000000000098,
                                                                     uStack0000000000000094,
                                                                     DAT_018b0650,DAT_018b08bc,
                                                                     uStack0000000000000090,
                                                                     &stack0x00000400,0);
                                                        if (0xd < *(uint *)(lVar36 + 0x18)) {
                                                          *(undefined4 *)(lVar36 + 0x1c0) = 0xc;
                                                          *(undefined8 *)(lVar36 + 0x1d8) = 0;
                                                          *(undefined8 *)(lVar36 + 0x1d0) = 0;
                                                          *(undefined8 *)(lVar36 + 0x1cc) = 0;
                                                          *(undefined8 *)(lVar36 + 0x1c4) = 0;
                                                          FUN_085e9668(DAT_018afd4c,
                                                                       uStack000000000000008c,
                                                                       uStack0000000000000088,
                                                                       uStack0000000000000084,
                                                                       DAT_018b08c0,DAT_018b0938,
                                                                       uStack0000000000000080,
                                                                       &stack0x000003c0,0);
                                                          if (0xe < *(uint *)(lVar36 + 0x18)) {
                                                            *(undefined4 *)(lVar36 + 0x1e0) = 0xd;
                                                            *(undefined8 *)(lVar36 + 0x1f8) = 0;
                                                            *(undefined8 *)(lVar36 + 0x1f0) = 0;
                                                            *(undefined8 *)(lVar36 + 0x1ec) = 0;
                                                            *(undefined8 *)(lVar36 + 0x1e4) = 0;
                                                            FUN_085e9668(DAT_018b0820,uVar18,uVar34,
                                                                         uVar27,0xa2800000,
                                                                         0xa3000000,0x3f800000,
                                                                         &stack0x00000380,0);
                                                            if (0xf < *(uint *)(lVar36 + 0x18)) {
                                                              *(undefined4 *)(lVar36 + 0x200) = 0xe;
                                                              *(undefined8 *)(lVar36 + 0x218) = 0;
                                                              *(undefined8 *)(lVar36 + 0x210) = 0;
                                                              *(undefined8 *)(lVar36 + 0x20c) = 0;
                                                              *(undefined8 *)(lVar36 + 0x204) = 0;
                                                              FUN_085e9668(DAT_018afddc,uVar22,
                                                                           uVar19,0,0,0,0x3f800000,
                                                                           &stack0x00000340,0);
                                                              if (0x10 < *(uint *)(lVar36 + 0x18)) {
                                                                *(undefined4 *)(lVar36 + 0x220) = 1;
                                                                *(undefined8 *)(lVar36 + 0x238) = 0;
                                                                *(undefined8 *)(lVar36 + 0x230) = 0;
                                                                *(undefined8 *)(lVar36 + 0x22c) = 0;
                                                                *(undefined8 *)(lVar36 + 0x224) = 0;
                                                                FUN_085e9668(DAT_018b038c,uVar12,
                                                                             uVar6,uVar9,
                                                                             DAT_018b10b0,
                                                                             DAT_018b1004,uVar32,
                                                                             &stack0x00000300,0);
                                                                if (0x11 < *(uint *)(lVar36 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar36 + 0x240) =
                                                                       0x10;
                                                                  *(undefined8 *)(lVar36 + 600) = 0;
                                                                  *(undefined8 *)(lVar36 + 0x250) =
                                                                       0;
                                                                  *(undefined8 *)(lVar36 + 0x24c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar36 + 0x244) =
                                                                       0;
                                                                  FUN_085e9668(DAT_018b0054,uVar15,
                                                                               uVar10,uVar16,
                                                                               DAT_018b0b18,
                                                                               DAT_018b0194,uVar23,
                                                                               &stack0x000002c0,0);
                                                                  if (0x12 < *(uint *)(lVar36 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar36 + 0x260)
                                                                         = 0x11;
                                                                    *(undefined8 *)(lVar36 + 0x278)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar36 + 0x270)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar36 + 0x26c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar36 + 0x264)
                                                                         = 0;
                                                                    FUN_085e9668(DAT_018b00fc,uVar4,
                                                                                 uVar17,DAT_018b0a7c
                                                                                 ,DAT_018afeec,
                                                                                 DAT_018b0100,
                                                                                 DAT_018b08c4,
                                                                                 &stack0x00000280,0)
                                                                    ;
                                                                    if (0x13 < *(uint *)(lVar36 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar36 + 0x280) = 0x12;
                                                    *(undefined8 *)(lVar36 + 0x298) = 0;
                                                    *(undefined8 *)(lVar36 + 0x290) = 0;
                                                    *(undefined8 *)(lVar36 + 0x28c) = 0;
                                                    *(undefined8 *)(lVar36 + 0x284) = 0;
                                                    FUN_085e9668(DAT_018b0b1c,DAT_018b0c4c,
                                                                 DAT_018b0db4,uVar27,DAT_018afef0,
                                                                 0x88000000,0x3f800000,
                                                                 &stack0x00000240,0);
                                                    if (0x14 < *(uint *)(lVar36 + 0x18)) {
                                                      *(undefined4 *)(lVar36 + 0x2a0) = 0x13;
                                                      *(undefined8 *)(lVar36 + 0x2b8) = 0;
                                                      *(undefined8 *)(lVar36 + 0x2b0) = 0;
                                                      *(undefined8 *)(lVar36 + 0x2ac) = 0;
                                                      *(undefined8 *)(lVar36 + 0x2a4) = 0;
                                                      FUN_085e9668(DAT_018b0ee4,uVar13,uVar30,uVar7,
                                                                   DAT_018b0e68,DAT_018b0db8,uVar29,
                                                                   &stack0x00000200,0);
                                                      in_stack_000001e0 = 0;
                                                      uStack00000000000001e8 = 0;
                                                      uStack00000000000001ec = 0;
                                                      in_stack_000001f0 = 0;
                                                      if (0x15 < *(uint *)(lVar36 + 0x18)) {
                                                        *(undefined4 *)(lVar36 + 0x2c0) = 1;
                                                        *(undefined8 *)(lVar36 + 0x2d8) = 0;
                                                        *(undefined8 *)(lVar36 + 0x2d0) = 0;
                                                        *(undefined8 *)(lVar36 + 0x2cc) = 0;
                                                        *(undefined8 *)(lVar36 + 0x2c4) = 0;
                                                        in_stack_000001c0 = 0;
                                                        uStack00000000000001c8 = 0;
                                                        uStack00000000000001cc = 0;
                                                        in_stack_000001d8 = 0;
                                                        uStack00000000000001d0 = 0;
                                                        uStack00000000000001d4 = 0;
                                                        FUN_085e9668(DAT_018afef4,uVar24,uVar20,
                                                                     uVar11,DAT_018b0104,
                                                                     DAT_018afe54,uVar25,
                                                                     &stack0x000001c0,0);
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
                                                        if (0x16 < *(uint *)(lVar36 + 0x18)) {
                                                          *(undefined4 *)(lVar36 + 0x2e0) = 0x15;
                                                          *(undefined8 *)(lVar36 + 0x2f8) =
                                                               uStack00000000000001b4;
                                                          *(ulong *)(lVar36 + 0x2f0) =
                                                               CONCAT44(uStack00000000000001d0,
                                                                        uStack00000000000001cc);
                                                          *(ulong *)(lVar36 + 0x2ec) =
                                                               CONCAT44(uStack00000000000001cc,
                                                                        uStack00000000000001c8);
                                                          *(undefined8 *)(lVar36 + 0x2e4) =
                                                               in_stack_000001c0;
                                                          in_stack_00000180 = 0;
                                                          uStack0000000000000188 = 0;
                                                          uStack000000000000018c = 0;
                                                          in_stack_00000198 = 0;
                                                          uStack0000000000000190 = 0;
                                                          uStack0000000000000194 = 0;
                                                          FUN_085e9668(DAT_018b0bbc,uVar2,uVar26,
                                                                       uVar8,DAT_018b08c8,
                                                                       DAT_018afde0,uVar28,
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
                                                          if (0x17 < *(uint *)(lVar36 + 0x18)) {
                                                            *(undefined4 *)(lVar36 + 0x300) = 0x16;
                                                            *(undefined8 *)(lVar36 + 0x318) =
                                                                 uStack0000000000000174;
                                                            *(ulong *)(lVar36 + 0x310) =
                                                                 CONCAT44(uStack0000000000000190,
                                                                          uStack000000000000018c);
                                                            *(ulong *)(lVar36 + 0x30c) =
                                                                 CONCAT44(uStack000000000000018c,
                                                                          uStack0000000000000188);
                                                            *(undefined8 *)(lVar36 + 0x304) =
                                                                 in_stack_00000180;
                                                            in_stack_00000140 = 0;
                                                            uStack0000000000000148 = 0;
                                                            uStack000000000000014c = 0;
                                                            in_stack_00000158 = 0;
                                                            uStack0000000000000150 = 0;
                                                            uStack0000000000000154 = 0;
                                                            FUN_085e9668(DAT_018b0ee8,uVar33,uVar31,
                                                                         uVar21,DAT_018b0b20,
                                                                         DAT_018b0454,uVar3,
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
                                                            if (0x18 < *(uint *)(lVar36 + 0x18)) {
                                                              *(undefined4 *)(lVar36 + 800) = 0x17;
                                                              *(undefined8 *)(lVar36 + 0x338) =
                                                                   uStack0000000000000134;
                                                              *(ulong *)(lVar36 + 0x330) =
                                                                   CONCAT44(uStack0000000000000150,
                                                                            uStack000000000000014c);
                                                              *(ulong *)(lVar36 + 0x32c) =
                                                                   CONCAT44(uStack000000000000014c,
                                                                            uStack0000000000000148);
                                                              *(undefined8 *)(lVar36 + 0x324) =
                                                                   in_stack_00000140;
                                                              in_stack_00000100 = 0;
                                                              uStack0000000000000108 = 0;
                                                              uStack000000000000010c = 0;
                                                              in_stack_00000118 = 0;
                                                              uStack0000000000000110 = 0;
                                                              uStack0000000000000114 = 0;
                                                              FUN_085e9668(DAT_018b0824,uVar14,uVar5
                                                                           ,&stack0x00000100,0);
                                                              if (0x19 < *(uint *)(lVar36 + 0x18)) {
                                                                *(undefined4 *)(lVar36 + 0x340) =
                                                                     0x18;
                                                                *(ulong *)(lVar36 + 0x358) =
                                                                     CONCAT44(in_stack_00000118,
                                                                              uStack0000000000000114
                                                                             );
                                                                *(ulong *)(lVar36 + 0x350) =
                                                                     CONCAT44(uStack0000000000000110
                                                                              ,
                                                  uStack000000000000010c);
                                                  *(ulong *)(lVar36 + 0x34c) =
                                                       CONCAT44(uStack000000000000010c,
                                                                uStack0000000000000108);
                                                  *(undefined8 *)(lVar36 + 0x344) =
                                                       in_stack_00000100;
                                                  if (lVar35 != 0) {
                                                    *(long *)(lVar35 + 0x10) = lVar36;
                                                    thunk_FUN_03d233cc((long *)(lVar35 + 0x10),
                                                                       lVar36);
                                                    plVar37 = (long *)(*(long *)(*unaff_x21 + 0xb8)
                                                                      + 8);
                                                    *plVar37 = lVar35;
                                                    thunk_FUN_03d233cc(plVar37,lVar35);
                                                    return;
                                                  }
                                                  goto LAB_0740b730;
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
                              goto LAB_0740b72c;
                            }
                          }
LAB_0740b730:
                    /* WARNING: Subroutine does not return */
                          FUN_03c8fb30();
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
LAB_0740b72c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


