/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClasses
ENTRY_POINT: 07489da0
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


void OVRPlugin__SetDynamicObjectTrackedClasses(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
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
  
  *(long *)(unaff_x20 + 0x98) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x90) = param_1._0_8_;
  uVar1 = DAT_01914d08;
  *(long *)(unaff_x20 + 0x8c) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x84) = param_2._0_8_;
  FUN_08a5b7d0(uVar1,DAT_019147cc,DAT_01915138,DAT_01914a1c,DAT_01915094,DAT_019148fc,DAT_01915004,
               &stack0x00000640,0);
  if (4 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0xa0) = 3;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    *(undefined8 *)(unaff_x20 + 0xac) = 0;
    *(undefined8 *)(unaff_x20 + 0xa4) = 0;
    FUN_08a5b7d0(DAT_01914720,DAT_01914984,DAT_01914864,DAT_01914b24,0,0,0x3f800000,&stack0x00000600
                 ,0);
    if (5 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0xc0) = 4;
      *(undefined8 *)(unaff_x20 + 0xd8) = 0;
      *(undefined8 *)(unaff_x20 + 0xd0) = 0;
      uVar1 = DAT_01913f84;
      *(undefined8 *)(unaff_x20 + 0xcc) = 0;
      *(undefined8 *)(unaff_x20 + 0xc4) = 0;
      FUN_08a5b7d0(uVar1,&stack0x000005c0,0);
      if (6 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0xe0) = 1;
        *(undefined8 *)(unaff_x20 + 0xf8) = 0;
        *(undefined8 *)(unaff_x20 + 0xf0) = 0;
        *(undefined8 *)(unaff_x20 + 0xec) = 0;
        *(undefined8 *)(unaff_x20 + 0xe4) = 0;
        FUN_08a5b7d0(DAT_0191527c,uStack00000000000000b8,uStack00000000000000dc,
                     uStack00000000000000d8,DAT_0191513c,DAT_01914d0c,uStack00000000000000d4,
                     &stack0x00000580,0);
        if (7 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x100) = 6;
          *(undefined8 *)(unaff_x20 + 0x118) = 0;
          *(undefined8 *)(unaff_x20 + 0x110) = 0;
          *(undefined8 *)(unaff_x20 + 0x10c) = 0;
          *(undefined8 *)(unaff_x20 + 0x104) = 0;
          FUN_08a5b7d0(DAT_019147d0,DAT_01915098,DAT_01914480,uStack00000000000000d0,DAT_01914724,
                       DAT_01914da0,uStack00000000000000cc,&stack0x00000540,0);
          if (8 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x120) = 7;
            *(undefined8 *)(unaff_x20 + 0x138) = 0;
            *(undefined8 *)(unaff_x20 + 0x130) = 0;
            *(undefined8 *)(unaff_x20 + 300) = 0;
            *(undefined8 *)(unaff_x20 + 0x124) = 0;
            FUN_08a5b7d0(DAT_01914bdc,uStack00000000000000c8,uStack00000000000000c4,
                         uStack00000000000000c0,DAT_01914418,DAT_01914484,uStack00000000000000bc,
                         &stack0x00000500,0);
            if (9 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x140) = 8;
              *(undefined8 *)(unaff_x20 + 0x158) = 0;
              *(undefined8 *)(unaff_x20 + 0x150) = 0;
              *(undefined8 *)(unaff_x20 + 0x14c) = 0;
              *(undefined8 *)(unaff_x20 + 0x144) = 0;
              FUN_08a5b7d0(DAT_01914690,DAT_019147d4,DAT_01914da4,0,DAT_01914728,0,0x3f800000,
                           &stack0x000004c0,0);
              if (10 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x160) = 9;
                *(undefined8 *)(unaff_x20 + 0x178) = 0;
                *(undefined8 *)(unaff_x20 + 0x170) = 0;
                *(undefined8 *)(unaff_x20 + 0x16c) = 0;
                *(undefined8 *)(unaff_x20 + 0x164) = 0;
                FUN_08a5b7d0(DAT_01914d10,uStack00000000000000b4,uStack00000000000000b0,0,0,0,
                             0x3f800000,&stack0x00000480,0);
                if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x180) = 1;
                  *(undefined8 *)(unaff_x20 + 0x198) = 0;
                  *(undefined8 *)(unaff_x20 + 400) = 0;
                  *(undefined8 *)(unaff_x20 + 0x18c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x184) = 0;
                  FUN_08a5b7d0(DAT_01914da8,uStack00000000000000ac,uStack00000000000000a8,
                               uStack00000000000000a4,DAT_01914a98,DAT_019145e4,
                               uStack00000000000000a0,&stack0x00000440,0);
                  if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
                    *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
                    FUN_08a5b7d0(DAT_019147d8,uStack000000000000009c,uStack0000000000000098,
                                 uStack0000000000000094,DAT_01914868,DAT_01914a9c,
                                 uStack0000000000000090,&stack0x00000400,0);
                    if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
                      *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                      FUN_08a5b7d0(DAT_01913f88,uStack000000000000008c,uStack0000000000000088,
                                   uStack0000000000000084,DAT_01914aa0,DAT_01914b28,
                                   uStack0000000000000080,&stack0x000003c0,0);
                      if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                        *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                        FUN_08a5b7d0(DAT_01914a20,uStack0000000000000078,uStack000000000000007c,
                                     &stack0x00000380,0);
                        if (0xf < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                          *(undefined8 *)(unaff_x20 + 0x218) = 0;
                          *(undefined8 *)(unaff_x20 + 0x210) = 0;
                          *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x204) = 0;
                          FUN_08a5b7d0(DAT_01914020,uStack0000000000000074,uStack0000000000000070,0,
                                       0,0,0x3f800000,&stack0x00000340,0);
                          if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x220) = 1;
                            *(undefined8 *)(unaff_x20 + 0x238) = 0;
                            *(undefined8 *)(unaff_x20 + 0x230) = 0;
                            *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x224) = 0;
                            FUN_08a5b7d0(DAT_019145e8,uStack000000000000006c,uStack0000000000000068,
                                         uStack0000000000000064,DAT_01915280,DAT_019151e0,
                                         uStack0000000000000060,&stack0x00000300,0);
                            if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                              *(undefined8 *)(unaff_x20 + 600) = 0;
                              *(undefined8 *)(unaff_x20 + 0x250) = 0;
                              *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x244) = 0;
                              FUN_08a5b7d0(DAT_019142c8,uStack000000000000005c,
                                           uStack0000000000000058,uStack0000000000000054,
                                           DAT_01914d14,DAT_0191441c,uStack0000000000000050,
                                           &stack0x000002c0,0);
                              if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                                *(undefined8 *)(unaff_x20 + 0x278) = 0;
                                *(undefined8 *)(unaff_x20 + 0x270) = 0;
                                *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                                *(undefined8 *)(unaff_x20 + 0x264) = 0;
                                FUN_08a5b7d0(DAT_01914370,uStack000000000000004c,
                                             uStack0000000000000048,DAT_01914c70,DAT_01914168,
                                             DAT_01914374,DAT_01914aa4,&stack0x00000280,0);
                                if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                                  *(undefined8 *)(unaff_x20 + 0x298) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x290) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x284) = 0;
                                  FUN_08a5b7d0(DAT_01914d18,DAT_01914e44,DAT_01914f64,
                                               &stack0x00000240,0);
                                  if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                                    *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                                    FUN_08a5b7d0(DAT_0191509c,uStack0000000000000044,
                                                 uStack0000000000000040,uStack000000000000003c,
                                                 DAT_01915008,DAT_01914f68,uStack0000000000000038,
                                                 &stack0x00000200,0);
                                    in_stack_000001e0 = 0;
                                    uStack00000000000001e8 = 0;
                                    uStack00000000000001ec = 0;
                                    in_stack_000001f0 = 0;
                                    if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                      *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                      in_stack_000001c0 = 0;
                                      uStack00000000000001c8 = 0;
                                      uStack00000000000001cc = 0;
                                      in_stack_000001d8 = 0;
                                      uStack00000000000001d0 = 0;
                                      uStack00000000000001d4 = 0;
                                      FUN_08a5b7d0(DAT_01914170,uStack0000000000000034,
                                                   uStack0000000000000030,uStack000000000000002c,
                                                   DAT_01914378,DAT_019140bc,uStack0000000000000028,
                                                   &stack0x000001c0,0);
                                      uStack00000000000001b4 =
                                           CONCAT44(in_stack_000001d8,uStack00000000000001d4);
                                      uStack00000000000001b0 = uStack00000000000001d0;
                                      uStack00000000000001a8 = uStack00000000000001c8;
                                      uStack00000000000001ac = uStack00000000000001cc;
                                      in_stack_000001a0 = in_stack_000001c0;
                                      if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                        *(undefined8 *)(unaff_x20 + 0x2f8) = uStack00000000000001b4;
                                        *(ulong *)(unaff_x20 + 0x2f0) =
                                             CONCAT44(uStack00000000000001d0,uStack00000000000001cc)
                                        ;
                                        *(ulong *)(unaff_x20 + 0x2ec) =
                                             CONCAT44(uStack00000000000001cc,uStack00000000000001c8)
                                        ;
                                        *(undefined8 *)(unaff_x20 + 0x2e4) = in_stack_000001c0;
                                        in_stack_00000180 = 0;
                                        uStack0000000000000188 = 0;
                                        uStack000000000000018c = 0;
                                        in_stack_00000198 = 0;
                                        uStack0000000000000190 = 0;
                                        uStack0000000000000194 = 0;
                                        FUN_08a5b7d0(DAT_01914dac,uStack0000000000000024,
                                                     uStack0000000000000020,uStack000000000000001c,
                                                     DAT_01914aa8,DAT_01914024,
                                                     uStack0000000000000018,&stack0x00000180,0);
                                        uStack0000000000000174 =
                                             CONCAT44(in_stack_00000198,uStack0000000000000194);
                                        uStack0000000000000170 = uStack0000000000000190;
                                        uStack0000000000000168 = uStack0000000000000188;
                                        uStack000000000000016c = uStack000000000000018c;
                                        in_stack_00000160 = in_stack_00000180;
                                        if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                          *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                          *(undefined8 *)(unaff_x20 + 0x318) =
                                               uStack0000000000000174;
                                          *(ulong *)(unaff_x20 + 0x310) =
                                               CONCAT44(uStack0000000000000190,
                                                        uStack000000000000018c);
                                          *(ulong *)(unaff_x20 + 0x30c) =
                                               CONCAT44(uStack000000000000018c,
                                                        uStack0000000000000188);
                                          *(undefined8 *)(unaff_x20 + 0x304) = in_stack_00000180;
                                          in_stack_00000140 = 0;
                                          uStack0000000000000148 = 0;
                                          uStack000000000000014c = 0;
                                          in_stack_00000158 = 0;
                                          uStack0000000000000150 = 0;
                                          uStack0000000000000154 = 0;
                                          FUN_08a5b7d0(DAT_019150a0,uStack0000000000000014,
                                                       uStack0000000000000010,uStack000000000000000c
                                                       ,DAT_01914d1c,DAT_01914694,
                                                       uStack0000000000000008,&stack0x00000140,0);
                                          uStack0000000000000134 =
                                               CONCAT44(in_stack_00000158,uStack0000000000000154);
                                          uStack0000000000000130 = uStack0000000000000150;
                                          uStack0000000000000128 = uStack0000000000000148;
                                          uStack000000000000012c = uStack000000000000014c;
                                          in_stack_00000120 = in_stack_00000140;
                                          if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                            *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                            *(undefined8 *)(unaff_x20 + 0x338) =
                                                 uStack0000000000000134;
                                            *(ulong *)(unaff_x20 + 0x330) =
                                                 CONCAT44(uStack0000000000000150,
                                                          uStack000000000000014c);
                                            *(ulong *)(unaff_x20 + 0x32c) =
                                                 CONCAT44(uStack000000000000014c,
                                                          uStack0000000000000148);
                                            *(undefined8 *)(unaff_x20 + 0x324) = in_stack_00000140;
                                            in_stack_00000100 = 0;
                                            uStack0000000000000108 = 0;
                                            uStack000000000000010c = 0;
                                            in_stack_00000118 = 0;
                                            uStack0000000000000110 = 0;
                                            uStack0000000000000114 = 0;
                                            FUN_08a5b7d0(DAT_01914a24,uStack0000000000000004,
                                                         uStack0000000000000000,&stack0x00000100,0);
                                            if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                                              *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                                              *(ulong *)(unaff_x20 + 0x358) =
                                                   CONCAT44(in_stack_00000118,uStack0000000000000114
                                                           );
                                              *(ulong *)(unaff_x20 + 0x350) =
                                                   CONCAT44(uStack0000000000000110,
                                                            uStack000000000000010c);
                                              *(ulong *)(unaff_x20 + 0x34c) =
                                                   CONCAT44(uStack000000000000010c,
                                                            uStack0000000000000108);
                                              *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100
                                              ;
                                              if (unaff_x19 != 0) {
                                                *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                                thunk_FUN_03d1023c();
                                                *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) =
                                                     unaff_x19;
                                                thunk_FUN_03d1023c();
                                                return;
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


