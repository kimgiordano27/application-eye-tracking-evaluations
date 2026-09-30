/*
FUNCTION_NAME: OVRPlugin.ControllerState6$$.ctor
ENTRY_POINT: 07a5c5fc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState6___ctor(void)

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
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar18;
  long unaff_x21;
  undefined8 uVar19;
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
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  
  FUN_089d99f0();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x21 + 0xd4) = *(undefined8 *)(unaff_x21 + 0xf4);
  *(undefined8 *)(unaff_x21 + 0xcc) = *(undefined8 *)(unaff_x21 + 0xec);
  if (0xe < uVar1) {
    uVar16 = *(undefined8 *)(unaff_x21 + 0xd4);
    uVar18 = *(undefined8 *)(unaff_x21 + 0xcc);
    *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
    *(undefined8 *)(unaff_x22 + 0x2c) = in_stack_00000268;
    *(undefined8 *)(unaff_x22 + 0x24) = in_stack_00000260;
    uVar8 = DAT_01aed1cc;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar18;
    uVar7 = DAT_01aed128;
    uVar6 = DAT_01aecc3c;
    uVar5 = DAT_01aecb70;
    uVar4 = DAT_01aec6e8;
    uVar3 = DAT_01aebf50;
    uVar2 = DAT_01aebe3c;
    *(undefined4 *)(unaff_x20 + 0x238) = 0;
    FUN_089d99f0(uVar8,uVar2,uVar3,uVar6,uVar5,uVar7,uVar4,&stack0x00000220,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x21 + 0x94) = *(undefined8 *)(unaff_x21 + 0xb4);
    *(undefined8 *)(unaff_x21 + 0x8c) = *(undefined8 *)(unaff_x21 + 0xac);
    if ((uVar1 & 0xfffffff0) != 0) {
      uVar16 = *(undefined8 *)(unaff_x21 + 0x94);
      uVar18 = *(undefined8 *)(unaff_x21 + 0x8c);
      *(undefined8 *)(unaff_x20 + 0x248) = 0;
      *(undefined8 *)(unaff_x20 + 0x240) = 0;
      uVar4 = DAT_01aec1a4;
      *(undefined8 *)(unaff_x20 + 0x254) = uVar16;
      *(undefined8 *)(unaff_x20 + 0x24c) = uVar18;
      uVar8 = DAT_01aed12c;
      uVar7 = DAT_01aecf20;
      uVar6 = DAT_01aec7d4;
      uVar5 = DAT_01aec6ec;
      uVar3 = DAT_01aebacc;
      uVar2 = DAT_01aeb9bc;
      *(undefined4 *)(unaff_x20 + 0x23c) = 0;
      *(undefined4 *)(unaff_x20 + 0x25c) = 0;
      in_stack_000001e0 = 0;
      in_stack_000001e8 = 0;
      FUN_089d99f0(uVar3,uVar2,uVar4,uVar8,uVar6,uVar5,uVar7,&stack0x000001e0,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      in_stack_000001c8 = in_stack_000001e8;
      in_stack_000001c0 = in_stack_000001e0;
      *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
      *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
      if (0x10 < uVar1) {
        uVar16 = *(undefined8 *)(unaff_x21 + 0x54);
        uVar18 = *(undefined8 *)(unaff_x21 + 0x4c);
        *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
        *(undefined8 *)(unaff_x20 + 0x278) = uVar16;
        *(undefined8 *)(unaff_x20 + 0x270) = uVar18;
        *(undefined8 *)(unaff_x20 + 0x26c) = in_stack_000001e8;
        *(undefined8 *)(unaff_x20 + 0x264) = in_stack_000001e0;
        uVar8 = DAT_01aec8c0;
        uVar7 = DAT_01aec7d8;
        uVar6 = DAT_01aec2ac;
        uVar5 = DAT_01aec0a4;
        uVar4 = DAT_01aebe40;
        uVar3 = DAT_01aeb7d8;
        uVar2 = DAT_01aeb6e4;
        *(undefined4 *)(unaff_x20 + 0x280) = 0;
        in_stack_000001a0 = 0;
        in_stack_000001a8 = 0;
        in_stack_000001b8 = 0;
        in_stack_000001b0 = 0;
        FUN_089d99f0(uVar2,uVar6,uVar8,uVar7,uVar4,uVar5,uVar3,&stack0x000001a0,0);
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        in_stack_00000188 = in_stack_000001a8;
        in_stack_00000180 = in_stack_000001a0;
        *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
        *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
        if (0x11 < uVar1) {
          uVar16 = *(undefined8 *)(unaff_x21 + 0x14);
          uVar18 = *(undefined8 *)(unaff_x21 + 0xc);
          *(undefined4 *)(unaff_x20 + 0x284) = 0x10;
          *(undefined8 *)(unaff_x20 + 0x290) = in_stack_000001a8;
          *(undefined8 *)(unaff_x20 + 0x288) = in_stack_000001a0;
          uVar2 = DAT_01aeb7dc;
          *(undefined8 *)(unaff_x20 + 0x29c) = uVar16;
          *(undefined8 *)(unaff_x20 + 0x294) = uVar18;
          uVar8 = DAT_01aecd2c;
          uVar7 = DAT_01aecd28;
          uVar6 = DAT_01aec1a8;
          uVar5 = DAT_01aebf54;
          uVar4 = DAT_01aebb9c;
          uVar3 = DAT_01aeb9c0;
          *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
          in_stack_00000160 = 0;
          uStack0000000000000168 = 0;
          uStack000000000000016c = 0;
          in_stack_00000178 = 0;
          uStack0000000000000170 = 0;
          uStack0000000000000174 = 0;
          FUN_089d99f0(uVar2,uVar6,uVar3,uVar7,uVar5,uVar8,uVar4,&stack0x00000160,0);
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
            uVar4 = DAT_01aecd30;
            uVar3 = DAT_01aebf58;
            uVar2 = DAT_01aeb634;
            *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
            in_stack_00000120 = 0;
            uStack0000000000000128 = 0;
            uStack000000000000012c = 0;
            in_stack_00000138 = 0;
            uStack0000000000000130 = 0;
            uStack0000000000000134 = 0;
            FUN_089d99f0(uVar4,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000120,0);
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
              uVar4 = DAT_01aec488;
              uVar3 = DAT_01aebc7c;
              uVar2 = DAT_01aeb638;
              *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
              in_stack_000000e0 = 0;
              uStack00000000000000e8 = 0;
              uStack00000000000000ec = 0;
              in_stack_000000f8 = 0;
              uStack00000000000000f0 = 0;
              uStack00000000000000f4 = 0;
              FUN_089d99f0(uVar3,uVar2,uVar4,0,0,0,0xbf800000,&stack0x000000e0,0);
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
                uVar4 = DAT_01aece38;
                uVar3 = DAT_01aec630;
                uVar2 = DAT_01aeb9c4;
                *(undefined4 *)(unaff_x20 + 0x310) = 0;
                in_stack_000000a0 = 0;
                uStack00000000000000a8 = 0;
                uStack00000000000000ac = 0;
                in_stack_000000b8 = 0;
                uStack00000000000000b0 = 0;
                uStack00000000000000b4 = 0;
                FUN_089d99f0(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x000000a0,0);
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
                  uVar3 = DAT_01aeb640;
                  uVar2 = DAT_01aeb63c;
                  *(undefined8 *)(unaff_x20 + 0x32c) = uStack0000000000000094;
                  *(ulong *)(unaff_x20 + 0x324) =
                       CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
                  uVar4 = DAT_01aebe44;
                  *(undefined4 *)(unaff_x20 + 0x334) = 0;
                  in_stack_00000060 = 0;
                  uStack0000000000000068 = 0;
                  uStack000000000000006c = 0;
                  in_stack_00000078 = 0;
                  uStack0000000000000070 = 0;
                  uStack0000000000000074 = 0;
                  FUN_089d99f0(uVar2,uVar4,uVar3,0,0,0,0xbf800000,&stack0x00000060,0);
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
                    uVar4 = DAT_01aed1d0;
                    uVar3 = DAT_01aecd38;
                    uVar2 = DAT_01aecd34;
                    *(undefined4 *)(unaff_x20 + 0x358) = 0;
                    in_stack_00000020 = 0;
                    uStack0000000000000028 = 0;
                    uStack000000000000002c = 0;
                    in_stack_00000038 = 0;
                    uStack0000000000000030 = 0;
                    uStack0000000000000034 = 0;
                    FUN_089d99f0(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x00000020,0);
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
                        *(long *)(unaff_x19 + 0x10) = unaff_x20;
                        thunk_FUN_040ec700();
                        **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
                        thunk_FUN_040ec700(*(undefined8 *)(*unaff_x23 + 0xb8));
                        lVar14 = thunk_FUN_040b4efc(*unaff_x23);
                        FUN_07a5bd10();
                        puVar13 = PTR_DAT_092f0ac0;
                        puVar12 = PTR_DAT_092f0ab8;
                        puVar11 = PTR_DAT_092f0ab0;
                        puVar10 = PTR_DAT_092f0aa8;
                        puVar9 = PTR_DAT_092f0aa0;
                        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                          lVar15 = *(long *)PTR_DAT_092f0ac0;
                          uVar18 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                          if (*(int *)(lVar15 + 0xe4) == 0) {
                            thunk_FUN_040d65a8();
                            lVar15 = *(long *)puVar13;
                          }
                          uVar19 = **(undefined8 **)(lVar15 + 0xb8);
                          uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar11);
                          FUN_05681afc(uVar16,uVar19,*(undefined8 *)puVar12,0);
                          uVar18 = FUN_04fa9204(uVar18,uVar16,*(undefined8 *)puVar9);
                          uVar18 = FUN_04fba268(uVar18,*(undefined8 *)puVar10);
                          if (lVar14 != 0) {
                            *(undefined8 *)(lVar14 + 0x10) = uVar18;
                            thunk_FUN_040ec700();
                            plVar17 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                            *plVar17 = lVar14;
                            thunk_FUN_040ec700(plVar17,lVar14);
                            return;
                          }
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
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


