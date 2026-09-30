/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$.cctor
ENTRY_POINT: 0534cdd0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_7_0___cctor(void)

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
  undefined8 uVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
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
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  
  uVar14 = *(undefined8 *)(unaff_x21 + 0x14);
  uVar16 = *(undefined8 *)(unaff_x21 + 0xc);
  *(undefined8 *)(unaff_x20 + 0x170) = in_stack_00000388;
  *(undefined8 *)(unaff_x20 + 0x168) = in_stack_00000380;
  uVar2 = DAT_011b009c;
  *(undefined8 *)(unaff_x20 + 0x17c) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x174) = uVar16;
  uVar7 = DAT_011b06bc;
  uVar6 = DAT_011b03e0;
  uVar5 = DAT_011b03dc;
  uVar4 = DAT_011b01d4;
  uVar3 = DAT_011b0104;
  uVar1 = DAT_011afd54;
  *(undefined4 *)(unaff_x20 + 0x164) = 0;
  *(undefined4 *)(unaff_x20 + 0x184) = 0;
  FUN_060fda18(uVar2,uVar1,uVar4,uVar5,uVar3,uVar7,uVar6,&stack0x00000360,0);
  if (10 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x188) = 9;
    *(undefined8 *)(unaff_x20 + 0x194) = 0;
    *(undefined8 *)(unaff_x20 + 0x18c) = 0;
    uVar3 = DAT_011b00a0;
    *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
    *(undefined8 *)(unaff_x20 + 0x198) = 0;
    uVar7 = DAT_011b0730;
    uVar6 = DAT_011b072c;
    uVar5 = DAT_011b043c;
    uVar4 = DAT_011b00a4;
    uVar2 = DAT_011afee4;
    uVar1 = DAT_011afdb0;
    *(undefined4 *)(unaff_x20 + 0x1a8) = 0;
    FUN_060fda18(uVar3,uVar1,uVar4,uVar2,uVar5,uVar6,uVar7,&stack0x00000320,0);
    if (0xb < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x1ac) = 10;
      *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
      *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
      *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
      *(undefined8 *)(unaff_x20 + 0x1bc) = 0;
      uVar7 = DAT_011b078c;
      uVar6 = DAT_011b05b4;
      uVar5 = DAT_011b0440;
      uVar4 = DAT_011b0240;
      uVar3 = DAT_011b0174;
      uVar2 = DAT_011b0108;
      uVar1 = DAT_011afd58;
      *(undefined4 *)(unaff_x20 + 0x1cc) = 0;
      FUN_060fda18(uVar4,uVar6,uVar3,uVar7,uVar5,uVar2,uVar1,&stack0x000002e0,0);
      if (0xc < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
        *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
        uVar4 = DAT_011b0790;
        *(undefined8 *)(unaff_x20 + 0x1dc) = 0;
        *(undefined8 *)(unaff_x20 + 0x1d4) = 0;
        uVar5 = DAT_011b07fc;
        uVar2 = DAT_011b010c;
        uVar1 = DAT_011afbfc;
        *(undefined4 *)(unaff_x20 + 0x1d0) = 0;
        uVar3 = DAT_011b02a0;
        *(undefined4 *)(unaff_x20 + 0x1f0) = 0;
        FUN_060fda18(uVar2,0,uVar4,uVar1,uVar5,uVar3,DAT_011b05b8,&stack0x000002a0,0);
        if (0xd < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 500) = 0xc;
          *(undefined8 *)(unaff_x20 + 0x200) = 0;
          *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
          uVar1 = DAT_011afb3c;
          *(undefined8 *)(unaff_x20 + 0x20c) = 0;
          *(undefined8 *)(unaff_x20 + 0x204) = 0;
          uVar7 = DAT_011b048c;
          uVar6 = DAT_011b0444;
          uVar5 = DAT_011b0374;
          uVar4 = DAT_011b02a4;
          uVar3 = DAT_011afe6c;
          uVar2 = DAT_011afb90;
          *(undefined4 *)(unaff_x20 + 0x214) = 0;
          FUN_060fda18(uVar1,uVar2,uVar5,uVar7,uVar4,uVar3,uVar6,&stack0x00000260,0);
          if (0xe < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
            *(undefined8 *)(unaff_x20 + 0x224) = 0;
            *(undefined8 *)(unaff_x20 + 0x21c) = 0;
            uVar7 = DAT_011b0800;
            *(undefined8 *)(unaff_x20 + 0x230) = 0;
            *(undefined8 *)(unaff_x20 + 0x228) = 0;
            uVar6 = DAT_011b0794;
            uVar5 = DAT_011b0548;
            uVar4 = DAT_011b04f4;
            uVar3 = DAT_011b02fc;
            uVar2 = DAT_011aff78;
            uVar1 = DAT_011afee8;
            *(undefined4 *)(unaff_x20 + 0x238) = 0;
            FUN_060fda18(uVar7,uVar1,uVar2,uVar5,uVar4,uVar6,uVar3,&stack0x00000220,0);
            if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
              *(undefined8 *)(unaff_x20 + 0x248) = 0;
              *(undefined8 *)(unaff_x20 + 0x240) = 0;
              uVar3 = DAT_011b00a8;
              *(undefined8 *)(unaff_x20 + 0x254) = 0;
              *(undefined8 *)(unaff_x20 + 0x24c) = 0;
              uVar7 = DAT_011b0798;
              uVar6 = DAT_011b06c0;
              uVar5 = DAT_011b0378;
              uVar4 = DAT_011b0300;
              uVar2 = DAT_011afd5c;
              uVar1 = DAT_011afce0;
              *(undefined4 *)(unaff_x20 + 0x23c) = 0;
              *(undefined4 *)(unaff_x20 + 0x25c) = 0;
              in_stack_000001e0 = 0;
              uStack00000000000001e8 = 0;
              uStack00000000000001ec = 0;
              in_stack_000001f0 = 0;
              FUN_060fda18(uVar2,uVar1,uVar3,uVar7,uVar5,uVar4,uVar6,&stack0x000001e0,0);
              uStack00000000000001d4 = 0;
              uStack00000000000001c8 = uStack00000000000001e8;
              in_stack_000001c0 = in_stack_000001e0;
              uStack00000000000001cc = uStack00000000000001ec;
              uStack00000000000001d0 = in_stack_000001f0;
              if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
                *(undefined8 *)(unaff_x20 + 0x278) = 0;
                *(ulong *)(unaff_x20 + 0x270) = CONCAT44(in_stack_000001f0,uStack00000000000001ec);
                *(ulong *)(unaff_x20 + 0x26c) =
                     CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
                *(undefined8 *)(unaff_x20 + 0x264) = in_stack_000001e0;
                uVar7 = DAT_011b03e4;
                uVar6 = DAT_011b037c;
                uVar5 = DAT_011b0110;
                uVar4 = DAT_011b003c;
                uVar3 = DAT_011afeec;
                uVar2 = DAT_011afc00;
                uVar1 = DAT_011afb94;
                *(undefined4 *)(unaff_x20 + 0x280) = 0;
                in_stack_000001a0 = 0;
                uStack00000000000001a8 = 0;
                uStack00000000000001ac = 0;
                in_stack_000001b8 = 0;
                uStack00000000000001b0 = 0;
                uStack00000000000001b4 = 0;
                FUN_060fda18(uVar1,uVar5,uVar7,uVar6,uVar3,uVar4,uVar2,&stack0x000001a0,0);
                uStack0000000000000194 = CONCAT44(in_stack_000001b8,uStack00000000000001b4);
                uStack0000000000000188 = uStack00000000000001a8;
                in_stack_00000180 = in_stack_000001a0;
                uStack000000000000018c = uStack00000000000001ac;
                uStack0000000000000190 = uStack00000000000001b0;
                if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x284) = 0x10;
                  *(ulong *)(unaff_x20 + 0x290) =
                       CONCAT44(uStack00000000000001ac,uStack00000000000001a8);
                  *(undefined8 *)(unaff_x20 + 0x288) = in_stack_000001a0;
                  uVar1 = DAT_011afc04;
                  *(undefined8 *)(unaff_x20 + 0x29c) = uStack0000000000000194;
                  *(ulong *)(unaff_x20 + 0x294) =
                       CONCAT44(uStack00000000000001b0,uStack00000000000001ac);
                  uVar7 = DAT_011b05c0;
                  uVar6 = DAT_011b05bc;
                  uVar5 = DAT_011b00ac;
                  uVar4 = DAT_011aff7c;
                  uVar3 = DAT_011afdb4;
                  uVar2 = DAT_011afce4;
                  *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
                  in_stack_00000160 = 0;
                  uStack0000000000000168 = 0;
                  uStack000000000000016c = 0;
                  in_stack_00000178 = 0;
                  uStack0000000000000170 = 0;
                  uStack0000000000000174 = 0;
                  FUN_060fda18(uVar1,uVar5,uVar2,uVar6,uVar4,uVar7,uVar3,&stack0x00000160,0);
                  uStack0000000000000154 = CONCAT44(in_stack_00000178,uStack0000000000000174);
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
                    uVar3 = DAT_011b05c4;
                    uVar2 = DAT_011aff80;
                    uVar1 = DAT_011afb40;
                    *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
                    in_stack_00000120 = 0;
                    uStack0000000000000128 = 0;
                    uStack000000000000012c = 0;
                    in_stack_00000138 = 0;
                    uStack0000000000000130 = 0;
                    uStack0000000000000134 = 0;
                    FUN_060fda18(uVar3,uVar1,uVar2,0,0,0,0xbf800000,&stack0x00000120,0);
                    uStack0000000000000114 = CONCAT44(in_stack_00000138,uStack0000000000000134);
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
                      uVar3 = DAT_011b01d8;
                      uVar2 = DAT_011afe14;
                      uVar1 = DAT_011afb44;
                      *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
                      in_stack_000000e0 = 0;
                      uStack00000000000000e8 = 0;
                      uStack00000000000000ec = 0;
                      in_stack_000000f8 = 0;
                      uStack00000000000000f0 = 0;
                      uStack00000000000000f4 = 0;
                      FUN_060fda18(uVar2,uVar1,uVar3,0,0,0,0xbf800000,&stack0x000000e0,0);
                      uStack00000000000000d4 = CONCAT44(in_stack_000000f8,uStack00000000000000f4);
                      uStack00000000000000c8 = uStack00000000000000e8;
                      in_stack_000000c0 = in_stack_000000e0;
                      uStack00000000000000cc = uStack00000000000000ec;
                      uStack00000000000000d0 = uStack00000000000000f0;
                      if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
                        *(undefined8 *)(unaff_x20 + 0x308) = uStack00000000000000d4;
                        *(ulong *)(unaff_x20 + 0x300) =
                             CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
                        *(ulong *)(unaff_x20 + 0x2fc) =
                             CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
                        *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
                        uVar3 = DAT_011b0630;
                        uVar2 = DAT_011b02a8;
                        uVar1 = DAT_011afce8;
                        *(undefined4 *)(unaff_x20 + 0x310) = 0;
                        in_stack_000000a0 = 0;
                        uStack00000000000000a8 = 0;
                        uStack00000000000000ac = 0;
                        in_stack_000000b8 = 0;
                        uStack00000000000000b0 = 0;
                        uStack00000000000000b4 = 0;
                        FUN_060fda18(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000a0,0);
                        uStack0000000000000094 = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
                        uStack0000000000000088 = uStack00000000000000a8;
                        in_stack_00000080 = in_stack_000000a0;
                        uStack000000000000008c = uStack00000000000000ac;
                        uStack0000000000000090 = uStack00000000000000b0;
                        if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
                          *(ulong *)(unaff_x20 + 800) =
                               CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
                          *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
                          uVar2 = DAT_011afb4c;
                          uVar1 = DAT_011afb48;
                          *(undefined8 *)(unaff_x20 + 0x32c) = uStack0000000000000094;
                          *(ulong *)(unaff_x20 + 0x324) =
                               CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
                          uVar3 = DAT_011afef0;
                          *(undefined4 *)(unaff_x20 + 0x334) = 0;
                          in_stack_00000060 = 0;
                          uStack0000000000000068 = 0;
                          uStack000000000000006c = 0;
                          in_stack_00000078 = 0;
                          uStack0000000000000070 = 0;
                          uStack0000000000000074 = 0;
                          FUN_060fda18(uVar1,uVar3,uVar2,0,0,0,0xbf800000,&stack0x00000060,0);
                          uStack0000000000000054 =
                               CONCAT44(in_stack_00000078,uStack0000000000000074);
                          uStack0000000000000048 = uStack0000000000000068;
                          in_stack_00000040 = in_stack_00000060;
                          uStack000000000000004c = uStack000000000000006c;
                          uStack0000000000000050 = uStack0000000000000070;
                          if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
                            *(ulong *)(unaff_x20 + 0x344) =
                                 CONCAT44(uStack000000000000006c,uStack0000000000000068);
                            *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
                            *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
                            *(ulong *)(unaff_x20 + 0x348) =
                                 CONCAT44(uStack0000000000000070,uStack000000000000006c);
                            uVar3 = DAT_011b0804;
                            uVar2 = DAT_011b05cc;
                            uVar1 = DAT_011b05c8;
                            *(undefined4 *)(unaff_x20 + 0x358) = 0;
                            in_stack_00000020 = 0;
                            uStack0000000000000028 = 0;
                            uStack000000000000002c = 0;
                            in_stack_00000038 = 0;
                            uStack0000000000000030 = 0;
                            uStack0000000000000034 = 0;
                            FUN_060fda18(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
                            if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
                              *(ulong *)(unaff_x20 + 0x368) =
                                   CONCAT44(uStack000000000000002c,uStack0000000000000028);
                              *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
                              *(ulong *)(unaff_x20 + 0x374) =
                                   CONCAT44(in_stack_00000038,uStack0000000000000034);
                              *(ulong *)(unaff_x20 + 0x36c) =
                                   CONCAT44(uStack0000000000000030,uStack000000000000002c);
                              *(undefined4 *)(unaff_x20 + 0x37c) = 0;
                              if (unaff_x19 != 0) {
                                lVar15 = *unaff_x23;
                                *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                **(long **)(lVar15 + 0xb8) = unaff_x19;
                                lVar15 = thunk_FUN_02f45270(*unaff_x23);
                                FUN_0534c790();
                                puVar12 = Unity_Collections_FixedString512Bytes_TypeInfo;
                                puVar11 = Unity_Collections_FixedString4096Bytes_TypeInfo;
                                puVar10 = Unity_Collections_FixedString32Bytes_TypeInfo;
                                puVar9 = Unity_Collections_FixedString128Bytes_TypeInfo;
                                puVar8 = System_Net_FixedSizeReadStream_TypeInfo;
                                if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                                  lVar13 = *(long *)Unity_Collections_FixedString512Bytes_TypeInfo;
                                  uVar16 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                    thunk_FUN_02f6670c();
                                    lVar13 = *(long *)puVar12;
                                  }
                                  uVar17 = **(undefined8 **)(lVar13 + 0xb8);
                                  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar10);
                                  FUN_04dfeddc(uVar14,uVar17,*(undefined8 *)puVar11,0);
                                  uVar16 = FUN_0339a72c(uVar16,uVar14,*(undefined8 *)puVar8);
                                  uVar16 = FUN_033a4348(uVar16,*(undefined8 *)puVar9);
                                  if (lVar15 != 0) {
                                    lVar13 = *unaff_x23;
                                    *(undefined8 *)(lVar15 + 0x10) = uVar16;
                                    *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar15;
                                    return;
                                  }
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_02f089c8();
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
  FUN_02f089d0();
}


