/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_IsInsightPassthroughSupported
ENTRY_POINT: 05bf3b38
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_IsInsightPassthroughSupported
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar15;
  long unaff_x21;
  undefined8 uVar16;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar17;
  undefined4 uVar18;
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
  
  *(long *)(unaff_x22 + 0x2c) = param_2._8_8_;
  *(long *)(unaff_x22 + 0x24) = param_2._0_8_;
  uVar17 = *(undefined4 *)(param_1 + 0x7d8);
  *(long *)(unaff_x22 + 0x38) = param_3._8_8_;
  *(long *)(unaff_x22 + 0x30) = param_3._0_8_;
  uVar6 = DAT_012e3cd0;
  uVar5 = DAT_012e3ccc;
  uVar4 = DAT_012e3a84;
  uVar3 = DAT_012e37dc;
  uVar2 = DAT_012e3680;
  uVar18 = *(undefined4 *)(in_x9 + 0x584);
                    /* try { // try from 05bf3b54 to 05cf3c0f has its CatchHandler @ 05bf3b54
                       catch() { ... } // from try @ 05bf3b54 with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3c80 with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3d28 with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3dec with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3e84 with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3ebc with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3ee4 with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3f08 with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3f30 with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3f54 with catch @ 05bf3b54
                       catch() { ... } // from try @ 05bf3f80 with catch @ 05bf3b54 */
  *(undefined4 *)(unaff_x20 + 0x1a8) = 0;
  FUN_069e4d6c(uVar17,uVar18,uVar3,uVar2,uVar4,uVar5,uVar6,&stack0x00000320,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x21 + 0x94) = *(undefined8 *)(unaff_x21 + 0xb4);
  *(undefined8 *)(unaff_x21 + 0x8c) = *(undefined8 *)(unaff_x21 + 0xac);
  if (0xb < uVar1) {
    uVar13 = *(undefined8 *)(unaff_x21 + 0x94);
    uVar15 = *(undefined8 *)(unaff_x21 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x1ac) = 10;
    *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1c4) = uVar13;
    *(undefined8 *)(unaff_x20 + 0x1bc) = uVar15;
    uVar18 = DAT_012e3d30;
    uVar17 = DAT_012e3bb8;
    uVar6 = DAT_012e3a88;
    uVar5 = DAT_012e3900;
    uVar4 = DAT_012e3858;
    uVar3 = DAT_012e3824;
    uVar2 = DAT_012e3558;
    *(undefined4 *)(unaff_x20 + 0x1cc) = 0;
    FUN_069e4d6c(uVar5,uVar17,uVar4,uVar18,uVar6,uVar3,uVar2,&stack0x000002e0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
    *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
    if (0xc < uVar1) {
      uVar15 = *(undefined8 *)(unaff_x21 + 0x4c);
      *(undefined8 *)(unaff_x20 + 0x1e8) = *(undefined8 *)(unaff_x21 + 0x54);
      *(undefined8 *)(unaff_x20 + 0x1e0) = uVar15;
      uVar5 = DAT_012e3d34;
      *(undefined8 *)(unaff_x20 + 0x1dc) = 0;
      *(undefined8 *)(unaff_x20 + 0x1d4) = 0;
      uVar6 = DAT_012e3d74;
      uVar3 = DAT_012e3828;
      uVar2 = DAT_012e3474;
      *(undefined4 *)(unaff_x20 + 0x1d0) = 0;
      uVar4 = DAT_012e3940;
      *(undefined4 *)(unaff_x20 + 0x1f0) = 0;
      FUN_069e4d6c(uVar3,0,uVar5,uVar2,uVar6,uVar4,DAT_012e3bbc,&stack0x000002a0,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
      *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
      if (0xd < uVar1) {
        uVar13 = *(undefined8 *)(unaff_x21 + 0x14);
        uVar15 = *(undefined8 *)(unaff_x21 + 0xc);
        *(undefined4 *)(unaff_x20 + 500) = 0xc;
        *(undefined8 *)(unaff_x20 + 0x200) = 0;
        *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
        uVar2 = DAT_012e33e8;
        *(undefined8 *)(unaff_x20 + 0x20c) = uVar13;
        *(undefined8 *)(unaff_x20 + 0x204) = uVar15;
        uVar18 = DAT_012e3ad8;
        uVar17 = DAT_012e3a8c;
        uVar6 = DAT_012e39dc;
        uVar5 = DAT_012e3944;
        uVar4 = DAT_012e3630;
        uVar3 = DAT_012e3424;
        *(undefined4 *)(unaff_x20 + 0x214) = 0;
        FUN_069e4d6c(uVar2,uVar3,uVar6,uVar18,uVar5,uVar4,uVar17,&stack0x00000260,0);
        if (0xe < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
          *(undefined8 *)(unaff_x20 + 0x224) = 0;
          *(undefined8 *)(unaff_x20 + 0x21c) = 0;
          uVar18 = DAT_012e3d78;
          *(undefined8 *)(unaff_x20 + 0x230) = 0;
          *(undefined8 *)(unaff_x20 + 0x228) = 0;
          uVar17 = DAT_012e3d38;
          uVar6 = DAT_012e3b60;
          uVar5 = DAT_012e3b20;
          uVar4 = DAT_012e399c;
          uVar3 = DAT_012e36e4;
          uVar2 = DAT_012e3684;
          *(undefined4 *)(unaff_x20 + 0x238) = 0;
          FUN_069e4d6c(uVar18,uVar2,uVar3,uVar6,uVar5,uVar17,uVar4,&stack0x00000220,0);
          if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
            *(undefined8 *)(unaff_x20 + 0x248) = 0;
            *(undefined8 *)(unaff_x20 + 0x240) = 0;
            uVar4 = DAT_012e37e0;
            *(undefined8 *)(unaff_x20 + 0x254) = 0;
            *(undefined8 *)(unaff_x20 + 0x24c) = 0;
            uVar18 = DAT_012e3d3c;
            uVar17 = DAT_012e3c60;
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
            FUN_069e4d6c(uVar3,uVar2,uVar4,uVar18,uVar6,uVar5,uVar17,&stack0x000001e0,0);
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
              uVar18 = DAT_012e3a3c;
              uVar17 = DAT_012e39e4;
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
              FUN_069e4d6c(uVar2,uVar6,uVar18,uVar17,uVar4,uVar5,uVar3,&stack0x000001a0,0);
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
                uVar2 = DAT_012e347c;
                *(undefined8 *)(unaff_x20 + 0x29c) = uStack0000000000000194;
                *(ulong *)(unaff_x20 + 0x294) =
                     CONCAT44(uStack00000000000001b0,uStack00000000000001ac);
                uVar18 = DAT_012e3bc4;
                uVar17 = DAT_012e3bc0;
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
                FUN_069e4d6c(uVar2,uVar6,uVar3,uVar17,uVar5,uVar18,uVar4,&stack0x00000160,0);
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
                  FUN_069e4d6c(uVar4,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000120,0);
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
                    FUN_069e4d6c(uVar3,uVar2,uVar4,0,0,0,0xbf800000,&stack0x000000e0,0);
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
                      FUN_069e4d6c(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x000000a0,0);
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
                        uVar3 = DAT_012e33f8;
                        uVar2 = DAT_012e33f4;
                        *(undefined8 *)(unaff_x20 + 0x32c) = uStack0000000000000094;
                        *(ulong *)(unaff_x20 + 0x324) =
                             CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
                        uVar4 = DAT_012e368c;
                        *(undefined4 *)(unaff_x20 + 0x334) = 0;
                        in_stack_00000060 = 0;
                        uStack0000000000000068 = 0;
                        uStack000000000000006c = 0;
                        in_stack_00000078 = 0;
                        uStack0000000000000070 = 0;
                        uStack0000000000000074 = 0;
                        FUN_069e4d6c(uVar2,uVar4,uVar3,0,0,0,0xbf800000,&stack0x00000060,0);
                        uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
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
                          FUN_069e4d6c(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x00000020,0);
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
                              lVar14 = *unaff_x23;
                              *(long *)(unaff_x19 + 0x10) = unaff_x20;
                              **(long **)(lVar14 + 0xb8) = unaff_x19;
                              lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*unaff_x23);
                              FUN_05bf3450();
                              puVar11 = PTR_DAT_07116de8;
                              puVar10 = PTR_DAT_07116de0;
                              puVar9 = PTR_DAT_07116dd8;
                              puVar8 = PTR_DAT_07116dd0;
                              puVar7 = PTR_DAT_07116dc8;
                              if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                                lVar12 = *(long *)PTR_DAT_07116de8;
                                uVar15 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                                if (*(int *)(lVar12 + 0xe4) == 0) {
                                  thunk_FUN_031e5338();
                                  lVar12 = *(long *)puVar11;
                                }
                                uVar16 = **(undefined8 **)(lVar12 + 0xb8);
                                uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (*(undefined8 *)puVar9);
                                FUN_03df8e90(uVar13,uVar16,*(undefined8 *)puVar10,0);
                                uVar15 = FUN_03a84bd0(uVar15,uVar13,*(undefined8 *)puVar7);
                                uVar15 = FUN_03a900cc(uVar15,*(undefined8 *)puVar8);
                                if (lVar14 != 0) {
                                  lVar12 = *unaff_x23;
                                  *(undefined8 *)(lVar14 + 0x10) = uVar15;
                                  *(long *)(*(long *)(lVar12 + 0xb8) + 8) = lVar14;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


