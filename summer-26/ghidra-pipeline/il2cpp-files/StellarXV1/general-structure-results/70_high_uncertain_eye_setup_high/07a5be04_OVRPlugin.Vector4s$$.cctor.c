/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 07a5be04
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s___cctor(void)

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
  undefined1 in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
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
  
  *(undefined1 *)(unaff_x19 + 0x4eb) = in_w8;
  lVar13 = thunk_FUN_040b4efc(*unaff_x23);
  FUN_07a5bd10();
  lVar14 = FUN_04077674(*unaff_x20,0x18);
  FUN_089d99f0(0,0,0,0,0,0,0xbf800000,&stack0x000005e0,0);
  if (lVar14 == 0) {
LAB_07a5cbec:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar14 + 0x18) != 0) {
    *(undefined8 *)(lVar14 + 0x2c) = 0;
    *(undefined8 *)(lVar14 + 0x24) = 0;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    *(undefined8 *)(lVar14 + 0x30) = 0;
    *(undefined4 *)(lVar14 + 0x20) = 0xffffffff;
    *(undefined4 *)(lVar14 + 0x40) = 0;
    FUN_089d99f0(0,0,0,0,0,0,0xbf800000,&stack0x000005a0,0);
    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar14 + 0x50) = 0;
      *(undefined8 *)(lVar14 + 0x48) = 0;
      uVar5 = DAT_01aecb64;
      *(undefined8 *)(lVar14 + 0x5c) = 0;
      *(undefined8 *)(lVar14 + 0x54) = 0;
      uVar7 = DAT_01aecd1c;
      uVar6 = DAT_01aecd18;
      uVar4 = DAT_01aec98c;
      uVar3 = DAT_01aec194;
      uVar2 = DAT_01aec190;
      uVar1 = DAT_01aeb9b0;
      *(undefined4 *)(lVar14 + 0x44) = 0;
      *(undefined4 *)(lVar14 + 100) = 0;
      FUN_089d99f0(uVar5,uVar2,uVar6,uVar4,uVar1,uVar3,uVar7,&stack0x00000560,0);
      if (2 < *(uint *)(lVar14 + 0x18)) {
        *(undefined8 *)(lVar14 + 0x74) = 0;
        *(undefined8 *)(lVar14 + 0x6c) = 0;
        uVar4 = DAT_01aec47c;
        *(undefined8 *)(lVar14 + 0x80) = 0;
        *(undefined8 *)(lVar14 + 0x78) = 0;
        uVar7 = DAT_01aed118;
        uVar6 = DAT_01aed038;
        uVar5 = DAT_01aec6e0;
        uVar3 = DAT_01aec09c;
        uVar2 = DAT_01aebd58;
        uVar1 = DAT_01aeb628;
        *(undefined4 *)(lVar14 + 0x68) = 0;
        *(undefined4 *)(lVar14 + 0x88) = 0;
        FUN_089d99f0(uVar4,uVar5,uVar1,uVar2,uVar3,uVar7,uVar6,&stack0x00000520,0);
        uVar1 = DAT_01aebf4c;
        if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) != 0) {
          *(undefined4 *)(lVar14 + 0x8c) = 2;
          *(undefined8 *)(lVar14 + 0x98) = 0;
          *(undefined8 *)(lVar14 + 0x90) = 0;
          uVar3 = DAT_01aeb7d0;
          *(undefined8 *)(lVar14 + 0xa4) = 0;
          *(undefined8 *)(lVar14 + 0x9c) = 0;
          uVar7 = DAT_01aece2c;
          uVar6 = DAT_01aec570;
          uVar5 = DAT_01aec56c;
          uVar4 = DAT_01aeb8a4;
          uVar2 = DAT_01aeb6dc;
          *(undefined4 *)(lVar14 + 0xac) = 0;
          FUN_089d99f0(uVar3,uVar5,uVar1,uVar2,uVar7,uVar6,uVar4,&stack0x000004e0,0);
          if (4 < *(uint *)(lVar14 + 0x18)) {
            *(undefined4 *)(lVar14 + 0xb0) = 3;
            *(undefined8 *)(lVar14 + 0xbc) = 0;
            *(undefined8 *)(lVar14 + 0xb4) = 0;
            *(undefined8 *)(lVar14 + 200) = 0;
            *(undefined8 *)(lVar14 + 0xc0) = 0;
            uVar7 = DAT_01aed11c;
            uVar6 = DAT_01aece30;
            uVar5 = DAT_01aeca74;
            uVar4 = DAT_01aec38c;
            uVar3 = DAT_01aeb9b4;
            uVar2 = DAT_01aeb62c;
            *(undefined4 *)(lVar14 + 0xd0) = 0;
            FUN_089d99f0(uVar7,uVar6,uVar1,uVar4,uVar5,uVar2,uVar3,&stack0x000004a0,0);
            if (5 < *(uint *)(lVar14 + 0x18)) {
              *(undefined4 *)(lVar14 + 0xd4) = 4;
              *(undefined8 *)(lVar14 + 0xe0) = 0;
              *(undefined8 *)(lVar14 + 0xd8) = 0;
              uVar2 = DAT_01aebe2c;
              *(undefined8 *)(lVar14 + 0xec) = 0;
              *(undefined8 *)(lVar14 + 0xe4) = 0;
              uVar7 = DAT_01aecf14;
              uVar6 = DAT_01aecc34;
              uVar5 = DAT_01aecb68;
              uVar4 = DAT_01aec7c8;
              uVar3 = DAT_01aebe30;
              uVar1 = DAT_01aeb8a8;
              *(undefined4 *)(lVar14 + 0xf4) = 0;
              FUN_089d99f0(uVar2,uVar6,uVar3,uVar7,uVar1,uVar5,uVar4,&stack0x00000460,0);
              if (6 < *(uint *)(lVar14 + 0x18)) {
                *(undefined8 *)(lVar14 + 0x104) = 0;
                *(undefined8 *)(lVar14 + 0xfc) = 0;
                uVar6 = DAT_01aece34;
                *(undefined8 *)(lVar14 + 0x110) = 0;
                *(undefined8 *)(lVar14 + 0x108) = 0;
                uVar7 = DAT_01aecf18;
                uVar5 = DAT_01aecc38;
                uVar4 = DAT_01aecb6c;
                uVar3 = DAT_01aec6e4;
                uVar2 = DAT_01aebb94;
                uVar1 = DAT_01aeb8ac;
                *(undefined4 *)(lVar14 + 0xf8) = 0;
                *(undefined4 *)(lVar14 + 0x118) = 0;
                FUN_089d99f0(uVar2,uVar4,uVar6,uVar5,uVar1,uVar7,uVar3,&stack0x00000420,0);
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined4 *)(lVar14 + 0x11c) = 6;
                  *(undefined8 *)(lVar14 + 0x128) = 0;
                  *(undefined8 *)(lVar14 + 0x120) = 0;
                  *(undefined8 *)(lVar14 + 0x134) = 0;
                  *(undefined8 *)(lVar14 + 300) = 0;
                  uVar7 = DAT_01aec8b4;
                  uVar6 = DAT_01aec620;
                  uVar5 = DAT_01aec61c;
                  uVar4 = DAT_01aec480;
                  uVar3 = DAT_01aec0a0;
                  uVar2 = DAT_01aebac0;
                  uVar1 = DAT_01aeb9b8;
                  *(undefined4 *)(lVar14 + 0x13c) = 0;
                  FUN_089d99f0(uVar1,uVar5,uVar6,uVar7,uVar4,uVar3,uVar2,&stack0x000003e0,0);
                  if (8 < *(uint *)(lVar14 + 0x18)) {
                    *(undefined4 *)(lVar14 + 0x140) = 7;
                    *(undefined8 *)(lVar14 + 0x158) = 0;
                    *(undefined8 *)(lVar14 + 0x150) = 0;
                    *(undefined8 *)(lVar14 + 0x14c) = 0;
                    *(undefined8 *)(lVar14 + 0x144) = 0;
                    uVar7 = DAT_01aed1c4;
                    uVar6 = DAT_01aed03c;
                    uVar5 = DAT_01aec7cc;
                    uVar4 = DAT_01aec624;
                    uVar3 = DAT_01aec574;
                    uVar2 = DAT_01aec024;
                    uVar1 = DAT_01aebe34;
                    *(undefined4 *)(lVar14 + 0x160) = 0;
                    FUN_089d99f0(uVar4,uVar7,uVar6,uVar5,uVar3,uVar1,uVar2,&stack0x000003a0,0);
                    if (9 < *(uint *)(lVar14 + 0x18)) {
                      *(undefined8 *)(lVar14 + 0x170) = 0;
                      *(undefined8 *)(lVar14 + 0x168) = 0;
                      uVar2 = DAT_01aec198;
                      *(undefined8 *)(lVar14 + 0x17c) = 0;
                      *(undefined8 *)(lVar14 + 0x174) = 0;
                      uVar7 = DAT_01aecf1c;
                      uVar6 = DAT_01aec8bc;
                      uVar5 = DAT_01aec8b8;
                      uVar4 = DAT_01aec484;
                      uVar3 = DAT_01aec2a0;
                      uVar1 = DAT_01aebac4;
                      *(undefined4 *)(lVar14 + 0x164) = 0;
                      *(undefined4 *)(lVar14 + 0x184) = 0;
                      FUN_089d99f0(uVar2,uVar1,uVar4,uVar5,uVar3,uVar7,uVar6,&stack0x00000360,0);
                      if (10 < *(uint *)(lVar14 + 0x18)) {
                        *(undefined4 *)(lVar14 + 0x188) = 9;
                        *(undefined8 *)(lVar14 + 0x194) = 0;
                        *(undefined8 *)(lVar14 + 0x18c) = 0;
                        uVar3 = DAT_01aec19c;
                        *(undefined8 *)(lVar14 + 0x1a0) = 0;
                        *(undefined8 *)(lVar14 + 0x198) = 0;
                        uVar7 = DAT_01aed044;
                        uVar6 = DAT_01aed040;
                        uVar5 = DAT_01aec990;
                        uVar4 = DAT_01aec1a0;
                        uVar2 = DAT_01aebe38;
                        uVar1 = DAT_01aebb98;
                        *(undefined4 *)(lVar14 + 0x1a8) = 0;
                        FUN_089d99f0(uVar3,uVar1,uVar4,uVar2,uVar5,uVar6,uVar7,&stack0x00000320,0);
                        if (0xb < *(uint *)(lVar14 + 0x18)) {
                          *(undefined4 *)(lVar14 + 0x1ac) = 10;
                          *(undefined8 *)(lVar14 + 0x1b8) = 0;
                          *(undefined8 *)(lVar14 + 0x1b0) = 0;
                          *(undefined8 *)(lVar14 + 0x1c4) = 0;
                          *(undefined8 *)(lVar14 + 0x1bc) = 0;
                          uVar7 = DAT_01aed120;
                          uVar6 = DAT_01aecd20;
                          uVar5 = DAT_01aec994;
                          uVar4 = DAT_01aec578;
                          uVar3 = DAT_01aec390;
                          uVar2 = DAT_01aec2a4;
                          uVar1 = DAT_01aebac8;
                          *(undefined4 *)(lVar14 + 0x1cc) = 0;
                          FUN_089d99f0(uVar4,uVar6,uVar3,uVar7,uVar5,uVar2,uVar1,&stack0x000002e0,0)
                          ;
                          if (0xc < *(uint *)(lVar14 + 0x18)) {
                            *(undefined8 *)(lVar14 + 0x1e8) = 0;
                            *(undefined8 *)(lVar14 + 0x1e0) = 0;
                            uVar4 = DAT_01aed124;
                            *(undefined8 *)(lVar14 + 0x1dc) = 0;
                            *(undefined8 *)(lVar14 + 0x1d4) = 0;
                            uVar5 = DAT_01aed1c8;
                            uVar2 = DAT_01aec2a8;
                            uVar1 = DAT_01aeb7d4;
                            *(undefined4 *)(lVar14 + 0x1d0) = 0;
                            uVar3 = DAT_01aec628;
                            *(undefined4 *)(lVar14 + 0x1f0) = 0;
                            FUN_089d99f0(uVar2,0,uVar4,uVar1,uVar5,uVar3,DAT_01aecd24,
                                         &stack0x000002a0,0);
                            if (0xd < *(uint *)(lVar14 + 0x18)) {
                              *(undefined4 *)(lVar14 + 500) = 0xc;
                              *(undefined8 *)(lVar14 + 0x200) = 0;
                              *(undefined8 *)(lVar14 + 0x1f8) = 0;
                              uVar1 = DAT_01aeb630;
                              *(undefined8 *)(lVar14 + 0x20c) = 0;
                              *(undefined8 *)(lVar14 + 0x204) = 0;
                              uVar7 = DAT_01aeca78;
                              uVar6 = DAT_01aec998;
                              uVar5 = DAT_01aec7d0;
                              uVar4 = DAT_01aec62c;
                              uVar3 = DAT_01aebd5c;
                              uVar2 = DAT_01aeb6e0;
                              *(undefined4 *)(lVar14 + 0x214) = 0;
                              FUN_089d99f0(uVar1,uVar2,uVar5,uVar7,uVar4,uVar3,uVar6,
                                           &stack0x00000260,0);
                              if (0xe < *(uint *)(lVar14 + 0x18)) {
                                *(undefined4 *)(lVar14 + 0x218) = 0xd;
                                *(undefined8 *)(lVar14 + 0x224) = 0;
                                *(undefined8 *)(lVar14 + 0x21c) = 0;
                                uVar7 = DAT_01aed1cc;
                                *(undefined8 *)(lVar14 + 0x230) = 0;
                                *(undefined8 *)(lVar14 + 0x228) = 0;
                                uVar6 = DAT_01aed128;
                                uVar5 = DAT_01aecc3c;
                                uVar4 = DAT_01aecb70;
                                uVar3 = DAT_01aec6e8;
                                uVar2 = DAT_01aebf50;
                                uVar1 = DAT_01aebe3c;
                                *(undefined4 *)(lVar14 + 0x238) = 0;
                                FUN_089d99f0(uVar7,uVar1,uVar2,uVar5,uVar4,uVar6,uVar3,
                                             &stack0x00000220,0);
                                if ((*(uint *)(lVar14 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined8 *)(lVar14 + 0x248) = 0;
                                  *(undefined8 *)(lVar14 + 0x240) = 0;
                                  uVar3 = DAT_01aec1a4;
                                  *(undefined8 *)(lVar14 + 0x254) = 0;
                                  *(undefined8 *)(lVar14 + 0x24c) = 0;
                                  uVar7 = DAT_01aed12c;
                                  uVar6 = DAT_01aecf20;
                                  uVar5 = DAT_01aec7d4;
                                  uVar4 = DAT_01aec6ec;
                                  uVar2 = DAT_01aebacc;
                                  uVar1 = DAT_01aeb9bc;
                                  *(undefined4 *)(lVar14 + 0x23c) = 0;
                                  *(undefined4 *)(lVar14 + 0x25c) = 0;
                                  in_stack_000001e0 = 0;
                                  uStack00000000000001e8 = 0;
                                  uStack00000000000001ec = 0;
                                  in_stack_000001f0 = 0;
                                  FUN_089d99f0(uVar2,uVar1,uVar3,uVar7,uVar5,uVar4,uVar6,
                                               &stack0x000001e0,0);
                                  uStack00000000000001d4 = 0;
                                  uStack00000000000001c8 = uStack00000000000001e8;
                                  in_stack_000001c0 = in_stack_000001e0;
                                  uStack00000000000001cc = uStack00000000000001ec;
                                  uStack00000000000001d0 = in_stack_000001f0;
                                  if (0x10 < *(uint *)(lVar14 + 0x18)) {
                                    *(undefined4 *)(lVar14 + 0x260) = 0xf;
                                    *(undefined8 *)(lVar14 + 0x278) = 0;
                                    *(ulong *)(lVar14 + 0x270) =
                                         CONCAT44(in_stack_000001f0,uStack00000000000001ec);
                                    *(ulong *)(lVar14 + 0x26c) =
                                         CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
                                    *(undefined8 *)(lVar14 + 0x264) = in_stack_000001e0;
                                    uVar7 = DAT_01aec8c0;
                                    uVar6 = DAT_01aec7d8;
                                    uVar5 = DAT_01aec2ac;
                                    uVar4 = DAT_01aec0a4;
                                    uVar3 = DAT_01aebe40;
                                    uVar2 = DAT_01aeb7d8;
                                    uVar1 = DAT_01aeb6e4;
                                    *(undefined4 *)(lVar14 + 0x280) = 0;
                                    in_stack_000001a0 = 0;
                                    uStack00000000000001a8 = 0;
                                    uStack00000000000001ac = 0;
                                    in_stack_000001b8 = 0;
                                    uStack00000000000001b0 = 0;
                                    uStack00000000000001b4 = 0;
                                    FUN_089d99f0(uVar1,uVar5,uVar7,uVar6,uVar3,uVar4,uVar2,
                                                 &stack0x000001a0,0);
                                    uStack0000000000000194 =
                                         CONCAT44(in_stack_000001b8,uStack00000000000001b4);
                                    uStack0000000000000188 = uStack00000000000001a8;
                                    in_stack_00000180 = in_stack_000001a0;
                                    uStack000000000000018c = uStack00000000000001ac;
                                    uStack0000000000000190 = uStack00000000000001b0;
                                    if (0x11 < *(uint *)(lVar14 + 0x18)) {
                                      *(undefined4 *)(lVar14 + 0x284) = 0x10;
                                      *(ulong *)(lVar14 + 0x290) =
                                           CONCAT44(uStack00000000000001ac,uStack00000000000001a8);
                                      *(undefined8 *)(lVar14 + 0x288) = in_stack_000001a0;
                                      uVar1 = DAT_01aeb7dc;
                                      *(undefined8 *)(lVar14 + 0x29c) = uStack0000000000000194;
                                      *(ulong *)(lVar14 + 0x294) =
                                           CONCAT44(uStack00000000000001b0,uStack00000000000001ac);
                                      uVar7 = DAT_01aecd2c;
                                      uVar6 = DAT_01aecd28;
                                      uVar5 = DAT_01aec1a8;
                                      uVar4 = DAT_01aebf54;
                                      uVar3 = DAT_01aebb9c;
                                      uVar2 = DAT_01aeb9c0;
                                      *(undefined4 *)(lVar14 + 0x2a4) = 0;
                                      in_stack_00000160 = 0;
                                      uStack0000000000000168 = 0;
                                      uStack000000000000016c = 0;
                                      in_stack_00000178 = 0;
                                      uStack0000000000000170 = 0;
                                      uStack0000000000000174 = 0;
                                      FUN_089d99f0(uVar1,uVar5,uVar2,uVar6,uVar4,uVar7,uVar3,
                                                   &stack0x00000160,0);
                                      uStack0000000000000154 =
                                           CONCAT44(in_stack_00000178,uStack0000000000000174);
                                      uStack0000000000000148 = uStack0000000000000168;
                                      in_stack_00000140 = in_stack_00000160;
                                      uStack000000000000014c = uStack000000000000016c;
                                      uStack0000000000000150 = uStack0000000000000170;
                                      if (0x12 < *(uint *)(lVar14 + 0x18)) {
                                        *(undefined4 *)(lVar14 + 0x2a8) = 0x11;
                                        *(ulong *)(lVar14 + 0x2b4) =
                                             CONCAT44(uStack000000000000016c,uStack0000000000000168)
                                        ;
                                        *(undefined8 *)(lVar14 + 0x2ac) = in_stack_00000160;
                                        *(undefined8 *)(lVar14 + 0x2c0) = uStack0000000000000154;
                                        *(ulong *)(lVar14 + 0x2b8) =
                                             CONCAT44(uStack0000000000000170,uStack000000000000016c)
                                        ;
                                        uVar3 = DAT_01aecd30;
                                        uVar2 = DAT_01aebf58;
                                        uVar1 = DAT_01aeb634;
                                        *(undefined4 *)(lVar14 + 0x2c8) = 0;
                                        in_stack_00000120 = 0;
                                        uStack0000000000000128 = 0;
                                        uStack000000000000012c = 0;
                                        in_stack_00000138 = 0;
                                        uStack0000000000000130 = 0;
                                        uStack0000000000000134 = 0;
                                        FUN_089d99f0(uVar3,uVar1,uVar2,0,0,0,0xbf800000,
                                                     &stack0x00000120,0);
                                        uStack0000000000000114 =
                                             CONCAT44(in_stack_00000138,uStack0000000000000134);
                                        uStack0000000000000108 = uStack0000000000000128;
                                        in_stack_00000100 = in_stack_00000120;
                                        uStack000000000000010c = uStack000000000000012c;
                                        uStack0000000000000110 = uStack0000000000000130;
                                        if (0x13 < *(uint *)(lVar14 + 0x18)) {
                                          *(undefined4 *)(lVar14 + 0x2cc) = 5;
                                          *(ulong *)(lVar14 + 0x2d8) =
                                               CONCAT44(uStack000000000000012c,
                                                        uStack0000000000000128);
                                          *(undefined8 *)(lVar14 + 0x2d0) = in_stack_00000120;
                                          *(undefined8 *)(lVar14 + 0x2e4) = uStack0000000000000114;
                                          *(ulong *)(lVar14 + 0x2dc) =
                                               CONCAT44(uStack0000000000000130,
                                                        uStack000000000000012c);
                                          uVar3 = DAT_01aec488;
                                          uVar2 = DAT_01aebc7c;
                                          uVar1 = DAT_01aeb638;
                                          *(undefined4 *)(lVar14 + 0x2ec) = 0;
                                          in_stack_000000e0 = 0;
                                          uStack00000000000000e8 = 0;
                                          uStack00000000000000ec = 0;
                                          in_stack_000000f8 = 0;
                                          uStack00000000000000f0 = 0;
                                          uStack00000000000000f4 = 0;
                                          FUN_089d99f0(uVar2,uVar1,uVar3,0,0,0,0xbf800000,
                                                       &stack0x000000e0,0);
                                          uStack00000000000000d4 =
                                               CONCAT44(in_stack_000000f8,uStack00000000000000f4);
                                          uStack00000000000000c8 = uStack00000000000000e8;
                                          in_stack_000000c0 = in_stack_000000e0;
                                          uStack00000000000000cc = uStack00000000000000ec;
                                          uStack00000000000000d0 = uStack00000000000000f0;
                                          if (0x14 < *(uint *)(lVar14 + 0x18)) {
                                            *(undefined4 *)(lVar14 + 0x2f0) = 8;
                                            *(undefined8 *)(lVar14 + 0x308) = uStack00000000000000d4
                                            ;
                                            *(ulong *)(lVar14 + 0x300) =
                                                 CONCAT44(uStack00000000000000f0,
                                                          uStack00000000000000ec);
                                            *(ulong *)(lVar14 + 0x2fc) =
                                                 CONCAT44(uStack00000000000000ec,
                                                          uStack00000000000000e8);
                                            *(undefined8 *)(lVar14 + 0x2f4) = in_stack_000000e0;
                                            uVar3 = DAT_01aece38;
                                            uVar2 = DAT_01aec630;
                                            uVar1 = DAT_01aeb9c4;
                                            *(undefined4 *)(lVar14 + 0x310) = 0;
                                            in_stack_000000a0 = 0;
                                            uStack00000000000000a8 = 0;
                                            uStack00000000000000ac = 0;
                                            in_stack_000000b8 = 0;
                                            uStack00000000000000b0 = 0;
                                            uStack00000000000000b4 = 0;
                                            FUN_089d99f0(uVar1,uVar2,uVar3,0,0,0,0xbf800000,
                                                         &stack0x000000a0,0);
                                            uStack0000000000000094 =
                                                 CONCAT44(in_stack_000000b8,uStack00000000000000b4);
                                            uStack0000000000000088 = uStack00000000000000a8;
                                            in_stack_00000080 = in_stack_000000a0;
                                            uStack000000000000008c = uStack00000000000000ac;
                                            uStack0000000000000090 = uStack00000000000000b0;
                                            if (0x15 < *(uint *)(lVar14 + 0x18)) {
                                              *(undefined4 *)(lVar14 + 0x314) = 0xb;
                                              *(ulong *)(lVar14 + 800) =
                                                   CONCAT44(uStack00000000000000ac,
                                                            uStack00000000000000a8);
                                              *(undefined8 *)(lVar14 + 0x318) = in_stack_000000a0;
                                              uVar2 = DAT_01aeb640;
                                              uVar1 = DAT_01aeb63c;
                                              *(undefined8 *)(lVar14 + 0x32c) =
                                                   uStack0000000000000094;
                                              *(ulong *)(lVar14 + 0x324) =
                                                   CONCAT44(uStack00000000000000b0,
                                                            uStack00000000000000ac);
                                              uVar3 = DAT_01aebe44;
                                              *(undefined4 *)(lVar14 + 0x334) = 0;
                                              in_stack_00000060 = 0;
                                              uStack0000000000000068 = 0;
                                              uStack000000000000006c = 0;
                                              in_stack_00000078 = 0;
                                              uStack0000000000000070 = 0;
                                              uStack0000000000000074 = 0;
                                              FUN_089d99f0(uVar1,uVar3,uVar2,0,0,0,0xbf800000,
                                                           &stack0x00000060,0);
                                              uStack0000000000000054 =
                                                   CONCAT44(in_stack_00000078,uStack0000000000000074
                                                           );
                                              uStack0000000000000048 = uStack0000000000000068;
                                              in_stack_00000040 = in_stack_00000060;
                                              uStack000000000000004c = uStack000000000000006c;
                                              uStack0000000000000050 = uStack0000000000000070;
                                              if (0x16 < *(uint *)(lVar14 + 0x18)) {
                                                *(undefined4 *)(lVar14 + 0x338) = 0xe;
                                                *(ulong *)(lVar14 + 0x344) =
                                                     CONCAT44(uStack000000000000006c,
                                                              uStack0000000000000068);
                                                *(undefined8 *)(lVar14 + 0x33c) = in_stack_00000060;
                                                *(undefined8 *)(lVar14 + 0x350) =
                                                     uStack0000000000000054;
                                                *(ulong *)(lVar14 + 0x348) =
                                                     CONCAT44(uStack0000000000000070,
                                                              uStack000000000000006c);
                                                uVar3 = DAT_01aed1d0;
                                                uVar2 = DAT_01aecd38;
                                                uVar1 = DAT_01aecd34;
                                                *(undefined4 *)(lVar14 + 0x358) = 0;
                                                in_stack_00000020 = 0;
                                                uStack0000000000000028 = 0;
                                                uStack000000000000002c = 0;
                                                in_stack_00000038 = 0;
                                                uStack0000000000000030 = 0;
                                                uStack0000000000000034 = 0;
                                                FUN_089d99f0(uVar1,uVar2,uVar3,0,0,0,0xbf800000,
                                                             &stack0x00000020,0);
                                                if (0x17 < *(uint *)(lVar14 + 0x18)) {
                                                  *(undefined4 *)(lVar14 + 0x35c) = 0x12;
                                                  *(ulong *)(lVar14 + 0x368) =
                                                       CONCAT44(uStack000000000000002c,
                                                                uStack0000000000000028);
                                                  *(undefined8 *)(lVar14 + 0x360) =
                                                       in_stack_00000020;
                                                  *(ulong *)(lVar14 + 0x374) =
                                                       CONCAT44(in_stack_00000038,
                                                                uStack0000000000000034);
                                                  *(ulong *)(lVar14 + 0x36c) =
                                                       CONCAT44(uStack0000000000000030,
                                                                uStack000000000000002c);
                                                  *(undefined4 *)(lVar14 + 0x37c) = 0;
                                                  if (lVar13 != 0) {
                                                    *(long *)(lVar13 + 0x10) = lVar14;
                                                    thunk_FUN_040ec700((long *)(lVar13 + 0x10),
                                                                       lVar14);
                                                    **(long **)(*unaff_x23 + 0xb8) = lVar13;
                                                    thunk_FUN_040ec700(*(undefined8 *)
                                                                        (*unaff_x23 + 0xb8),lVar13);
                                                    lVar13 = thunk_FUN_040b4efc(*unaff_x23);
                                                    FUN_07a5bd10();
                                                    puVar12 = PTR_DAT_092f0ac0;
                                                    puVar11 = PTR_DAT_092f0ab8;
                                                    puVar10 = PTR_DAT_092f0ab0;
                                                    puVar9 = PTR_DAT_092f0aa8;
                                                    puVar8 = PTR_DAT_092f0aa0;
                                                    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                                                      lVar14 = *(long *)PTR_DAT_092f0ac0;
                                                      uVar17 = *(undefined8 *)
                                                                (**(long **)(*unaff_x23 + 0xb8) +
                                                                0x10);
                                                      if (*(int *)(lVar14 + 0xe4) == 0) {
                                                        thunk_FUN_040d65a8();
                                                        lVar14 = *(long *)puVar12;
                                                      }
                                                      uVar18 = **(undefined8 **)(lVar14 + 0xb8);
                                                      uVar15 = thunk_FUN_040b4efc(*(undefined8 *)
                                                                                   puVar10);
                                                      FUN_05681afc(uVar15,uVar18,
                                                                   *(undefined8 *)puVar11,0);
                                                      uVar17 = FUN_04fa9204(uVar17,uVar15,
                                                                            *(undefined8 *)puVar8);
                                                      uVar17 = FUN_04fba268(uVar17,*(undefined8 *)
                                                                                    puVar9);
                                                      if (lVar13 != 0) {
                                                        *(undefined8 *)(lVar13 + 0x10) = uVar17;
                                                        thunk_FUN_040ec700();
                                                        plVar16 = (long *)(*(long *)(*unaff_x23 +
                                                                                    0xb8) + 8);
                                                        *plVar16 = lVar13;
                                                        thunk_FUN_040ec700(plVar16,lVar13);
                                                        return;
                                                      }
                                                    }
                                                  }
                                                  goto LAB_07a5cbec;
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
  FUN_04077838();
}


