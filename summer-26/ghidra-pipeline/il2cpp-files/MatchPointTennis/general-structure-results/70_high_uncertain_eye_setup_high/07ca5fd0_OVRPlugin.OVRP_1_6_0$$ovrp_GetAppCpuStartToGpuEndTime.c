/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetAppCpuStartToGpuEndTime
ENTRY_POINT: 07ca5fd0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetAppCpuStartToGpuEndTime(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
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
  
  lVar2 = *(long *)(**(long **)(param_1 + 0x740) + 0xb8);
  FUN_095137c0(&stack0x000000c0,*(float *)(lVar2 + 0xc) * unaff_s8,
               *(float *)(lVar2 + 0x10) * unaff_s8,*(float *)(lVar2 + 0x14) * unaff_s8,0);
  in_stack_00000128 = in_stack_000000e8;
  in_stack_00000120 = in_stack_000000e0;
  in_stack_00000138 = in_stack_000000f8;
  in_stack_00000130 = in_stack_000000f0;
  in_stack_00000108 = in_stack_000000c8;
  in_stack_00000100 = in_stack_000000c0;
  in_stack_00000118 = in_stack_000000d8;
  in_stack_00000110 = in_stack_000000d0;
  *(undefined8 *)(unaff_x20 + 0x78) = in_stack_000000e8;
  *(undefined8 *)(unaff_x20 + 0x70) = in_stack_000000e0;
  *(undefined8 *)(unaff_x20 + 0x88) = in_stack_000000f8;
  *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000000f0;
  *(undefined8 *)(unaff_x20 + 0x58) = in_stack_000000c8;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_000000c0;
  *(undefined8 *)(unaff_x20 + 0x68) = in_stack_000000d8;
  *(undefined8 *)(unaff_x20 + 0x60) = in_stack_000000d0;
  uVar6 = *unaff_x22;
  uVar4 = *(undefined4 *)(unaff_x22 + 3);
  uVar3 = unaff_x22[2];
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x22[1];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar6;
  *(undefined4 *)(unaff_x20 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xb4) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xa4);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x9c);
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
    fVar7 = *(float *)(unaff_x20 + 0x94);
    fVar8 = *(float *)(unaff_x20 + 0x98);
    uVar3 = in_stack_00000080;
    uVar4 = FUN_09537f40(*(undefined4 *)(unaff_x20 + 0x90));
    fVar9 = (float)uVar3;
    *(undefined4 *)(unaff_x20 + 0xac) = uVar4;
    *(float *)(unaff_x20 + 0xb0) = fVar7;
    *(float *)(unaff_x20 + 0xb4) = fVar8;
    fVar5 = (float)FUN_09537fe0();
    fVar10 = *(float *)(unaff_x20 + 0x9c);
    fVar13 = *(float *)(unaff_x20 + 0xa0);
    fVar12 = *(float *)(unaff_x20 + 0xa4);
    fVar11 = *(float *)(unaff_x20 + 0xa8);
    *(float *)(unaff_x20 + 0xb8) =
         (fVar7 * fVar12 + fVar9 * fVar10 + fVar5 * fVar11) - fVar8 * fVar13;
    *(float *)(unaff_x20 + 0xbc) =
         (fVar8 * fVar10 + fVar9 * fVar13 + fVar7 * fVar11) - fVar5 * fVar12;
    *(float *)(unaff_x20 + 0xc0) =
         (fVar5 * fVar13 + fVar9 * fVar12 + fVar8 * fVar11) - fVar7 * fVar10;
    *(float *)(unaff_x20 + 0xc4) =
         ((fVar9 * fVar11 - fVar5 * fVar10) - fVar7 * fVar13) - fVar8 * fVar12;
  }
  FUN_07a62230();
  return;
}


