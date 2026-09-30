/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EraseSpace
ENTRY_POINT: 05d4dff0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_EraseSpace(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar14;
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
  
  uVar2 = DAT_0136a424;
  uVar1 = DAT_013699e8;
  uVar14 = *(undefined4 *)(in_x9 + 0x328);
  *(undefined4 *)(unaff_x20 + 0x310) = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  FUN_06902890(uVar1,uVar14,uVar2,0,0,0,0xbf800000,&stack0x000000a0,0);
  *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
  *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
  in_stack_00000088 = uStack00000000000000a8;
  in_stack_00000080 = uStack00000000000000a0;
  if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
    uVar12 = *(undefined8 *)(unaff_x22 + 0xc);
    *(undefined8 *)(unaff_x20 + 0x32c) = *(undefined8 *)(unaff_x22 + 0x14);
    *(undefined8 *)(unaff_x20 + 0x324) = uVar12;
    *(undefined8 *)(unaff_x20 + 800) = uStack00000000000000a8;
    *(undefined8 *)(unaff_x20 + 0x318) = uStack00000000000000a0;
    uVar14 = DAT_0136a50c;
    uVar2 = DAT_01369f3c;
    uVar1 = DAT_01369c70;
    *(undefined4 *)(unaff_x20 + 0x334) = 0;
    in_stack_00000060 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0;
    in_stack_00000078 = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000074 = 0;
    FUN_06902890(uVar2,uVar14,uVar1,0,0,0,0xbf800000,&stack0x00000060,0);
    uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
    uStack0000000000000050 = uStack0000000000000070;
    uStack0000000000000048 = uStack0000000000000068;
    uStack000000000000004c = uStack000000000000006c;
    in_stack_00000040 = in_stack_00000060;
    if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
      *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
      *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
      uVar14 = DAT_0136a674;
      uVar2 = DAT_0136a57c;
      uVar1 = DAT_01369fd0;
      *(undefined4 *)(unaff_x20 + 0x358) = 0;
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_06902890(uVar14,uVar1,uVar2,0,0,0,0xbf800000,&stack0x00000020,0);
      if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
        *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
        *(undefined4 *)(unaff_x20 + 0x37c) = 0;
        if (unaff_x19 != 0) {
          *(long *)(unaff_x19 + 0x10) = unaff_x20;
          thunk_FUN_03048534();
          **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
          thunk_FUN_03048534(*(undefined8 *)(*unaff_x23 + 0xb8));
          lVar8 = thunk_FUN_0301080c(*unaff_x23);
          FUN_05d4d368();
          puVar7 = PTR_DAT_06fb9370;
          puVar6 = PTR_DAT_06fb9368;
          puVar5 = PTR_DAT_06fb9360;
          puVar4 = PTR_DAT_06fb9358;
          puVar3 = PTR_DAT_06fb9350;
          if (**(long **)(*unaff_x23 + 0xb8) != 0) {
            lVar9 = *(long *)PTR_DAT_06fb9370;
            uVar12 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar9 = *(long *)puVar7;
            }
            uVar13 = **(undefined8 **)(lVar9 + 0xb8);
            uVar10 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
            FUN_057f6d58(uVar10,uVar13,*(undefined8 *)puVar6,0);
            uVar12 = FUN_03c457b0(uVar12,uVar10,*(undefined8 *)puVar3);
            uVar12 = FUN_03c5070c(uVar12,*(undefined8 *)puVar4);
            if (lVar8 != 0) {
              *(undefined8 *)(lVar8 + 0x10) = uVar12;
              thunk_FUN_03048534();
              plVar11 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
              *plVar11 = lVar8;
              thunk_FUN_03048534(plVar11,lVar8);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


