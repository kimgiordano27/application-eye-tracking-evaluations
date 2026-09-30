/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 060367fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(void)

{
  int iVar1;
  undefined *puVar2;
  undefined1 in_w8;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 unaff_w23;
  long unaff_x24;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  
  *(undefined1 *)(unaff_x24 + 0xc2e) = in_w8;
  iVar1 = *(int *)(unaff_x20 + 0xcc);
  *(undefined4 *)(unaff_x20 + 0x10) = unaff_w23;
  if (0 < iVar1) {
    lVar3 = *(long *)(unaff_x20 + 0x38);
    if (lVar3 == 0) goto LAB_06036a8c;
    lVar5 = 4;
    do {
      uVar6 = lVar5 - 4;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_06036a88:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(undefined8 *)(lVar3 + lVar5 * 8) = 0xffffffffffffffff;
      lVar8 = *(long *)(unaff_x20 + 0x40);
      if (lVar8 == 0) goto LAB_06036a8c;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_06036a88;
      *(undefined8 *)(lVar8 + lVar5 * 8) = 0xffffffffffffffff;
      lVar8 = *(long *)(unaff_x20 + 0x48);
      if (lVar8 == 0) goto LAB_06036a8c;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_06036a88;
      lVar7 = lVar5 + -3;
      *(undefined8 *)(lVar8 + lVar5 * 8) = 0xffffffffffffffff;
      lVar5 = lVar5 + 1;
    } while (lVar7 < iVar1);
  }
  puVar2 = PTR_DAT_0759b2a8;
  if (DAT_07a3caf1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3caf1 = '\x01';
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  FUN_06e43ac0(&stack0x000000c0,*(float *)(lVar3 + 0xc) * unaff_s8,
               *(float *)(lVar3 + 0x10) * unaff_s8,*(float *)(lVar3 + 0x14) * unaff_s8,0);
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
  uVar11 = *unaff_x22;
  uVar9 = *(undefined4 *)(unaff_x22 + 3);
  uVar4 = unaff_x22[2];
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x22[1];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar11;
  *(undefined4 *)(unaff_x20 + 0xa8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xb4) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xa4);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x9c);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar6 = FUN_06e587d8();
  if ((uVar6 & 1) != 0) {
    in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x78);
    in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x70);
    in_stack_00000138 = *(undefined8 *)(unaff_x20 + 0x88);
    in_stack_00000130 = *(undefined8 *)(unaff_x20 + 0x80);
    in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x58);
    in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x50);
    in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x68);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x60);
    if (unaff_x21 == 0) {
LAB_06036a8c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_06e6e3cc();
    FUN_06e43ac0(&stack0x000000c0,0);
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    FUN_06e43638(&stack0x00000080,&stack0x00000040);
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
    fVar12 = *(float *)(unaff_x20 + 0x94);
    fVar13 = *(float *)(unaff_x20 + 0x98);
    uVar4 = in_stack_00000080;
    uVar9 = FUN_06e6823c(*(undefined4 *)(unaff_x20 + 0x90));
    fVar14 = (float)uVar4;
    *(undefined4 *)(unaff_x20 + 0xac) = uVar9;
    *(float *)(unaff_x20 + 0xb0) = fVar12;
    *(float *)(unaff_x20 + 0xb4) = fVar13;
    fVar10 = (float)FUN_06e682dc();
    fVar15 = *(float *)(unaff_x20 + 0x9c);
    fVar18 = *(float *)(unaff_x20 + 0xa0);
    fVar17 = *(float *)(unaff_x20 + 0xa4);
    fVar16 = *(float *)(unaff_x20 + 0xa8);
    *(float *)(unaff_x20 + 0xb8) =
         (fVar12 * fVar17 + fVar14 * fVar15 + fVar10 * fVar16) - fVar13 * fVar18;
    *(float *)(unaff_x20 + 0xbc) =
         (fVar13 * fVar15 + fVar14 * fVar18 + fVar12 * fVar16) - fVar10 * fVar17;
    *(float *)(unaff_x20 + 0xc0) =
         (fVar10 * fVar18 + fVar14 * fVar17 + fVar13 * fVar16) - fVar12 * fVar15;
    *(float *)(unaff_x20 + 0xc4) =
         ((fVar14 * fVar16 - fVar10 * fVar15) - fVar12 * fVar18) - fVar13 * fVar17;
  }
  FUN_05e255b0();
  return;
}


