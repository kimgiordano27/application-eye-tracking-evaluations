/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRCameraFrame$$get_mainLightDirection
ENTRY_POINT: 05dbcce8
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


void UnityEngine_XR_ARSubsystems_XRCameraFrame__get_mainLightDirection(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined *puVar13;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
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
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float in_stack_000000d0;
  float in_stack_000000e0;
  float in_stack_000000f0;
  undefined8 in_stack_00000188;
  float in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_000001b8;
  float in_stack_000001c0;
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
  
  FUN_04da8978(&stack0x00000188,unaff_x19 + 0x38,*(undefined4 *)(unaff_x19 + 0x110),*unaff_x20);
  fVar14 = in_stack_000000d0 * in_stack_00000190;
  fVar20 = in_stack_000000e0 * in_stack_000001a0;
  fVar26 = (float)in_stack_00000188;
  uVar10 = (ulong)in_stack_00000188 >> 0x20;
  fVar28 = (float)in_stack_00000198;
  uVar12 = (ulong)in_stack_00000198 >> 0x20;
  fVar22 = in_stack_000000f0 * in_stack_000001b0;
  fVar17 = (float)in_stack_000001a8;
  uVar2 = (ulong)in_stack_000001a8 >> 0x20;
  fVar33 = (float)in_stack_000001b8;
  uVar3 = (ulong)in_stack_000001b8 >> 0x20;
  fVar30 = in_stack_000001c0 * 0.0;
  if (DAT_06bc2c7c == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bc2c7c = '\x01';
  }
  puVar13 = PTR_DAT_067c8f80;
  fVar26 = fVar26 * in_stack_000000d0 + fVar28 * in_stack_000000e0 + fVar17 * in_stack_000000f0 +
           fVar33 * 0.0;
  fVar28 = (float)uVar10 * in_stack_000000d0 + (float)uVar12 * in_stack_000000e0 +
           (float)uVar2 * in_stack_000000f0 + (float)uVar3 * 0.0;
  fVar30 = fVar14 + fVar20 + fVar22 + fVar30;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar14 = 1.0 / SQRT(fVar30 * fVar30 + fVar26 * fVar26 + fVar28 * fVar28);
  fVar20 = -(fVar30 * fVar14);
  *(ulong *)(unaff_x22 + 0x80) = CONCAT44(fVar28 * fVar14,fVar26 * fVar14);
  fVar14 = (float)FUN_0612c294(&stack0x0000028c,0);
  fVar26 = (float)UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty__GetValue
                            (&stack0x0000028c,0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar28 = DAT_011b074c;
  fVar22 = (float)FUN_05dbf02c(fVar26);
  if (DAT_06bc2c5b == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bc2c5b = '\x01';
  }
  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  dVar19 = cos((double)(fVar14 * 0.5 * fVar28));
  fVar28 = fVar26 * (float)dVar19;
  fVar14 = (float)FUN_05dbf02c(*(float *)(unaff_x19 + 0x100) - in_stack_00000308);
  if (DAT_06bc2c7c == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bc2c7c = '\x01';
  }
  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05dbf034(in_stack_00000304,in_stack_00000308,fVar26,*(undefined4 *)(unaff_x19 + 0x100),
               &stack0x00000280,&stack0x00000278);
  uVar10 = FUN_05dbf290(in_stack_00000300,in_stack_00000280,in_stack_00000284,&stack0x0000028c);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000300,in_stack_00000280,in_stack_00000284);
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_05dbf290(in_stack_00000300,in_stack_00000278,in_stack_0000027c,&stack0x0000028c);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000300,in_stack_00000278,in_stack_0000027c);
  }
  uVar24 = *(undefined4 *)(unaff_x19 + 0x100);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05dbf034(in_stack_00000300,in_stack_00000308,fVar26,uVar24,SQRT(fVar22 - fVar14),
               &stack0x00000270,&stack0x00000268);
  uVar10 = FUN_05dbf290(in_stack_00000270,in_stack_00000304,in_stack_00000274,&stack0x0000028c);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000270,in_stack_00000304,in_stack_00000274);
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_05dbf290(in_stack_00000268,in_stack_00000304,in_stack_0000026c,&stack0x0000028c);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000268,in_stack_00000304,in_stack_0000026c);
  }
  iVar9 = FUN_0612c25c(&stack0x0000028c,0);
  if (iVar9 == 0) {
    if (DAT_06bc2c7c == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bc2c7c = '\x01';
    }
    if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar17 = DAT_011b0568;
    if (DAT_011b0568 <= ABS(ABS(in_stack_0000030c) + -1.0)) {
      if (DAT_06bc2c7c == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bc2c7c = '\x01';
      }
      fVar29 = in_stack_0000030c * 0.0 - in_stack_00000310;
      fVar30 = in_stack_00000310 * 0.0 - fVar20 * 0.0;
      fVar33 = fVar20 - in_stack_0000030c * 0.0;
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar23 = 1.0 / SQRT(fVar29 * fVar29 + fVar33 * fVar33 + fVar30 * fVar30);
      fVar30 = fVar30 * fVar23;
      fVar33 = fVar33 * fVar23;
      fVar29 = fVar29 * fVar23;
    }
    else {
      fVar30 = 0.0;
      fVar29 = 0.0;
      fVar33 = 1.0;
    }
    fVar32 = SQRT(fVar26 * fVar26 - fVar28 * fVar28);
    fVar36 = in_stack_00000304 + in_stack_00000310 * fVar28;
    fVar34 = in_stack_00000308 + fVar20 * fVar28;
    fVar31 = in_stack_0000030c * fVar33 - fVar30 * in_stack_00000310;
    fVar23 = fVar30 * fVar20 - in_stack_0000030c * fVar29;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar15 = in_stack_00000300 + in_stack_0000030c * fVar28;
    fVar16 = fVar29 * in_stack_00000310 - fVar33 * fVar20;
    UnityEngine_XR_ARSubsystems_XRCameraSubsystem__get_autoFocusRequested
              (fVar36,fVar34,fVar32,fVar33,fVar29,fVar23,fVar31,&stack0x00000260,&stack0x00000258);
    fVar25 = fVar34 + fVar29 * in_stack_00000260 + fVar31 * in_stack_00000264;
    fVar21 = *(float *)(unaff_x19 + 0x100);
    fVar29 = fVar34 + fVar29 * in_stack_00000258 + fVar31 * in_stack_0000025c;
    if (fVar21 <= fVar25) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(fVar15 + fVar30 * in_stack_00000260 + fVar16 * in_stack_00000264,
                   fVar36 + fVar33 * in_stack_00000260 + fVar23 * in_stack_00000264,fVar25);
      fVar21 = *(float *)(unaff_x19 + 0x100);
    }
    if (fVar21 <= fVar29) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(fVar15 + fVar30 * in_stack_00000258 + fVar16 * in_stack_0000025c,
                   fVar36 + fVar33 * in_stack_00000258 + fVar23 * in_stack_0000025c,fVar29);
    }
    if (fVar17 <= ABS(ABS(in_stack_00000310) + -1.0)) {
      if (DAT_06bc2c7c == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bc2c7c = '\x01';
      }
      fVar33 = in_stack_0000030c - in_stack_00000310 * 0.0;
      fVar30 = in_stack_00000310 * 0.0 - fVar20;
      fVar17 = fVar20 * 0.0 - in_stack_0000030c * 0.0;
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar29 = 1.0 / SQRT(fVar33 * fVar33 + fVar30 * fVar30 + fVar17 * fVar17);
      fVar30 = fVar30 * fVar29;
      fVar17 = fVar17 * fVar29;
      fVar33 = fVar33 * fVar29;
    }
    else {
      fVar17 = 0.0;
      fVar33 = 0.0;
      fVar30 = 1.0;
    }
    fVar29 = in_stack_0000030c * fVar17 - fVar30 * in_stack_00000310;
    fVar23 = fVar33 * in_stack_00000310 - fVar17 * fVar20;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar31 = fVar30 * fVar20 - in_stack_0000030c * fVar33;
    UnityEngine_XR_ARSubsystems_XRCameraSubsystem__get_autoFocusRequested
              (fVar15,fVar34,fVar32,fVar30,fVar33,fVar23,fVar29,&stack0x00000250,&stack0x00000248);
    fVar21 = fVar34 + fVar33 * in_stack_00000250 + fVar29 * in_stack_00000254;
    fVar16 = *(float *)(unaff_x19 + 0x100);
    fVar33 = fVar34 + fVar33 * in_stack_00000248 + fVar29 * in_stack_0000024c;
    if (fVar16 <= fVar21) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(fVar15 + fVar30 * in_stack_00000250 + fVar23 * in_stack_00000254,
                   fVar36 + fVar17 * in_stack_00000250 + fVar31 * in_stack_00000254,fVar21);
      fVar16 = *(float *)(unaff_x19 + 0x100);
    }
    if (fVar16 <= fVar33) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(fVar15 + fVar30 * in_stack_00000248 + fVar23 * in_stack_0000024c,
                   fVar36 + fVar17 * in_stack_00000248 + fVar31 * in_stack_0000024c,fVar33);
      fVar16 = *(float *)(unaff_x19 + 0x100);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05dbf578(fVar15,fVar36,fVar34,in_stack_0000030c,in_stack_00000310,fVar20,fVar32,
                          fVar16,&stack0x00000238,&stack0x00000228);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(in_stack_00000238,in_stack_0000023c,in_stack_00000240);
      FUN_05dbef10(in_stack_00000228,in_stack_0000022c,in_stack_00000230);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar17 = (float)FUN_05dbf02c(fVar20);
    if (DAT_06bc2c7c == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bc2c7c = '\x01';
    }
    if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar33 = fVar32 * SQRT(1.0 - fVar17);
    fVar17 = fVar34 - fVar33;
    bVar5 = true;
    if (((uint)ABS(in_stack_00000308) < 0x7f800001) &&
       (bVar5 = false, !NAN(fVar17) && !NAN(in_stack_00000308))) {
      bVar5 = fVar17 < in_stack_00000308;
    }
    if (!bVar5) {
      fVar17 = in_stack_00000308;
    }
    if (fVar17 <= *(float *)(unaff_x19 + 0x100)) {
      fVar33 = fVar34 + fVar33;
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      if ((uint)ABS(in_stack_00000308) < 0x7f800001) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar33) && !NAN(in_stack_00000308)) {
          bVar5 = fVar33 < in_stack_00000308;
          bVar6 = fVar33 == in_stack_00000308;
          bVar7 = false;
        }
      }
      if (bVar6 || bVar5 != bVar7) {
        fVar33 = in_stack_00000308;
      }
      bVar5 = *(float *)(unaff_x19 + 0x100) <= fVar33;
    }
    else {
      bVar5 = false;
    }
    if ((in_stack_0000030c * in_stack_00000304 - in_stack_00000310 * in_stack_00000300) +
        (fVar20 * in_stack_00000300 - in_stack_00000308 * in_stack_0000030c) +
        (in_stack_00000308 * in_stack_00000310 - fVar20 * in_stack_00000304) != 0.0) {
      if (DAT_06bc2c7c == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bc2c7c = '\x01';
      }
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
    }
    lVar11 = *unaff_x25;
    if (bVar5) {
      fVar17 = fVar32 / fVar28;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbf77c();
      fVar33 = in_stack_00000304;
      fVar30 = in_stack_00000300;
      uVar24 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                            in_stack_00000308,in_stack_0000030c,in_stack_00000310,fVar20,fVar17);
      fVar29 = in_stack_00000304;
      fVar23 = in_stack_00000300;
      uVar18 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                            in_stack_00000308,in_stack_0000030c,in_stack_00000310,fVar20);
      uVar10 = FUN_05dbfba4(uVar24,fVar30,fVar33,&stack0x0000028c);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar24,fVar30,fVar33);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_05dbfba4(uVar18,fVar23,fVar29,&stack0x0000028c);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar18,fVar23,fVar29);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbf77c();
      fVar33 = in_stack_00000300;
      fVar30 = in_stack_00000304;
      uVar24 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                            in_stack_00000308,in_stack_0000030c,in_stack_00000310,fVar20,fVar17);
      fVar29 = in_stack_00000300;
      fVar23 = in_stack_00000304;
      uVar18 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                            in_stack_00000308,in_stack_0000030c,in_stack_00000310,fVar20,fVar17);
      uVar10 = FUN_05dbfba4(uVar24,fVar33,fVar30,&stack0x0000028c);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar24,fVar33,fVar30);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_05dbfba4(uVar18,fVar29,fVar23,&stack0x0000028c);
      lVar11 = *unaff_x25;
      if ((uVar10 & 1) != 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar18,fVar29,fVar23);
        lVar11 = *unaff_x25;
      }
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbfcc0(in_stack_00000300,in_stack_00000304,in_stack_00000308,in_stack_0000030c,
                 in_stack_00000310,fVar20,(float)dVar19,fVar32,&stack0x00000218,&stack0x00000208);
    fVar17 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                );
    fVar33 = in_stack_00000218 * 0.0 + in_stack_0000021c;
    fVar17 = ((in_stack_00000300 * -0.0 - in_stack_00000304) - fVar17 * in_stack_00000308) /
             (fVar33 + fVar17 * in_stack_00000220);
    if (((0.0 <= fVar17) && (fVar17 <= 1.0)) &&
       (fVar30 = in_stack_00000308 + in_stack_00000220 * fVar17,
       *(float *)(unaff_x19 + 0x100) <= fVar30)) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(in_stack_00000300 + in_stack_00000218 * fVar17,
                   in_stack_00000304 + in_stack_0000021c * fVar17,fVar30);
    }
    fVar17 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                );
    fVar17 = ((in_stack_00000300 * -0.0 - in_stack_00000304) - fVar17 * in_stack_00000308) /
             (fVar33 + in_stack_00000220 * fVar17);
    if (((0.0 <= fVar17) && (fVar17 <= 1.0)) &&
       (fVar30 = in_stack_00000308 + in_stack_00000220 * fVar17,
       *(float *)(unaff_x19 + 0x100) <= fVar30)) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(in_stack_00000300 + in_stack_00000218 * fVar17,
                   in_stack_00000304 + in_stack_0000021c * fVar17,fVar30);
    }
    FUN_05dbb234(unaff_x19 + 0x106,0,*(ushort *)(unaff_x19 + 0xfc) - 1);
    if (*(short *)(unaff_x19 + 0x106) < *(short *)(unaff_x19 + 0x108)) {
      iVar9 = (int)*(short *)(unaff_x19 + 0x106);
      do {
        puVar4 = 
        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
        ;
        iVar9 = iVar9 + 1;
        fVar30 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                    );
        fVar17 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                     *(undefined8 *)puVar4);
        fVar30 = fVar30 + (fVar17 - fVar30) * *(float *)(unaff_x19 + 0xc4) * (float)iVar9;
        fVar17 = (in_stack_00000300 * -0.0 - in_stack_00000304) + in_stack_00000308 * fVar30;
        fVar29 = fVar17 / (fVar33 - in_stack_00000220 * fVar30);
        bVar6 = false;
        bVar7 = true;
        if (0.0 <= fVar29) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar29)) {
            bVar6 = fVar29 == 1.0;
            bVar7 = 1.0 <= fVar29;
          }
        }
        if ((!bVar7 || bVar6) &&
           (fVar23 = in_stack_00000308 + in_stack_00000220 * fVar29,
           *(float *)(unaff_x19 + 0x100) <= fVar23)) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar29 = (float)FUN_05dc0180(in_stack_00000300 + in_stack_00000218 * fVar29,
                                       in_stack_00000304 + in_stack_0000021c * fVar29,fVar23);
          fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
          bVar6 = false;
          bVar7 = false;
          bVar8 = false;
          if ((uint)ABS(fVar29) < 0x7f800001) {
            bVar6 = false;
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar29) && !NAN(fVar17)) {
              bVar6 = fVar29 < fVar17;
              bVar7 = fVar29 == fVar17;
              bVar8 = false;
            }
          }
          if (bVar7 || bVar6 != bVar8) {
            fVar17 = fVar29;
          }
          bVar6 = true;
          if (((uint)ABS(fVar17) < 0x7f800001) && (bVar6 = false, !NAN(fVar17))) {
            bVar6 = fVar17 < 0.0;
          }
          dVar19 = 0.0;
          if (!bVar6) {
            dVar19 = (double)fVar17;
          }
          iVar1 = 0;
          if (dVar19 != INFINITY) {
            iVar1 = (int)dVar19;
          }
          FUN_05dbb1a8(&stack0x00000204,iVar1);
          fVar17 = (in_stack_00000300 * -0.0 - in_stack_00000304) + fVar30 * in_stack_00000308;
        }
        fVar17 = fVar17 / ((in_stack_00000208 * 0.0 + in_stack_0000020c) -
                          fVar30 * in_stack_00000210);
        bVar6 = false;
        bVar7 = true;
        if (0.0 <= fVar17) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar17)) {
            bVar6 = fVar17 == 1.0;
            bVar7 = 1.0 <= fVar17;
          }
        }
        if ((!bVar7 || bVar6) &&
           (fVar29 = in_stack_00000308 + in_stack_00000210 * fVar17,
           *(float *)(unaff_x19 + 0x100) <= fVar29)) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar29 = (float)FUN_05dc0180(in_stack_00000300 + in_stack_00000208 * fVar17,
                                       in_stack_00000304 + in_stack_0000020c * fVar17,fVar29);
          fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
          bVar6 = false;
          bVar7 = false;
          bVar8 = false;
          if ((uint)ABS(fVar29) < 0x7f800001) {
            bVar6 = false;
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar29) && !NAN(fVar17)) {
              bVar6 = fVar29 < fVar17;
              bVar7 = fVar29 == fVar17;
              bVar8 = false;
            }
          }
          if (bVar7 || bVar6 != bVar8) {
            fVar17 = fVar29;
          }
          bVar6 = true;
          if (((uint)ABS(fVar17) < 0x7f800001) && (bVar6 = false, !NAN(fVar17))) {
            bVar6 = fVar17 < 0.0;
          }
          dVar19 = 0.0;
          if (!bVar6) {
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
        uVar12 = FUN_05dc0220(fVar30,fVar15,fVar36,fVar34,in_stack_0000030c,in_stack_00000310,fVar20
                              ,&stack0x000001f8,&stack0x000001e8);
        uVar10 = extraout_d0;
        if ((uVar12 & 1) != 0) {
          fVar17 = *(float *)(unaff_x19 + 0x100);
          if (fVar17 <= in_stack_00000200) {
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar29 = (float)FUN_05dc0180(in_stack_000001f8,in_stack_000001fc,in_stack_00000200);
            fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
            bVar6 = false;
            bVar7 = false;
            bVar8 = false;
            if ((uint)ABS(fVar29) < 0x7f800001) {
              bVar6 = false;
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar29) && !NAN(fVar17)) {
                bVar6 = fVar29 < fVar17;
                bVar7 = fVar29 == fVar17;
                bVar8 = false;
              }
            }
            if (bVar7 || bVar6 != bVar8) {
              fVar17 = fVar29;
            }
            bVar6 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar6 = false, !NAN(fVar17))) {
              bVar6 = fVar17 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar6) {
              dVar19 = (double)fVar17;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            FUN_05dbb1a8(&stack0x00000204,iVar1);
            fVar17 = *(float *)(unaff_x19 + 0x100);
          }
          fVar29 = in_stack_000001f0;
          uVar18 = uStack00000000000001ec;
          uVar24 = uStack00000000000001e8;
          uVar10 = (ulong)(uint)fVar17;
          if (fVar17 <= in_stack_000001f0) {
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar29 = (float)FUN_05dc0180(uVar24,uVar18,fVar29);
            fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
            bVar6 = false;
            bVar7 = false;
            bVar8 = false;
            if ((uint)ABS(fVar29) < 0x7f800001) {
              bVar6 = false;
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar29) && !NAN(fVar17)) {
                bVar6 = fVar29 < fVar17;
                bVar7 = fVar29 == fVar17;
                bVar8 = false;
              }
            }
            if (bVar7 || bVar6 != bVar8) {
              fVar17 = fVar29;
            }
            bVar6 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar6 = false, !NAN(fVar17))) {
              bVar6 = fVar17 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar6) {
              dVar19 = (double)fVar17;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            uVar10 = FUN_05dbb1a8(&stack0x00000204,iVar1);
          }
        }
        if (bVar5) {
          fVar17 = *(float *)(unaff_x19 + 0x100);
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c(uVar10,in_stack_00000300,in_stack_00000304,in_stack_00000308);
          }
          fVar30 = fVar30 * fVar17;
          FUN_05dc04b8(fVar17,in_stack_00000300,in_stack_00000304,in_stack_00000308,
                       in_stack_0000030c,in_stack_00000310,fVar20);
          uVar24 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,
                                in_stack_00000304,in_stack_00000308,in_stack_0000030c,
                                in_stack_00000310,fVar20,fVar32 / fVar28);
          uVar27 = *(undefined4 *)(unaff_x19 + 0x100);
          uVar18 = FUN_05dbf9ec(uVar27,in_stack_00000300,in_stack_00000304,in_stack_00000308,
                                in_stack_0000030c,in_stack_00000310,fVar20,fVar32 / fVar28);
          uVar35 = *(undefined4 *)(unaff_x19 + 0x100);
          uVar10 = FUN_05dbfba4(uVar24,fVar30,uVar27,&stack0x0000028c);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar29 = (float)FUN_05dc0180(uVar24,fVar30,uVar27);
            fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
            bVar6 = false;
            bVar7 = false;
            bVar8 = false;
            if ((uint)ABS(fVar29) < 0x7f800001) {
              bVar6 = false;
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar29) && !NAN(fVar17)) {
                bVar6 = fVar29 < fVar17;
                bVar7 = fVar29 == fVar17;
                bVar8 = false;
              }
            }
            if (bVar7 || bVar6 != bVar8) {
              fVar17 = fVar29;
            }
            bVar6 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar6 = false, !NAN(fVar17))) {
              bVar6 = fVar17 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar6) {
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
          uVar10 = FUN_05dbfba4(uVar18,fVar30,uVar35,&stack0x0000028c);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar30 = (float)FUN_05dc0180(uVar18,fVar30,uVar35);
            fVar17 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
            bVar6 = false;
            bVar7 = false;
            bVar8 = false;
            if ((uint)ABS(fVar30) < 0x7f800001) {
              bVar6 = false;
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar30) && !NAN(fVar17)) {
                bVar6 = fVar30 < fVar17;
                bVar7 = fVar30 == fVar17;
                bVar8 = false;
              }
            }
            if (bVar7 || bVar6 != bVar8) {
              fVar17 = fVar30;
            }
            bVar6 = true;
            if (((uint)ABS(fVar17) < 0x7f800001) && (bVar6 = false, !NAN(fVar17))) {
              bVar6 = fVar17 < 0.0;
            }
            dVar19 = 0.0;
            if (!bVar6) {
              dVar19 = (double)fVar17;
            }
            iVar1 = 0;
            if (dVar19 != INFINITY) {
              iVar1 = (int)dVar19;
            }
            FUN_05dbb1a8(&stack0x00000204,iVar1);
          }
        }
        iVar1 = iVar9 + *(int *)(unaff_x19 + 0x10c);
        unaff_x24 = 0;
        puVar13 = (undefined *)
                  ((ulong)puVar13 & 0xffffffff00000000 |
                  (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4));
        uVar24 = FUN_05dbb2f8(puVar13,0x80007fff);
        *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4) = uVar24;
        unaff_x23 = unaff_x23 & 0xffffffff00000000 |
                    (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4);
        uVar24 = FUN_05dbb2f8(unaff_x23,0x80007fff);
        *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4) = uVar24;
      } while (iVar9 < *(short *)(unaff_x19 + 0x108));
    }
  }
  FUN_05dbb234((undefined4 *)(unaff_x19 + 0x106),0,*(ushort *)(unaff_x19 + 0xfc) - 1);
  if (*(short *)(unaff_x19 + 0x106) < *(short *)(unaff_x19 + 0x108)) {
    iVar9 = (int)*(short *)(unaff_x19 + 0x106);
    do {
      puVar4 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
      ;
      iVar9 = iVar9 + 1;
      uStack00000000000001e4 = 0x80007fff;
      fVar20 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                  );
      fVar28 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                   *(undefined8 *)puVar4);
      fVar17 = *(float *)(unaff_x19 + 0xc4);
      uVar24 = *(undefined4 *)(unaff_x19 + 0x100);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dc0918(in_stack_00000300,in_stack_00000304,in_stack_00000308,fVar26,uVar24,
                   SQRT(fVar22 - fVar14),fVar20 + (fVar28 - fVar20) * fVar17 * (float)iVar9,
                   &stack0x000001d8,&stack0x000001c8);
      uVar27 = in_stack_000001e0;
      uVar18 = uStack00000000000001dc;
      uVar24 = uStack00000000000001d8;
      uVar10 = FUN_05dbf290(uStack00000000000001d8,uStack00000000000001dc,in_stack_000001e0,
                            &stack0x0000028c);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar28 = (float)FUN_05dc0180(uVar24,uVar18,uVar27);
        fVar20 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
        bVar5 = false;
        bVar6 = false;
        bVar7 = false;
        if ((uint)ABS(fVar28) < 0x7f800001) {
          bVar5 = false;
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar28) && !NAN(fVar20)) {
            bVar5 = fVar28 < fVar20;
            bVar6 = fVar28 == fVar20;
            bVar7 = false;
          }
        }
        if (bVar6 || bVar5 != bVar7) {
          fVar20 = fVar28;
        }
        bVar5 = true;
        if (((uint)ABS(fVar20) < 0x7f800001) && (bVar5 = false, !NAN(fVar20))) {
          bVar5 = fVar20 < 0.0;
        }
        dVar19 = 0.0;
        if (!bVar5) {
          dVar19 = (double)fVar20;
        }
        iVar1 = 0;
        if (dVar19 != INFINITY) {
          iVar1 = (int)dVar19;
        }
        FUN_05dbb1a8(&stack0x000001e4,iVar1);
      }
      uVar27 = in_stack_000001d0;
      uVar18 = uStack00000000000001cc;
      uVar24 = uStack00000000000001c8;
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_05dbf290(uVar24,uVar18,uVar27,&stack0x0000028c);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar28 = (float)FUN_05dc0180(uVar24,uVar18,uVar27);
        fVar20 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
        bVar5 = false;
        bVar6 = false;
        bVar7 = false;
        if ((uint)ABS(fVar28) < 0x7f800001) {
          bVar5 = false;
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar28) && !NAN(fVar20)) {
            bVar5 = fVar28 < fVar20;
            bVar6 = fVar28 == fVar20;
            bVar7 = false;
          }
        }
        if (bVar6 || bVar5 != bVar7) {
          fVar20 = fVar28;
        }
        bVar5 = true;
        if (((uint)ABS(fVar20) < 0x7f800001) && (bVar5 = false, !NAN(fVar20))) {
          bVar5 = fVar20 < 0.0;
        }
        dVar19 = 0.0;
        if (!bVar5) {
          dVar19 = (double)fVar20;
        }
        iVar1 = 0;
        if (dVar19 != INFINITY) {
          iVar1 = (int)dVar19;
        }
        FUN_05dbb1a8(&stack0x000001e4,iVar1);
      }
      uVar10 = (ulong)uStack00000000000001e4;
      iVar1 = iVar9 + *(int *)(unaff_x19 + 0x10c);
      unaff_x23 = unaff_x23 & 0xffffffff00000000 | uVar10;
      unaff_x24 = unaff_x24 & 0xffffffff00000000 |
                  (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4);
      uVar24 = FUN_05dbb2f8(unaff_x24,unaff_x23);
      puVar13 = (undefined *)((ulong)puVar13 & 0xffffffff00000000 | uVar10);
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4) = uVar24;
      uVar24 = FUN_05dbb2f8(*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4),puVar13);
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4) = uVar24;
    } while (iVar9 < *(short *)(unaff_x19 + 0x108));
  }
  *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)*(int *)(unaff_x19 + 0x10c) * 4) =
       *(undefined4 *)(unaff_x19 + 0x106);
  return;
}


