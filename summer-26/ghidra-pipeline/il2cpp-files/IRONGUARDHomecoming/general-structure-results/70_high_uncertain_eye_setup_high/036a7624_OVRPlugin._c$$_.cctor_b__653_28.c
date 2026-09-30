/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__653_28
ENTRY_POINT: 036a7624
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__653_28
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

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
  long *plVar16;
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
  
  *(long *)(unaff_x20 + 0x38) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x30) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x2c) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x24) = param_2._0_8_;
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  FUN_0407b788(0,0,0,0,0,0,0xbf800000,param_3,0);
  *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
  *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
  if (1 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x44) = 0;
    uVar17 = *(undefined8 *)(unaff_x21 + 0xc);
    *(undefined8 *)(unaff_x20 + 0x5c) = *(undefined8 *)(unaff_x21 + 0x14);
    *(undefined8 *)(unaff_x20 + 0x54) = uVar17;
    uVar3 = DAT_00c92454;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    uVar7 = DAT_00c92ab4;
    uVar6 = DAT_00c927e4;
    uVar5 = DAT_00c924a0;
    uVar4 = DAT_00c92458;
    uVar2 = DAT_00c92398;
    uVar1 = DAT_00c92350;
    *(undefined4 *)(unaff_x20 + 100) = 0;
    FUN_0407b788(uVar3,uVar2,uVar5,uVar6,uVar7,uVar1,uVar4,&stack0x00000560,0);
    if (2 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x68) = 0;
      *(undefined8 *)(unaff_x20 + 0x80) = 0;
      *(undefined8 *)(unaff_x20 + 0x78) = 0;
      uVar1 = DAT_00c92674;
      *(undefined8 *)(unaff_x20 + 0x74) = 0;
      *(undefined8 *)(unaff_x20 + 0x6c) = 0;
      uVar7 = DAT_00c929c0;
      uVar6 = DAT_00c928b8;
      uVar5 = DAT_00c927e8;
      uVar4 = DAT_00c927c0;
      uVar3 = DAT_00c92778;
      uVar2 = DAT_00c92728;
      *(undefined4 *)(unaff_x20 + 0x88) = 0;
      FUN_0407b788(uVar1,uVar4,uVar6,uVar5,uVar3,uVar7,uVar2,&stack0x00000520,0);
      if (3 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x8c) = 2;
        *(undefined8 *)(unaff_x20 + 0xa4) = 0;
        *(undefined8 *)(unaff_x20 + 0x9c) = 0;
        uVar3 = DAT_00c9245c;
        *(undefined8 *)(unaff_x20 + 0x98) = 0;
        *(undefined8 *)(unaff_x20 + 0x90) = 0;
        uVar7 = DAT_00c92ab8;
        uVar6 = DAT_00c929c4;
        uVar5 = DAT_00c92558;
        uVar4 = DAT_00c924a4;
        uVar2 = DAT_00c9240c;
        uVar1 = DAT_00c923c4;
        *(undefined4 *)(unaff_x20 + 0xac) = 0;
        FUN_0407b788(uVar3,uVar4,uVar1,uVar6,uVar7,uVar2,uVar5,&stack0x000004e0,0);
        if (4 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0xb0) = 3;
          *(undefined8 *)(unaff_x20 + 200) = 0;
          *(undefined8 *)(unaff_x20 + 0xc0) = 0;
          *(undefined8 *)(unaff_x20 + 0xbc) = 0;
          *(undefined8 *)(unaff_x20 + 0xb4) = 0;
          uVar7 = DAT_00c92abc;
          uVar6 = DAT_00c929c8;
          uVar5 = DAT_00c927ec;
          uVar4 = DAT_00c9277c;
          uVar3 = DAT_00c926bc;
          uVar2 = DAT_00c9239c;
          *(undefined4 *)(unaff_x20 + 0xd0) = 0;
          FUN_0407b788(uVar5,uVar6,uVar1,uVar4,uVar3,uVar7,uVar2,&stack0x000004a0,0);
          if (5 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0xd4) = 4;
            *(undefined8 *)(unaff_x20 + 0xec) = 0;
            *(undefined8 *)(unaff_x20 + 0xe4) = 0;
            uVar6 = DAT_00c9272c;
            *(undefined8 *)(unaff_x20 + 0xe0) = 0;
            *(undefined8 *)(unaff_x20 + 0xd8) = 0;
            uVar7 = DAT_00c92ac0;
            uVar5 = DAT_00c926c0;
            uVar4 = DAT_00c9255c;
            uVar3 = DAT_00c924ac;
            uVar2 = DAT_00c924a8;
            uVar1 = DAT_00c92460;
            *(undefined4 *)(unaff_x20 + 0xf4) = 0;
            FUN_0407b788(uVar6,uVar7,uVar4,uVar5,uVar2,uVar1,uVar3,&stack0x00000460,0);
            if (6 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0xf8) = 0;
              *(undefined8 *)(unaff_x20 + 0x110) = 0;
              *(undefined8 *)(unaff_x20 + 0x108) = 0;
              uVar4 = DAT_00c926c4;
              *(undefined8 *)(unaff_x20 + 0x104) = 0;
              *(undefined8 *)(unaff_x20 + 0xfc) = 0;
              uVar7 = DAT_00c929cc;
              uVar6 = DAT_00c927c4;
              uVar5 = DAT_00c926f0;
              uVar3 = DAT_00c92560;
              uVar2 = DAT_00c92500;
              uVar1 = DAT_00c92410;
              *(undefined4 *)(unaff_x20 + 0x118) = 0;
              FUN_0407b788(uVar4,uVar3,uVar6,uVar1,uVar2,uVar5,uVar7,&stack0x00000420,0);
              if (7 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x11c) = 6;
                *(undefined8 *)(unaff_x20 + 0x134) = 0;
                *(undefined8 *)(unaff_x20 + 300) = 0;
                uVar5 = DAT_00c927f0;
                *(undefined8 *)(unaff_x20 + 0x128) = 0;
                *(undefined8 *)(unaff_x20 + 0x120) = 0;
                uVar7 = DAT_00c92a40;
                uVar6 = DAT_00c928bc;
                uVar4 = DAT_00c92780;
                uVar3 = DAT_00c926f4;
                uVar2 = DAT_00c92414;
                uVar1 = DAT_00c923c8;
                *(undefined4 *)(unaff_x20 + 0x13c) = 0;
                FUN_0407b788(uVar5,uVar6,uVar2,uVar3,uVar1,uVar7,uVar4,&stack0x000003e0,0);
                if (8 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x140) = 7;
                  *(undefined8 *)(unaff_x20 + 0x158) = 0;
                  *(undefined8 *)(unaff_x20 + 0x150) = 0;
                  *(undefined8 *)(unaff_x20 + 0x14c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x144) = 0;
                  uVar7 = DAT_00c92958;
                  uVar6 = DAT_00c92880;
                  uVar5 = DAT_00c92784;
                  uVar4 = DAT_00c92730;
                  uVar3 = DAT_00c92638;
                  uVar2 = DAT_00c925ac;
                  uVar1 = DAT_00c923cc;
                  *(undefined4 *)(unaff_x20 + 0x160) = 0;
                  FUN_0407b788(uVar3,uVar7,uVar2,uVar6,uVar5,uVar4,uVar1,&stack0x000003a0,0);
                  if (9 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x164) = 0;
                    *(undefined8 *)(unaff_x20 + 0x17c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x174) = 0;
                    *(undefined8 *)(unaff_x20 + 0x170) = 0;
                    *(undefined8 *)(unaff_x20 + 0x168) = 0;
                    uVar7 = DAT_00c92ac4;
                    uVar6 = DAT_00c9295c;
                    uVar5 = DAT_00c928ec;
                    uVar4 = DAT_00c92734;
                    uVar3 = DAT_00c92564;
                    uVar2 = DAT_00c92464;
                    uVar1 = DAT_00c923a0;
                    *(undefined4 *)(unaff_x20 + 0x184) = 0;
                    FUN_0407b788(uVar7,uVar1,uVar3,uVar5,uVar6,uVar2,uVar4,&stack0x00000360,0);
                    if (10 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x188) = 9;
                      *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x198) = 0;
                      *(undefined8 *)(unaff_x20 + 0x194) = 0;
                      *(undefined8 *)(unaff_x20 + 0x18c) = 0;
                      uVar7 = DAT_00c92a44;
                      uVar6 = DAT_00c928f0;
                      uVar5 = DAT_00c92738;
                      uVar4 = DAT_00c92640;
                      uVar3 = DAT_00c9263c;
                      uVar2 = DAT_00c92568;
                      uVar1 = DAT_00c923d0;
                      *(undefined4 *)(unaff_x20 + 0x1a8) = 0;
                      FUN_0407b788(uVar1,uVar6,uVar2,uVar3,uVar7,uVar4,uVar5,&stack0x00000320,0);
                      if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x1ac) = 10;
                        *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1bc) = 0;
                        uVar1 = DAT_00c92468;
                        *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                        uVar7 = DAT_00c92a48;
                        uVar6 = DAT_00c929d0;
                        uVar5 = DAT_00c92858;
                        uVar4 = DAT_00c926c8;
                        uVar3 = DAT_00c92644;
                        uVar2 = DAT_00c924b0;
                        *(undefined4 *)(unaff_x20 + 0x1cc) = 0;
                        FUN_0407b788(uVar1,uVar6,uVar7,uVar2,uVar3,uVar5,uVar4,&stack0x000002e0,0);
                        if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x1d0) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1dc) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1d4) = 0;
                          uVar6 = DAT_00c92984;
                          uVar5 = DAT_00c92814;
                          uVar4 = DAT_00c92648;
                          uVar3 = DAT_00c92570;
                          uVar2 = DAT_00c9256c;
                          uVar1 = DAT_00c924b4;
                          *(undefined4 *)(unaff_x20 + 0x1f0) = 0;
                          FUN_0407b788(uVar5,0,uVar1,uVar6,uVar2,uVar4,uVar3,&stack0x000002a0,0);
                          if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 500) = 0xc;
                            *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x204) = 0;
                            *(undefined8 *)(unaff_x20 + 0x200) = 0;
                            *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                            uVar7 = DAT_00c92884;
                            uVar6 = DAT_00c9281c;
                            uVar5 = DAT_00c92818;
                            uVar4 = DAT_00c92788;
                            uVar3 = DAT_00c9273c;
                            uVar2 = DAT_00c92678;
                            uVar1 = DAT_00c924b8;
                            *(undefined4 *)(unaff_x20 + 0x214) = 0;
                            FUN_0407b788(uVar1,uVar3,uVar5,uVar4,uVar6,uVar7,uVar2,&stack0x00000260,
                                         0);
                            if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
                              *(undefined8 *)(unaff_x20 + 0x230) = 0;
                              *(undefined8 *)(unaff_x20 + 0x228) = 0;
                              *(undefined8 *)(unaff_x20 + 0x224) = 0;
                              *(undefined8 *)(unaff_x20 + 0x21c) = 0;
                              uVar7 = DAT_00c929d4;
                              uVar6 = DAT_00c92960;
                              uVar5 = DAT_00c928f8;
                              uVar4 = DAT_00c928f4;
                              uVar3 = DAT_00c92790;
                              uVar2 = DAT_00c9278c;
                              uVar1 = DAT_00c9260c;
                              *(undefined4 *)(unaff_x20 + 0x238) = 0;
                              FUN_0407b788(uVar4,uVar5,uVar2,uVar3,uVar7,uVar1,uVar6,
                                           &stack0x00000220,0);
                              if (0xf < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x23c) = 0;
                                *(undefined8 *)(unaff_x20 + 0x254) = 0;
                                *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                                uVar1 = DAT_00c924bc;
                                *(undefined8 *)(unaff_x20 + 0x248) = 0;
                                *(undefined8 *)(unaff_x20 + 0x240) = 0;
                                uVar7 = DAT_00c92a70;
                                uVar6 = DAT_00c92988;
                                uVar5 = DAT_00c92820;
                                uVar4 = DAT_00c92610;
                                uVar3 = DAT_00c92574;
                                uVar2 = DAT_00c92504;
                                *(undefined4 *)(unaff_x20 + 0x25c) = 0;
                                in_stack_000001e0 = 0;
                                uStack00000000000001e8 = 0;
                                uStack00000000000001ec = 0;
                                in_stack_000001f0 = 0;
                                FUN_0407b788(uVar1,uVar7,uVar6,uVar4,uVar2,uVar5,uVar3,
                                             &stack0x000001e0,0);
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
                                  uVar7 = DAT_00c927f4;
                                  uVar6 = DAT_00c92798;
                                  uVar5 = DAT_00c92794;
                                  uVar4 = DAT_00c926f8;
                                  uVar3 = DAT_00c9267c;
                                  uVar2 = DAT_00c92418;
                                  uVar1 = DAT_00c92354;
                                  *(undefined4 *)(unaff_x20 + 0x280) = 0;
                                  in_stack_000001a0 = 0;
                                  uStack00000000000001a8 = 0;
                                  uStack00000000000001ac = 0;
                                  in_stack_000001b8 = 0;
                                  uStack00000000000001b0 = 0;
                                  uStack00000000000001b4 = 0;
                                  FUN_0407b788(uVar5,uVar7,uVar2,uVar1,uVar6,uVar4,uVar3,
                                               &stack0x000001a0,0);
                                  uStack0000000000000194 =
                                       CONCAT44(in_stack_000001b8,uStack00000000000001b4);
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
                                    uVar7 = DAT_00c92ac8;
                                    uVar6 = DAT_00c92a74;
                                    uVar5 = DAT_00c925b4;
                                    uVar4 = DAT_00c925b0;
                                    uVar3 = DAT_00c92508;
                                    uVar2 = DAT_00c924c0;
                                    uVar1 = DAT_00c9246c;
                                    *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
                                    in_stack_00000160 = 0;
                                    uStack0000000000000168 = 0;
                                    uStack000000000000016c = 0;
                                    in_stack_00000178 = 0;
                                    uStack0000000000000170 = 0;
                                    uStack0000000000000174 = 0;
                                    FUN_0407b788(uVar6,uVar2,uVar4,uVar1,uVar3,uVar7,uVar5,
                                                 &stack0x00000160,0);
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
                                      uVar3 = DAT_00c92824;
                                      uVar2 = DAT_00c92470;
                                      uVar1 = DAT_00c923d4;
                                      *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
                                      in_stack_00000120 = 0;
                                      uStack0000000000000128 = 0;
                                      uStack000000000000012c = 0;
                                      in_stack_00000138 = 0;
                                      uStack0000000000000130 = 0;
                                      uStack0000000000000134 = 0;
                                      FUN_0407b788(uVar1,uVar3,uVar2,0,0,0,0xbf800000,
                                                   &stack0x00000120,0);
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
                                             CONCAT44(uStack0000000000000130,uStack000000000000012c)
                                        ;
                                        *(ulong *)(unaff_x20 + 0x2d8) =
                                             CONCAT44(uStack000000000000012c,uStack0000000000000128)
                                        ;
                                        *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
                                        uVar3 = DAT_00c927f8;
                                        uVar2 = DAT_00c926cc;
                                        uVar1 = DAT_00c92320;
                                        *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
                                        in_stack_000000e0 = 0;
                                        uStack00000000000000e8 = 0;
                                        uStack00000000000000ec = 0;
                                        in_stack_000000f8 = 0;
                                        uStack00000000000000f0 = 0;
                                        uStack00000000000000f4 = 0;
                                        FUN_0407b788(uVar1,uVar2,uVar3,0,0,0,0xbf800000,
                                                     &stack0x000000e0,0);
                                        uStack00000000000000d4 =
                                             CONCAT44(in_stack_000000f8,uStack00000000000000f4);
                                        uStack00000000000000d0 = uStack00000000000000f0;
                                        uStack00000000000000c8 = uStack00000000000000e8;
                                        uStack00000000000000cc = uStack00000000000000ec;
                                        in_stack_000000c0 = in_stack_000000e0;
                                        if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                          *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
                                          *(undefined8 *)(unaff_x20 + 0x308) =
                                               uStack00000000000000d4;
                                          *(ulong *)(unaff_x20 + 0x300) =
                                               CONCAT44(uStack00000000000000f0,
                                                        uStack00000000000000ec);
                                          *(ulong *)(unaff_x20 + 0x2fc) =
                                               CONCAT44(uStack00000000000000ec,
                                                        uStack00000000000000e8);
                                          *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
                                          uVar3 = DAT_00c92888;
                                          uVar2 = DAT_00c92828;
                                          uVar1 = DAT_00c92358;
                                          *(undefined4 *)(unaff_x20 + 0x310) = 0;
                                          in_stack_000000a0 = 0;
                                          uStack00000000000000a8 = 0;
                                          uStack00000000000000ac = 0;
                                          in_stack_000000b8 = 0;
                                          uStack00000000000000b0 = 0;
                                          uStack00000000000000b4 = 0;
                                          FUN_0407b788(uVar1,uVar2,uVar3,0,0,0,0xbf800000,
                                                       &stack0x000000a0,0);
                                          uStack0000000000000094 =
                                               CONCAT44(in_stack_000000b8,uStack00000000000000b4);
                                          uStack0000000000000090 = uStack00000000000000b0;
                                          uStack0000000000000088 = uStack00000000000000a8;
                                          uStack000000000000008c = uStack00000000000000ac;
                                          in_stack_00000080 = in_stack_000000a0;
                                          if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                            *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
                                            *(undefined8 *)(unaff_x20 + 0x32c) =
                                                 uStack0000000000000094;
                                            *(ulong *)(unaff_x20 + 0x324) =
                                                 CONCAT44(uStack00000000000000b0,
                                                          uStack00000000000000ac);
                                            *(ulong *)(unaff_x20 + 800) =
                                                 CONCAT44(uStack00000000000000ac,
                                                          uStack00000000000000a8);
                                            *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
                                            uVar3 = DAT_00c928fc;
                                            uVar2 = DAT_00c9264c;
                                            uVar1 = DAT_00c924c4;
                                            *(undefined4 *)(unaff_x20 + 0x334) = 0;
                                            in_stack_00000060 = 0;
                                            uStack0000000000000068 = 0;
                                            uStack000000000000006c = 0;
                                            in_stack_00000078 = 0;
                                            uStack0000000000000070 = 0;
                                            uStack0000000000000074 = 0;
                                            FUN_0407b788(uVar2,uVar3,uVar1,0,0,0,0xbf800000,
                                                         &stack0x00000060,0);
                                            uStack0000000000000054 =
                                                 CONCAT44(in_stack_00000078,uStack0000000000000074);
                                            uStack0000000000000050 = uStack0000000000000070;
                                            uStack0000000000000048 = uStack0000000000000068;
                                            uStack000000000000004c = uStack000000000000006c;
                                            in_stack_00000040 = in_stack_00000060;
                                            if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                              *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
                                              *(undefined8 *)(unaff_x20 + 0x350) =
                                                   uStack0000000000000054;
                                              *(ulong *)(unaff_x20 + 0x348) =
                                                   CONCAT44(uStack0000000000000070,
                                                            uStack000000000000006c);
                                              *(ulong *)(unaff_x20 + 0x344) =
                                                   CONCAT44(uStack000000000000006c,
                                                            uStack0000000000000068);
                                              *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060
                                              ;
                                              uVar3 = DAT_00c9298c;
                                              uVar2 = DAT_00c9292c;
                                              uVar1 = DAT_00c92680;
                                              *(undefined4 *)(unaff_x20 + 0x358) = 0;
                                              in_stack_00000020 = 0;
                                              uStack0000000000000028 = 0;
                                              uStack000000000000002c = 0;
                                              in_stack_00000038 = 0;
                                              uStack0000000000000030 = 0;
                                              uStack0000000000000034 = 0;
                                              FUN_0407b788(uVar3,uVar1,uVar2,0,0,0,0xbf800000,
                                                           &stack0x00000020,0);
                                              if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                                *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
                                                *(ulong *)(unaff_x20 + 0x374) =
                                                     CONCAT44(in_stack_00000038,
                                                              uStack0000000000000034);
                                                *(ulong *)(unaff_x20 + 0x36c) =
                                                     CONCAT44(uStack0000000000000030,
                                                              uStack000000000000002c);
                                                *(ulong *)(unaff_x20 + 0x368) =
                                                     CONCAT44(uStack000000000000002c,
                                                              uStack0000000000000028);
                                                *(undefined8 *)(unaff_x20 + 0x360) =
                                                     in_stack_00000020;
                                                *(undefined4 *)(unaff_x20 + 0x37c) = 0;
                                                if (unaff_x19 != 0) {
                                                  *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                                  thunk_FUN_01f51358();
                                                  **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
                                                  thunk_FUN_01f51358(*(undefined8 *)
                                                                      (*unaff_x23 + 0xb8));
                                                  lVar13 = thunk_FUN_01f117cc(*unaff_x23);
                                                  FUN_036a7490();
                                                  puVar12 = 
                                                  Method_UnityEngine_UIElements_PointerCaptureOutEvent_<>c_<_cctor>b__0_0__
                                                  ;
                                                  puVar11 = 
                                                  Method_UnityEngine_UIElements_PointerCaptureEvent_<>c_<_cctor>b__0_0__
                                                  ;
                                                  puVar10 = 
                                                  Method_UnityEngine_UIElements_PointerCancelEvent_<>c_<_cctor>b__0_0__
                                                  ;
                                                  puVar9 = 
                                                  Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__
                                                  ;
                                                  puVar8 = 
                                                  Method_Oculus_Interaction_PointableCanvasModule_<>c__DisplayClass24_0_<AddPointerCanvas>b__0__
                                                  ;
                                                  if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                                                    lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_PointerCaptureOutEvent_<>c_<_cctor>b__0_0__
                                                  ;
                                                  uVar17 = *(undefined8 *)
                                                            (**(long **)(*unaff_x23 + 0xb8) + 0x10);
                                                  if (*(int *)(lVar14 + 0xe0) == 0) {
                                                    thunk_FUN_01ee6d7c();
                                                    lVar14 = *(long *)puVar12;
                                                  }
                                                  uVar18 = **(undefined8 **)(lVar14 + 0xb8);
                                                  uVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar10
                                                                             );
                                                  FUN_02e67ddc(uVar15,uVar18,*(undefined8 *)puVar11,
                                                               0);
                                                  uVar17 = FUN_022fdf24(uVar17,uVar15,
                                                                        *(undefined8 *)puVar8);
                                                  uVar17 = FUN_02308890(uVar17,*(undefined8 *)puVar9
                                                                       );
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar17;
                                                    thunk_FUN_01f51358();
                                                    plVar16 = (long *)(*(long *)(*unaff_x23 + 0xb8)
                                                                      + 8);
                                                    *plVar16 = lVar13;
                                                    thunk_FUN_01f51358(plVar16,lVar13);
                                                    return;
                                                  }
                                                  }
                                                }
                    /* WARNING: Subroutine does not return */
                                                FUN_01f08a3c();
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
  FUN_01f08a44();
}


