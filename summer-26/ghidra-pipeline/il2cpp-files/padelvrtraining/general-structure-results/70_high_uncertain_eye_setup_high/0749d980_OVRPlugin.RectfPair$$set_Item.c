/*
FUNCTION_NAME: OVRPlugin.RectfPair$$set_Item
ENTRY_POINT: 0749d980
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


void OVRPlugin_RectfPair__set_Item(undefined1 param_1 [16],undefined1 param_2 [16])

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
  
  *(long *)(unaff_x20 + 0x5c) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x54) = param_1._0_8_;
  uVar3 = DAT_019142cc;
  *(long *)(unaff_x20 + 0x50) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x48) = param_2._0_8_;
  uVar7 = DAT_01915284;
  uVar6 = DAT_01914aac;
  uVar5 = DAT_0191437c;
  uVar4 = DAT_019142d0;
  uVar2 = DAT_019140c0;
  uVar1 = DAT_01914028;
  *(undefined4 *)(unaff_x20 + 100) = 0;
  FUN_08a5b7d0(uVar3,uVar2,uVar5,uVar6,uVar7,uVar1,uVar4,&stack0x00000560,0);
  if (2 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0;
    uVar1 = DAT_0191472c;
    *(undefined8 *)(unaff_x20 + 0x74) = 0;
    *(undefined8 *)(unaff_x20 + 0x6c) = 0;
    uVar7 = DAT_0191500c;
    uVar6 = DAT_01914d20;
    uVar5 = DAT_01914ab0;
    uVar4 = DAT_01914a28;
    uVar3 = DAT_01914988;
    uVar2 = DAT_01914900;
    *(undefined4 *)(unaff_x20 + 0x88) = 0;
    FUN_08a5b7d0(uVar1,uVar4,uVar6,uVar5,uVar3,uVar7,uVar2,&stack0x00000520,0);
    if (3 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x8c) = 2;
      *(undefined8 *)(unaff_x20 + 0xa4) = 0;
      *(undefined8 *)(unaff_x20 + 0x9c) = 0;
      uVar3 = DAT_019142d4;
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      *(undefined8 *)(unaff_x20 + 0x90) = 0;
      uVar7 = DAT_01915288;
      uVar6 = DAT_01915010;
      uVar5 = DAT_01914488;
      uVar4 = DAT_01914380;
      uVar2 = DAT_0191423c;
      uVar1 = DAT_01914174;
      *(undefined4 *)(unaff_x20 + 0xac) = 0;
      FUN_08a5b7d0(uVar3,uVar4,uVar1,uVar6,uVar7,uVar2,uVar5,&stack0x000004e0,0);
      if (4 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0xb0) = 3;
        *(undefined8 *)(unaff_x20 + 200) = 0;
        *(undefined8 *)(unaff_x20 + 0xc0) = 0;
        *(undefined8 *)(unaff_x20 + 0xbc) = 0;
        *(undefined8 *)(unaff_x20 + 0xb4) = 0;
        uVar7 = DAT_0191528c;
        uVar6 = DAT_01915014;
        uVar5 = DAT_01914ab4;
        uVar4 = DAT_0191498c;
        uVar3 = DAT_019147dc;
        uVar2 = DAT_019140c4;
        *(undefined4 *)(unaff_x20 + 0xd0) = 0;
        FUN_08a5b7d0(uVar5,uVar6,uVar1,uVar4,uVar3,uVar7,uVar2,&stack0x000004a0,0);
        if (5 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0xd4) = 4;
          *(undefined8 *)(unaff_x20 + 0xec) = 0;
          *(undefined8 *)(unaff_x20 + 0xe4) = 0;
          uVar6 = DAT_01914904;
          *(undefined8 *)(unaff_x20 + 0xe0) = 0;
          *(undefined8 *)(unaff_x20 + 0xd8) = 0;
          uVar7 = DAT_01915290;
          uVar5 = DAT_019147e0;
          uVar4 = DAT_0191448c;
          uVar3 = DAT_01914388;
          uVar2 = DAT_01914384;
          uVar1 = DAT_019142d8;
          *(undefined4 *)(unaff_x20 + 0xf4) = 0;
          FUN_08a5b7d0(uVar6,uVar7,uVar4,uVar5,uVar2,uVar1,uVar3,&stack0x00000460,0);
          if (6 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0xf8) = 0;
            *(undefined8 *)(unaff_x20 + 0x110) = 0;
            *(undefined8 *)(unaff_x20 + 0x108) = 0;
            uVar4 = DAT_019147e4;
            *(undefined8 *)(unaff_x20 + 0x104) = 0;
            *(undefined8 *)(unaff_x20 + 0xfc) = 0;
            uVar7 = DAT_01915018;
            uVar6 = DAT_01914a2c;
            uVar5 = DAT_0191486c;
            uVar3 = DAT_01914490;
            uVar2 = DAT_01914420;
            uVar1 = DAT_01914240;
            *(undefined4 *)(unaff_x20 + 0x118) = 0;
            FUN_08a5b7d0(uVar4,uVar3,uVar6,uVar1,uVar2,uVar5,uVar7,&stack0x00000420,0);
            if (7 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x11c) = 6;
              *(undefined8 *)(unaff_x20 + 0x134) = 0;
              *(undefined8 *)(unaff_x20 + 300) = 0;
              uVar5 = DAT_01914ab8;
              *(undefined8 *)(unaff_x20 + 0x128) = 0;
              *(undefined8 *)(unaff_x20 + 0x120) = 0;
              uVar7 = DAT_01915140;
              uVar6 = DAT_01914d24;
              uVar4 = DAT_01914990;
              uVar3 = DAT_01914870;
              uVar2 = DAT_01914244;
              uVar1 = DAT_01914178;
              *(undefined4 *)(unaff_x20 + 0x13c) = 0;
              FUN_08a5b7d0(uVar5,uVar6,uVar2,uVar3,uVar1,uVar7,uVar4,&stack0x000003e0,0);
              if (8 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x140) = 7;
                *(undefined8 *)(unaff_x20 + 0x158) = 0;
                *(undefined8 *)(unaff_x20 + 0x150) = 0;
                *(undefined8 *)(unaff_x20 + 0x14c) = 0;
                *(undefined8 *)(unaff_x20 + 0x144) = 0;
                uVar7 = DAT_01914ef4;
                uVar6 = DAT_01914c74;
                uVar5 = DAT_01914994;
                uVar4 = DAT_01914908;
                uVar3 = DAT_01914698;
                uVar2 = DAT_0191451c;
                uVar1 = DAT_0191417c;
                *(undefined4 *)(unaff_x20 + 0x160) = 0;
                FUN_08a5b7d0(uVar3,uVar7,uVar2,uVar6,uVar5,uVar4,uVar1,&stack0x000003a0,0);
                if (9 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x164) = 0;
                  *(undefined8 *)(unaff_x20 + 0x17c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x174) = 0;
                  *(undefined8 *)(unaff_x20 + 0x170) = 0;
                  *(undefined8 *)(unaff_x20 + 0x168) = 0;
                  uVar7 = DAT_01915294;
                  uVar6 = DAT_01914ef8;
                  uVar5 = DAT_01914db0;
                  uVar4 = DAT_0191490c;
                  uVar3 = DAT_01914494;
                  uVar2 = DAT_019142dc;
                  uVar1 = DAT_019140c8;
                  *(undefined4 *)(unaff_x20 + 0x184) = 0;
                  FUN_08a5b7d0(uVar7,uVar1,uVar3,uVar5,uVar6,uVar2,uVar4,&stack0x00000360,0);
                  if (10 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x188) = 9;
                    *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x198) = 0;
                    *(undefined8 *)(unaff_x20 + 0x194) = 0;
                    *(undefined8 *)(unaff_x20 + 0x18c) = 0;
                    uVar7 = DAT_01915144;
                    uVar6 = DAT_01914db4;
                    uVar5 = DAT_01914910;
                    uVar4 = DAT_019146a0;
                    uVar3 = DAT_0191469c;
                    uVar2 = DAT_01914498;
                    uVar1 = DAT_01914180;
                    *(undefined4 *)(unaff_x20 + 0x1a8) = 0;
                    FUN_08a5b7d0(uVar1,uVar6,uVar2,uVar3,uVar7,uVar4,uVar5,&stack0x00000320,0);
                    if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x1ac) = 10;
                      *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1bc) = 0;
                      uVar1 = DAT_019142e0;
                      *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                      uVar7 = DAT_01915148;
                      uVar6 = DAT_0191501c;
                      uVar5 = DAT_01914be0;
                      uVar4 = DAT_019147e8;
                      uVar3 = DAT_019146a4;
                      uVar2 = DAT_0191438c;
                      *(undefined4 *)(unaff_x20 + 0x1cc) = 0;
                      FUN_08a5b7d0(uVar1,uVar6,uVar7,uVar2,uVar3,uVar5,uVar4,&stack0x000002e0,0);
                      if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x1d0) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1dc) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1d4) = 0;
                        uVar6 = DAT_01914f6c;
                        uVar5 = DAT_01914b2c;
                        uVar4 = DAT_019146a8;
                        uVar3 = DAT_019144a0;
                        uVar2 = DAT_0191449c;
                        uVar1 = DAT_01914390;
                        *(undefined4 *)(unaff_x20 + 0x1f0) = 0;
                        FUN_08a5b7d0(uVar5,0,uVar1,uVar6,uVar2,uVar4,uVar3,&stack0x000002a0,0);
                        if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 500) = 0xc;
                          *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x204) = 0;
                          *(undefined8 *)(unaff_x20 + 0x200) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                          uVar7 = DAT_01914c78;
                          uVar6 = DAT_01914b34;
                          uVar5 = DAT_01914b30;
                          uVar4 = DAT_01914998;
                          uVar3 = DAT_01914914;
                          uVar2 = DAT_01914730;
                          uVar1 = DAT_01914394;
                          *(undefined4 *)(unaff_x20 + 0x214) = 0;
                          FUN_08a5b7d0(uVar1,uVar3,uVar5,uVar4,uVar6,uVar7,uVar2,&stack0x00000260,0)
                          ;
                          if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
                            *(undefined8 *)(unaff_x20 + 0x230) = 0;
                            *(undefined8 *)(unaff_x20 + 0x228) = 0;
                            *(undefined8 *)(unaff_x20 + 0x224) = 0;
                            *(undefined8 *)(unaff_x20 + 0x21c) = 0;
                            uVar7 = DAT_01915020;
                            uVar6 = DAT_01914efc;
                            uVar5 = DAT_01914dbc;
                            uVar4 = DAT_01914db8;
                            uVar3 = DAT_019149a0;
                            uVar2 = DAT_0191499c;
                            uVar1 = DAT_019145ec;
                            *(undefined4 *)(unaff_x20 + 0x238) = 0;
                            FUN_08a5b7d0(uVar4,uVar5,uVar2,uVar3,uVar7,uVar1,uVar6,&stack0x00000220,
                                         0);
                            if (0xf < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x23c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x254) = 0;
                              *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                              uVar1 = DAT_01914398;
                              *(undefined8 *)(unaff_x20 + 0x248) = 0;
                              *(undefined8 *)(unaff_x20 + 0x240) = 0;
                              uVar7 = DAT_019151e4;
                              uVar6 = DAT_01914f70;
                              uVar5 = DAT_01914b38;
                              uVar4 = DAT_019145f0;
                              uVar3 = DAT_019144a4;
                              uVar2 = DAT_01914424;
                              *(undefined4 *)(unaff_x20 + 0x25c) = 0;
                              in_stack_000001e0 = 0;
                              uStack00000000000001e8 = 0;
                              uStack00000000000001ec = 0;
                              in_stack_000001f0 = 0;
                              FUN_08a5b7d0(uVar1,uVar7,uVar6,uVar4,uVar2,uVar5,uVar3,
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
                                uVar7 = DAT_01914abc;
                                uVar6 = DAT_019149a8;
                                uVar5 = DAT_019149a4;
                                uVar4 = DAT_01914874;
                                uVar3 = DAT_01914734;
                                uVar2 = DAT_01914248;
                                uVar1 = DAT_0191402c;
                                *(undefined4 *)(unaff_x20 + 0x280) = 0;
                                in_stack_000001a0 = 0;
                                uStack00000000000001a8 = 0;
                                uStack00000000000001ac = 0;
                                in_stack_000001b8 = 0;
                                uStack00000000000001b0 = 0;
                                uStack00000000000001b4 = 0;
                                FUN_08a5b7d0(uVar5,uVar7,uVar2,uVar1,uVar6,uVar4,uVar3,
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
                                  uVar7 = DAT_01915298;
                                  uVar6 = DAT_019151e8;
                                  uVar5 = DAT_01914524;
                                  uVar4 = DAT_01914520;
                                  uVar3 = DAT_01914428;
                                  uVar2 = DAT_0191439c;
                                  uVar1 = DAT_019142e4;
                                  *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
                                  in_stack_00000160 = 0;
                                  uStack0000000000000168 = 0;
                                  uStack000000000000016c = 0;
                                  in_stack_00000178 = 0;
                                  uStack0000000000000170 = 0;
                                  uStack0000000000000174 = 0;
                                  FUN_08a5b7d0(uVar6,uVar2,uVar4,uVar1,uVar3,uVar7,uVar5,
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
                                    uVar3 = DAT_01914b3c;
                                    uVar2 = DAT_019142e8;
                                    uVar1 = DAT_01914184;
                                    *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
                                    in_stack_00000120 = 0;
                                    uStack0000000000000128 = 0;
                                    uStack000000000000012c = 0;
                                    in_stack_00000138 = 0;
                                    uStack0000000000000130 = 0;
                                    uStack0000000000000134 = 0;
                                    FUN_08a5b7d0(uVar1,uVar3,uVar2,0,0,0,0xbf800000,&stack0x00000120
                                                 ,0);
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
                                      *(ulong *)(unaff_x20 + 0x2d8) =
                                           CONCAT44(uStack000000000000012c,uStack0000000000000128);
                                      *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
                                      uVar3 = DAT_01914ac0;
                                      uVar2 = DAT_019147ec;
                                      uVar1 = DAT_01913f8c;
                                      *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
                                      in_stack_000000e0 = 0;
                                      uStack00000000000000e8 = 0;
                                      uStack00000000000000ec = 0;
                                      in_stack_000000f8 = 0;
                                      uStack00000000000000f0 = 0;
                                      uStack00000000000000f4 = 0;
                                      FUN_08a5b7d0(uVar1,uVar2,uVar3,0,0,0,0xbf800000,
                                                   &stack0x000000e0,0);
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
                                             CONCAT44(uStack00000000000000f0,uStack00000000000000ec)
                                        ;
                                        *(ulong *)(unaff_x20 + 0x2fc) =
                                             CONCAT44(uStack00000000000000ec,uStack00000000000000e8)
                                        ;
                                        *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
                                        uVar3 = DAT_01914c7c;
                                        uVar2 = DAT_01914b40;
                                        uVar1 = DAT_01914030;
                                        *(undefined4 *)(unaff_x20 + 0x310) = 0;
                                        in_stack_000000a0 = 0;
                                        uStack00000000000000a8 = 0;
                                        uStack00000000000000ac = 0;
                                        in_stack_000000b8 = 0;
                                        uStack00000000000000b0 = 0;
                                        uStack00000000000000b4 = 0;
                                        FUN_08a5b7d0(uVar1,uVar2,uVar3,0,0,0,0xbf800000,
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
                                          uVar3 = DAT_01914dc0;
                                          uVar2 = DAT_019146ac;
                                          uVar1 = DAT_019143a0;
                                          *(undefined4 *)(unaff_x20 + 0x334) = 0;
                                          in_stack_00000060 = 0;
                                          uStack0000000000000068 = 0;
                                          uStack000000000000006c = 0;
                                          in_stack_00000078 = 0;
                                          uStack0000000000000070 = 0;
                                          uStack0000000000000074 = 0;
                                          FUN_08a5b7d0(uVar2,uVar3,uVar1,0,0,0,0xbf800000,
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
                                            *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
                                            uVar3 = DAT_01914f74;
                                            uVar2 = DAT_01914e48;
                                            uVar1 = DAT_01914738;
                                            *(undefined4 *)(unaff_x20 + 0x358) = 0;
                                            in_stack_00000020 = 0;
                                            uStack0000000000000028 = 0;
                                            uStack000000000000002c = 0;
                                            in_stack_00000038 = 0;
                                            uStack0000000000000030 = 0;
                                            uStack0000000000000034 = 0;
                                            FUN_08a5b7d0(uVar3,uVar1,uVar2,0,0,0,0xbf800000,
                                                         &stack0x00000020,0);
                                            if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                              *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
                                              *(ulong *)(unaff_x20 + 0x374) =
                                                   CONCAT44(in_stack_00000038,uStack0000000000000034
                                                           );
                                              *(ulong *)(unaff_x20 + 0x36c) =
                                                   CONCAT44(uStack0000000000000030,
                                                            uStack000000000000002c);
                                              *(ulong *)(unaff_x20 + 0x368) =
                                                   CONCAT44(uStack000000000000002c,
                                                            uStack0000000000000028);
                                              *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020
                                              ;
                                              *(undefined4 *)(unaff_x20 + 0x37c) = 0;
                                              if (unaff_x19 != 0) {
                                                *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                                thunk_FUN_03d1023c();
                                                **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
                                                thunk_FUN_03d1023c(*(undefined8 *)
                                                                    (*unaff_x23 + 0xb8));
                                                lVar13 = thunk_FUN_03d2ef40(*unaff_x23);
                                                FUN_0749d784();
                                                puVar12 = PTR_DAT_09223cc0;
                                                puVar11 = PTR_DAT_09223cb8;
                                                puVar10 = PTR_DAT_09223cb0;
                                                puVar9 = PTR_DAT_09223ca8;
                                                puVar8 = PTR_DAT_09223ca0;
                                                if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                                                  lVar14 = *(long *)PTR_DAT_09223cc0;
                                                  uVar17 = *(undefined8 *)
                                                            (**(long **)(*unaff_x23 + 0xb8) + 0x10);
                                                  if (*(int *)(lVar14 + 0xe0) == 0) {
                                                    thunk_FUN_03db619c();
                                                    lVar14 = *(long *)puVar12;
                                                  }
                                                  uVar18 = **(undefined8 **)(lVar14 + 0xb8);
                                                  uVar15 = thunk_FUN_03d2ef40(*(undefined8 *)puVar10
                                                                             );
                                                  FUN_054b7910(uVar15,uVar18,*(undefined8 *)puVar11,
                                                               0);
                                                  uVar17 = FUN_04f0fabc(uVar17,uVar15,
                                                                        *(undefined8 *)puVar8);
                                                  uVar17 = FUN_04f1efa0(uVar17,*(undefined8 *)puVar9
                                                                       );
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar17;
                                                    thunk_FUN_03d1023c();
                                                    plVar16 = (long *)(*(long *)(*unaff_x23 + 0xb8)
                                                                      + 8);
                                                    *plVar16 = lVar13;
                                                    thunk_FUN_03d1023c(plVar16,lVar13);
                                                    return;
                                                  }
                                                }
                                              }
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


