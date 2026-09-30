/*
FUNCTION_NAME: OVRPlugin.Media$$GetInitialized
ENTRY_POINT: 060fcad8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetInitialized(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  
  *(undefined4 *)(unaff_x20 + 0x334) = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  FUN_071ce4a0();
  uStack0000000000000054 = CONCAT44(uStack0000000000000078,uStack0000000000000074);
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  uStack000000000000004c = uStack000000000000006c;
  in_stack_00000050 = uStack0000000000000070;
  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
    *(ulong *)(unaff_x22 + 0x2c) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(undefined8 *)(unaff_x22 + 0x24) = uStack0000000000000060;
    *(undefined8 *)(unaff_x22 + 0x38) = uStack0000000000000054;
    *(ulong *)(unaff_x22 + 0x30) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    uVar3 = DAT_0165146c;
    uVar2 = DAT_01651250;
    uVar1 = DAT_0165124c;
    *(undefined4 *)(unaff_x20 + 0x358) = 0;
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_071ce4a0(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
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
        lVar9 = thunk_FUN_0367fe20(*unaff_x23);
        FUN_060fbddc();
        puVar8 = PTR_DAT_07a24e18;
        puVar7 = PTR_DAT_07a24e10;
        puVar6 = PTR_DAT_07a24e08;
        puVar5 = PTR_DAT_07a24e00;
        puVar4 = PTR_DAT_07a24df8;
        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
          lVar10 = *(long *)PTR_DAT_07a24e18;
          uVar13 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar10 = *(long *)puVar8;
          }
          uVar14 = **(undefined8 **)(lVar10 + 0xb8);
          uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
          FUN_0415445c(uVar11,uVar14,*(undefined8 *)puVar7,0);
          uVar13 = FUN_03cb63f4(uVar13,uVar11,*(undefined8 *)puVar4);
          uVar13 = FUN_03cc3ac8(uVar13,*(undefined8 *)puVar5);
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x10) = uVar13;
            thunk_FUN_036b7ad0();
            plVar12 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
            *plVar12 = lVar9;
            thunk_FUN_036b7ad0(plVar12,lVar9);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


