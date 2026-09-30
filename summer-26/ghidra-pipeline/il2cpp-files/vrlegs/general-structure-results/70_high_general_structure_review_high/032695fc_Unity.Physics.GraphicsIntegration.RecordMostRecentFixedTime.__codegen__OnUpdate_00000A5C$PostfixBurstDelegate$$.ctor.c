/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.RecordMostRecentFixedTime.__codegen__OnUpdate_00000A5C$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 032695fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Physics_GraphicsIntegration_RecordMostRecentFixedTime___codegen__OnUpdate_00000A5C_PostfixBurstDelegate___ctor
               (undefined1 param_1 [16])

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x19;
  undefined8 *puVar7;
  long unaff_x21;
  undefined8 *puVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uStack00000000000000a8 = param_1._8_8_;
  uStack00000000000000a0 = param_1._0_8_;
  puVar7 = (undefined8 *)(unaff_x21 + 0x30);
  uVar2 = FUN_025be440(*puVar7,0);
  if ((uVar2 & 1) == 0) {
    FUN_0326c1e0(*puVar7,0);
    in_stack_000000b8 = in_stack_00000018;
    in_stack_000000b0 = in_stack_00000010;
    in_stack_000000c8 = in_stack_00000028;
    in_stack_000000c0 = in_stack_00000020;
    uStack00000000000000a8 = in_stack_00000008;
    uStack00000000000000a0 = in_stack_00000000;
    if ((in_stack_00000020 != 0) && (*(long *)(in_stack_00000020 + 0x18) != 0)) {
      puVar8 = &stack0x000000a0;
      goto LAB_03269ae8;
    }
  }
                    /* try { // try from 03269790 to 03369793 has its CatchHandler @ 03269b08 */
                    /* try { // try from 03269794 to 0336979b has its CatchHandler @ 03269b28 */
  FUN_03291114();
                    /* try { // try from 032697b8 to 033697bf has its CatchHandler @ 03269b2c */
  FUN_03272f24(&stack0x00000098,0,8,0);
  puVar1 = PTR_DAT_03cc5710;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000098,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if ((long)uVar2 < 1) {
    FUN_03291114();
    _in_stack_00000040 = FUN_03273208(0,0x200000,0);
    uVar3 = FUN_01fb4284(in_stack_00000040,in_stack_00000040._8_8_,*(undefined8 *)puVar1);
    uVar2 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),uVar3,*(undefined8 *)(unaff_x22 + 0x28));
    if ((long)uVar2 < 0) {
      puVar7 = &stack0x00000040;
      goto LAB_03269ad4;
    }
    lVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfb98,uVar2 & 0xffffffff);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if (*(int *)(lVar5 + 0x18) != 0) {
        lVar9 = lVar5 + 0x20;
      }
    }
    uVar3 = FUN_03273200(uVar3,0);
    FUN_0366a438(lVar9,uVar3,uVar2,0);
    plVar6 = (long *)FUN_025e6b04(0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = (**(code **)(*plVar6 + 0x378))
                      (plVar6,lVar5,0,uVar2 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x380));
    FUN_0326c1e0(uVar3,0);
    uStack00000000000000a0 = in_stack_00000000 & 0xffffffff00000000;
    uStack00000000000000a8 = in_stack_00000008;
    in_stack_000000b8 = in_stack_00000018;
    in_stack_000000b0 = in_stack_00000010;
    in_stack_000000c8 = in_stack_00000028;
    in_stack_000000c0 = in_stack_00000020;
    *puVar7 = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,uVar3);
    puVar8 = &stack0x000000a0;
    puVar7 = &stack0x00000040;
  }
  else {
    FUN_03291114();
    _in_stack_00000088 = FUN_03273208(0,uVar2 & 0xffffffff,0);
    uVar3 = FUN_01fb4284(in_stack_00000088,in_stack_00000088._8_8_,*(undefined8 *)puVar1);
    uVar4 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),uVar3,*(undefined8 *)(unaff_x22 + 0x28));
    if (uVar4 == uVar2) {
      uVar3 = FUN_03273200(uVar3,0);
      uVar2 = FUN_0326d03c(uVar3,uVar2 & 0xffffffff,&stack0x000000a0,0);
      if ((uVar2 & 1) != 0) {
        FUN_0222c538(&stack0x00000088,*(undefined8 *)PTR_DAT_03cc8500);
        puVar8 = &stack0x000000a0;
        uVar3 = FUN_0326c170(&stack0x000000a0,0);
        *puVar7 = uVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,uVar3);
        goto LAB_03269ae8;
      }
    }
    puVar7 = &stack0x00000088;
LAB_03269ad4:
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    puVar8 = &stack0x00000050;
  }
  FUN_0222c538(puVar7,*(undefined8 *)PTR_DAT_03cc8500);
LAB_03269ae8:
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar3 = puVar8[4];
  uVar13 = puVar8[1];
  uVar12 = *puVar8;
  unaff_x19[3] = puVar8[3];
  unaff_x19[2] = uVar11;
  unaff_x19[5] = uVar10;
  unaff_x19[4] = uVar3;
  unaff_x19[1] = uVar13;
  *unaff_x19 = uVar12;
  return;
}


