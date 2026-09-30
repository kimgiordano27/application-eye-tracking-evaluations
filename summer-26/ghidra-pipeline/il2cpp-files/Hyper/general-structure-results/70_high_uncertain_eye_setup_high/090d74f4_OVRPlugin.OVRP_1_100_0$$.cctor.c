/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$.cctor
ENTRY_POINT: 090d74f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_100_0___cctor(undefined1 param_1 [16],undefined1 param_2 [16])

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
  undefined8 *unaff_x22;
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
  
  unaff_x22[1] = param_1._8_8_;
  *unaff_x22 = param_1._0_8_;
  uVar2 = DAT_01df453c;
  uVar1 = DAT_01df4538;
  *(long *)((long)unaff_x22 + 0x14) = param_2._8_8_;
  *(long *)((long)unaff_x22 + 0xc) = param_2._0_8_;
  uVar3 = DAT_01df48dc;
  *(undefined4 *)(unaff_x20 + 0x334) = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  FUN_0a188128(uVar1,uVar3,uVar2,&stack0x00000060,0);
  uStack0000000000000054 = CONCAT44(uStack0000000000000078,uStack0000000000000074);
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  uStack000000000000004c = uStack000000000000006c;
  in_stack_00000050 = uStack0000000000000070;
  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
    *(ulong *)((long)unaff_x22 + 0x2c) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(undefined8 *)((long)unaff_x22 + 0x24) = uStack0000000000000060;
    unaff_x22[7] = uStack0000000000000054;
    unaff_x22[6] = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    uVar3 = DAT_01df51e4;
    uVar2 = DAT_01df4fb0;
    uVar1 = DAT_01df4fac;
    *(undefined4 *)(unaff_x20 + 0x358) = 0;
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_0a188128(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
      *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
      *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
      *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined4 *)(unaff_x20 + 0x37c) = 0;
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        thunk_FUN_049ee3d8();
        **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
        thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x23 + 0xb8));
        lVar9 = thunk_FUN_04983f60(*unaff_x23);
        FUN_090d6824();
        puVar8 = PTR_DAT_0ac79958;
        puVar7 = PTR_DAT_0ac79950;
        puVar6 = PTR_DAT_0ac79948;
        puVar5 = PTR_DAT_0ac79940;
        puVar4 = PTR_DAT_0ac79938;
        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
          lVar10 = *(long *)PTR_DAT_0ac79958;
          uVar13 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar10 = *(long *)puVar8;
          }
          uVar14 = **(undefined8 **)(lVar10 + 0xb8);
          uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar6);
          FUN_063e13b4(uVar11,uVar14,*(undefined8 *)puVar7,0);
          uVar13 = FUN_05b76c98(uVar13,uVar11,*(undefined8 *)puVar4);
          uVar13 = FUN_05b85be0(uVar13,*(undefined8 *)puVar5);
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x10) = uVar13;
            thunk_FUN_049ee3d8();
            plVar12 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
            *plVar12 = lVar9;
            thunk_FUN_049ee3d8(plVar12,lVar9);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


