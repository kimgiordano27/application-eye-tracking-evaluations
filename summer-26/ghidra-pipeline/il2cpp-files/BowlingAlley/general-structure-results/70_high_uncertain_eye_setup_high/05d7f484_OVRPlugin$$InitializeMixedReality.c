/*
FUNCTION_NAME: OVRPlugin$$InitializeMixedReality
ENTRY_POINT: 05d7f484
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__InitializeMixedReality(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long in_x9;
  undefined8 uVar4;
  long in_x10;
  undefined8 in_x11;
  ulong in_x12;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  
  do {
    lVar5 = *(long *)(unaff_x20 + 0x48);
    if (lVar5 == 0) {
LAB_05d7f6c4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(uint *)(lVar5 + 0x18) <= in_x12) {
LAB_05d7f6c0:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar1 = in_x10 + 1;
    *(undefined8 *)(lVar5 + in_x10 * 8) = in_x11;
    puVar2 = PTR_DAT_072794f0;
    if (param_1 <= in_x10 + -3) {
      if (DAT_076cdf81 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_072795b0);
        DAT_076cdf81 = '\x01';
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_072795b0 + 0xb8);
      FUN_06bdb730(&stack0x000000c0,*(float *)(lVar5 + 0xc) * unaff_s8,
                   *(float *)(lVar5 + 0x10) * unaff_s8,*(float *)(lVar5 + 0x14) * unaff_s8,0);
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
      uVar8 = *unaff_x22;
      uVar6 = *(undefined4 *)(unaff_x22 + 3);
      uVar4 = unaff_x22[2];
      *(undefined8 *)(unaff_x20 + 0x98) = unaff_x22[1];
      *(undefined8 *)(unaff_x20 + 0x90) = uVar8;
      *(undefined4 *)(unaff_x20 + 0xa8) = uVar6;
      *(undefined8 *)(unaff_x20 + 0xa0) = uVar4;
      *(undefined8 *)(unaff_x20 + 0xb4) = *(undefined8 *)(unaff_x20 + 0x98);
      *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x20 + 0x90);
      *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xa4);
      *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x9c);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar3 = FUN_06be9890();
      if ((uVar3 & 1) != 0) {
        in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x78);
        in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x70);
        in_stack_00000138 = *(undefined8 *)(unaff_x20 + 0x88);
        in_stack_00000130 = *(undefined8 *)(unaff_x20 + 0x80);
        in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x58);
        in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x50);
        in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x68);
        in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x60);
        if (unaff_x21 == 0) goto LAB_05d7f6c4;
        FUN_06bf6348();
        FUN_06bdb730(&stack0x000000c0,0);
        in_stack_00000048 = in_stack_00000108;
        in_stack_00000040 = in_stack_00000100;
        in_stack_00000058 = in_stack_00000118;
        in_stack_00000050 = in_stack_00000110;
        in_stack_00000068 = in_stack_00000128;
        in_stack_00000060 = in_stack_00000120;
        in_stack_00000078 = in_stack_00000138;
        in_stack_00000070 = in_stack_00000130;
        FUN_06bdb1f8(&stack0x00000080,&stack0x00000040);
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
        fVar9 = *(float *)(unaff_x20 + 0x94);
        fVar10 = *(float *)(unaff_x20 + 0x98);
        uVar4 = in_stack_00000080;
        uVar6 = FUN_06bf2f54(*(undefined4 *)(unaff_x20 + 0x90));
        fVar11 = (float)uVar4;
        *(undefined4 *)(unaff_x20 + 0xac) = uVar6;
        *(float *)(unaff_x20 + 0xb0) = fVar9;
        *(float *)(unaff_x20 + 0xb4) = fVar10;
        fVar7 = (float)FUN_06bf2fbc();
        fVar12 = *(float *)(unaff_x20 + 0x9c);
        fVar15 = *(float *)(unaff_x20 + 0xa0);
        fVar14 = *(float *)(unaff_x20 + 0xa4);
        fVar13 = *(float *)(unaff_x20 + 0xa8);
        *(float *)(unaff_x20 + 0xb8) =
             (fVar9 * fVar14 + fVar11 * fVar12 + fVar7 * fVar13) - fVar10 * fVar15;
        *(float *)(unaff_x20 + 0xbc) =
             (fVar10 * fVar12 + fVar11 * fVar15 + fVar9 * fVar13) - fVar7 * fVar14;
        *(float *)(unaff_x20 + 0xc0) =
             (fVar7 * fVar15 + fVar11 * fVar14 + fVar10 * fVar13) - fVar9 * fVar12;
        *(float *)(unaff_x20 + 0xc4) =
             ((fVar11 * fVar13 - fVar7 * fVar12) - fVar9 * fVar15) - fVar10 * fVar14;
      }
      FUN_059474bc();
      return;
    }
    in_x12 = in_x10 - 3;
    if (*(uint *)(in_x9 + 0x18) <= in_x12) goto LAB_05d7f6c0;
    *(undefined8 *)(in_x9 + lVar1 * 8) = in_x11;
    lVar5 = *(long *)(unaff_x20 + 0x40);
    if (lVar5 == 0) goto LAB_05d7f6c4;
    if (*(uint *)(lVar5 + 0x18) <= in_x12) goto LAB_05d7f6c0;
    *(undefined8 *)(lVar5 + lVar1 * 8) = in_x11;
    in_x10 = lVar1;
  } while( true );
}


