/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetEyeRecommendedResolutionScale
ENTRY_POINT: 07ca5f6c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetEyeRecommendedResolutionScale(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long in_x9;
  undefined8 uVar3;
  long in_x10;
  undefined8 in_x11;
  ulong in_x12;
  long in_x13;
  long lVar4;
  ulong in_x14;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  
  while (in_x12 < in_x14) {
    *(undefined8 *)(in_x13 + in_x10 * 8) = in_x11;
    lVar4 = *(long *)(unaff_x20 + 0x48);
    if (lVar4 == 0) {
LAB_07ca61b8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar4 + 0x18) <= in_x12) break;
    *(undefined8 *)(lVar4 + in_x10 * 8) = in_x11;
    puVar1 = PTR_DAT_09f1e538;
    if (param_1 <= in_x10 + -3) {
      if (DAT_0a51bf46 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf46 = '\x01';
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      FUN_095137c0(&stack0x000000c0,*(float *)(lVar4 + 0xc) * unaff_s8,
                   *(float *)(lVar4 + 0x10) * unaff_s8,*(float *)(lVar4 + 0x14) * unaff_s8,0);
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
      uVar7 = *unaff_x22;
      uVar5 = *(undefined4 *)(unaff_x22 + 3);
      uVar3 = unaff_x22[2];
      *(undefined8 *)(unaff_x20 + 0x98) = unaff_x22[1];
      *(undefined8 *)(unaff_x20 + 0x90) = uVar7;
      *(undefined4 *)(unaff_x20 + 0xa8) = uVar5;
      *(undefined8 *)(unaff_x20 + 0xa0) = uVar3;
      *(undefined8 *)(unaff_x20 + 0xb4) = *(undefined8 *)(unaff_x20 + 0x98);
      *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x20 + 0x90);
      *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xa4);
      *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x9c);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar2 = FUN_09531730();
      if ((uVar2 & 1) != 0) {
        in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x78);
        in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x70);
        in_stack_00000138 = *(undefined8 *)(unaff_x20 + 0x88);
        in_stack_00000130 = *(undefined8 *)(unaff_x20 + 0x80);
        in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x58);
        in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x50);
        in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x68);
        in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x60);
        if (unaff_x21 == 0) goto LAB_07ca61b8;
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
        fVar8 = *(float *)(unaff_x20 + 0x94);
        fVar9 = *(float *)(unaff_x20 + 0x98);
        uVar3 = in_stack_00000080;
        uVar5 = FUN_09537f40(*(undefined4 *)(unaff_x20 + 0x90));
        fVar10 = (float)uVar3;
        *(undefined4 *)(unaff_x20 + 0xac) = uVar5;
        *(float *)(unaff_x20 + 0xb0) = fVar8;
        *(float *)(unaff_x20 + 0xb4) = fVar9;
        fVar6 = (float)FUN_09537fe0();
        fVar11 = *(float *)(unaff_x20 + 0x9c);
        fVar14 = *(float *)(unaff_x20 + 0xa0);
        fVar13 = *(float *)(unaff_x20 + 0xa4);
        fVar12 = *(float *)(unaff_x20 + 0xa8);
        *(float *)(unaff_x20 + 0xb8) =
             (fVar8 * fVar13 + fVar10 * fVar11 + fVar6 * fVar12) - fVar9 * fVar14;
        *(float *)(unaff_x20 + 0xbc) =
             (fVar9 * fVar11 + fVar10 * fVar14 + fVar8 * fVar12) - fVar6 * fVar13;
        *(float *)(unaff_x20 + 0xc0) =
             (fVar6 * fVar14 + fVar10 * fVar13 + fVar9 * fVar12) - fVar8 * fVar11;
        *(float *)(unaff_x20 + 0xc4) =
             ((fVar10 * fVar12 - fVar6 * fVar11) - fVar8 * fVar14) - fVar9 * fVar13;
      }
      FUN_07a62230();
      return;
    }
    in_x12 = in_x10 - 3;
    if (*(uint *)(in_x9 + 0x18) <= in_x12) break;
    *(undefined8 *)(in_x9 + (in_x10 + 1) * 8) = in_x11;
    in_x13 = *(long *)(unaff_x20 + 0x40);
    if (in_x13 == 0) goto LAB_07ca61b8;
    in_x10 = in_x10 + 1;
    in_x14 = (ulong)*(uint *)(in_x13 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


