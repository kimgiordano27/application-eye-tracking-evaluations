/*
FUNCTION_NAME: OVRPlugin.Media$$Initialize
ENTRY_POINT: 060fc950
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Initialize(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 uVar12;
  long *unaff_x23;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined4 uStack0000000000000138;
  
  uVar13 = *(undefined4 *)(param_1 + 0x248);
  uVar14 = *(undefined4 *)(in_x9 + 0x8fc);
  uVar15 = *(undefined4 *)(in_x10 + 0xcd0);
  *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
  uStack0000000000000120 = 0;
  uStack0000000000000128 = 0;
  uStack0000000000000138 = 0;
  uStack0000000000000130 = 0;
  FUN_071ce4a0(uVar13,uVar14,uVar15,&stack0x00000120,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  in_stack_00000108 = uStack0000000000000128;
  in_stack_00000100 = uStack0000000000000120;
  *(undefined8 *)(unaff_x21 + 0x94) = *(undefined8 *)(unaff_x21 + 0xb4);
  *(undefined8 *)(unaff_x21 + 0x8c) = *(undefined8 *)(unaff_x21 + 0xac);
  if (0x13 < uVar1) {
    uVar9 = *(undefined8 *)(unaff_x21 + 0x94);
    uVar11 = *(undefined8 *)(unaff_x21 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
    *(undefined8 *)(unaff_x20 + 0x2d8) = uStack0000000000000128;
    *(undefined8 *)(unaff_x20 + 0x2d0) = uStack0000000000000120;
    *(undefined8 *)(unaff_x20 + 0x2e4) = uVar9;
    *(undefined8 *)(unaff_x20 + 0x2dc) = uVar11;
    uVar15 = DAT_01650ec0;
    uVar14 = DAT_01650b7c;
    uVar13 = DAT_01650900;
    *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    FUN_071ce4a0(uVar14,uVar13,uVar15,0,0,0,0xbf800000,&stack0x000000e0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    in_stack_000000c8 = in_stack_000000e8;
    in_stack_000000c0 = in_stack_000000e0;
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
    *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
    if (0x14 < uVar1) {
      uVar9 = *(undefined8 *)(unaff_x21 + 0x54);
      uVar11 = *(undefined8 *)(unaff_x21 + 0x4c);
      *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
      *(undefined8 *)(unaff_x20 + 0x308) = uVar9;
      *(undefined8 *)(unaff_x20 + 0x300) = uVar11;
      *(undefined8 *)(unaff_x20 + 0x2fc) = in_stack_000000e8;
      *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
      uVar15 = DAT_016512ac;
      uVar14 = DAT_01650f84;
      uVar13 = DAT_01650a88;
      *(undefined4 *)(unaff_x20 + 0x310) = 0;
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = 0;
      FUN_071ce4a0(uVar13,uVar14,uVar15,0,0,0,0xbf800000,&stack0x000000a0,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      in_stack_00000088 = in_stack_000000a8;
      in_stack_00000080 = in_stack_000000a0;
      *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
      *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
      if (0x15 < uVar1) {
        uVar9 = *(undefined8 *)(unaff_x21 + 0x14);
        uVar11 = *(undefined8 *)(unaff_x21 + 0xc);
        *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
        *(undefined8 *)(unaff_x20 + 800) = in_stack_000000a8;
        *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
        uVar14 = DAT_01650908;
        uVar13 = DAT_01650904;
        *(undefined8 *)(unaff_x20 + 0x32c) = uVar9;
        *(undefined8 *)(unaff_x20 + 0x324) = uVar11;
        uVar15 = DAT_01650c50;
        *(undefined4 *)(unaff_x20 + 0x334) = 0;
        in_stack_00000060 = 0;
        uStack0000000000000068 = 0;
        uStack000000000000006c = 0;
        in_stack_00000078 = 0;
        uStack0000000000000070 = 0;
        uStack0000000000000074 = 0;
        FUN_071ce4a0(uVar13,uVar15,uVar14,0,0,0,0xbf800000,&stack0x00000060,0);
        uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
        uStack0000000000000048 = uStack0000000000000068;
        in_stack_00000040 = in_stack_00000060;
        uStack000000000000004c = uStack000000000000006c;
        uStack0000000000000050 = uStack0000000000000070;
        if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
          *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
          *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
          *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
          *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
          uVar15 = DAT_0165146c;
          uVar14 = DAT_01651250;
          uVar13 = DAT_0165124c;
          *(undefined4 *)(unaff_x20 + 0x358) = 0;
          in_stack_00000020 = 0;
          uStack0000000000000028 = 0;
          uStack000000000000002c = 0;
          in_stack_00000038 = 0;
          uStack0000000000000030 = 0;
          uStack0000000000000034 = 0;
          FUN_071ce4a0(uVar13,uVar14,uVar15,0,0,0,0xbf800000,&stack0x00000020,0);
          if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
            *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
            *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
            *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
            *(undefined4 *)(unaff_x20 + 0x37c) = 0;
            if (unaff_x19 != 0) {
              *(long *)(unaff_x19 + 0x10) = unaff_x20;
              thunk_FUN_036b7ad0();
              **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
              thunk_FUN_036b7ad0(*(undefined8 *)(*unaff_x23 + 0xb8));
              lVar7 = thunk_FUN_0367fe20(*unaff_x23);
              FUN_060fbddc();
              puVar6 = PTR_DAT_07a24e18;
              puVar5 = PTR_DAT_07a24e10;
              puVar4 = PTR_DAT_07a24e08;
              puVar3 = PTR_DAT_07a24e00;
              puVar2 = PTR_DAT_07a24df8;
              if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                lVar8 = *(long *)PTR_DAT_07a24e18;
                uVar11 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                  lVar8 = *(long *)puVar6;
                }
                uVar12 = **(undefined8 **)(lVar8 + 0xb8);
                uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                FUN_0415445c(uVar9,uVar12,*(undefined8 *)puVar5,0);
                uVar11 = FUN_03cb63f4(uVar11,uVar9,*(undefined8 *)puVar2);
                uVar11 = FUN_03cc3ac8(uVar11,*(undefined8 *)puVar3);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x10) = uVar11;
                  thunk_FUN_036b7ad0();
                  plVar10 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                  *plVar10 = lVar7;
                  thunk_FUN_036b7ad0(plVar10,lVar7);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


