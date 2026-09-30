/*
FUNCTION_NAME: Oculus.Interaction.TouchHandGrabInteractor$$DoPostprocess
ENTRY_POINT: 05bdff38
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Oculus_Interaction_TouchHandGrabInteractor__DoPostprocess(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uStack0000000000000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000b8;
  
  thunk_FUN_032e1da0(PTR_DAT_072a7e80);
  thunk_FUN_032e1da0(PTR_DAT_072a7ee0);
  thunk_FUN_032e1da0(PTR_DAT_072a7e88);
  thunk_FUN_032e1da0(PTR_DAT_072a7ed8);
  thunk_FUN_032e1da0(PTR_DAT_072a7ed0);
  thunk_FUN_032e1da0(PTR_DAT_072a7ee8);
  *(undefined1 *)(unaff_x24 + 0xcb4) = 1;
  uVar7 = *unaff_x21;
  in_stack_00000008 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  *(undefined8 *)(unaff_x23 + 0x34) = 0;
  *(undefined8 *)(unaff_x23 + 0x2c) = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  lVar8 = thunk_FUN_032a56a0(uVar7);
  FUN_0434fb80(lVar8,*unaff_x20);
  puVar5 = PTR_DAT_072a7ee8;
  puVar4 = PTR_DAT_072a7ee0;
  puVar3 = PTR_DAT_072a7e78;
  puVar2 = PTR_DAT_072a7e70;
  if (*(long *)(unaff_x19 + 0x310) != 0) {
    FUN_043538c8(&stack0x00000030,*(long *)(unaff_x19 + 0x310),*(undefined8 *)PTR_DAT_072a7e88);
    in_stack_00000018 = in_stack_00000038;
    in_stack_00000010 = in_stack_00000030;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    while (uVar9 = FUN_053390c0(&stack0x00000010,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
      in_stack_00000008 = in_stack_00000028;
      uStack0000000000000000 = in_stack_00000020 & 0xffffffff;
      thunk_FUN_0333a630(&stack0x00000008);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar11 + 0x28);
        *puVar10 = in_stack_00000008;
        *(ulong *)(lVar11 + 0x20) = uStack0000000000000000;
        thunk_FUN_0333a630(puVar10,0);
      }
      else {
        Unity_Collections_NativeArray<ContactPairHeader>__CopySafe
                  (lVar8,uStack0000000000000000,in_stack_00000008,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_053390bc(&stack0x00000010,*(undefined8 *)puVar2);
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
    FUN_05bf5e8c(lVar11,0);
    in_stack_00000070 = *(undefined4 *)(unaff_x19 + 0x40);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x6c);
    uVar7 = *(undefined8 *)(unaff_x19 + 100);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x5c);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x54);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x4c);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x44);
    *(undefined8 *)(unaff_x23 + 0x34) = *(undefined8 *)(unaff_x19 + 0x74);
    *(undefined8 *)(unaff_x23 + 0x2c) = uVar13;
    *(undefined8 *)(unaff_x23 + 0x24) = uVar7;
    *(undefined8 *)(unaff_x23 + 0x1c) = uVar15;
    *(undefined8 *)(unaff_x23 + 0x14) = uVar14;
    uStack000000000000007c = (undefined4)uVar17;
    in_stack_00000080 = (undefined4)((ulong)uVar17 >> 0x20);
    uStack0000000000000074 = (undefined4)uVar16;
    in_stack_00000078 = (undefined4)((ulong)uVar16 >> 0x20);
    uVar6 = FUN_05c36d10((undefined4 *)(unaff_x19 + 0x40),0);
    FUN_05c36d18(&stack0x00000070,uVar6,0);
    in_stack_00000038 = CONCAT44(uStack000000000000007c,in_stack_00000078);
    in_stack_00000030 = CONCAT44(uStack0000000000000074,in_stack_00000070);
    in_stack_00000040 = CONCAT44(uStack0000000000000084,in_stack_00000080);
    uStack0000000000000064 = *(undefined8 *)(unaff_x23 + 0x34);
    uVar7 = *(undefined8 *)(unaff_x23 + 0x2c);
    in_stack_00000048 = in_stack_00000088;
    uStack0000000000000058 = (undefined4)in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    uStack000000000000005c = (undefined4)uVar7;
    uStack0000000000000060 = (undefined4)((ulong)uVar7 >> 0x20);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar11 + 0x44) = uStack0000000000000064;
      *(undefined8 *)(lVar11 + 0x3c) = uVar7;
      *(undefined8 *)(lVar11 + 0x28) = in_stack_00000088;
      *(ulong *)(lVar11 + 0x20) = in_stack_00000040;
      *(ulong *)(lVar11 + 0x38) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      *(undefined8 *)(lVar11 + 0x30) = in_stack_00000090;
      *(undefined8 *)(lVar11 + 0x18) = in_stack_00000038;
      *(undefined8 *)(lVar11 + 0x10) = in_stack_00000030;
      *(undefined8 *)(lVar11 + 0x4c) = *(undefined8 *)(unaff_x19 + 0x80);
      *(undefined1 *)(lVar11 + 0x54) = *(undefined1 *)(unaff_x19 + 0x2f8);
      *(long *)(lVar11 + 0x58) = lVar8;
      thunk_FUN_0333a630((long *)(lVar11 + 0x58),lVar8);
      if (*(long *)(unaff_x22 + 0x28) == in_stack_000000b8) {
        return lVar11;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


