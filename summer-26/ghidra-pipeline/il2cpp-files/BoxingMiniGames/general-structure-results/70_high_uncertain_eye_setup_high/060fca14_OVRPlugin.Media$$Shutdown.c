/*
FUNCTION_NAME: OVRPlugin.Media$$Shutdown
ENTRY_POINT: 060fca14
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Shutdown(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined4 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  long unaff_x21;
  undefined8 uVar15;
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
  undefined8 in_stack_00000088;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uVar12 = *(undefined8 *)(unaff_x21 + 0x54);
  uVar14 = *(undefined8 *)(unaff_x21 + 0x4c);
  *(undefined4 *)(unaff_x20 + 0x2f0) = in_w8;
  *(undefined8 *)(unaff_x20 + 0x308) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x300) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x2fc) = in_stack_000000c8;
  *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000c0;
  uVar4 = DAT_016512ac;
  uVar3 = DAT_01650f84;
  uVar2 = DAT_01650a88;
  *(undefined4 *)(unaff_x20 + 0x310) = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  FUN_071ce4a0(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x000000a0,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  in_stack_00000088 = uStack00000000000000a8;
  in_stack_00000080 = uStack00000000000000a0;
  *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
  *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
  if (0x15 < uVar1) {
    uVar12 = *(undefined8 *)(unaff_x21 + 0x14);
    uVar14 = *(undefined8 *)(unaff_x21 + 0xc);
    *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
    *(undefined8 *)(unaff_x20 + 800) = uStack00000000000000a8;
    *(undefined8 *)(unaff_x20 + 0x318) = uStack00000000000000a0;
    uVar3 = DAT_01650908;
    uVar2 = DAT_01650904;
    *(undefined8 *)(unaff_x20 + 0x32c) = uVar12;
    *(undefined8 *)(unaff_x20 + 0x324) = uVar14;
    uVar4 = DAT_01650c50;
    *(undefined4 *)(unaff_x20 + 0x334) = 0;
    in_stack_00000060 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0;
    in_stack_00000078 = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000074 = 0;
    FUN_071ce4a0(uVar2,uVar4,uVar3,0,0,0,0xbf800000,&stack0x00000060,0);
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
      uVar4 = DAT_0165146c;
      uVar3 = DAT_01651250;
      uVar2 = DAT_0165124c;
      *(undefined4 *)(unaff_x20 + 0x358) = 0;
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_071ce4a0(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x00000020,0);
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
          lVar10 = thunk_FUN_0367fe20(*unaff_x23);
          FUN_060fbddc();
          puVar9 = PTR_DAT_07a24e18;
          puVar8 = PTR_DAT_07a24e10;
          puVar7 = PTR_DAT_07a24e08;
          puVar6 = PTR_DAT_07a24e00;
          puVar5 = PTR_DAT_07a24df8;
          if (**(long **)(*unaff_x23 + 0xb8) != 0) {
            lVar11 = *(long *)PTR_DAT_07a24e18;
            uVar14 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar11 = *(long *)puVar9;
            }
            uVar15 = **(undefined8 **)(lVar11 + 0xb8);
            uVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
            FUN_0415445c(uVar12,uVar15,*(undefined8 *)puVar8,0);
            uVar14 = FUN_03cb63f4(uVar14,uVar12,*(undefined8 *)puVar5);
            uVar14 = FUN_03cc3ac8(uVar14,*(undefined8 *)puVar6);
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x10) = uVar14;
              thunk_FUN_036b7ad0();
              plVar13 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
              *plVar13 = lVar10;
              thunk_FUN_036b7ad0(plVar13,lVar10);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


