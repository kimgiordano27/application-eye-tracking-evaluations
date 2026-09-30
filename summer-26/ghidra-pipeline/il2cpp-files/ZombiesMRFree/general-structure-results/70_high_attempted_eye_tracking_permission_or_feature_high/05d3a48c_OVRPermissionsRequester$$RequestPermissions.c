/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 05d3a48c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(void)

{
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
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
  
  FUN_06902890(&stack0x000002c0,0);
  *(undefined8 *)(unaff_x22 + 0x54) = *(undefined8 *)(unaff_x22 + 0x74);
  *(undefined8 *)(unaff_x22 + 0x4c) = *(undefined8 *)(unaff_x22 + 0x6c);
  if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
    uVar1 = *(undefined8 *)(unaff_x22 + 0x4c);
    *(undefined8 *)(unaff_x20 + 0x278) = *(undefined8 *)(unaff_x22 + 0x54);
    *(undefined8 *)(unaff_x20 + 0x270) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x26c) = 0;
    *(undefined8 *)(unaff_x20 + 0x264) = 0;
    FUN_06902890(DAT_01369c40,uStack000000000000004c,uStack0000000000000048,DAT_0136a418,
                 DAT_01369ab4,DAT_01369c44,DAT_0136a2b0,&stack0x00000280,0);
    *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
    *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
    if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
      uVar1 = *(undefined8 *)(unaff_x22 + 0xc);
      *(undefined8 *)(unaff_x20 + 0x298) = *(undefined8 *)(unaff_x22 + 0x14);
      *(undefined8 *)(unaff_x20 + 0x290) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x28c) = 0;
      *(undefined8 *)(unaff_x20 + 0x284) = 0;
      FUN_06902890(DAT_0136a48c,DAT_0136a578,DAT_0136a664,&stack0x00000240,0);
      if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
        *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
        *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
        *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
        *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
        FUN_06902890(DAT_0136a768,uStack0000000000000044,uStack0000000000000040,
                     uStack000000000000003c,DAT_0136a6ec,DAT_0136a668,uStack0000000000000038,
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
          FUN_06902890(DAT_01369abc,uStack0000000000000034,uStack0000000000000030,
                       uStack000000000000002c,DAT_01369c48,DAT_01369a3c,uStack0000000000000028,
                       &stack0x000001c0,0);
          uStack00000000000001b4 = CONCAT44(in_stack_000001d8,uStack00000000000001d4);
          uStack00000000000001b0 = uStack00000000000001d0;
          uStack00000000000001a8 = uStack00000000000001c8;
          uStack00000000000001ac = uStack00000000000001cc;
          in_stack_000001a0 = in_stack_000001c0;
          if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
            *(undefined8 *)(unaff_x20 + 0x2f8) = uStack00000000000001b4;
            *(ulong *)(unaff_x20 + 0x2f0) = CONCAT44(uStack00000000000001d0,uStack00000000000001cc);
            *(ulong *)(unaff_x20 + 0x2ec) = CONCAT44(uStack00000000000001cc,uStack00000000000001c8);
            *(undefined8 *)(unaff_x20 + 0x2e4) = in_stack_000001c0;
            in_stack_00000180 = 0;
            uStack0000000000000188 = 0;
            uStack000000000000018c = 0;
            in_stack_00000198 = 0;
            uStack0000000000000190 = 0;
            uStack0000000000000194 = 0;
            FUN_06902890(DAT_0136a4f8,uStack0000000000000024,uStack0000000000000020,
                         uStack000000000000001c,DAT_0136a2b4,DAT_013699dc,uStack0000000000000018,
                         &stack0x00000180,0);
            uStack0000000000000174 = CONCAT44(in_stack_00000198,uStack0000000000000194);
            uStack0000000000000170 = uStack0000000000000190;
            uStack0000000000000168 = uStack0000000000000188;
            uStack000000000000016c = uStack000000000000018c;
            in_stack_00000160 = in_stack_00000180;
            if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
              *(undefined8 *)(unaff_x20 + 0x318) = uStack0000000000000174;
              *(ulong *)(unaff_x20 + 0x310) =
                   CONCAT44(uStack0000000000000190,uStack000000000000018c);
              *(ulong *)(unaff_x20 + 0x30c) =
                   CONCAT44(uStack000000000000018c,uStack0000000000000188);
              *(undefined8 *)(unaff_x20 + 0x304) = in_stack_00000180;
              in_stack_00000140 = 0;
              uStack0000000000000148 = 0;
              uStack000000000000014c = 0;
              in_stack_00000158 = 0;
              uStack0000000000000150 = 0;
              uStack0000000000000154 = 0;
              FUN_06902890(DAT_0136a76c,uStack0000000000000014,uStack0000000000000010,
                           uStack000000000000000c,DAT_0136a490,DAT_01369f24,uStack0000000000000008,
                           &stack0x00000140,0);
              uStack0000000000000134 = CONCAT44(in_stack_00000158,uStack0000000000000154);
              uStack0000000000000130 = uStack0000000000000150;
              uStack0000000000000128 = uStack0000000000000148;
              uStack000000000000012c = uStack000000000000014c;
              in_stack_00000120 = in_stack_00000140;
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
                FUN_06902890(DAT_0136a24c,uStack0000000000000004,uStack0000000000000000,
                             &stack0x00000100,0);
                if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                  *(ulong *)(unaff_x20 + 0x358) = CONCAT44(in_stack_00000118,uStack0000000000000114)
                  ;
                  *(ulong *)(unaff_x20 + 0x350) =
                       CONCAT44(uStack0000000000000110,uStack000000000000010c);
                  *(ulong *)(unaff_x20 + 0x34c) =
                       CONCAT44(uStack000000000000010c,uStack0000000000000108);
                  *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
                  if (unaff_x19 != 0) {
                    *(long *)(unaff_x19 + 0x10) = unaff_x20;
                    thunk_FUN_03048534();
                    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
                    thunk_FUN_03048534();
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


