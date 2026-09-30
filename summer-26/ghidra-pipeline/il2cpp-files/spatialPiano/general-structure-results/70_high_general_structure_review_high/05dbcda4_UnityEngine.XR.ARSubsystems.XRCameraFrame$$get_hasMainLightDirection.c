/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRCameraFrame$$get_hasMainLightDirection
ENTRY_POINT: 05dbcda4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRCameraFrame__get_hasMainLightDirection
               (undefined8 param_1,float param_2)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  ulong extraout_d0;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s8;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 unaff_d9;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 in_stack_000001e0;
  uint uStack00000000000001e4;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  float in_stack_000001f0;
  undefined4 in_stack_000001f8;
  undefined4 in_stack_000001fc;
  float in_stack_00000200;
  float in_stack_00000208;
  float in_stack_0000020c;
  float in_stack_00000210;
  float in_stack_00000218;
  float in_stack_0000021c;
  float in_stack_00000220;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  float in_stack_00000248;
  float in_stack_0000024c;
  float in_stack_00000250;
  float in_stack_00000254;
  float in_stack_00000258;
  float in_stack_0000025c;
  float in_stack_00000260;
  float in_stack_00000264;
  undefined4 in_stack_00000268;
  undefined4 in_stack_0000026c;
  undefined4 in_stack_00000270;
  undefined4 in_stack_00000274;
  undefined4 in_stack_00000278;
  undefined4 in_stack_0000027c;
  undefined4 in_stack_00000280;
  undefined4 in_stack_00000284;
  float in_stack_00000300;
  float in_stack_00000304;
  float in_stack_00000308;
  float in_stack_0000030c;
  float in_stack_00000310;
  
  fVar11 = 1.0 / SQRT(param_2 + (float)param_1 + (float)((ulong)param_1 >> 0x20));
  fVar12 = -(unaff_s8 * fVar11);
  *(ulong *)(unaff_x22 + 0x80) =
       CONCAT44((float)((ulong)unaff_d9 >> 0x20) * fVar11,(float)unaff_d9 * fVar11);
  fVar11 = (float)FUN_0612c294(&stack0x0000028c,0);
  fVar13 = (float)UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty__GetValue
                            (&stack0x0000028c,0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar21 = DAT_011b074c;
  fVar14 = (float)FUN_05dbf02c(fVar13);
  if (DAT_06bc2c5b == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bc2c5b = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  dVar19 = cos((double)(fVar11 * 0.5 * fVar21));
  fVar21 = fVar13 * (float)dVar19;
  fVar11 = (float)FUN_05dbf02c(*(float *)(unaff_x19 + 0x100) - in_stack_00000308);
  if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05dbf034(in_stack_00000304,in_stack_00000308,fVar13,*(undefined4 *)(unaff_x19 + 0x100),
               &stack0x00000280,&stack0x00000278);
  uVar8 = FUN_05dbf290(in_stack_00000300,in_stack_00000280,in_stack_00000284,&stack0x0000028c);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000300,in_stack_00000280,in_stack_00000284);
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar8 = FUN_05dbf290(in_stack_00000300,in_stack_00000278,in_stack_0000027c,&stack0x0000028c);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000300,in_stack_00000278,in_stack_0000027c);
  }
  uVar23 = *(undefined4 *)(unaff_x19 + 0x100);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05dbf034(in_stack_00000300,in_stack_00000308,fVar13,uVar23,SQRT(fVar14 - fVar11),
               &stack0x00000270,&stack0x00000268);
  uVar8 = FUN_05dbf290(in_stack_00000270,in_stack_00000304,in_stack_00000274,&stack0x0000028c);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000270,in_stack_00000304,in_stack_00000274);
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar8 = FUN_05dbf290(in_stack_00000268,in_stack_00000304,in_stack_0000026c,&stack0x0000028c);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000268,in_stack_00000304,in_stack_0000026c);
  }
  iVar7 = FUN_0612c25c(&stack0x0000028c,0);
  if (iVar7 == 0) {
    if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar17 = DAT_011b0568;
    if (DAT_011b0568 <= ABS(ABS(in_stack_0000030c) + -1.0)) {
      if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
      }
      fVar27 = in_stack_0000030c * 0.0 - in_stack_00000310;
      fVar25 = in_stack_00000310 * 0.0 - fVar12 * 0.0;
      fVar30 = fVar12 - in_stack_0000030c * 0.0;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar22 = 1.0 / SQRT(fVar27 * fVar27 + fVar30 * fVar30 + fVar25 * fVar25);
      fVar25 = fVar25 * fVar22;
      fVar30 = fVar30 * fVar22;
      fVar27 = fVar27 * fVar22;
    }
    else {
      fVar25 = 0.0;
      fVar27 = 0.0;
      fVar30 = 1.0;
    }
    fVar29 = SQRT(fVar13 * fVar13 - fVar21 * fVar21);
    fVar33 = in_stack_00000304 + in_stack_00000310 * fVar21;
    fVar31 = in_stack_00000308 + fVar12 * fVar21;
    fVar28 = in_stack_0000030c * fVar30 - fVar25 * in_stack_00000310;
    fVar22 = fVar25 * fVar12 - in_stack_0000030c * fVar27;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar15 = in_stack_00000300 + in_stack_0000030c * fVar21;
    fVar16 = fVar27 * in_stack_00000310 - fVar30 * fVar12;
    UnityEngine_XR_ARSubsystems_XRCameraSubsystem__get_autoFocusRequested
              (fVar33,fVar31,fVar29,fVar30,fVar27,fVar22,fVar28,&stack0x00000260,&stack0x00000258);
    fVar24 = fVar31 + fVar27 * in_stack_00000260 + fVar28 * in_stack_00000264;
    fVar20 = *(float *)(unaff_x19 + 0x100);
    fVar27 = fVar31 + fVar27 * in_stack_00000258 + fVar28 * in_stack_0000025c;
    if (fVar20 <= fVar24) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(fVar15 + fVar25 * in_stack_00000260 + fVar16 * in_stack_00000264,
                   fVar33 + fVar30 * in_stack_00000260 + fVar22 * in_stack_00000264,fVar24);
      fVar20 = *(float *)(unaff_x19 + 0x100);
    }
    if (fVar20 <= fVar27) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(fVar15 + fVar25 * in_stack_00000258 + fVar16 * in_stack_0000025c,
                   fVar33 + fVar30 * in_stack_00000258 + fVar22 * in_stack_0000025c,fVar27);
    }
    if (fVar17 <= ABS(ABS(in_stack_00000310) + -1.0)) {
      if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
      }
      fVar30 = in_stack_0000030c - in_stack_00000310 * 0.0;
      fVar25 = in_stack_00000310 * 0.0 - fVar12;
      fVar17 = fVar12 * 0.0 - in_stack_0000030c * 0.0;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar27 = 1.0 / SQRT(fVar30 * fVar30 + fVar25 * fVar25 + fVar17 * fVar17);
      fVar25 = fVar25 * fVar27;
      fVar17 = fVar17 * fVar27;
      fVar30 = fVar30 * fVar27;
    }
    else {
      fVar17 = 0.0;
      fVar30 = 0.0;
      fVar25 = 1.0;
    }
    fVar27 = in_stack_0000030c * fVar17 - fVar25 * in_stack_00000310;
    fVar22 = fVar30 * in_stack_00000310 - fVar17 * fVar12;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar28 = fVar25 * fVar12 - in_stack_0000030c * fVar30;
    UnityEngine_XR_ARSubsystems_XRCameraSubsystem__get_autoFocusRequested
              (fVar15,fVar31,fVar29,fVar25,fVar30,fVar22,fVar27,&stack0x00000250,&stack0x00000248);
    fVar20 = fVar31 + fVar30 * in_stack_00000250 + fVar27 * in_stack_00000254;
    fVar16 = *(float *)(unaff_x19 + 0x100);
    fVar30 = fVar31 + fVar30 * in_stack_00000248 + fVar27 * in_stack_0000024c;
    if (fVar16 <= fVar20) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(fVar15 + fVar25 * in_stack_00000250 + fVar22 * in_stack_00000254,
                   fVar33 + fVar17 * in_stack_00000250 + fVar28 * in_stack_00000254,fVar20);
      fVar16 = *(float *)(unaff_x19 + 0x100);
    }
    if (fVar16 <= fVar30) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(fVar15 + fVar25 * in_stack_00000248 + fVar22 * in_stack_0000024c,
                   fVar33 + fVar17 * in_stack_00000248 + fVar28 * in_stack_0000024c,fVar30);
      fVar16 = *(float *)(unaff_x19 + 0x100);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_05dbf578(fVar15,fVar33,fVar31,in_stack_0000030c,in_stack_00000310,fVar12,fVar29,
                         fVar16,&stack0x00000238,&stack0x00000228);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(in_stack_00000238,in_stack_0000023c,in_stack_00000240);
      FUN_05dbef10(in_stack_00000228,in_stack_0000022c,in_stack_00000230);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar17 = (float)FUN_05dbf02c(fVar12);
    if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar30 = fVar29 * SQRT(1.0 - fVar17);
    fVar17 = fVar31 - fVar30;
    bVar3 = true;
    if (((uint)ABS(in_stack_00000308) < 0x7f800001) &&
       (bVar3 = false, !NAN(fVar17) && !NAN(in_stack_00000308))) {
      bVar3 = fVar17 < in_stack_00000308;
    }
    if (!bVar3) {
      fVar17 = in_stack_00000308;
    }
    if (fVar17 <= *(float *)(unaff_x19 + 0x100)) {
      fVar30 = fVar31 + fVar30;
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if ((uint)ABS(in_stack_00000308) < 0x7f800001) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar30) && !NAN(in_stack_00000308)) {
          bVar3 = fVar30 < in_stack_00000308;
          bVar4 = fVar30 == in_stack_00000308;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar3 != bVar5) {
        fVar30 = in_stack_00000308;
      }
      bVar3 = *(float *)(unaff_x19 + 0x100) <= fVar30;
    }
    else {
      bVar3 = false;
    }
    if ((in_stack_0000030c * in_stack_00000304 - in_stack_00000310 * in_stack_00000300) +
        (fVar12 * in_stack_00000300 - in_stack_00000308 * in_stack_0000030c) +
        (in_stack_00000308 * in_stack_00000310 - fVar12 * in_stack_00000304) != 0.0) {
      if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
    }
    lVar9 = *unaff_x25;
    if (bVar3) {
      fVar17 = fVar29 / fVar21;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbf77c();
      fVar30 = in_stack_00000304;
      fVar25 = in_stack_00000300;
      uVar23 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                            in_stack_00000308,in_stack_0000030c,in_stack_00000310,fVar12,fVar17);
      fVar27 = in_stack_00000304;
      fVar22 = in_stack_00000300;
      uVar18 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                            in_stack_00000308,in_stack_0000030c,in_stack_00000310,fVar12);
      uVar8 = FUN_05dbfba4(uVar23,fVar25,fVar30,&stack0x0000028c);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar23,fVar25,fVar30);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_05dbfba4(uVar18,fVar22,fVar27,&stack0x0000028c);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar18,fVar22,fVar27);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbf77c();
      fVar30 = in_stack_00000300;
      fVar25 = in_stack_00000304;
      uVar23 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                            in_stack_00000308,in_stack_0000030c,in_stack_00000310,fVar12,fVar17);
      fVar27 = in_stack_00000300;
      fVar22 = in_stack_00000304;
      uVar18 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                            in_stack_00000308,in_stack_0000030c,in_stack_00000310,fVar12,fVar17);
      uVar8 = FUN_05dbfba4(uVar23,fVar30,fVar25,&stack0x0000028c);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar23,fVar30,fVar25);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_05dbfba4(uVar18,fVar27,fVar22,&stack0x0000028c);
      lVar9 = *unaff_x25;
      if ((uVar8 & 1) != 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar18,fVar27,fVar22);
        lVar9 = *unaff_x25;
      }
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbfcc0(in_stack_00000300,in_stack_00000304,in_stack_00000308,in_stack_0000030c,
                 in_stack_00000310,fVar12,(float)dVar19,fVar29,&stack0x00000218,&stack0x00000208);
    fVar17 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                );
    fVar30 = in_stack_00000218 * 0.0 + in_stack_0000021c;
    fVar17 = ((in_stack_00000300 * -0.0 - in_stack_00000304) - fVar17 * in_stack_00000308) /
             (fVar30 + fVar17 * in_stack_00000220);
    if (((0.0 <= fVar17) && (fVar17 <= 1.0)) &&
       (fVar25 = in_stack_00000308 + in_stack_00000220 * fVar17,
       *(float *)(unaff_x19 + 0x100) <= fVar25)) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(in_stack_00000300 + in_stack_00000218 * fVar17,
                   in_stack_00000304 + in_stack_0000021c * fVar17,fVar25);
    }
    fVar17 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                );
    fVar17 = ((in_stack_00000300 * -0.0 - in_stack_00000304) - fVar17 * in_stack_00000308) /
             (fVar30 + in_stack_00000220 * fVar17);
    if (((0.0 <= fVar17) && (fVar17 <= 1.0)) &&
       (fVar25 = in_stack_00000308 + in_stack_00000220 * fVar17,
       *(float *)(unaff_x19 + 0x100) <= fVar25)) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(in_stack_00000300 + in_stack_00000218 * fVar17,
                   in_stack_00000304 + in_stack_0000021c * fVar17,fVar25);
    }
    FUN_05dbb234(unaff_x19 + 0x106,0,*(ushort *)(unaff_x19 + 0xfc) - 1);
    if (*(short *)(unaff_x19 + 0x106) < *(short *)(unaff_x19 + 0x108)) {
      iVar7 = (int)*(short *)(unaff_x19 + 0x106);
      do {
        puVar2 = 
        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
        ;
        iVar7 = iVar7 + 1;
        fVar25 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                    );
        fVar17 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                     *(undefined8 *)puVar2);
        fVar25 = fVar25 + (fVar17 - fVar25) * *(float *)(unaff_x19 + 0xc4) * (float)iVar7;
        fVar17 = (in_stack_00000300 * -0.0 - in_stack_00000304) + in_stack_00000308 * fVar25;
        fVar27 = fVar17 / (fVar30 - in_stack_00000220 * fVar25);
        bVar4 = false;
        bVar5 = true;
        if (0.0 <= fVar27) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar27)) {
            bVar4 = fVar27 == 1.0;
            bVar5 = 1.0 <= fVar27;
          }
        }
        if ((!bVar5 || bVar4) &&
           (fVar22 = in_stack_00000308 + in_stack_00000220 * fVar27,
           *(float *)(unaff_x19 + 0x100) <= fVar22)) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar27 = (float)FUN_05dc0180(in_stack_00000300 + in_stack_00000218 * fVar27,
                                       in_stack_00000304 + in_stack_0000021c * fVar27,fVar22);
          fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          if ((uint)ABS(fVar27) < 0x7f800001) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar27) && !NAN(fVar17)) {
              bVar4 = fVar27 < fVar17;
              bVar5 = fVar27 == fVar17;
              bVar6 = false;
            }
          }
          if (bVar5 || bVar4 != bVar6) {
            fVar17 = fVar27;
          }
          bVar4 = true;
          if (((uint)ABS(fVar17) < 0x7f800001) && (bVar4 = false, !NAN(fVar17))) {
            bVar4 = fVar17 < 0.0;
          }
          dVar19 = 0.0;
          if (!bVar4) {
            dVar19 = (double)fVar17;
          }
          iVar1 = 0;
          if (dVar19 != INFINITY) {
            iVar1 = (int)dVar19;
          }
          FUN_05dbb1a8(&stack0x00000204,iVar1);
          fVar17 = (in_stack_00000300 * -0.0 - in_stack_00000304) + fVar25 * in_stack_00000308;
        }
        fVar17 = fVar17 / ((in_stack_00000208 * 0.0 + in_stack_0000020c) -
                          fVar25 * in_stack_00000210);
        bVar4 = false;
        bVar5 = true;
        if (0.0 <= fVar17) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar17)) {
            bVar4 = fVar17 == 1.0;
            bVar5 = 1.0 <= fVar17;
          }
        }
        if ((!bVar5 || bVar4) &&
           (fVar27 = in_stack_00000308 + in_stack_00000210 * fVar17,
           *(float *)(unaff_x19 + 0x100) <= fVar27)) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar27 = (float)FUN_05dc0180(in_stack_00000300 + in_stack_00000208 * fVar17,
                                       in_stack_00000304 + in_stack_0000020c * fVar17,fVar27);
          fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          if ((uint)ABS(fVar27) < 0x7f800001) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar27) && !NAN(fVar17)) {
              bVar4 = fVar27 < fVar17;
              bVar5 = fVar27 == fVar17;
              bVar6 = false;
            }
          }
          if (bVar5 || bVar4 != bVar6) {
            fVar17 = fVar27;
          }
          bVar4 = true;
          if (((uint)ABS(fVar17) < 0x7f800001) && (bVar4 = false, !NAN(fVar17))) {
            bVar4 = fVar17 < 0.0;
          }
          dVar19 = 0.0;
          if (!bVar4) {
            dVar19 = (double)fVar17;
          }
          iVar1 = 0;
          if (dVar19 != INFINITY) {
            iVar1 = (int)dVar19;
          }
          FUN_05dbb1a8(&stack0x00000204,iVar1);
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_05dc0220(fVar25,fVar15,fVar33,fVar31,in_stack_0000030c,in_stack_00000310,fVar12
                              ,&stack0x000001f8,&stack0x000001e8);
        uVar8 = extraout_d0;
        if ((uVar10 & 1) != 0) {
          fVar17 = *(float *)(unaff_x19 + 0x100);
          if (fVar17 <= in_stack_00000200) {
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar27 = (float)FUN_05dc0180(in_stack_000001f8,in_stack_000001fc,in_stack_00000200);
            fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if ((uint)ABS(fVar27) < 0x7f800001) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar27) && !NAN(fVar17)) {
                bVar4 = fVar27 < fVar17;
                bVar5 = fVar27 == fVar17;
                bVar6 = false;
              }
            }
            if (bVar5 || bVar4 != bVar6) {
              fVar17 = fVar27;
            }
            bVar4 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar4 = false, !NAN(fVar17))) {
              bVar4 = fVar17 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar4) {
              dVar19 = (double)fVar17;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            FUN_05dbb1a8(&stack0x00000204,iVar1);
            fVar17 = *(float *)(unaff_x19 + 0x100);
          }
          fVar27 = in_stack_000001f0;
          uVar18 = uStack00000000000001ec;
          uVar23 = uStack00000000000001e8;
          uVar8 = (ulong)(uint)fVar17;
          if (fVar17 <= in_stack_000001f0) {
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar27 = (float)FUN_05dc0180(uVar23,uVar18,fVar27);
            fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if ((uint)ABS(fVar27) < 0x7f800001) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar27) && !NAN(fVar17)) {
                bVar4 = fVar27 < fVar17;
                bVar5 = fVar27 == fVar17;
                bVar6 = false;
              }
            }
            if (bVar5 || bVar4 != bVar6) {
              fVar17 = fVar27;
            }
            bVar4 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar4 = false, !NAN(fVar17))) {
              bVar4 = fVar17 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar4) {
              dVar19 = (double)fVar17;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            uVar8 = FUN_05dbb1a8(&stack0x00000204,iVar1);
          }
        }
        if (bVar3) {
          fVar17 = *(float *)(unaff_x19 + 0x100);
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c(uVar8,in_stack_00000300,in_stack_00000304,in_stack_00000308);
          }
          fVar25 = fVar25 * fVar17;
          FUN_05dc04b8(fVar17,in_stack_00000300,in_stack_00000304,in_stack_00000308,
                       in_stack_0000030c,in_stack_00000310,fVar12);
          uVar23 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,
                                in_stack_00000304,in_stack_00000308,in_stack_0000030c,
                                in_stack_00000310,fVar12,fVar29 / fVar21);
          uVar26 = *(undefined4 *)(unaff_x19 + 0x100);
          uVar18 = FUN_05dbf9ec(uVar26,in_stack_00000300,in_stack_00000304,in_stack_00000308,
                                in_stack_0000030c,in_stack_00000310,fVar12,fVar29 / fVar21);
          uVar32 = *(undefined4 *)(unaff_x19 + 0x100);
          uVar8 = FUN_05dbfba4(uVar23,fVar25,uVar26,&stack0x0000028c);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar27 = (float)FUN_05dc0180(uVar23,fVar25,uVar26);
            fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if ((uint)ABS(fVar27) < 0x7f800001) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar27) && !NAN(fVar17)) {
                bVar4 = fVar27 < fVar17;
                bVar5 = fVar27 == fVar17;
                bVar6 = false;
              }
            }
            if (bVar5 || bVar4 != bVar6) {
              fVar17 = fVar27;
            }
            bVar4 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar4 = false, !NAN(fVar17))) {
              bVar4 = fVar17 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar4) {
              dVar19 = (double)fVar17;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            FUN_05dbb1a8(&stack0x00000204,iVar1);
          }
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar8 = FUN_05dbfba4(uVar18,fVar25,uVar32,&stack0x0000028c);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar25 = (float)FUN_05dc0180(uVar18,fVar25,uVar32);
            fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if ((uint)ABS(fVar25) < 0x7f800001) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar25) && !NAN(fVar17)) {
                bVar4 = fVar25 < fVar17;
                bVar5 = fVar25 == fVar17;
                bVar6 = false;
              }
            }
            if (bVar5 || bVar4 != bVar6) {
              fVar17 = fVar25;
            }
            bVar4 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar4 = false, !NAN(fVar17))) {
              bVar4 = fVar17 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar4) {
              dVar19 = (double)fVar17;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            FUN_05dbb1a8(&stack0x00000204,iVar1);
          }
        }
        iVar1 = iVar7 + *(int *)(unaff_x19 + 0x10c);
        unaff_x24 = 0;
        unaff_x20 = unaff_x20 & 0xffffffff00000000 | 0x80007fff;
        unaff_x21 = (long *)((ulong)unaff_x21 & 0xffffffff00000000 |
                            (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4));
        uVar23 = FUN_05dbb2f8(unaff_x21,unaff_x20);
        *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4) = uVar23;
        unaff_x23 = unaff_x23 & 0xffffffff00000000 |
                    (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4);
        uVar23 = FUN_05dbb2f8(unaff_x23,0x80007fff);
        *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4) = uVar23;
      } while (iVar7 < *(short *)(unaff_x19 + 0x108));
    }
  }
  FUN_05dbb234((undefined4 *)(unaff_x19 + 0x106),0,*(ushort *)(unaff_x19 + 0xfc) - 1);
  if (*(short *)(unaff_x19 + 0x106) < *(short *)(unaff_x19 + 0x108)) {
    iVar7 = (int)*(short *)(unaff_x19 + 0x106);
    do {
      puVar2 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
      ;
      iVar7 = iVar7 + 1;
      uStack00000000000001e4 = 0x80007fff;
      fVar12 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                  );
      fVar21 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                   *(undefined8 *)puVar2);
      fVar17 = *(float *)(unaff_x19 + 0xc4);
      uVar23 = *(undefined4 *)(unaff_x19 + 0x100);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dc0918(in_stack_00000300,in_stack_00000304,in_stack_00000308,fVar13,uVar23,
                   SQRT(fVar14 - fVar11),fVar12 + (fVar21 - fVar12) * fVar17 * (float)iVar7,
                   &stack0x000001d8,&stack0x000001c8);
      uVar26 = in_stack_000001e0;
      uVar18 = uStack00000000000001dc;
      uVar23 = uStack00000000000001d8;
      uVar8 = FUN_05dbf290(uStack00000000000001d8,uStack00000000000001dc,in_stack_000001e0,
                           &stack0x0000028c);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar21 = (float)FUN_05dc0180(uVar23,uVar18,uVar26);
        fVar12 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if ((uint)ABS(fVar21) < 0x7f800001) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar21) && !NAN(fVar12)) {
            bVar3 = fVar21 < fVar12;
            bVar4 = fVar21 == fVar12;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) {
          fVar12 = fVar21;
        }
        bVar3 = true;
        if (((uint)ABS(fVar12) < 0x7f800001) && (bVar3 = false, !NAN(fVar12))) {
          bVar3 = fVar12 < 0.0;
        }
        dVar19 = 0.0;
        if (!bVar3) {
          dVar19 = (double)fVar12;
        }
        iVar1 = 0;
        if (dVar19 != INFINITY) {
          iVar1 = (int)dVar19;
        }
        FUN_05dbb1a8(&stack0x000001e4,iVar1);
      }
      uVar26 = in_stack_000001d0;
      uVar18 = uStack00000000000001cc;
      uVar23 = uStack00000000000001c8;
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_05dbf290(uVar23,uVar18,uVar26,&stack0x0000028c);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar21 = (float)FUN_05dc0180(uVar23,uVar18,uVar26);
        fVar12 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if ((uint)ABS(fVar21) < 0x7f800001) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar21) && !NAN(fVar12)) {
            bVar3 = fVar21 < fVar12;
            bVar4 = fVar21 == fVar12;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) {
          fVar12 = fVar21;
        }
        bVar3 = true;
        if (((uint)ABS(fVar12) < 0x7f800001) && (bVar3 = false, !NAN(fVar12))) {
          bVar3 = fVar12 < 0.0;
        }
        dVar19 = 0.0;
        if (!bVar3) {
          dVar19 = (double)fVar12;
        }
        iVar1 = 0;
        if (dVar19 != INFINITY) {
          iVar1 = (int)dVar19;
        }
        FUN_05dbb1a8(&stack0x000001e4,iVar1);
      }
      uVar8 = (ulong)uStack00000000000001e4;
      iVar1 = iVar7 + *(int *)(unaff_x19 + 0x10c);
      unaff_x23 = unaff_x23 & 0xffffffff00000000 | uVar8;
      unaff_x24 = unaff_x24 & 0xffffffff00000000 |
                  (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4);
      uVar23 = FUN_05dbb2f8(unaff_x24,unaff_x23);
      unaff_x21 = (long *)((ulong)unaff_x21 & 0xffffffff00000000 | uVar8);
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4) = uVar23;
      uVar23 = FUN_05dbb2f8(*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4),unaff_x21
                           );
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4) = uVar23;
    } while (iVar7 < *(short *)(unaff_x19 + 0x108));
  }
  *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)*(int *)(unaff_x19 + 0x10c) * 4) =
       *(undefined4 *)(unaff_x19 + 0x106);
  return;
}


