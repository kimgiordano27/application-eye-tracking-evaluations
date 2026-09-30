/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Initialize
ENTRY_POINT: 0749e318
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Initialize(long param_1)

{
  undefined4 uVar1;
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
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar13;
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
  
  uVar1 = DAT_019142e8;
  uVar13 = *(undefined4 *)(param_1 + 0x184);
  uVar14 = *(undefined4 *)(in_x9 + 0xb3c);
  *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
  uStack0000000000000120 = 0;
  uStack0000000000000128 = 0;
  uStack0000000000000138 = 0;
  uStack0000000000000130 = 0;
  FUN_08a5b7d0(uVar13,uVar14,uVar1,0,0,0,0xbf800000,&stack0x00000120,0);
  *(undefined8 *)(unaff_x22 + 0x94) = *(undefined8 *)(unaff_x22 + 0xb4);
  *(undefined8 *)(unaff_x22 + 0x8c) = *(undefined8 *)(unaff_x22 + 0xac);
  in_stack_00000108 = uStack0000000000000128;
  in_stack_00000100 = uStack0000000000000120;
  if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x8c);
    *(undefined8 *)(unaff_x20 + 0x2e4) = *(undefined8 *)(unaff_x22 + 0x94);
    *(undefined8 *)(unaff_x20 + 0x2dc) = uVar11;
    *(undefined8 *)(unaff_x20 + 0x2d8) = uStack0000000000000128;
    *(undefined8 *)(unaff_x20 + 0x2d0) = uStack0000000000000120;
    uVar14 = DAT_01914ac0;
    uVar13 = DAT_019147ec;
    uVar1 = DAT_01913f8c;
    *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    FUN_08a5b7d0(uVar1,uVar13,uVar14,0,0,0,0xbf800000,&stack0x000000e0,0);
    *(undefined8 *)(unaff_x22 + 0x54) = *(undefined8 *)(unaff_x22 + 0x74);
    *(undefined8 *)(unaff_x22 + 0x4c) = *(undefined8 *)(unaff_x22 + 0x6c);
    in_stack_000000c8 = in_stack_000000e8;
    in_stack_000000c0 = in_stack_000000e0;
    if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
      uVar11 = *(undefined8 *)(unaff_x22 + 0x4c);
      *(undefined8 *)(unaff_x20 + 0x308) = *(undefined8 *)(unaff_x22 + 0x54);
      *(undefined8 *)(unaff_x20 + 0x300) = uVar11;
      *(undefined8 *)(unaff_x20 + 0x2fc) = in_stack_000000e8;
      *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
      uVar14 = DAT_01914c7c;
      uVar13 = DAT_01914b40;
      uVar1 = DAT_01914030;
      *(undefined4 *)(unaff_x20 + 0x310) = 0;
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = 0;
      FUN_08a5b7d0(uVar1,uVar13,uVar14,0,0,0,0xbf800000,&stack0x000000a0,0);
      *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
      *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
      in_stack_00000088 = in_stack_000000a8;
      in_stack_00000080 = in_stack_000000a0;
      if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
        uVar11 = *(undefined8 *)(unaff_x22 + 0xc);
        *(undefined8 *)(unaff_x20 + 0x32c) = *(undefined8 *)(unaff_x22 + 0x14);
        *(undefined8 *)(unaff_x20 + 0x324) = uVar11;
        *(undefined8 *)(unaff_x20 + 800) = in_stack_000000a8;
        *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
        uVar14 = DAT_01914dc0;
        uVar13 = DAT_019146ac;
        uVar1 = DAT_019143a0;
        *(undefined4 *)(unaff_x20 + 0x334) = 0;
        in_stack_00000060 = 0;
        uStack0000000000000068 = 0;
        uStack000000000000006c = 0;
        in_stack_00000078 = 0;
        uStack0000000000000070 = 0;
        uStack0000000000000074 = 0;
        FUN_08a5b7d0(uVar13,uVar14,uVar1,0,0,0,0xbf800000,&stack0x00000060,0);
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
          uVar14 = DAT_01914f74;
          uVar13 = DAT_01914e48;
          uVar1 = DAT_01914738;
          *(undefined4 *)(unaff_x20 + 0x358) = 0;
          in_stack_00000020 = 0;
          uStack0000000000000028 = 0;
          uStack000000000000002c = 0;
          in_stack_00000038 = 0;
          uStack0000000000000030 = 0;
          uStack0000000000000034 = 0;
          FUN_08a5b7d0(uVar14,uVar1,uVar13,0,0,0,0xbf800000,&stack0x00000020,0);
          if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
            *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
            *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
            *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
            *(undefined4 *)(unaff_x20 + 0x37c) = 0;
            if (unaff_x19 != 0) {
              *(long *)(unaff_x19 + 0x10) = unaff_x20;
              thunk_FUN_03d1023c();
              **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
              thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x23 + 0xb8));
              lVar7 = thunk_FUN_03d2ef40(*unaff_x23);
              FUN_0749d784();
              puVar6 = PTR_DAT_09223cc0;
              puVar5 = PTR_DAT_09223cb8;
              puVar4 = PTR_DAT_09223cb0;
              puVar3 = PTR_DAT_09223ca8;
              puVar2 = PTR_DAT_09223ca0;
              if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                lVar8 = *(long *)PTR_DAT_09223cc0;
                uVar11 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                  lVar8 = *(long *)puVar6;
                }
                uVar12 = **(undefined8 **)(lVar8 + 0xb8);
                uVar9 = thunk_FUN_03d2ef40(*(undefined8 *)puVar4);
                FUN_054b7910(uVar9,uVar12,*(undefined8 *)puVar5,0);
                uVar11 = FUN_04f0fabc(uVar11,uVar9,*(undefined8 *)puVar2);
                uVar11 = FUN_04f1efa0(uVar11,*(undefined8 *)puVar3);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x10) = uVar11;
                  thunk_FUN_03d1023c();
                  plVar10 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                  *plVar10 = lVar7;
                  thunk_FUN_03d1023c(plVar10,lVar7);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


