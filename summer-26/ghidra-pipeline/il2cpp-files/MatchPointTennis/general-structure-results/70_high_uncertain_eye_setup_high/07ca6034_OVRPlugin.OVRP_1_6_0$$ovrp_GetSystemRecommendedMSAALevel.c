/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetSystemRecommendedMSAALevel
ENTRY_POINT: 07ca6034
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetSystemRecommendedMSAALevel
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 uVar7;
  
  *(long *)(unaff_x20 + 0xb4) = param_1._8_8_;
  *(long *)(unaff_x20 + 0xac) = param_1._0_8_;
  *(long *)(unaff_x20 + 0xc0) = param_2._8_8_;
  *(long *)(unaff_x20 + 0xb8) = param_2._0_8_;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_09531730();
  if ((uVar1 & 1) != 0) {
    in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x78);
    in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x70);
    in_stack_00000138 = *(undefined8 *)(unaff_x20 + 0x88);
    in_stack_00000130 = *(undefined8 *)(unaff_x20 + 0x80);
    in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x58);
    in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x50);
    in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x68);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x60);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0953db60();
    FUN_095137c0(&stack0x000000c0,0);
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    FUN_09513338(&stack0x00000080,&stack0x00000040);
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    *(undefined8 *)(unaff_x20 + 0x78) = in_stack_000000a8;
    *(undefined8 *)(unaff_x20 + 0x70) = in_stack_000000a0;
    *(undefined8 *)(unaff_x20 + 0x88) = in_stack_000000b8;
    *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000000b0;
    *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000088;
    *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000080;
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000098;
    *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000090;
    fVar4 = *(float *)(unaff_x20 + 0x94);
    fVar5 = *(float *)(unaff_x20 + 0x98);
    uVar7 = in_stack_00000080;
    uVar2 = FUN_09537f40(*(undefined4 *)(unaff_x20 + 0x90));
    fVar6 = (float)uVar7;
    *(undefined4 *)(unaff_x20 + 0xac) = uVar2;
    *(float *)(unaff_x20 + 0xb0) = fVar4;
    *(float *)(unaff_x20 + 0xb4) = fVar5;
    fVar3 = (float)FUN_09537fe0();
    fVar8 = *(float *)(unaff_x20 + 0x9c);
    fVar11 = *(float *)(unaff_x20 + 0xa0);
    fVar10 = *(float *)(unaff_x20 + 0xa4);
    fVar9 = *(float *)(unaff_x20 + 0xa8);
    *(float *)(unaff_x20 + 0xb8) = (fVar4 * fVar10 + fVar6 * fVar8 + fVar3 * fVar9) - fVar5 * fVar11
    ;
    *(float *)(unaff_x20 + 0xbc) = (fVar5 * fVar8 + fVar6 * fVar11 + fVar4 * fVar9) - fVar3 * fVar10
    ;
    *(float *)(unaff_x20 + 0xc0) = (fVar3 * fVar11 + fVar6 * fVar10 + fVar5 * fVar9) - fVar4 * fVar8
    ;
    *(float *)(unaff_x20 + 0xc4) =
         ((fVar6 * fVar9 - fVar3 * fVar8) - fVar4 * fVar11) - fVar5 * fVar10;
  }
  FUN_07a62230();
  return;
}


