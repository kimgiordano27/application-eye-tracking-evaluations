/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 051ddd18
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x19;
  undefined8 uVar16;
  long unaff_x21;
  undefined8 uVar17;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined8 uStack0000000000000154;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined8 uStack0000000000000194;
  undefined8 in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined8 uStack00000000000001d4;
  undefined8 in_stack_000001e0;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  undefined4 in_stack_000001f0;
  
  lVar13 = FUN_02ce7ad4();
                    /* try { // try from 051ddd28 to 052ddd77 has its CatchHandler @ 051ddc38 */
  FUN_05effcac(0,0,0,0,0,0,0xbf800000,&stack0x00000600,0);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051ddd14 with catch @ 051ddd60
                        */
  *(undefined8 *)(unaff_x21 + 0x74) = *(undefined8 *)(unaff_x21 + 0x94);
  *(undefined8 *)(unaff_x21 + 0x6c) = *(undefined8 *)(unaff_x21 + 0x8c);
  if (lVar13 == 0) {
LAB_051deaf0:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* try { // try from 051ddd78 to 052ddd7b has its CatchHandler @ 051ddd88 */
  *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
  if (*(int *)(lVar13 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 051ddd78 with catch @ 051ddd88 */
    *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
    uVar16 = *(undefined8 *)(unaff_x21 + 0x4c);
                    /* try { // try from 051ddd94 to 052ddd9f has its CatchHandler @ 051dddb4 */
    *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(unaff_x21 + 0x54);
    *(undefined8 *)(lVar13 + 0x30) = uVar16;
                    /* try { // try from 051ddda0 to 052dddab has its CatchHandler @ 051ddc38 */
    *(undefined8 *)(lVar13 + 0x2c) = 0;
    *(undefined8 *)(lVar13 + 0x24) = 0;
                    /* try { // try from 051dddac to 052dddb3 has its CatchHandler @ 051dddb4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051ddd94 with catch @ 051dddb4
                       catch(type#2 @ 00000000) { ... } // from try @ 051dddac with catch @ 051dddb4
                        */
    *(undefined4 *)(lVar13 + 0x40) = 0;
    FUN_05effcac(0,0,0,0,0,0,0xbf800000,&stack0x000005a0,0);
    *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
    *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
    if (1 < *(uint *)(lVar13 + 0x18)) {
      *(undefined4 *)(lVar13 + 0x44) = 0;
      uVar16 = *(undefined8 *)(unaff_x21 + 0xc);
      *(undefined8 *)(lVar13 + 0x5c) = *(undefined8 *)(unaff_x21 + 0x14);
      *(undefined8 *)(lVar13 + 0x54) = uVar16;
      uVar3 = DAT_013ddcc0;
      *(undefined8 *)(lVar13 + 0x50) = 0;
      *(undefined8 *)(lVar13 + 0x48) = 0;
      uVar7 = DAT_013de5d4;
      uVar6 = DAT_013de16c;
      uVar5 = DAT_013ddd10;
      uVar4 = DAT_013ddcc4;
      uVar2 = DAT_013ddbb4;
      uVar1 = DAT_013ddb5c;
      *(undefined4 *)(lVar13 + 100) = 0;
      FUN_05effcac(uVar3,uVar2,uVar5,uVar6,uVar7,uVar1,uVar4,&stack0x00000560,0);
      if (2 < *(uint *)(lVar13 + 0x18)) {
        *(undefined4 *)(lVar13 + 0x68) = 0;
        *(undefined8 *)(lVar13 + 0x80) = 0;
        *(undefined8 *)(lVar13 + 0x78) = 0;
        uVar1 = DAT_013ddf58;
        *(undefined8 *)(lVar13 + 0x74) = 0;
        *(undefined8 *)(lVar13 + 0x6c) = 0;
        uVar7 = DAT_013de46c;
        uVar6 = DAT_013de2b8;
        uVar5 = DAT_013de170;
        uVar4 = DAT_013de134;
        uVar3 = DAT_013de0e4;
        uVar2 = DAT_013de088;
        *(undefined4 *)(lVar13 + 0x88) = 0;
        FUN_05effcac(uVar1,uVar4,uVar6,uVar5,uVar3,uVar7,uVar2,&stack0x00000520,0);
        if (3 < *(uint *)(lVar13 + 0x18)) {
          *(undefined4 *)(lVar13 + 0x8c) = 2;
          *(undefined8 *)(lVar13 + 0xa4) = 0;
          *(undefined8 *)(lVar13 + 0x9c) = 0;
          uVar3 = DAT_013ddcc8;
          *(undefined8 *)(lVar13 + 0x98) = 0;
          *(undefined8 *)(lVar13 + 0x90) = 0;
          uVar7 = DAT_013de5d8;
          uVar6 = DAT_013de470;
          uVar5 = DAT_013dddd0;
          uVar4 = DAT_013ddd14;
          uVar2 = DAT_013ddc6c;
          uVar1 = DAT_013ddbfc;
          *(undefined4 *)(lVar13 + 0xac) = 0;
          FUN_05effcac(uVar3,uVar4,uVar1,uVar6,uVar7,uVar2,uVar5,&stack0x000004e0,0);
          if (4 < *(uint *)(lVar13 + 0x18)) {
            *(undefined4 *)(lVar13 + 0xb0) = 3;
            *(undefined8 *)(lVar13 + 200) = 0;
            *(undefined8 *)(lVar13 + 0xc0) = 0;
            *(undefined8 *)(lVar13 + 0xbc) = 0;
            *(undefined8 *)(lVar13 + 0xb4) = 0;
            uVar7 = DAT_013de5dc;
            uVar6 = DAT_013de474;
            uVar5 = DAT_013de174;
            uVar4 = DAT_013de0e8;
            uVar3 = DAT_013ddfd0;
            uVar2 = DAT_013ddbb8;
            *(undefined4 *)(lVar13 + 0xd0) = 0;
            FUN_05effcac(uVar5,uVar6,uVar1,uVar4,uVar3,uVar7,uVar2,&stack0x000004a0,0);
            if (5 < *(uint *)(lVar13 + 0x18)) {
              *(undefined4 *)(lVar13 + 0xd4) = 4;
              *(undefined8 *)(lVar13 + 0xec) = 0;
              *(undefined8 *)(lVar13 + 0xe4) = 0;
              uVar6 = DAT_013de08c;
              *(undefined8 *)(lVar13 + 0xe0) = 0;
              *(undefined8 *)(lVar13 + 0xd8) = 0;
              uVar7 = DAT_013de5e0;
              uVar5 = DAT_013ddfd4;
              uVar4 = DAT_013dddd4;
              uVar3 = DAT_013ddd1c;
              uVar2 = DAT_013ddd18;
              uVar1 = DAT_013ddccc;
              *(undefined4 *)(lVar13 + 0xf4) = 0;
              FUN_05effcac(uVar6,uVar7,uVar4,uVar5,uVar2,uVar1,uVar3,&stack0x00000460,0);
              if (6 < *(uint *)(lVar13 + 0x18)) {
                *(undefined4 *)(lVar13 + 0xf8) = 0;
                *(undefined8 *)(lVar13 + 0x110) = 0;
                *(undefined8 *)(lVar13 + 0x108) = 0;
                uVar4 = DAT_013ddfd8;
                *(undefined8 *)(lVar13 + 0x104) = 0;
                *(undefined8 *)(lVar13 + 0xfc) = 0;
                uVar7 = DAT_013de478;
                uVar6 = DAT_013de138;
                uVar5 = DAT_013de030;
                uVar3 = DAT_013dddd8;
                uVar2 = DAT_013ddd8c;
                uVar1 = DAT_013ddc70;
                *(undefined4 *)(lVar13 + 0x118) = 0;
                FUN_05effcac(uVar4,uVar3,uVar6,uVar1,uVar2,uVar5,uVar7,&stack0x00000420,0);
                if (7 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined4 *)(lVar13 + 0x11c) = 6;
                  *(undefined8 *)(lVar13 + 0x134) = 0;
                  *(undefined8 *)(lVar13 + 300) = 0;
                  uVar5 = DAT_013de178;
                  *(undefined8 *)(lVar13 + 0x128) = 0;
                  *(undefined8 *)(lVar13 + 0x120) = 0;
                  uVar7 = DAT_013de52c;
                  uVar6 = DAT_013de2bc;
                  uVar4 = DAT_013de0ec;
                  uVar3 = DAT_013de034;
                  uVar2 = DAT_013ddc74;
                  uVar1 = DAT_013ddc00;
                  *(undefined4 *)(lVar13 + 0x13c) = 0;
                  FUN_05effcac(uVar5,uVar6,uVar2,uVar3,uVar1,uVar7,uVar4,&stack0x000003e0,0);
                  if (8 < *(uint *)(lVar13 + 0x18)) {
                    *(undefined4 *)(lVar13 + 0x140) = 7;
                    *(undefined8 *)(lVar13 + 0x158) = 0;
                    *(undefined8 *)(lVar13 + 0x150) = 0;
                    *(undefined8 *)(lVar13 + 0x14c) = 0;
                    *(undefined8 *)(lVar13 + 0x144) = 0;
                    uVar7 = DAT_013de3d4;
                    uVar6 = DAT_013de278;
                    uVar5 = DAT_013de0f0;
                    uVar4 = DAT_013de090;
                    uVar3 = DAT_013ddef4;
                    uVar2 = DAT_013dde40;
                    uVar1 = DAT_013ddc04;
                    *(undefined4 *)(lVar13 + 0x160) = 0;
                    FUN_05effcac(uVar3,uVar7,uVar2,uVar6,uVar5,uVar4,uVar1,&stack0x000003a0,0);
                    if (9 < *(uint *)(lVar13 + 0x18)) {
                      *(undefined4 *)(lVar13 + 0x164) = 0;
                      *(undefined8 *)(lVar13 + 0x17c) = 0;
                      *(undefined8 *)(lVar13 + 0x174) = 0;
                      *(undefined8 *)(lVar13 + 0x170) = 0;
                      *(undefined8 *)(lVar13 + 0x168) = 0;
                      uVar7 = DAT_013de5e4;
                      uVar6 = DAT_013de3d8;
                      uVar5 = DAT_013de328;
                      uVar4 = DAT_013de094;
                      uVar3 = DAT_013ddddc;
                      uVar2 = DAT_013ddcd0;
                      uVar1 = DAT_013ddbbc;
                      *(undefined4 *)(lVar13 + 0x184) = 0;
                      FUN_05effcac(uVar7,uVar1,uVar3,uVar5,uVar6,uVar2,uVar4,&stack0x00000360,0);
                      if (10 < *(uint *)(lVar13 + 0x18)) {
                        *(undefined4 *)(lVar13 + 0x188) = 9;
                        *(undefined8 *)(lVar13 + 0x1a0) = 0;
                        *(undefined8 *)(lVar13 + 0x198) = 0;
                        *(undefined8 *)(lVar13 + 0x194) = 0;
                        *(undefined8 *)(lVar13 + 0x18c) = 0;
                        uVar7 = DAT_013de530;
                        uVar6 = DAT_013de32c;
                        uVar5 = DAT_013de098;
                        uVar4 = DAT_013ddefc;
                        uVar3 = DAT_013ddef8;
                        uVar2 = DAT_013ddde0;
                        uVar1 = DAT_013ddc08;
                        *(undefined4 *)(lVar13 + 0x1a8) = 0;
                        FUN_05effcac(uVar1,uVar6,uVar2,uVar3,uVar7,uVar4,uVar5,&stack0x00000320,0);
                        if (0xb < *(uint *)(lVar13 + 0x18)) {
                          *(undefined4 *)(lVar13 + 0x1ac) = 10;
                          *(undefined8 *)(lVar13 + 0x1c4) = 0;
                          *(undefined8 *)(lVar13 + 0x1bc) = 0;
                          uVar1 = DAT_013ddcd4;
                          *(undefined8 *)(lVar13 + 0x1b8) = 0;
                          *(undefined8 *)(lVar13 + 0x1b0) = 0;
                          uVar7 = DAT_013de534;
                          uVar6 = DAT_013de47c;
                          uVar5 = DAT_013de234;
                          uVar4 = DAT_013ddfdc;
                          uVar3 = DAT_013ddf00;
                          uVar2 = DAT_013ddd20;
                          *(undefined4 *)(lVar13 + 0x1cc) = 0;
                          FUN_05effcac(uVar1,uVar6,uVar7,uVar2,uVar3,uVar5,uVar4,&stack0x000002e0,0)
                          ;
                          if (0xc < *(uint *)(lVar13 + 0x18)) {
                            *(undefined4 *)(lVar13 + 0x1d0) = 0;
                            *(undefined8 *)(lVar13 + 0x1e8) = 0;
                            *(undefined8 *)(lVar13 + 0x1e0) = 0;
                            *(undefined8 *)(lVar13 + 0x1dc) = 0;
                            *(undefined8 *)(lVar13 + 0x1d4) = 0;
                            uVar6 = DAT_013de424;
                            uVar5 = DAT_013de1c8;
                            uVar4 = DAT_013ddf04;
                            uVar3 = DAT_013ddde8;
                            uVar2 = DAT_013ddde4;
                            uVar1 = DAT_013ddd24;
                            *(undefined4 *)(lVar13 + 0x1f0) = 0;
                            FUN_05effcac(uVar5,0,uVar1,uVar6,uVar2,uVar4,uVar3,&stack0x000002a0,0);
                            if (0xd < *(uint *)(lVar13 + 0x18)) {
                              *(undefined4 *)(lVar13 + 500) = 0xc;
                              *(undefined8 *)(lVar13 + 0x20c) = 0;
                              *(undefined8 *)(lVar13 + 0x204) = 0;
                              *(undefined8 *)(lVar13 + 0x200) = 0;
                              *(undefined8 *)(lVar13 + 0x1f8) = 0;
                              uVar7 = DAT_013de27c;
                              uVar6 = DAT_013de1d0;
                              uVar5 = DAT_013de1cc;
                              uVar4 = DAT_013de0f4;
                              uVar3 = DAT_013de09c;
                              uVar2 = DAT_013ddf5c;
                              uVar1 = DAT_013ddd28;
                              *(undefined4 *)(lVar13 + 0x214) = 0;
                              FUN_05effcac(uVar1,uVar3,uVar5,uVar4,uVar6,uVar7,uVar2,
                                           &stack0x00000260,0);
                              if (0xe < *(uint *)(lVar13 + 0x18)) {
                                *(undefined4 *)(lVar13 + 0x218) = 0xd;
                                *(undefined8 *)(lVar13 + 0x230) = 0;
                                *(undefined8 *)(lVar13 + 0x228) = 0;
                                *(undefined8 *)(lVar13 + 0x224) = 0;
                                *(undefined8 *)(lVar13 + 0x21c) = 0;
                                uVar7 = DAT_013de480;
                                uVar6 = DAT_013de3dc;
                                uVar5 = DAT_013de334;
                                uVar4 = DAT_013de330;
                                uVar3 = DAT_013de0fc;
                                uVar2 = DAT_013de0f8;
                                uVar1 = DAT_013ddea8;
                                *(undefined4 *)(lVar13 + 0x238) = 0;
                                FUN_05effcac(uVar4,uVar5,uVar2,uVar3,uVar7,uVar1,uVar6,
                                             &stack0x00000220,0);
                                if (0xf < *(uint *)(lVar13 + 0x18)) {
                                  *(undefined4 *)(lVar13 + 0x23c) = 0;
                                  *(undefined8 *)(lVar13 + 0x254) = 0;
                                  *(undefined8 *)(lVar13 + 0x24c) = 0;
                                  uVar1 = DAT_013ddd2c;
                                  *(undefined8 *)(lVar13 + 0x248) = 0;
                                  *(undefined8 *)(lVar13 + 0x240) = 0;
                                  uVar7 = DAT_013de584;
                                  uVar6 = DAT_013de428;
                                  uVar5 = DAT_013de1d4;
                                  uVar4 = DAT_013ddeac;
                                  uVar3 = DAT_013dddec;
                                  uVar2 = DAT_013ddd90;
                                  *(undefined4 *)(lVar13 + 0x25c) = 0;
                                  in_stack_000001e0 = 0;
                                  uStack00000000000001e8 = 0;
                                  uStack00000000000001ec = 0;
                                  in_stack_000001f0 = 0;
                                  FUN_05effcac(uVar1,uVar7,uVar6,uVar4,uVar2,uVar5,uVar3,
                                               &stack0x000001e0,0);
                                  uStack00000000000001d4 = 0;
                                  uStack00000000000001d0 = in_stack_000001f0;
                                  uStack00000000000001c8 = uStack00000000000001e8;
                                  uStack00000000000001cc = uStack00000000000001ec;
                                  in_stack_000001c0 = in_stack_000001e0;
                                  if (0x10 < *(uint *)(lVar13 + 0x18)) {
                                    *(undefined4 *)(lVar13 + 0x260) = 0xf;
                                    *(undefined8 *)(lVar13 + 0x278) = 0;
                                    *(ulong *)(lVar13 + 0x270) =
                                         CONCAT44(in_stack_000001f0,uStack00000000000001ec);
                                    *(ulong *)(lVar13 + 0x26c) =
                                         CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
                                    *(undefined8 *)(lVar13 + 0x264) = in_stack_000001e0;
                                    uVar7 = DAT_013de17c;
                                    uVar6 = DAT_013de104;
                                    uVar5 = DAT_013de100;
                                    uVar4 = DAT_013de038;
                                    uVar3 = DAT_013ddf60;
                                    uVar2 = DAT_013ddc78;
                                    uVar1 = DAT_013ddb60;
                                    *(undefined4 *)(lVar13 + 0x280) = 0;
                                    in_stack_000001a0 = 0;
                                    uStack00000000000001a8 = 0;
                                    uStack00000000000001ac = 0;
                                    in_stack_000001b8 = 0;
                                    uStack00000000000001b0 = 0;
                                    uStack00000000000001b4 = 0;
                                    FUN_05effcac(uVar5,uVar7,uVar2,uVar1,uVar6,uVar4,uVar3,
                                                 &stack0x000001a0,0);
                                    uStack0000000000000194 =
                                         CONCAT44(in_stack_000001b8,uStack00000000000001b4);
                                    uStack0000000000000190 = uStack00000000000001b0;
                                    uStack0000000000000188 = uStack00000000000001a8;
                                    uStack000000000000018c = uStack00000000000001ac;
                                    in_stack_00000180 = in_stack_000001a0;
                                    if (0x11 < *(uint *)(lVar13 + 0x18)) {
                                      *(undefined4 *)(lVar13 + 0x284) = 0x10;
                                      *(undefined8 *)(lVar13 + 0x29c) = uStack0000000000000194;
                                      *(ulong *)(lVar13 + 0x294) =
                                           CONCAT44(uStack00000000000001b0,uStack00000000000001ac);
                                      *(ulong *)(lVar13 + 0x290) =
                                           CONCAT44(uStack00000000000001ac,uStack00000000000001a8);
                                      *(undefined8 *)(lVar13 + 0x288) = in_stack_000001a0;
                                      uVar7 = DAT_013de5e8;
                                      uVar6 = DAT_013de588;
                                      uVar5 = DAT_013dde48;
                                      uVar4 = DAT_013dde44;
                                      uVar3 = DAT_013ddd94;
                                      uVar2 = DAT_013ddd30;
                                      uVar1 = DAT_013ddcd8;
                                      *(undefined4 *)(lVar13 + 0x2a4) = 0;
                                      in_stack_00000160 = 0;
                                      uStack0000000000000168 = 0;
                                      uStack000000000000016c = 0;
                                      in_stack_00000178 = 0;
                                      uStack0000000000000170 = 0;
                                      uStack0000000000000174 = 0;
                                      FUN_05effcac(uVar6,uVar2,uVar4,uVar1,uVar3,uVar7,uVar5,
                                                   &stack0x00000160,0);
                                      uStack0000000000000154 =
                                           CONCAT44(in_stack_00000178,uStack0000000000000174);
                                      uStack0000000000000150 = uStack0000000000000170;
                                      uStack0000000000000148 = uStack0000000000000168;
                                      uStack000000000000014c = uStack000000000000016c;
                                      in_stack_00000140 = in_stack_00000160;
                                      if (0x12 < *(uint *)(lVar13 + 0x18)) {
                                        *(undefined4 *)(lVar13 + 0x2a8) = 0x11;
                                        *(undefined8 *)(lVar13 + 0x2c0) = uStack0000000000000154;
                                        *(ulong *)(lVar13 + 0x2b8) =
                                             CONCAT44(uStack0000000000000170,uStack000000000000016c)
                                        ;
                                        *(ulong *)(lVar13 + 0x2b4) =
                                             CONCAT44(uStack000000000000016c,uStack0000000000000168)
                                        ;
                                        *(undefined8 *)(lVar13 + 0x2ac) = in_stack_00000160;
                                        uVar3 = DAT_013de1d8;
                                        uVar2 = DAT_013ddcdc;
                                        uVar1 = DAT_013ddc0c;
                                        *(undefined4 *)(lVar13 + 0x2c8) = 0;
                                        in_stack_00000120 = 0;
                                        uStack0000000000000128 = 0;
                                        uStack000000000000012c = 0;
                                        in_stack_00000138 = 0;
                                        uStack0000000000000130 = 0;
                                        uStack0000000000000134 = 0;
                                        FUN_05effcac(uVar1,uVar3,uVar2,0,0,0,0xbf800000,
                                                     &stack0x00000120,0);
                                        uStack0000000000000114 =
                                             CONCAT44(in_stack_00000138,uStack0000000000000134);
                                        uStack0000000000000110 = uStack0000000000000130;
                                        uStack0000000000000108 = uStack0000000000000128;
                                        uStack000000000000010c = uStack000000000000012c;
                                        in_stack_00000100 = in_stack_00000120;
                                        if (0x13 < *(uint *)(lVar13 + 0x18)) {
                                          *(undefined4 *)(lVar13 + 0x2cc) = 5;
                                          *(undefined8 *)(lVar13 + 0x2e4) = uStack0000000000000114;
                                          *(ulong *)(lVar13 + 0x2dc) =
                                               CONCAT44(uStack0000000000000130,
                                                        uStack000000000000012c);
                                          *(ulong *)(lVar13 + 0x2d8) =
                                               CONCAT44(uStack000000000000012c,
                                                        uStack0000000000000128);
                                          *(undefined8 *)(lVar13 + 0x2d0) = in_stack_00000120;
                                          uVar3 = DAT_013de180;
                                          uVar2 = DAT_013ddfe0;
                                          uVar1 = DAT_013ddb08;
                                          *(undefined4 *)(lVar13 + 0x2ec) = 0;
                                          in_stack_000000e0 = 0;
                                          uStack00000000000000e8 = 0;
                                          uStack00000000000000ec = 0;
                                          in_stack_000000f8 = 0;
                                          uStack00000000000000f0 = 0;
                                          uStack00000000000000f4 = 0;
                                          FUN_05effcac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,
                                                       &stack0x000000e0,0);
                                          uStack00000000000000d4 =
                                               CONCAT44(in_stack_000000f8,uStack00000000000000f4);
                                          uStack00000000000000d0 = uStack00000000000000f0;
                                          uStack00000000000000c8 = uStack00000000000000e8;
                                          uStack00000000000000cc = uStack00000000000000ec;
                                          in_stack_000000c0 = in_stack_000000e0;
                                          if (0x14 < *(uint *)(lVar13 + 0x18)) {
                                            *(undefined4 *)(lVar13 + 0x2f0) = 8;
                                            *(undefined8 *)(lVar13 + 0x308) = uStack00000000000000d4
                                            ;
                                            *(ulong *)(lVar13 + 0x300) =
                                                 CONCAT44(uStack00000000000000f0,
                                                          uStack00000000000000ec);
                                            *(ulong *)(lVar13 + 0x2fc) =
                                                 CONCAT44(uStack00000000000000ec,
                                                          uStack00000000000000e8);
                                            *(undefined8 *)(lVar13 + 0x2f4) = in_stack_000000e0;
                                            uVar3 = DAT_013de280;
                                            uVar2 = DAT_013de1dc;
                                            uVar1 = DAT_013ddb64;
                                            *(undefined4 *)(lVar13 + 0x310) = 0;
                                            in_stack_000000a0 = 0;
                                            uStack00000000000000a8 = 0;
                                            uStack00000000000000ac = 0;
                                            in_stack_000000b8 = 0;
                                            uStack00000000000000b0 = 0;
                                            uStack00000000000000b4 = 0;
                                            FUN_05effcac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,
                                                         &stack0x000000a0,0);
                                            uStack0000000000000094 =
                                                 CONCAT44(in_stack_000000b8,uStack00000000000000b4);
                                            uStack0000000000000090 = uStack00000000000000b0;
                                            uStack0000000000000088 = uStack00000000000000a8;
                                            uStack000000000000008c = uStack00000000000000ac;
                                            in_stack_00000080 = in_stack_000000a0;
                                            if (0x15 < *(uint *)(lVar13 + 0x18)) {
                                              *(undefined4 *)(lVar13 + 0x314) = 0xb;
                                              *(undefined8 *)(lVar13 + 0x32c) =
                                                   uStack0000000000000094;
                                              *(ulong *)(lVar13 + 0x324) =
                                                   CONCAT44(uStack00000000000000b0,
                                                            uStack00000000000000ac);
                                              *(ulong *)(lVar13 + 800) =
                                                   CONCAT44(uStack00000000000000ac,
                                                            uStack00000000000000a8);
                                              *(undefined8 *)(lVar13 + 0x318) = in_stack_000000a0;
                                              uVar3 = DAT_013de338;
                                              uVar2 = DAT_013ddf08;
                                              uVar1 = DAT_013ddd34;
                                              *(undefined4 *)(lVar13 + 0x334) = 0;
                                              in_stack_00000060 = 0;
                                              uStack0000000000000068 = 0;
                                              uStack000000000000006c = 0;
                                              in_stack_00000078 = 0;
                                              uStack0000000000000070 = 0;
                                              uStack0000000000000074 = 0;
                                              FUN_05effcac(uVar2,uVar3,uVar1,0,0,0,0xbf800000,
                                                           &stack0x00000060,0);
                                              uStack0000000000000054 =
                                                   CONCAT44(in_stack_00000078,uStack0000000000000074
                                                           );
                                              uStack0000000000000050 = uStack0000000000000070;
                                              uStack0000000000000048 = uStack0000000000000068;
                                              uStack000000000000004c = uStack000000000000006c;
                                              in_stack_00000040 = in_stack_00000060;
                                              if (0x16 < *(uint *)(lVar13 + 0x18)) {
                                                *(undefined4 *)(lVar13 + 0x338) = 0xe;
                                                *(undefined8 *)(lVar13 + 0x350) =
                                                     uStack0000000000000054;
                                                *(ulong *)(lVar13 + 0x348) =
                                                     CONCAT44(uStack0000000000000070,
                                                              uStack000000000000006c);
                                                *(ulong *)(lVar13 + 0x344) =
                                                     CONCAT44(uStack000000000000006c,
                                                              uStack0000000000000068);
                                                *(undefined8 *)(lVar13 + 0x33c) = in_stack_00000060;
                                                uVar3 = DAT_013de42c;
                                                uVar2 = DAT_013de36c;
                                                uVar1 = DAT_013ddf64;
                                                *(undefined4 *)(lVar13 + 0x358) = 0;
                                                in_stack_00000020 = 0;
                                                uStack0000000000000028 = 0;
                                                uStack000000000000002c = 0;
                                                in_stack_00000038 = 0;
                                                uStack0000000000000030 = 0;
                                                uStack0000000000000034 = 0;
                                                FUN_05effcac(uVar3,uVar1,uVar2,0,0,0,0xbf800000,
                                                             &stack0x00000020,0);
                                                if (0x17 < *(uint *)(lVar13 + 0x18)) {
                                                  *(undefined4 *)(lVar13 + 0x35c) = 0x12;
                                                  *(ulong *)(lVar13 + 0x374) =
                                                       CONCAT44(in_stack_00000038,
                                                                uStack0000000000000034);
                                                  *(ulong *)(lVar13 + 0x36c) =
                                                       CONCAT44(uStack0000000000000030,
                                                                uStack000000000000002c);
                                                  *(ulong *)(lVar13 + 0x368) =
                                                       CONCAT44(uStack000000000000002c,
                                                                uStack0000000000000028);
                                                  *(undefined8 *)(lVar13 + 0x360) =
                                                       in_stack_00000020;
                                                  *(undefined4 *)(lVar13 + 0x37c) = 0;
                                                  if (unaff_x19 != 0) {
                                                    *(long *)(unaff_x19 + 0x10) = lVar13;
                                                    **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
                                                    lVar13 = thunk_FUN_02cea894(*unaff_x23);
                                                    FUN_051ddc10();
                                                    puVar12 = PTR_DAT_066091b0;
                                                    puVar11 = PTR_DAT_066091a8;
                                                    puVar10 = PTR_DAT_066091a0;
                                                    puVar9 = PTR_DAT_06609198;
                                                    puVar8 = PTR_DAT_06609190;
                                                    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                                                      lVar14 = *(long *)PTR_DAT_066091b0;
                                                      uVar16 = *(undefined8 *)
                                                                (**(long **)(*unaff_x23 + 0xb8) +
                                                                0x10);
                                                      if (*(int *)(lVar14 + 0xe0) == 0) {
                                                        thunk_FUN_02cd038c();
                                                        lVar14 = *(long *)puVar12;
                                                      }
                                                      uVar17 = **(undefined8 **)(lVar14 + 0xb8);
                                                      uVar15 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                   puVar10);
                                                      FUN_04a50c34(uVar15,uVar17,
                                                                   *(undefined8 *)puVar11,0);
                                                      uVar16 = FUN_033e7fdc(uVar16,uVar15,
                                                                            *(undefined8 *)puVar8);
                                                      uVar16 = FUN_033f6b80(uVar16,*(undefined8 *)
                                                                                    puVar9);
                                                      if (lVar13 != 0) {
                                                        *(undefined8 *)(lVar13 + 0x10) = uVar16;
                                                        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8)
                                                             = lVar13;
                                                        return;
                                                      }
                                                    }
                                                  }
                                                  goto LAB_051deaf0;
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


