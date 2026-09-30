/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_26
ENTRY_POINT: 05bfb124
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_26(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
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
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 in_stack_000000d8;
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
  
  FUN_069e4d6c(param_1,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
  *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
  if ((uVar1 & 0xfffffff8) != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x14);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc);
    *(undefined4 *)(unaff_x20 + 0x100) = 6;
    *(undefined8 *)(unaff_x20 + 0x118) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x110) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x10c) = 0;
    *(undefined8 *)(unaff_x20 + 0x104) = 0;
    FUN_069e4d6c(DAT_012e3c94,DAT_012e34ec,DAT_012e3714,in_stack_000000d8,DAT_012e3830,DAT_012e3da8,
                 uStack00000000000000d4,&stack0x00000540,0);
    if (8 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x120) = 7;
      *(undefined8 *)(unaff_x20 + 0x138) = 0;
      *(undefined8 *)(unaff_x20 + 0x130) = 0;
      uVar2 = DAT_012e3d54;
      *(undefined8 *)(unaff_x20 + 300) = 0;
      *(undefined8 *)(unaff_x20 + 0x124) = 0;
      FUN_069e4d6c(DAT_012e3918,uStack00000000000000d0,uStack00000000000000cc,uStack00000000000000c8
                   ,uVar2,DAT_012e3834,in_stack_000000c0._4_4_,&stack0x00000500,0);
      if (9 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x140) = 8;
        *(undefined8 *)(unaff_x20 + 0x158) = 0;
        *(undefined8 *)(unaff_x20 + 0x150) = 0;
        *(undefined8 *)(unaff_x20 + 0x14c) = 0;
        *(undefined8 *)(unaff_x20 + 0x144) = 0;
        FUN_069e4d6c(DAT_012e37ec,DAT_012e3dac,DAT_012e34f0,0,DAT_012e38bc,0,0x3f800000,
                     &stack0x000004c0,0);
        if (10 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x160) = 9;
          *(undefined8 *)(unaff_x20 + 0x178) = 0;
          *(undefined8 *)(unaff_x20 + 0x170) = 0;
          *(undefined8 *)(unaff_x20 + 0x16c) = 0;
          *(undefined8 *)(unaff_x20 + 0x164) = 0;
          FUN_069e4d6c(DAT_012e3718,uStack00000000000000bc,uStack00000000000000b8,0,0,0,0x3f800000,
                       &stack0x00000480,0);
          if (0xb < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x180) = 1;
            *(undefined8 *)(unaff_x20 + 0x198) = 0;
            *(undefined8 *)(unaff_x20 + 400) = 0;
            uVar2 = DAT_012e3b30;
            *(undefined8 *)(unaff_x20 + 0x18c) = 0;
            *(undefined8 *)(unaff_x20 + 0x184) = 0;
            FUN_069e4d6c(DAT_012e3408,uStack00000000000000b4,uStack00000000000000b0,
                         uStack00000000000000ac,uVar2,DAT_012e3ce4,uStack00000000000000a8,
                         &stack0x00000440,0);
            if (0xc < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
              *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
              *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
              uVar2 = DAT_012e3490;
              *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
              *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
              FUN_069e4d6c(DAT_012e371c,uStack00000000000000a4,uStack00000000000000a0,
                           uStack000000000000009c,uVar2,DAT_012e3ce8,uStack0000000000000098,
                           &stack0x00000400,0);
              if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
                *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
                *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
                uVar2 = DAT_012e3c20;
                *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
                *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                FUN_069e4d6c(DAT_012e35b0,uStack0000000000000094,uStack0000000000000090,
                             uStack000000000000008c,uVar2,DAT_012e34f4,uStack0000000000000088,
                             &stack0x000003c0,0);
                if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                  FUN_069e4d6c(DAT_012e3b34,uStack0000000000000084,uStack0000000000000080,unaff_s9,
                               0xa2800000,0xa3000000a3000000,0x3f800000,&stack0x00000380,0);
                  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                    *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                    *(undefined8 *)(unaff_x20 + 0x218) = 0;
                    *(undefined8 *)(unaff_x20 + 0x210) = 0;
                    *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x204) = 0;
                    FUN_069e4d6c(DAT_012e3b78,uStack000000000000007c,uStack0000000000000078,0,0,0,
                                 0x3f800000,&stack0x00000340,0);
                    if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x220) = 1;
                      *(undefined8 *)(unaff_x20 + 0x238) = 0;
                      *(undefined8 *)(unaff_x20 + 0x230) = 0;
                      uVar2 = DAT_012e3aa8;
                      *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x224) = 0;
                      FUN_069e4d6c(DAT_012e3a04,uStack0000000000000074,uStack0000000000000070,
                                   uStack000000000000006c,uVar2,DAT_012e3754,uStack0000000000000068,
                                   &stack0x00000300,0);
                      if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                        *(undefined8 *)(unaff_x20 + 600) = 0;
                        *(undefined8 *)(unaff_x20 + 0x250) = 0;
                        uVar2 = DAT_012e35fc;
                        *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x244) = 0;
                        FUN_069e4d6c(DAT_012e3a54,uStack0000000000000064,uStack0000000000000060,
                                     uStack000000000000005c,uVar2,DAT_012e3c24,
                                     uStack0000000000000058,&stack0x000002c0,0);
                        if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                          *(undefined8 *)(unaff_x20 + 0x278) = 0;
                          *(undefined8 *)(unaff_x20 + 0x270) = 0;
                          uVar2 = DAT_012e3a58;
                          *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x264) = 0;
                          FUN_069e4d6c(DAT_012e37a0,uStack0000000000000054,uStack0000000000000050,
                                       uVar2,DAT_012e3aac,DAT_012e3be0,DAT_012e3c28,&stack0x00000280
                                       ,0);
                          if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                            *(undefined8 *)(unaff_x20 + 0x298) = 0;
                            *(undefined8 *)(unaff_x20 + 0x290) = 0;
                            *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x284) = 0;
                            uVar2 = DAT_012e3c9c;
                            FUN_069e4d6c(DAT_012e38c0,DAT_012e3c98,DAT_012e3db0,unaff_s9,
                                         DAT_012e3c9c,0x8800000088000000,0x3f800000,&stack0x00000240
                                         ,0);
                            if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                              *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                              *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                              uVar3 = DAT_012e3af0;
                              *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                              *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                              FUN_069e4d6c(DAT_012e35b4,uStack000000000000004c,
                                           uStack0000000000000048,uStack0000000000000044,uVar3,
                                           DAT_012e3448,uStack0000000000000040,&stack0x00000200,0);
                              in_stack_000001e0 = 0;
                              uStack00000000000001e8 = 0;
                              uStack00000000000001ec = 0;
                              in_stack_000001f0 = 0;
                              if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                uVar3 = DAT_012e3a08;
                                *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                in_stack_000001c0 = 0;
                                uStack00000000000001c8 = 0;
                                uStack00000000000001cc = 0;
                                in_stack_000001d8 = 0;
                                uStack00000000000001d0 = 0;
                                uStack00000000000001d4 = 0;
                                FUN_069e4d6c(DAT_012e3878,uStack000000000000003c,
                                             uStack0000000000000038,uStack0000000000000034,uVar3,
                                             DAT_012e38c4,uStack0000000000000030,&stack0x000001c0,0)
                                ;
                                uStack00000000000001b4 =
                                     CONCAT44(in_stack_000001d8,uStack00000000000001d4);
                                uStack00000000000001a8 = uStack00000000000001c8;
                                in_stack_000001a0 = in_stack_000001c0;
                                uStack00000000000001ac = uStack00000000000001cc;
                                uStack00000000000001b0 = uStack00000000000001d0;
                                if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack00000000000001b4;
                                  *(ulong *)(unaff_x20 + 0x2f0) =
                                       CONCAT44(uStack00000000000001d0,uStack00000000000001cc);
                                  uVar3 = DAT_012e3af4;
                                  *(ulong *)(unaff_x20 + 0x2ec) =
                                       CONCAT44(uStack00000000000001cc,uStack00000000000001c8);
                                  *(undefined8 *)(unaff_x20 + 0x2e4) = in_stack_000001c0;
                                  in_stack_00000180 = 0;
                                  uStack0000000000000188 = 0;
                                  uStack000000000000018c = 0;
                                  in_stack_00000198 = 0;
                                  uStack0000000000000190 = 0;
                                  uStack0000000000000194 = 0;
                                  FUN_069e4d6c(DAT_012e3db4,uStack000000000000002c,
                                               uStack0000000000000028,uStack0000000000000024,uVar3,
                                               DAT_012e3ca0,uStack0000000000000020,&stack0x00000180,
                                               0);
                                  uStack0000000000000174 =
                                       CONCAT44(in_stack_00000198,uStack0000000000000194);
                                  uStack0000000000000168 = uStack0000000000000188;
                                  in_stack_00000160 = in_stack_00000180;
                                  uStack000000000000016c = uStack000000000000018c;
                                  uStack0000000000000170 = uStack0000000000000190;
                                  if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                    *(undefined8 *)(unaff_x20 + 0x318) = uStack0000000000000174;
                                    *(ulong *)(unaff_x20 + 0x310) =
                                         CONCAT44(uStack0000000000000190,uStack000000000000018c);
                                    uVar3 = DAT_012e3494;
                                    *(ulong *)(unaff_x20 + 0x30c) =
                                         CONCAT44(uStack000000000000018c,uStack0000000000000188);
                                    *(undefined8 *)(unaff_x20 + 0x304) = in_stack_00000180;
                                    in_stack_00000140 = 0;
                                    uStack0000000000000148 = 0;
                                    uStack000000000000014c = 0;
                                    in_stack_00000158 = 0;
                                    uStack0000000000000150 = 0;
                                    uStack0000000000000154 = 0;
                                    FUN_069e4d6c(DAT_012e3964,uStack000000000000001c,
                                                 uStack0000000000000018,uStack0000000000000014,uVar3
                                                 ,DAT_012e34f8,uStack0000000000000010,
                                                 &stack0x00000140,0);
                                    uStack0000000000000134 =
                                         CONCAT44(in_stack_00000158,uStack0000000000000154);
                                    uStack0000000000000128 = uStack0000000000000148;
                                    in_stack_00000120 = in_stack_00000140;
                                    uStack000000000000012c = uStack000000000000014c;
                                    uStack0000000000000130 = uStack0000000000000150;
                                    if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                      *(undefined8 *)(unaff_x20 + 0x338) = uStack0000000000000134;
                                      *(ulong *)(unaff_x20 + 0x330) =
                                           CONCAT44(uStack0000000000000150,uStack000000000000014c);
                                      *(ulong *)(unaff_x20 + 0x32c) =
                                           CONCAT44(uStack000000000000014c,uStack0000000000000148);
                                      *(undefined8 *)(unaff_x20 + 0x324) = in_stack_00000140;
                                      in_stack_00000100 = 0;
                                      uStack0000000000000108 = 0;
                                      uStack000000000000010c = 0;
                                      in_stack_00000118 = 0;
                                      uStack0000000000000110 = 0;
                                      uStack0000000000000114 = 0;
                                      FUN_069e4d6c(DAT_012e3838,uStack000000000000000c,
                                                   uStack0000000000000008,unaff_s8,unaff_s8,uVar2,
                                                   0x3f800000,&stack0x00000100,0);
                                      if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                                        *(ulong *)(unaff_x20 + 0x358) =
                                             CONCAT44(in_stack_00000118,uStack0000000000000114);
                                        *(ulong *)(unaff_x20 + 0x350) =
                                             CONCAT44(uStack0000000000000110,uStack000000000000010c)
                                        ;
                                        *(ulong *)(unaff_x20 + 0x34c) =
                                             CONCAT44(uStack000000000000010c,uStack0000000000000108)
                                        ;
                                        *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
                                        if (unaff_x19 != 0) {
                                          lVar4 = *unaff_x21;
                                          *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                          *(long *)(*(long *)(lVar4 + 0xb8) + 8) = unaff_x19;
                                          return;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


