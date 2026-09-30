/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_40
ENTRY_POINT: 05bfb718
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_40(void)

{
  undefined4 uVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 in_s3;
  undefined4 in_s5;
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
  
  FUN_069e4d6c(DAT_012e38c0,*(undefined4 *)(in_x9 + 0xc98),DAT_012e3db0,in_s3,DAT_012e3c9c,in_s5,
               0x3f800000,&stack0x00000240,0);
  if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
    *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
    *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
    uVar1 = DAT_012e3af0;
    *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
    *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
    FUN_069e4d6c(DAT_012e35b4,uStack000000000000004c,uStack0000000000000048,uStack0000000000000044,
                 uVar1,DAT_012e3448,uStack0000000000000040,&stack0x00000200,0);
    in_stack_000001e0 = 0;
    uStack00000000000001e8 = 0;
    uStack00000000000001ec = 0;
    in_stack_000001f0 = 0;
    if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
      *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
      *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
      uVar1 = DAT_012e3a08;
      *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
      *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
      in_stack_000001c0 = 0;
      uStack00000000000001c8 = 0;
      uStack00000000000001cc = 0;
      in_stack_000001d8 = 0;
      uStack00000000000001d0 = 0;
      uStack00000000000001d4 = 0;
      FUN_069e4d6c(DAT_012e3878,uStack000000000000003c,uStack0000000000000038,uStack0000000000000034
                   ,uVar1,DAT_012e38c4,uStack0000000000000030,&stack0x000001c0,0);
      uStack00000000000001b4 = CONCAT44(in_stack_000001d8,uStack00000000000001d4);
      uStack00000000000001a8 = uStack00000000000001c8;
      in_stack_000001a0 = in_stack_000001c0;
      uStack00000000000001ac = uStack00000000000001cc;
      uStack00000000000001b0 = uStack00000000000001d0;
      if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
        *(undefined8 *)(unaff_x20 + 0x2f8) = uStack00000000000001b4;
        *(ulong *)(unaff_x20 + 0x2f0) = CONCAT44(uStack00000000000001d0,uStack00000000000001cc);
        uVar1 = DAT_012e3af4;
        *(ulong *)(unaff_x20 + 0x2ec) = CONCAT44(uStack00000000000001cc,uStack00000000000001c8);
        *(undefined8 *)(unaff_x20 + 0x2e4) = in_stack_000001c0;
        in_stack_00000180 = 0;
        uStack0000000000000188 = 0;
        uStack000000000000018c = 0;
        in_stack_00000198 = 0;
        uStack0000000000000190 = 0;
        uStack0000000000000194 = 0;
        FUN_069e4d6c(DAT_012e3db4,uStack000000000000002c,uStack0000000000000028,
                     uStack0000000000000024,uVar1,DAT_012e3ca0,uStack0000000000000020,
                     &stack0x00000180,0);
        uStack0000000000000174 = CONCAT44(in_stack_00000198,uStack0000000000000194);
        uStack0000000000000168 = uStack0000000000000188;
        in_stack_00000160 = in_stack_00000180;
        uStack000000000000016c = uStack000000000000018c;
        uStack0000000000000170 = uStack0000000000000190;
        if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
          *(undefined8 *)(unaff_x20 + 0x318) = uStack0000000000000174;
          *(ulong *)(unaff_x20 + 0x310) = CONCAT44(uStack0000000000000190,uStack000000000000018c);
          uVar1 = DAT_012e3494;
          *(ulong *)(unaff_x20 + 0x30c) = CONCAT44(uStack000000000000018c,uStack0000000000000188);
          *(undefined8 *)(unaff_x20 + 0x304) = in_stack_00000180;
          in_stack_00000140 = 0;
          uStack0000000000000148 = 0;
          uStack000000000000014c = 0;
          in_stack_00000158 = 0;
          uStack0000000000000150 = 0;
          uStack0000000000000154 = 0;
          FUN_069e4d6c(DAT_012e3964,uStack000000000000001c,uStack0000000000000018,
                       uStack0000000000000014,uVar1,DAT_012e34f8,uStack0000000000000010,
                       &stack0x00000140,0);
          uStack0000000000000134 = CONCAT44(in_stack_00000158,uStack0000000000000154);
          uStack0000000000000128 = uStack0000000000000148;
          in_stack_00000120 = in_stack_00000140;
          uStack000000000000012c = uStack000000000000014c;
          uStack0000000000000130 = uStack0000000000000150;
          if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 800) = 0x17;
            *(undefined8 *)(unaff_x20 + 0x338) = uStack0000000000000134;
            *(ulong *)(unaff_x20 + 0x330) = CONCAT44(uStack0000000000000150,uStack000000000000014c);
            *(ulong *)(unaff_x20 + 0x32c) = CONCAT44(uStack000000000000014c,uStack0000000000000148);
            *(undefined8 *)(unaff_x20 + 0x324) = in_stack_00000140;
            in_stack_00000100 = 0;
            uStack0000000000000108 = 0;
            uStack000000000000010c = 0;
            in_stack_00000118 = 0;
            uStack0000000000000110 = 0;
            uStack0000000000000114 = 0;
            FUN_069e4d6c(DAT_012e3838,uStack000000000000000c,uStack0000000000000008,&stack0x00000100
                         ,0);
            if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
              *(ulong *)(unaff_x20 + 0x358) = CONCAT44(in_stack_00000118,uStack0000000000000114);
              *(ulong *)(unaff_x20 + 0x350) =
                   CONCAT44(uStack0000000000000110,uStack000000000000010c);
              *(ulong *)(unaff_x20 + 0x34c) =
                   CONCAT44(uStack000000000000010c,uStack0000000000000108);
              *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
              if (unaff_x19 != 0) {
                lVar2 = *unaff_x21;
                *(long *)(unaff_x19 + 0x10) = unaff_x20;
                *(long *)(*(long *)(lVar2 + 0xb8) + 8) = unaff_x19;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


