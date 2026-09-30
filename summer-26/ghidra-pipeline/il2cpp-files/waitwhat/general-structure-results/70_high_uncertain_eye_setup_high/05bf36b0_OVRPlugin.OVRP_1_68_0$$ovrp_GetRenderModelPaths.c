/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_GetRenderModelPaths
ENTRY_POINT: 05bf36b0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_GetRenderModelPaths(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool in_ZR;
  bool in_CY;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  long unaff_x21;
  undefined8 uVar18;
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
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  
  if (in_CY && !in_ZR) {
    uVar15 = *(undefined8 *)(unaff_x21 + 0xd4);
    uVar17 = *(undefined8 *)(unaff_x21 + 0xcc);
    *(undefined8 *)(unaff_x20 + 0x74) = in_stack_00000548;
    *(undefined8 *)(unaff_x20 + 0x6c) = in_stack_00000540;
    uVar5 = DAT_012e389c;
    *(undefined8 *)(unaff_x20 + 0x80) = uVar15;
    *(undefined8 *)(unaff_x20 + 0x78) = uVar17;
    uVar8 = DAT_012e3d28;
    uVar7 = DAT_012e3cc4;
    uVar6 = DAT_012e3994;
    uVar4 = DAT_012e3770;
    uVar3 = DAT_012e362c;
    uVar2 = DAT_012e33e0;
    *(undefined4 *)(unaff_x20 + 0x68) = 0;
    *(undefined4 *)(unaff_x20 + 0x88) = 0;
    FUN_069e4d6c(uVar5,uVar6,uVar2,uVar3,uVar4,uVar8,uVar7,&stack0x00000520,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x21 + 0x94) = *(undefined8 *)(unaff_x21 + 0xb4);
    *(undefined8 *)(unaff_x21 + 0x8c) = *(undefined8 *)(unaff_x21 + 0xac);
    uVar2 = DAT_012e36e0;
    if ((uVar1 & 0xfffffffc) != 0) {
      uVar15 = *(undefined8 *)(unaff_x21 + 0x94);
      uVar17 = *(undefined8 *)(unaff_x21 + 0x8c);
      *(undefined4 *)(unaff_x20 + 0x8c) = 2;
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      *(undefined8 *)(unaff_x20 + 0x90) = 0;
      uVar4 = DAT_012e3470;
      *(undefined8 *)(unaff_x20 + 0xa4) = uVar15;
      *(undefined8 *)(unaff_x20 + 0x9c) = uVar17;
      uVar8 = DAT_012e3bf8;
      uVar7 = DAT_012e38f8;
      uVar6 = DAT_012e38f4;
      uVar5 = DAT_012e34c0;
      uVar3 = DAT_012e3420;
      *(undefined4 *)(unaff_x20 + 0xac) = 0;
      FUN_069e4d6c(uVar4,uVar6,uVar2,uVar3,uVar8,uVar7,uVar5,&stack0x000004e0,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
      *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
      if (4 < uVar1) {
        uVar15 = *(undefined8 *)(unaff_x21 + 0x54);
        uVar17 = *(undefined8 *)(unaff_x21 + 0x4c);
        *(undefined4 *)(unaff_x20 + 0xb0) = 3;
        *(undefined8 *)(unaff_x20 + 0xbc) = 0;
        *(undefined8 *)(unaff_x20 + 0xb4) = 0;
        *(undefined8 *)(unaff_x20 + 200) = uVar15;
        *(undefined8 *)(unaff_x20 + 0xc0) = uVar17;
        uVar8 = DAT_012e3d2c;
        uVar7 = DAT_012e3bfc;
        uVar6 = DAT_012e3ad4;
        uVar5 = DAT_012e3854;
        uVar4 = DAT_012e351c;
        uVar3 = DAT_012e33e4;
        *(undefined4 *)(unaff_x20 + 0xd0) = 0;
        FUN_069e4d6c(uVar8,uVar7,uVar2,uVar5,uVar6,uVar3,uVar4,&stack0x000004a0,0);
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
        *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
        if (5 < uVar1) {
          uVar15 = *(undefined8 *)(unaff_x21 + 0x14);
          uVar17 = *(undefined8 *)(unaff_x21 + 0xc);
          *(undefined4 *)(unaff_x20 + 0xd4) = 4;
          *(undefined8 *)(unaff_x20 + 0xe0) = 0;
          *(undefined8 *)(unaff_x20 + 0xd8) = 0;
          uVar3 = DAT_012e3674;
          *(undefined8 *)(unaff_x20 + 0xec) = uVar15;
          *(undefined8 *)(unaff_x20 + 0xe4) = uVar17;
          uVar8 = DAT_012e3c54;
          uVar7 = DAT_012e3b58;
          uVar6 = DAT_012e3b18;
          uVar5 = DAT_012e39d4;
          uVar4 = DAT_012e3678;
          uVar2 = DAT_012e34c4;
          *(undefined4 *)(unaff_x20 + 0xf4) = 0;
          FUN_069e4d6c(uVar3,uVar7,uVar4,uVar8,uVar2,uVar6,uVar5,&stack0x00000460,0);
          if (6 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined8 *)(unaff_x20 + 0x104) = 0;
            *(undefined8 *)(unaff_x20 + 0xfc) = 0;
            uVar7 = DAT_012e3c00;
            *(undefined8 *)(unaff_x20 + 0x110) = 0;
            *(undefined8 *)(unaff_x20 + 0x108) = 0;
            uVar8 = DAT_012e3c58;
            uVar6 = DAT_012e3b5c;
            uVar5 = DAT_012e3b1c;
            uVar4 = DAT_012e3998;
            uVar3 = DAT_012e3580;
            uVar2 = DAT_012e34c8;
            *(undefined4 *)(unaff_x20 + 0xf8) = 0;
            *(undefined4 *)(unaff_x20 + 0x118) = 0;
            FUN_069e4d6c(uVar3,uVar5,uVar7,uVar6,uVar2,uVar8,uVar4,&stack0x00000420,0);
            if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff8) != 0) {
              *(undefined4 *)(unaff_x20 + 0x11c) = 6;
              *(undefined8 *)(unaff_x20 + 0x128) = 0;
              *(undefined8 *)(unaff_x20 + 0x120) = 0;
              *(undefined8 *)(unaff_x20 + 0x134) = 0;
              *(undefined8 *)(unaff_x20 + 300) = 0;
              uVar8 = DAT_012e3a30;
              uVar7 = DAT_012e3938;
              uVar6 = DAT_012e3934;
              uVar5 = DAT_012e38a0;
              uVar4 = DAT_012e3774;
              uVar3 = DAT_012e3550;
              uVar2 = DAT_012e3520;
              *(undefined4 *)(unaff_x20 + 0x13c) = 0;
              FUN_069e4d6c(uVar2,uVar6,uVar7,uVar8,uVar5,uVar4,uVar3,&stack0x000003e0,0);
              if (8 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x140) = 7;
                *(undefined8 *)(unaff_x20 + 0x158) = 0;
                *(undefined8 *)(unaff_x20 + 0x150) = 0;
                *(undefined8 *)(unaff_x20 + 0x14c) = 0;
                *(undefined8 *)(unaff_x20 + 0x144) = 0;
                uVar8 = DAT_012e3d70;
                uVar7 = DAT_012e3cc8;
                uVar6 = DAT_012e39d8;
                uVar5 = DAT_012e393c;
                uVar4 = DAT_012e38fc;
                uVar3 = DAT_012e3740;
                uVar2 = DAT_012e367c;
                *(undefined4 *)(unaff_x20 + 0x160) = 0;
                FUN_069e4d6c(uVar5,uVar8,uVar7,uVar6,uVar4,uVar2,uVar3,&stack0x000003a0,0);
                if (9 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined8 *)(unaff_x20 + 0x170) = 0;
                  *(undefined8 *)(unaff_x20 + 0x168) = 0;
                  uVar3 = DAT_012e37d4;
                  *(undefined8 *)(unaff_x20 + 0x17c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x174) = 0;
                  uVar8 = DAT_012e3c5c;
                  uVar7 = DAT_012e3a38;
                  uVar6 = DAT_012e3a34;
                  uVar5 = DAT_012e38a4;
                  uVar4 = DAT_012e3820;
                  uVar2 = DAT_012e3554;
                  *(undefined4 *)(unaff_x20 + 0x164) = 0;
                  *(undefined4 *)(unaff_x20 + 0x184) = 0;
                  FUN_069e4d6c(uVar3,uVar2,uVar5,uVar6,uVar4,uVar8,uVar7,&stack0x00000360,0);
                  if (10 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x188) = 9;
                    *(undefined8 *)(unaff_x20 + 0x194) = 0;
                    *(undefined8 *)(unaff_x20 + 0x18c) = 0;
                    uVar4 = DAT_012e37d8;
                    *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x198) = 0;
                    uVar8 = DAT_012e3cd0;
                    uVar7 = DAT_012e3ccc;
                    uVar6 = DAT_012e3a84;
                    uVar5 = DAT_012e37dc;
                    uVar3 = DAT_012e3680;
                    uVar2 = DAT_012e3584;
                    *(undefined4 *)(unaff_x20 + 0x1a8) = 0;
                    FUN_069e4d6c(uVar4,uVar2,uVar5,uVar3,uVar6,uVar7,uVar8,&stack0x00000320,0);
                    if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x1ac) = 10;
                      *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1bc) = 0;
                      uVar8 = DAT_012e3d30;
                      uVar7 = DAT_012e3bb8;
                      uVar6 = DAT_012e3a88;
                      uVar5 = DAT_012e3900;
                      uVar4 = DAT_012e3858;
                      uVar3 = DAT_012e3824;
                      uVar2 = DAT_012e3558;
                      *(undefined4 *)(unaff_x20 + 0x1cc) = 0;
                      FUN_069e4d6c(uVar5,uVar7,uVar4,uVar8,uVar6,uVar3,uVar2,&stack0x000002e0,0);
                      if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
                        uVar5 = DAT_012e3d34;
                        *(undefined8 *)(unaff_x20 + 0x1dc) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1d4) = 0;
                        uVar6 = DAT_012e3d74;
                        uVar3 = DAT_012e3828;
                        uVar2 = DAT_012e3474;
                        *(undefined4 *)(unaff_x20 + 0x1d0) = 0;
                        uVar4 = DAT_012e3940;
                        *(undefined4 *)(unaff_x20 + 0x1f0) = 0;
                        FUN_069e4d6c(uVar3,0,uVar5,uVar2,uVar6,uVar4,DAT_012e3bbc,&stack0x000002a0,0
                                    );
                        if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 500) = 0xc;
                          *(undefined8 *)(unaff_x20 + 0x200) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                          uVar2 = DAT_012e33e8;
                          *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x204) = 0;
                          uVar8 = DAT_012e3ad8;
                          uVar7 = DAT_012e3a8c;
                          uVar6 = DAT_012e39dc;
                          uVar5 = DAT_012e3944;
                          uVar4 = DAT_012e3630;
                          uVar3 = DAT_012e3424;
                          *(undefined4 *)(unaff_x20 + 0x214) = 0;
                          FUN_069e4d6c(uVar2,uVar3,uVar6,uVar8,uVar5,uVar4,uVar7,&stack0x00000260,0)
                          ;
                          if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
                            *(undefined8 *)(unaff_x20 + 0x224) = 0;
                            *(undefined8 *)(unaff_x20 + 0x21c) = 0;
                            uVar8 = DAT_012e3d78;
                            *(undefined8 *)(unaff_x20 + 0x230) = 0;
                            *(undefined8 *)(unaff_x20 + 0x228) = 0;
                            uVar7 = DAT_012e3d38;
                            uVar6 = DAT_012e3b60;
                            uVar5 = DAT_012e3b20;
                            uVar4 = DAT_012e399c;
                            uVar3 = DAT_012e36e4;
                            uVar2 = DAT_012e3684;
                            *(undefined4 *)(unaff_x20 + 0x238) = 0;
                            FUN_069e4d6c(uVar8,uVar2,uVar3,uVar6,uVar5,uVar7,uVar4,&stack0x00000220,
                                         0);
                            if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                              *(undefined8 *)(unaff_x20 + 0x248) = 0;
                              *(undefined8 *)(unaff_x20 + 0x240) = 0;
                              uVar4 = DAT_012e37e0;
                              *(undefined8 *)(unaff_x20 + 0x254) = 0;
                              *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                              uVar8 = DAT_012e3d3c;
                              uVar7 = DAT_012e3c60;
                              uVar6 = DAT_012e39e0;
                              uVar5 = DAT_012e39a0;
                              uVar3 = DAT_012e355c;
                              uVar2 = DAT_012e3524;
                              *(undefined4 *)(unaff_x20 + 0x23c) = 0;
                              *(undefined4 *)(unaff_x20 + 0x25c) = 0;
                              in_stack_000001e0 = 0;
                              uStack00000000000001e8 = 0;
                              uStack00000000000001ec = 0;
                              in_stack_000001f0 = 0;
                              FUN_069e4d6c(uVar3,uVar2,uVar4,uVar8,uVar6,uVar5,uVar7,
                                           &stack0x000001e0,0);
                              uStack00000000000001d4 = 0;
                              uStack00000000000001c8 = uStack00000000000001e8;
                              in_stack_000001c0 = in_stack_000001e0;
                              uStack00000000000001cc = uStack00000000000001ec;
                              uStack00000000000001d0 = in_stack_000001f0;
                              if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
                                *(undefined8 *)(unaff_x20 + 0x278) = 0;
                                *(ulong *)(unaff_x20 + 0x270) =
                                     CONCAT44(in_stack_000001f0,uStack00000000000001ec);
                                *(ulong *)(unaff_x20 + 0x26c) =
                                     CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
                                *(undefined8 *)(unaff_x20 + 0x264) = in_stack_000001e0;
                                uVar8 = DAT_012e3a3c;
                                uVar7 = DAT_012e39e4;
                                uVar6 = DAT_012e382c;
                                uVar5 = DAT_012e3778;
                                uVar4 = DAT_012e3688;
                                uVar3 = DAT_012e3478;
                                uVar2 = DAT_012e3428;
                                *(undefined4 *)(unaff_x20 + 0x280) = 0;
                                in_stack_000001a0 = 0;
                                uStack00000000000001a8 = 0;
                                uStack00000000000001ac = 0;
                                in_stack_000001b8 = 0;
                                uStack00000000000001b0 = 0;
                                uStack00000000000001b4 = 0;
                                FUN_069e4d6c(uVar2,uVar6,uVar8,uVar7,uVar4,uVar5,uVar3,
                                             &stack0x000001a0,0);
                                uStack0000000000000194 =
                                     CONCAT44(in_stack_000001b8,uStack00000000000001b4);
                                uStack0000000000000188 = uStack00000000000001a8;
                                in_stack_00000180 = in_stack_000001a0;
                                uStack000000000000018c = uStack00000000000001ac;
                                uStack0000000000000190 = uStack00000000000001b0;
                                if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x284) = 0x10;
                                  *(ulong *)(unaff_x20 + 0x290) =
                                       CONCAT44(uStack00000000000001ac,uStack00000000000001a8);
                                  *(undefined8 *)(unaff_x20 + 0x288) = in_stack_000001a0;
                                  uVar2 = DAT_012e347c;
                                  *(undefined8 *)(unaff_x20 + 0x29c) = uStack0000000000000194;
                                  *(ulong *)(unaff_x20 + 0x294) =
                                       CONCAT44(uStack00000000000001b0,uStack00000000000001ac);
                                  uVar8 = DAT_012e3bc4;
                                  uVar7 = DAT_012e3bc0;
                                  uVar6 = DAT_012e37e4;
                                  uVar5 = DAT_012e36e8;
                                  uVar4 = DAT_012e3588;
                                  uVar3 = DAT_012e3528;
                                  *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
                                  in_stack_00000160 = 0;
                                  uStack0000000000000168 = 0;
                                  uStack000000000000016c = 0;
                                  in_stack_00000178 = 0;
                                  uStack0000000000000170 = 0;
                                  uStack0000000000000174 = 0;
                                  FUN_069e4d6c(uVar2,uVar6,uVar3,uVar7,uVar5,uVar8,uVar4,
                                               &stack0x00000160,0);
                                  uStack0000000000000154 =
                                       CONCAT44(in_stack_00000178,uStack0000000000000174);
                                  uStack0000000000000148 = uStack0000000000000168;
                                  in_stack_00000140 = in_stack_00000160;
                                  uStack000000000000014c = uStack000000000000016c;
                                  uStack0000000000000150 = uStack0000000000000170;
                                  if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x2a8) = 0x11;
                                    *(ulong *)(unaff_x20 + 0x2b4) =
                                         CONCAT44(uStack000000000000016c,uStack0000000000000168);
                                    *(undefined8 *)(unaff_x20 + 0x2ac) = in_stack_00000160;
                                    *(undefined8 *)(unaff_x20 + 0x2c0) = uStack0000000000000154;
                                    *(ulong *)(unaff_x20 + 0x2b8) =
                                         CONCAT44(uStack0000000000000170,uStack000000000000016c);
                                    uVar4 = DAT_012e3bc8;
                                    uVar3 = DAT_012e36ec;
                                    uVar2 = DAT_012e33ec;
                                    *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
                                    in_stack_00000120 = 0;
                                    uStack0000000000000128 = 0;
                                    uStack000000000000012c = 0;
                                    in_stack_00000138 = 0;
                                    uStack0000000000000130 = 0;
                                    uStack0000000000000134 = 0;
                                    FUN_069e4d6c(uVar4,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000120
                                                 ,0);
                                    uStack0000000000000114 =
                                         CONCAT44(in_stack_00000138,uStack0000000000000134);
                                    uStack0000000000000108 = uStack0000000000000128;
                                    in_stack_00000100 = in_stack_00000120;
                                    uStack000000000000010c = uStack000000000000012c;
                                    uStack0000000000000110 = uStack0000000000000130;
                                    if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
                                      *(ulong *)(unaff_x20 + 0x2d8) =
                                           CONCAT44(uStack000000000000012c,uStack0000000000000128);
                                      *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
                                      *(undefined8 *)(unaff_x20 + 0x2e4) = uStack0000000000000114;
                                      *(ulong *)(unaff_x20 + 0x2dc) =
                                           CONCAT44(uStack0000000000000130,uStack000000000000012c);
                                      uVar4 = DAT_012e38a8;
                                      uVar3 = DAT_012e35ec;
                                      uVar2 = DAT_012e33f0;
                                      *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
                                      in_stack_000000e0 = 0;
                                      uStack00000000000000e8 = 0;
                                      uStack00000000000000ec = 0;
                                      in_stack_000000f8 = 0;
                                      uStack00000000000000f0 = 0;
                                      uStack00000000000000f4 = 0;
                                      FUN_069e4d6c(uVar3,uVar2,uVar4,0,0,0,0xbf800000,
                                                   &stack0x000000e0,0);
                                      uStack00000000000000d4 =
                                           CONCAT44(in_stack_000000f8,uStack00000000000000f4);
                                      uStack00000000000000c8 = uStack00000000000000e8;
                                      in_stack_000000c0 = in_stack_000000e0;
                                      uStack00000000000000cc = uStack00000000000000ec;
                                      uStack00000000000000d0 = uStack00000000000000f0;
                                      if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
                                        *(undefined8 *)(unaff_x20 + 0x308) = uStack00000000000000d4;
                                        *(ulong *)(unaff_x20 + 0x300) =
                                             CONCAT44(uStack00000000000000f0,uStack00000000000000ec)
                                        ;
                                        *(ulong *)(unaff_x20 + 0x2fc) =
                                             CONCAT44(uStack00000000000000ec,uStack00000000000000e8)
                                        ;
                                        *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
                                        uVar4 = DAT_012e3c04;
                                        uVar3 = DAT_012e3948;
                                        uVar2 = DAT_012e352c;
                                        *(undefined4 *)(unaff_x20 + 0x310) = 0;
                                        in_stack_000000a0 = 0;
                                        uStack00000000000000a8 = 0;
                                        uStack00000000000000ac = 0;
                                        in_stack_000000b8 = 0;
                                        uStack00000000000000b0 = 0;
                                        uStack00000000000000b4 = 0;
                                        FUN_069e4d6c(uVar2,uVar3,uVar4,0,0,0,0xbf800000,
                                                     &stack0x000000a0,0);
                                        uStack0000000000000094 =
                                             CONCAT44(in_stack_000000b8,uStack00000000000000b4);
                                        uStack0000000000000088 = uStack00000000000000a8;
                                        in_stack_00000080 = in_stack_000000a0;
                                        uStack000000000000008c = uStack00000000000000ac;
                                        uStack0000000000000090 = uStack00000000000000b0;
                                        if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                          *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
                                          *(ulong *)(unaff_x20 + 800) =
                                               CONCAT44(uStack00000000000000ac,
                                                        uStack00000000000000a8);
                                          *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
                                          uVar3 = DAT_012e33f8;
                                          uVar2 = DAT_012e33f4;
                                          *(undefined8 *)(unaff_x20 + 0x32c) =
                                               uStack0000000000000094;
                                          *(ulong *)(unaff_x20 + 0x324) =
                                               CONCAT44(uStack00000000000000b0,
                                                        uStack00000000000000ac);
                                          uVar4 = DAT_012e368c;
                                          *(undefined4 *)(unaff_x20 + 0x334) = 0;
                                          in_stack_00000060 = 0;
                                          uStack0000000000000068 = 0;
                                          uStack000000000000006c = 0;
                                          in_stack_00000078 = 0;
                                          uStack0000000000000070 = 0;
                                          uStack0000000000000074 = 0;
                                          FUN_069e4d6c(uVar2,uVar4,uVar3,0,0,0,0xbf800000,
                                                       &stack0x00000060,0);
                                          uStack0000000000000054 =
                                               CONCAT44(in_stack_00000078,uStack0000000000000074);
                                          uStack0000000000000048 = uStack0000000000000068;
                                          in_stack_00000040 = in_stack_00000060;
                                          uStack000000000000004c = uStack000000000000006c;
                                          uStack0000000000000050 = uStack0000000000000070;
                                          if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                            *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
                                            *(ulong *)(unaff_x20 + 0x344) =
                                                 CONCAT44(uStack000000000000006c,
                                                          uStack0000000000000068);
                                            *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
                                            *(undefined8 *)(unaff_x20 + 0x350) =
                                                 uStack0000000000000054;
                                            *(ulong *)(unaff_x20 + 0x348) =
                                                 CONCAT44(uStack0000000000000070,
                                                          uStack000000000000006c);
                                            uVar4 = DAT_012e3d7c;
                                            uVar3 = DAT_012e3bd0;
                                            uVar2 = DAT_012e3bcc;
                                            *(undefined4 *)(unaff_x20 + 0x358) = 0;
                                            in_stack_00000020 = 0;
                                            uStack0000000000000028 = 0;
                                            uStack000000000000002c = 0;
                                            in_stack_00000038 = 0;
                                            uStack0000000000000030 = 0;
                                            uStack0000000000000034 = 0;
                                            FUN_069e4d6c(uVar2,uVar3,uVar4,0,0,0,0xbf800000,
                                                         &stack0x00000020,0);
                                            if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                              *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
                                              *(ulong *)(unaff_x20 + 0x368) =
                                                   CONCAT44(uStack000000000000002c,
                                                            uStack0000000000000028);
                                              *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020
                                              ;
                                              *(ulong *)(unaff_x20 + 0x374) =
                                                   CONCAT44(in_stack_00000038,uStack0000000000000034
                                                           );
                                              *(ulong *)(unaff_x20 + 0x36c) =
                                                   CONCAT44(uStack0000000000000030,
                                                            uStack000000000000002c);
                                              *(undefined4 *)(unaff_x20 + 0x37c) = 0;
                                              if (unaff_x19 != 0) {
                                                lVar16 = *unaff_x23;
                                                *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                                **(long **)(lVar16 + 0xb8) = unaff_x19;
                                                lVar16 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*unaff_x23);
                                                FUN_05bf3450();
                                                puVar13 = PTR_DAT_07116de8;
                                                puVar12 = PTR_DAT_07116de0;
                                                puVar11 = PTR_DAT_07116dd8;
                                                puVar10 = PTR_DAT_07116dd0;
                                                puVar9 = PTR_DAT_07116dc8;
                                                if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                                                  lVar14 = *(long *)PTR_DAT_07116de8;
                                                  uVar17 = *(undefined8 *)
                                                            (**(long **)(*unaff_x23 + 0xb8) + 0x10);
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                    thunk_FUN_031e5338();
                                                    lVar14 = *(long *)puVar13;
                                                  }
                                                  uVar18 = **(undefined8 **)(lVar14 + 0xb8);
                                                  uVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar11);
                                                  FUN_03df8e90(uVar15,uVar18,*(undefined8 *)puVar12,
                                                               0);
                                                  uVar17 = FUN_03a84bd0(uVar17,uVar15,
                                                                        *(undefined8 *)puVar9);
                                                  uVar17 = FUN_03a900cc(uVar17,*(undefined8 *)
                                                                                puVar10);
                                                  if (lVar16 != 0) {
                                                    lVar14 = *unaff_x23;
                                                    *(undefined8 *)(lVar16 + 0x10) = uVar17;
                                                    *(long *)(*(long *)(lVar14 + 0xb8) + 8) = lVar16
                                                    ;
                                                    return;
                                                  }
                                                }
                                              }
                    /* WARNING: Subroutine does not return */
                                              FUN_03188cd8();
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
  FUN_03188ce0();
}


