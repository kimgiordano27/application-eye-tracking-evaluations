/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcActivationMode
ENTRY_POINT: 01a3f494
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_Media__GetMrcActivationMode(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x23;
  undefined4 uVar12;
  undefined4 uVar13;
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
  
  uVar3 = DAT_0294616c;
  uVar2 = DAT_02946168;
  uVar1 = DAT_02946164;
  uVar12 = *(undefined4 *)(param_1 + 0x15c);
  uVar13 = *(undefined4 *)(in_x9 + 0x160);
  *(undefined4 *)(unaff_x20 + 0xf4) = 0;
  FUN_02666aac(param_2,param_3,uVar12,uVar13,uVar1,uVar2,uVar3,&stack0x00000460,0);
  if (6 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0xf8) = 0;
    *(undefined8 *)(unaff_x20 + 0x110) = 0;
    *(undefined8 *)(unaff_x20 + 0x108) = 0;
    uVar1 = DAT_02946170;
    *(undefined8 *)(unaff_x20 + 0x104) = 0;
    *(undefined8 *)(unaff_x20 + 0xfc) = 0;
    uVar5 = DAT_02946188;
    uVar4 = DAT_02946184;
    uVar13 = DAT_02946180;
    uVar12 = DAT_0294617c;
    uVar3 = DAT_02946178;
    uVar2 = DAT_02946174;
    *(undefined4 *)(unaff_x20 + 0x118) = 0;
    FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x00000420,0);
    if (7 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x11c) = 6;
      *(undefined8 *)(unaff_x20 + 0x134) = 0;
      *(undefined8 *)(unaff_x20 + 300) = 0;
      uVar1 = DAT_0294618c;
      *(undefined8 *)(unaff_x20 + 0x128) = 0;
      *(undefined8 *)(unaff_x20 + 0x120) = 0;
      uVar5 = DAT_029461a4;
      uVar4 = DAT_029461a0;
      uVar13 = DAT_0294619c;
      uVar12 = DAT_02946198;
      uVar3 = DAT_02946194;
      uVar2 = DAT_02946190;
      *(undefined4 *)(unaff_x20 + 0x13c) = 0;
      FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x000003e0,0);
      if (8 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x140) = 7;
        *(undefined8 *)(unaff_x20 + 0x158) = 0;
        *(undefined8 *)(unaff_x20 + 0x150) = 0;
        *(undefined8 *)(unaff_x20 + 0x14c) = 0;
        *(undefined8 *)(unaff_x20 + 0x144) = 0;
        uVar5 = DAT_029461c0;
        uVar4 = DAT_029461bc;
        uVar13 = DAT_029461b8;
        uVar12 = DAT_029461b4;
        uVar3 = DAT_029461b0;
        uVar2 = DAT_029461ac;
        uVar1 = DAT_029461a8;
        *(undefined4 *)(unaff_x20 + 0x160) = 0;
        FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x000003a0,0);
        if (9 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x164) = 0;
          *(undefined8 *)(unaff_x20 + 0x17c) = 0;
          *(undefined8 *)(unaff_x20 + 0x174) = 0;
          *(undefined8 *)(unaff_x20 + 0x170) = 0;
          *(undefined8 *)(unaff_x20 + 0x168) = 0;
          uVar5 = DAT_029461dc;
          uVar4 = DAT_029461d8;
          uVar13 = DAT_029461d4;
          uVar12 = DAT_029461d0;
          uVar3 = DAT_029461cc;
          uVar2 = DAT_029461c8;
          uVar1 = DAT_029461c4;
          *(undefined4 *)(unaff_x20 + 0x184) = 0;
          FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x00000360,0);
          if (10 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x188) = 9;
            *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
            *(undefined8 *)(unaff_x20 + 0x198) = 0;
            *(undefined8 *)(unaff_x20 + 0x194) = 0;
            *(undefined8 *)(unaff_x20 + 0x18c) = 0;
            uVar5 = DAT_029461f8;
            uVar4 = DAT_029461f4;
            uVar13 = DAT_029461f0;
            uVar12 = DAT_029461ec;
            uVar3 = DAT_029461e8;
            uVar2 = DAT_029461e4;
            uVar1 = DAT_029461e0;
            *(undefined4 *)(unaff_x20 + 0x1a8) = 0;
            FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x00000320,0);
            if (0xb < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x1ac) = 10;
              *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
              *(undefined8 *)(unaff_x20 + 0x1bc) = 0;
              uVar1 = DAT_029461fc;
              *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
              *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
              uVar5 = DAT_02946214;
              uVar4 = DAT_02946210;
              uVar13 = DAT_0294620c;
              uVar12 = DAT_02946208;
              uVar3 = DAT_02946204;
              uVar2 = DAT_02946200;
              *(undefined4 *)(unaff_x20 + 0x1cc) = 0;
              FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x000002e0,0);
              if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x1d0) = 0;
                *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
                *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
                *(undefined8 *)(unaff_x20 + 0x1dc) = 0;
                *(undefined8 *)(unaff_x20 + 0x1d4) = 0;
                uVar4 = DAT_0294622c;
                uVar13 = DAT_02946228;
                uVar12 = DAT_02946224;
                uVar3 = DAT_02946220;
                uVar2 = DAT_0294621c;
                uVar1 = DAT_02946218;
                *(undefined4 *)(unaff_x20 + 0x1f0) = 0;
                FUN_02666aac(uVar1,0,uVar2,uVar3,uVar12,uVar13,uVar4,&stack0x000002a0,0);
                if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 500) = 0xc;
                  *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x204) = 0;
                  *(undefined8 *)(unaff_x20 + 0x200) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                  uVar5 = DAT_02946248;
                  uVar4 = DAT_02946244;
                  uVar13 = DAT_02946240;
                  uVar12 = DAT_0294623c;
                  uVar3 = DAT_02946238;
                  uVar2 = DAT_02946234;
                  uVar1 = DAT_02946230;
                  *(undefined4 *)(unaff_x20 + 0x214) = 0;
                  FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x00000260,0);
                  if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
                    *(undefined8 *)(unaff_x20 + 0x230) = 0;
                    *(undefined8 *)(unaff_x20 + 0x228) = 0;
                    *(undefined8 *)(unaff_x20 + 0x224) = 0;
                    *(undefined8 *)(unaff_x20 + 0x21c) = 0;
                    uVar5 = DAT_02946264;
                    uVar4 = DAT_02946260;
                    uVar13 = DAT_0294625c;
                    uVar12 = DAT_02946258;
                    uVar3 = DAT_02946254;
                    uVar2 = DAT_02946250;
                    uVar1 = DAT_0294624c;
                    *(undefined4 *)(unaff_x20 + 0x238) = 0;
                    FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x00000220,0);
                    if (0xf < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x23c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x254) = 0;
                      *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                      uVar1 = DAT_02946268;
                      *(undefined8 *)(unaff_x20 + 0x248) = 0;
                      *(undefined8 *)(unaff_x20 + 0x240) = 0;
                      uVar5 = DAT_02946280;
                      uVar4 = DAT_0294627c;
                      uVar13 = DAT_02946278;
                      uVar12 = DAT_02946274;
                      uVar3 = DAT_02946270;
                      uVar2 = DAT_0294626c;
                      *(undefined4 *)(unaff_x20 + 0x25c) = 0;
                      uStack00000000000001e8 = 0;
                      uStack00000000000001ec = 0;
                      in_stack_000001f0 = 0;
                      in_stack_000001e0 = 0;
                      FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x000001e0,0);
                      uStack00000000000001d4 = 0;
                      uStack00000000000001d0 = in_stack_000001f0;
                      uStack00000000000001c8 = uStack00000000000001e8;
                      uStack00000000000001cc = uStack00000000000001ec;
                      in_stack_000001c0 = in_stack_000001e0;
                      if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
                        *(undefined8 *)(unaff_x20 + 0x278) = 0;
                        *(ulong *)(unaff_x20 + 0x270) =
                             CONCAT44(in_stack_000001f0,uStack00000000000001ec);
                        *(ulong *)(unaff_x20 + 0x26c) =
                             CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
                        *(undefined8 *)(unaff_x20 + 0x264) = in_stack_000001e0;
                        uVar5 = DAT_0294629c;
                        uVar4 = DAT_02946298;
                        uVar13 = DAT_02946294;
                        uVar12 = DAT_02946290;
                        uVar3 = DAT_0294628c;
                        uVar2 = DAT_02946288;
                        uVar1 = DAT_02946284;
                        *(undefined4 *)(unaff_x20 + 0x280) = 0;
                        uStack00000000000001a8 = 0;
                        uStack00000000000001ac = 0;
                        uStack00000000000001b0 = 0;
                        uStack00000000000001b4 = 0;
                        in_stack_000001a0 = 0;
                        in_stack_000001b8 = 0;
                        FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x000001a0,0)
                        ;
                        uStack0000000000000194 = CONCAT44(in_stack_000001b8,uStack00000000000001b4);
                        uStack0000000000000190 = uStack00000000000001b0;
                        uStack0000000000000188 = uStack00000000000001a8;
                        uStack000000000000018c = uStack00000000000001ac;
                        in_stack_00000180 = in_stack_000001a0;
                        if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x284) = 0x10;
                          *(undefined8 *)(unaff_x20 + 0x29c) = uStack0000000000000194;
                          *(ulong *)(unaff_x20 + 0x294) =
                               CONCAT44(uStack00000000000001b0,uStack00000000000001ac);
                          *(ulong *)(unaff_x20 + 0x290) =
                               CONCAT44(uStack00000000000001ac,uStack00000000000001a8);
                          *(undefined8 *)(unaff_x20 + 0x288) = in_stack_000001a0;
                          uVar5 = DAT_029462b8;
                          uVar4 = DAT_029462b4;
                          uVar13 = DAT_029462b0;
                          uVar12 = DAT_029462ac;
                          uVar3 = DAT_029462a8;
                          uVar2 = DAT_029462a4;
                          uVar1 = DAT_029462a0;
                          *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
                          uStack0000000000000168 = 0;
                          uStack000000000000016c = 0;
                          uStack0000000000000170 = 0;
                          uStack0000000000000174 = 0;
                          in_stack_00000160 = 0;
                          in_stack_00000178 = 0;
                          FUN_02666aac(uVar1,uVar2,uVar3,uVar12,uVar13,uVar4,uVar5,&stack0x00000160,
                                       0);
                          uStack0000000000000154 =
                               CONCAT44(in_stack_00000178,uStack0000000000000174);
                          uStack0000000000000150 = uStack0000000000000170;
                          uStack0000000000000148 = uStack0000000000000168;
                          uStack000000000000014c = uStack000000000000016c;
                          in_stack_00000140 = in_stack_00000160;
                          if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x2a8) = 0x11;
                            *(undefined8 *)(unaff_x20 + 0x2c0) = uStack0000000000000154;
                            *(ulong *)(unaff_x20 + 0x2b8) =
                                 CONCAT44(uStack0000000000000170,uStack000000000000016c);
                            *(ulong *)(unaff_x20 + 0x2b4) =
                                 CONCAT44(uStack000000000000016c,uStack0000000000000168);
                            *(undefined8 *)(unaff_x20 + 0x2ac) = in_stack_00000160;
                            uVar3 = DAT_029462c4;
                            uVar2 = DAT_029462c0;
                            uVar1 = DAT_029462bc;
                            *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
                            uStack0000000000000128 = 0;
                            uStack000000000000012c = 0;
                            uStack0000000000000130 = 0;
                            uStack0000000000000134 = 0;
                            in_stack_00000120 = 0;
                            in_stack_00000138 = 0;
                            FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000120,0);
                            uStack0000000000000114 =
                                 CONCAT44(in_stack_00000138,uStack0000000000000134);
                            uStack0000000000000110 = uStack0000000000000130;
                            uStack0000000000000108 = uStack0000000000000128;
                            uStack000000000000010c = uStack000000000000012c;
                            in_stack_00000100 = in_stack_00000120;
                            if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
                              *(undefined8 *)(unaff_x20 + 0x2e4) = uStack0000000000000114;
                              *(ulong *)(unaff_x20 + 0x2dc) =
                                   CONCAT44(uStack0000000000000130,uStack000000000000012c);
                              uVar1 = DAT_029462c8;
                              *(ulong *)(unaff_x20 + 0x2d8) =
                                   CONCAT44(uStack000000000000012c,uStack0000000000000128);
                              *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
                              uVar3 = DAT_029462d0;
                              uVar2 = DAT_029462cc;
                              *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
                              uStack00000000000000e8 = 0;
                              uStack00000000000000ec = 0;
                              uStack00000000000000f0 = 0;
                              uStack00000000000000f4 = 0;
                              in_stack_000000e0 = 0;
                              in_stack_000000f8 = 0;
                              FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000e0,0);
                              uStack00000000000000d4 =
                                   CONCAT44(in_stack_000000f8,uStack00000000000000f4);
                              uStack00000000000000d0 = uStack00000000000000f0;
                              uStack00000000000000c8 = uStack00000000000000e8;
                              uStack00000000000000cc = uStack00000000000000ec;
                              in_stack_000000c0 = in_stack_000000e0;
                              if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
                                *(undefined8 *)(unaff_x20 + 0x308) = uStack00000000000000d4;
                                *(ulong *)(unaff_x20 + 0x300) =
                                     CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
                                *(ulong *)(unaff_x20 + 0x2fc) =
                                     CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
                                *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
                                uVar3 = DAT_029462dc;
                                uVar2 = DAT_029462d8;
                                uVar1 = DAT_029462d4;
                                *(undefined4 *)(unaff_x20 + 0x310) = 0;
                                uStack00000000000000a8 = 0;
                                uStack00000000000000ac = 0;
                                uStack00000000000000b0 = 0;
                                uStack00000000000000b4 = 0;
                                in_stack_000000a0 = 0;
                                in_stack_000000b8 = 0;
                                FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000a0,0);
                                uStack0000000000000094 =
                                     CONCAT44(in_stack_000000b8,uStack00000000000000b4);
                                uStack0000000000000090 = uStack00000000000000b0;
                                uStack0000000000000088 = uStack00000000000000a8;
                                uStack000000000000008c = uStack00000000000000ac;
                                in_stack_00000080 = in_stack_000000a0;
                                if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
                                  *(undefined8 *)(unaff_x20 + 0x32c) = uStack0000000000000094;
                                  *(ulong *)(unaff_x20 + 0x324) =
                                       CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
                                  *(ulong *)(unaff_x20 + 800) =
                                       CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
                                  *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
                                  uVar3 = DAT_029462e8;
                                  uVar2 = DAT_029462e4;
                                  uVar1 = DAT_029462e0;
                                  *(undefined4 *)(unaff_x20 + 0x334) = 0;
                                  uStack0000000000000068 = 0;
                                  uStack000000000000006c = 0;
                                  uStack0000000000000070 = 0;
                                  uStack0000000000000074 = 0;
                                  in_stack_00000060 = 0;
                                  in_stack_00000078 = 0;
                                  FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000060,0
                                              );
                                  uStack0000000000000054 =
                                       CONCAT44(in_stack_00000078,uStack0000000000000074);
                                  uStack0000000000000050 = uStack0000000000000070;
                                  uStack0000000000000048 = uStack0000000000000068;
                                  uStack000000000000004c = uStack000000000000006c;
                                  in_stack_00000040 = in_stack_00000060;
                                  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
                                    *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
                                    *(ulong *)(unaff_x20 + 0x348) =
                                         CONCAT44(uStack0000000000000070,uStack000000000000006c);
                                    *(ulong *)(unaff_x20 + 0x344) =
                                         CONCAT44(uStack000000000000006c,uStack0000000000000068);
                                    *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
                                    uVar3 = DAT_029462f4;
                                    uVar2 = DAT_029462f0;
                                    uVar1 = DAT_029462ec;
                                    *(undefined4 *)(unaff_x20 + 0x358) = 0;
                                    uStack0000000000000028 = 0;
                                    uStack000000000000002c = 0;
                                    uStack0000000000000030 = 0;
                                    uStack0000000000000034 = 0;
                                    in_stack_00000020 = 0;
                                    in_stack_00000038 = 0;
                                    FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020
                                                 ,0);
                                    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
                                      *(ulong *)(unaff_x20 + 0x374) =
                                           CONCAT44(in_stack_00000038,uStack0000000000000034);
                                      *(ulong *)(unaff_x20 + 0x36c) =
                                           CONCAT44(uStack0000000000000030,uStack000000000000002c);
                                      *(ulong *)(unaff_x20 + 0x368) =
                                           CONCAT44(uStack000000000000002c,uStack0000000000000028);
                                      *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
                                      *(undefined4 *)(unaff_x20 + 0x37c) = 0;
                                      *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                      **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
                                      lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                      if (lVar8 != 0) {
                                        FUN_01a3f050();
                                        puVar7 = StringLiteral_2439;
                                        puVar6 = 
                                        System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTyped_TypeInfo
                                        ;
                                        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                                          uVar10 = *(undefined8 *)
                                                    (**(long **)(*unaff_x23 + 0xb8) + 0x10);
                                          lVar9 = *(long *)StringLiteral_2439;
                                          if (*(int *)(lVar9 + 0xe0) == 0) {
                                            thunk_FUN_00d32864();
                                            lVar9 = *(long *)puVar7;
                                          }
                                          uVar11 = **(undefined8 **)(lVar9 + 0xb8);
                                          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                          puVar7 = 
                                          Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__
                                          ;
                                          puVar6 = 
                                          Method_System_Collections_Generic_List_Enumerator<SubtitleData>_MoveNext__
                                          ;
                                          if (lVar9 != 0) {
                                            FUN_012d239c(lVar9,uVar11,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                                                  ,0);
                                            uVar10 = FUN_010dcdb8(uVar10,lVar9,*(undefined8 *)puVar7
                                                                 );
                                            uVar10 = FUN_010df6b8(uVar10,*(undefined8 *)puVar6);
                                            *(undefined8 *)(lVar8 + 0x10) = uVar10;
                                            *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar8;
                                            return;
                                          }
                                        }
                                      }
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
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
  FUN_00da5194();
}


