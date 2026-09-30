/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryDimensions
ENTRY_POINT: 0534d090
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryDimensions
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool in_ZR;
  bool in_CY;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  long unaff_x21;
  undefined8 uVar18;
  long unaff_x22;
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
  undefined8 in_stack_00000188;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  
  *(long *)(unaff_x21 + 0xd4) = param_2._8_8_;
  *(long *)(unaff_x21 + 0xcc) = param_2._0_8_;
  if (in_CY && !in_ZR) {
                    /* try { // try from 0534d09c to 0544d20b has its CatchHandler @ 0534d09c
                       catch() { ... } // from try @ 0534d09c with catch @ 0534d09c
                       catch() { ... } // from try @ 0534d284 with catch @ 0534d09c
                       catch() { ... } // from try @ 0534d2bc with catch @ 0534d09c
                       catch() { ... } // from try @ 0534d300 with catch @ 0534d09c
                       catch() { ... } // from try @ 0534d324 with catch @ 0534d09c */
    uVar15 = *(undefined8 *)(unaff_x21 + 0xd4);
    uVar17 = *(undefined8 *)(unaff_x21 + 0xcc);
    *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
    *(undefined8 *)(unaff_x22 + 0x2c) = in_stack_00000248;
    *(undefined8 *)(unaff_x22 + 0x24) = in_stack_00000240;
    uVar8 = DAT_011b0800;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar17;
    uVar7 = DAT_011b0794;
    uVar6 = DAT_011b0548;
    uVar5 = DAT_011b04f4;
    uVar4 = DAT_011b02fc;
    uVar3 = DAT_011aff78;
    uVar2 = DAT_011afee8;
    *(undefined4 *)(unaff_x20 + 0x238) = 0;
    FUN_060fda18(uVar8,uVar2,uVar3,uVar6,uVar5,uVar7,uVar4,&stack0x00000220,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x21 + 0x94) = *(undefined8 *)(unaff_x21 + 0xb4);
    *(undefined8 *)(unaff_x21 + 0x8c) = *(undefined8 *)(unaff_x21 + 0xac);
    if ((uVar1 & 0xfffffff0) != 0) {
      uVar15 = *(undefined8 *)(unaff_x21 + 0x94);
      uVar17 = *(undefined8 *)(unaff_x21 + 0x8c);
      *(undefined8 *)(unaff_x20 + 0x248) = 0;
      *(undefined8 *)(unaff_x20 + 0x240) = 0;
      uVar4 = DAT_011b00a8;
      *(undefined8 *)(unaff_x20 + 0x254) = uVar15;
      *(undefined8 *)(unaff_x20 + 0x24c) = uVar17;
      uVar8 = DAT_011b0798;
      uVar7 = DAT_011b06c0;
      uVar6 = DAT_011b0378;
      uVar5 = DAT_011b0300;
      uVar3 = DAT_011afd5c;
      uVar2 = DAT_011afce0;
      *(undefined4 *)(unaff_x20 + 0x23c) = 0;
      *(undefined4 *)(unaff_x20 + 0x25c) = 0;
      in_stack_000001e0 = 0;
      in_stack_000001e8 = 0;
      FUN_060fda18(uVar3,uVar2,uVar4,uVar8,uVar6,uVar5,uVar7,&stack0x000001e0,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      in_stack_000001c8 = in_stack_000001e8;
      in_stack_000001c0 = in_stack_000001e0;
      *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
      *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
      if (0x10 < uVar1) {
        uVar15 = *(undefined8 *)(unaff_x21 + 0x54);
        uVar17 = *(undefined8 *)(unaff_x21 + 0x4c);
        *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
        *(undefined8 *)(unaff_x20 + 0x278) = uVar15;
        *(undefined8 *)(unaff_x20 + 0x270) = uVar17;
        *(undefined8 *)(unaff_x20 + 0x26c) = in_stack_000001e8;
        *(undefined8 *)(unaff_x20 + 0x264) = in_stack_000001e0;
        uVar8 = DAT_011b03e4;
        uVar7 = DAT_011b037c;
        uVar6 = DAT_011b0110;
        uVar5 = DAT_011b003c;
        uVar4 = DAT_011afeec;
        uVar3 = DAT_011afc00;
        uVar2 = DAT_011afb94;
        *(undefined4 *)(unaff_x20 + 0x280) = 0;
        in_stack_000001a0 = 0;
        in_stack_000001a8 = 0;
        in_stack_000001b8 = 0;
        in_stack_000001b0 = 0;
        FUN_060fda18(uVar2,uVar6,uVar8,uVar7,uVar4,uVar5,uVar3,&stack0x000001a0,0);
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        in_stack_00000188 = in_stack_000001a8;
        in_stack_00000180 = in_stack_000001a0;
        *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
        *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
        if (0x11 < uVar1) {
          uVar15 = *(undefined8 *)(unaff_x21 + 0x14);
          uVar17 = *(undefined8 *)(unaff_x21 + 0xc);
          *(undefined4 *)(unaff_x20 + 0x284) = 0x10;
          *(undefined8 *)(unaff_x20 + 0x290) = in_stack_000001a8;
          *(undefined8 *)(unaff_x20 + 0x288) = in_stack_000001a0;
          uVar2 = DAT_011afc04;
          *(undefined8 *)(unaff_x20 + 0x29c) = uVar15;
          *(undefined8 *)(unaff_x20 + 0x294) = uVar17;
          uVar8 = DAT_011b05c0;
          uVar7 = DAT_011b05bc;
          uVar6 = DAT_011b00ac;
          uVar5 = DAT_011aff7c;
          uVar4 = DAT_011afdb4;
          uVar3 = DAT_011afce4;
          *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
          in_stack_00000160 = 0;
          uStack0000000000000168 = 0;
          uStack000000000000016c = 0;
          in_stack_00000178 = 0;
          uStack0000000000000170 = 0;
          uStack0000000000000174 = 0;
          FUN_060fda18(uVar2,uVar6,uVar3,uVar7,uVar5,uVar8,uVar4,&stack0x00000160,0);
          uStack0000000000000154 = CONCAT44(in_stack_00000178,uStack0000000000000174);
          uStack0000000000000148 = uStack0000000000000168;
          in_stack_00000140 = in_stack_00000160;
          uStack000000000000014c = uStack000000000000016c;
          uStack0000000000000150 = uStack0000000000000170;
          if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x2a8) = 0x11;
            *(ulong *)(unaff_x20 + 0x2b4) = CONCAT44(uStack000000000000016c,uStack0000000000000168);
            *(undefined8 *)(unaff_x20 + 0x2ac) = in_stack_00000160;
            *(undefined8 *)(unaff_x20 + 0x2c0) = uStack0000000000000154;
            *(ulong *)(unaff_x20 + 0x2b8) = CONCAT44(uStack0000000000000170,uStack000000000000016c);
            uVar4 = DAT_011b05c4;
            uVar3 = DAT_011aff80;
            uVar2 = DAT_011afb40;
            *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
            in_stack_00000120 = 0;
            uStack0000000000000128 = 0;
            uStack000000000000012c = 0;
            in_stack_00000138 = 0;
            uStack0000000000000130 = 0;
            uStack0000000000000134 = 0;
            FUN_060fda18(uVar4,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000120,0);
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
              uVar4 = DAT_011b01d8;
              uVar3 = DAT_011afe14;
              uVar2 = DAT_011afb44;
              *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
              in_stack_000000e0 = 0;
              uStack00000000000000e8 = 0;
              uStack00000000000000ec = 0;
              in_stack_000000f8 = 0;
              uStack00000000000000f0 = 0;
              uStack00000000000000f4 = 0;
              FUN_060fda18(uVar3,uVar2,uVar4,0,0,0,0xbf800000,&stack0x000000e0,0);
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
                uVar4 = DAT_011b0630;
                uVar3 = DAT_011b02a8;
                uVar2 = DAT_011afce8;
                *(undefined4 *)(unaff_x20 + 0x310) = 0;
                in_stack_000000a0 = 0;
                uStack00000000000000a8 = 0;
                uStack00000000000000ac = 0;
                in_stack_000000b8 = 0;
                uStack00000000000000b0 = 0;
                uStack00000000000000b4 = 0;
                FUN_060fda18(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x000000a0,0);
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
                  uVar3 = DAT_011afb4c;
                  uVar2 = DAT_011afb48;
                  *(undefined8 *)(unaff_x20 + 0x32c) = uStack0000000000000094;
                  *(ulong *)(unaff_x20 + 0x324) =
                       CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
                  uVar4 = DAT_011afef0;
                  *(undefined4 *)(unaff_x20 + 0x334) = 0;
                  in_stack_00000060 = 0;
                  uStack0000000000000068 = 0;
                  uStack000000000000006c = 0;
                  in_stack_00000078 = 0;
                  uStack0000000000000070 = 0;
                  uStack0000000000000074 = 0;
                  FUN_060fda18(uVar2,uVar4,uVar3,0,0,0,0xbf800000,&stack0x00000060,0);
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
                    uVar4 = DAT_011b0804;
                    uVar3 = DAT_011b05cc;
                    uVar2 = DAT_011b05c8;
                    *(undefined4 *)(unaff_x20 + 0x358) = 0;
                    in_stack_00000020 = 0;
                    uStack0000000000000028 = 0;
                    uStack000000000000002c = 0;
                    in_stack_00000038 = 0;
                    uStack0000000000000030 = 0;
                    uStack0000000000000034 = 0;
                    FUN_060fda18(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x00000020,0);
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
                        lVar16 = *unaff_x23;
                        *(long *)(unaff_x19 + 0x10) = unaff_x20;
                        **(long **)(lVar16 + 0xb8) = unaff_x19;
                        lVar16 = thunk_FUN_02f45270(*unaff_x23);
                        FUN_0534c790();
                        puVar13 = Unity_Collections_FixedString512Bytes_TypeInfo;
                        puVar12 = Unity_Collections_FixedString4096Bytes_TypeInfo;
                        puVar11 = Unity_Collections_FixedString32Bytes_TypeInfo;
                        puVar10 = Unity_Collections_FixedString128Bytes_TypeInfo;
                        puVar9 = System_Net_FixedSizeReadStream_TypeInfo;
                        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                          lVar14 = *(long *)Unity_Collections_FixedString512Bytes_TypeInfo;
                          uVar17 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                          if (*(int *)(lVar14 + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                            lVar14 = *(long *)puVar13;
                          }
                          uVar18 = **(undefined8 **)(lVar14 + 0xb8);
                          uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar11);
                          FUN_04dfeddc(uVar15,uVar18,*(undefined8 *)puVar12,0);
                          uVar17 = FUN_0339a72c(uVar17,uVar15,*(undefined8 *)puVar9);
                          uVar17 = FUN_033a4348(uVar17,*(undefined8 *)puVar10);
                          if (lVar16 != 0) {
                            lVar14 = *unaff_x23;
                            *(undefined8 *)(lVar16 + 0x10) = uVar17;
                            *(long *)(*(long *)(lVar14 + 0xb8) + 8) = lVar16;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


