/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRCameraFrame$$TryGetMainLightDirection
ENTRY_POINT: 05dbd1cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARSubsystems_XRCameraFrame__TryGetMainLightDirection
               (float param_1,float param_2,float param_3,ulong param_4,float param_5,
               undefined1 param_6 [16],float param_7,float param_8)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong extraout_d0;
  double dVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  float fVar17;
  float unaff_s9;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float unaff_s11;
  float unaff_s12;
  float fVar22;
  float unaff_s13;
  float fVar23;
  undefined4 uVar24;
  float in_s16;
  float in_s17;
  float in_s18;
  float fStack0000000000000024;
  float fStack000000000000004c;
  float fStack0000000000000054;
  undefined8 in_stack_00000058;
  float fStack0000000000000064;
  float fStack0000000000000074;
  float fStack000000000000007c;
  uint uStack0000000000000084;
  float fStack000000000000008c;
  float fStack000000000000009c;
  float in_stack_000000c0;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000f0;
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
  float in_stack_00000300;
  float in_stack_00000304;
  float in_stack_00000308;
  float in_stack_0000030c;
  float in_stack_00000310;
  float in_stack_00000314;
  undefined4 in_stack_00000318;
  float in_stack_0000031c;
  
  param_7 = in_s17 + param_7;
  param_8 = in_s16 + param_8;
  fStack000000000000009c = (float)param_4;
  fVar18 = fStack000000000000009c * unaff_s9;
  param_2 = param_2 - param_5;
  fStack000000000000007c = param_3 - param_1;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    param_4 = (ulong)(uint)fStack000000000000009c;
  }
  fVar22 = fStack000000000000007c;
  fVar10 = in_s18 + unaff_s8;
  fVar18 = unaff_s13 * unaff_s11 - fVar18;
  UnityEngine_XR_ARSubsystems_XRCameraSubsystem__get_autoFocusRequested
            (param_7,param_8,unaff_s12,param_4,unaff_s13,fStack000000000000007c,param_2,
             &stack0x00000260,&stack0x00000258);
  fVar16 = param_8 + unaff_s13 * in_stack_00000260 + param_2 * in_stack_00000264;
  fVar15 = *(float *)(unaff_x19 + 0x100);
  fVar21 = param_8 + unaff_s13 * in_stack_00000258 + param_2 * in_stack_0000025c;
  fStack0000000000000074 = param_2;
  fStack000000000000008c = param_8;
  if (fVar15 <= fVar16) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(fVar10 + in_stack_00000058._4_4_ * in_stack_00000260 + fVar18 * in_stack_00000264,
                 param_7 + (float)param_4 * in_stack_00000260 + fVar22 * in_stack_00000264,fVar16);
    fVar15 = *(float *)(unaff_x19 + 0x100);
  }
  if (fVar15 <= fVar21) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(fVar10 + in_stack_00000058._4_4_ * in_stack_00000258 + fVar18 * in_stack_0000025c,
                 param_7 + (float)param_4 * in_stack_00000258 + fVar22 * in_stack_0000025c,fVar21);
  }
  if (in_stack_000000c0 <= ABS(ABS(in_stack_00000310) + -1.0)) {
    if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
    }
    fVar22 = in_stack_0000030c - in_stack_00000310 * 0.0;
    fVar15 = in_stack_00000310 * 0.0 - in_stack_00000314;
    fVar18 = in_stack_00000314 * 0.0 - in_stack_0000030c * 0.0;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar16 = 1.0 / SQRT(fVar22 * fVar22 + fVar15 * fVar15 + fVar18 * fVar18);
    fVar15 = fVar15 * fVar16;
    fVar18 = fVar18 * fVar16;
    fVar22 = fVar22 * fVar16;
  }
  else {
    fVar18 = 0.0;
    fVar22 = 0.0;
    fVar15 = 1.0;
  }
  fVar16 = in_stack_0000030c * fVar18 - fVar15 * in_stack_00000310;
  fVar21 = fVar22 * in_stack_00000310 - fVar18 * in_stack_00000314;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar17 = fStack000000000000008c;
  fVar11 = fVar15 * in_stack_00000314 - in_stack_0000030c * fVar22;
  UnityEngine_XR_ARSubsystems_XRCameraSubsystem__get_autoFocusRequested
            (fVar10,fStack000000000000008c,unaff_s12,fVar15,fVar22,fVar21,fVar16,&stack0x00000250,
             &stack0x00000248);
  fVar23 = fVar17 + fVar22 * in_stack_00000250 + fVar16 * in_stack_00000254;
  fVar19 = *(float *)(unaff_x19 + 0x100);
  fVar22 = fVar17 + fVar22 * in_stack_00000248 + fVar16 * in_stack_0000024c;
  if (fVar19 <= fVar23) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(fVar10 + fVar15 * in_stack_00000250 + fVar21 * in_stack_00000254,
                 param_7 + fVar18 * in_stack_00000250 + fVar11 * in_stack_00000254,fVar23);
    fVar19 = *(float *)(unaff_x19 + 0x100);
  }
  if (fVar19 <= fVar22) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(fVar10 + fVar15 * in_stack_00000248 + fVar21 * in_stack_0000024c,
                 param_7 + fVar18 * in_stack_00000248 + fVar11 * in_stack_0000024c,fVar22);
    fVar19 = *(float *)(unaff_x19 + 0x100);
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar18 = fStack000000000000008c;
  uVar6 = FUN_05dbf578(fVar10,param_7,fStack000000000000008c,in_stack_0000030c,in_stack_00000310,
                       in_stack_00000314,unaff_s12,fVar19,&stack0x00000238,&stack0x00000228);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000238,in_stack_0000023c,in_stack_00000240);
    FUN_05dbef10(in_stack_00000228,in_stack_0000022c,in_stack_00000230);
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar22 = (float)FUN_05dbf02c(in_stack_00000314);
  if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar15 = unaff_s12 * SQRT(1.0 - fVar22);
  fVar22 = fVar18 - fVar15;
  bVar3 = true;
  if (((uint)ABS(in_stack_00000308) < 0x7f800001) &&
     (bVar3 = false, !NAN(fVar22) && !NAN(in_stack_00000308))) {
    bVar3 = fVar22 < in_stack_00000308;
  }
  if (!bVar3) {
    fVar22 = in_stack_00000308;
  }
  if (fVar22 <= *(float *)(unaff_x19 + 0x100)) {
    fVar18 = fVar18 + fVar15;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if ((uint)ABS(in_stack_00000308) < 0x7f800001) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar18) && !NAN(in_stack_00000308)) {
        bVar3 = fVar18 < in_stack_00000308;
        bVar4 = fVar18 == in_stack_00000308;
        bVar5 = false;
      }
    }
    if (bVar4 || bVar3 != bVar5) {
      fVar18 = in_stack_00000308;
    }
    uStack0000000000000084 = (uint)(*(float *)(unaff_x19 + 0x100) <= fVar18);
  }
  else {
    uStack0000000000000084 = 0;
  }
  fVar22 = in_stack_00000308 * in_stack_00000310 - in_stack_00000314 * in_stack_00000304;
  fVar15 = in_stack_00000314 * in_stack_00000300 - in_stack_00000308 * in_stack_0000030c;
  fVar18 = in_stack_0000030c * in_stack_00000304 - in_stack_00000310 * in_stack_00000300;
  if (fVar18 + fVar15 + fVar22 == 0.0) {
    fVar15 = 0.0;
    fVar18 = 0.0;
    fStack0000000000000054 = 1.0;
  }
  else {
    if (*(char *)(unaff_x20 + 0xc7c) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x20 + 0xc7c) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar16 = 1.0 / SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar22 * fVar22);
    fStack0000000000000054 = fVar22 * fVar16;
    fVar15 = fVar15 * fVar16;
    fVar18 = fVar18 * fVar16;
  }
  lVar7 = *unaff_x25;
  fVar22 = fStack0000000000000054 * in_stack_00000314;
  fStack0000000000000064 = fVar18 * in_stack_00000310 - fVar15 * in_stack_00000314;
  if (uStack0000000000000084 != 0) {
    fVar15 = unaff_s12 / in_stack_0000031c;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbf77c();
    fVar16 = in_stack_00000304;
    fVar21 = in_stack_00000300;
    uVar12 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                          in_stack_00000308,in_stack_0000030c,in_stack_00000310,in_stack_00000314,
                          fVar15);
    fVar17 = in_stack_00000304;
    fVar11 = in_stack_00000300;
    uVar13 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                          in_stack_00000308,in_stack_0000030c,in_stack_00000310,in_stack_00000314);
    uVar6 = FUN_05dbfba4(uVar12,fVar21,fVar16,&stack0x0000028c);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar12,fVar21,fVar16);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_05dbfba4(uVar13,fVar11,fVar17,&stack0x0000028c);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar13,fVar11,fVar17);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbf77c();
    fVar16 = in_stack_00000300;
    fVar21 = in_stack_00000304;
    uVar12 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                          in_stack_00000308,in_stack_0000030c,in_stack_00000310,in_stack_00000314,
                          fVar15);
    fVar17 = in_stack_00000300;
    fVar11 = in_stack_00000304;
    uVar13 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304,
                          in_stack_00000308,in_stack_0000030c,in_stack_00000310,in_stack_00000314,
                          fVar15);
    uVar6 = FUN_05dbfba4(uVar12,fVar16,fVar21,&stack0x0000028c);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar12,fVar16,fVar21);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_05dbfba4(uVar13,fVar17,fVar11,&stack0x0000028c);
    lVar7 = *unaff_x25;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dbef10(uVar13,fVar17,fVar11);
      lVar7 = *unaff_x25;
    }
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fStack0000000000000024 = fVar22 - in_stack_0000030c * fVar18;
  FUN_05dbfcc0(in_stack_00000300,in_stack_00000304,in_stack_00000308,in_stack_0000030c,
               in_stack_00000310,in_stack_00000314,in_stack_00000318,unaff_s12,&stack0x00000218,
               &stack0x00000208);
  fVar18 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                               *(undefined8 *)
                                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                              );
  fVar22 = in_stack_00000218 * 0.0 + in_stack_0000021c;
  fVar18 = ((in_stack_00000300 * -0.0 - in_stack_00000304) - fVar18 * in_stack_00000308) /
           (fVar22 + fVar18 * in_stack_00000220);
  fStack000000000000004c = in_stack_00000218;
  if (((0.0 <= fVar18) && (fVar18 <= 1.0)) &&
     (fVar15 = in_stack_00000308 + in_stack_00000220 * fVar18,
     *(float *)(unaff_x19 + 0x100) <= fVar15)) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000300 + in_stack_00000218 * fVar18,
                 in_stack_00000304 + in_stack_0000021c * fVar18,fVar15);
  }
  fVar18 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                               *(undefined8 *)
                                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                              );
  fVar18 = ((in_stack_00000300 * -0.0 - in_stack_00000304) - fVar18 * in_stack_00000308) /
           (fVar22 + in_stack_00000220 * fVar18);
  if (((0.0 <= fVar18) && (fVar18 <= 1.0)) &&
     (fVar15 = in_stack_00000308 + in_stack_00000220 * fVar18,
     *(float *)(unaff_x19 + 0x100) <= fVar15)) {
    fVar16 = fStack000000000000004c * fVar18;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dbef10(in_stack_00000300 + fVar16,in_stack_00000304 + in_stack_0000021c * fVar18,fVar15);
  }
  FUN_05dbb234(unaff_x19 + 0x106,0,*(ushort *)(unaff_x19 + 0xfc) - 1);
  if (*(short *)(unaff_x19 + 0x106) < *(short *)(unaff_x19 + 0x108)) {
    iVar9 = (int)*(short *)(unaff_x19 + 0x106);
    do {
      puVar2 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
      ;
      iVar9 = iVar9 + 1;
      fVar16 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                  );
      fVar15 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                   *(undefined8 *)puVar2);
      fVar18 = fStack000000000000008c;
      fVar16 = fVar16 + (fVar15 - fVar16) * *(float *)(unaff_x19 + 0xc4) * (float)iVar9;
      fVar15 = (in_stack_00000300 * -0.0 - in_stack_00000304) + in_stack_00000308 * fVar16;
      fVar21 = fVar15 / (fVar22 - in_stack_00000220 * fVar16);
      bVar3 = false;
      bVar4 = true;
      if (0.0 <= fVar21) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar21)) {
          bVar3 = fVar21 == 1.0;
          bVar4 = 1.0 <= fVar21;
        }
      }
      if ((!bVar4 || bVar3) &&
         (fVar17 = in_stack_00000308 + in_stack_00000220 * fVar21,
         *(float *)(unaff_x19 + 0x100) <= fVar17)) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar21 = (float)FUN_05dc0180(in_stack_00000300 + fStack000000000000004c * fVar21,
                                     in_stack_00000304 + in_stack_0000021c * fVar21,fVar17);
        fVar15 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if ((uint)ABS(fVar21) < 0x7f800001) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar21) && !NAN(fVar15)) {
            bVar3 = fVar21 < fVar15;
            bVar4 = fVar21 == fVar15;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) {
          fVar15 = fVar21;
        }
        bVar3 = true;
        if (((uint)ABS(fVar15) < 0x7f800001) && (bVar3 = false, !NAN(fVar15))) {
          bVar3 = fVar15 < 0.0;
        }
        dVar14 = 0.0;
        if (!bVar3) {
          dVar14 = (double)fVar15;
        }
        iVar1 = 0;
        if (dVar14 != INFINITY) {
          iVar1 = (int)dVar14;
        }
        FUN_05dbb1a8(&stack0x00000204,iVar1);
        fVar15 = (in_stack_00000300 * -0.0 - in_stack_00000304) + fVar16 * in_stack_00000308;
      }
      fVar15 = fVar15 / ((in_stack_00000208 * 0.0 + in_stack_0000020c) - fVar16 * in_stack_00000210)
      ;
      bVar3 = false;
      bVar4 = true;
      if (0.0 <= fVar15) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar15)) {
          bVar3 = fVar15 == 1.0;
          bVar4 = 1.0 <= fVar15;
        }
      }
      if ((!bVar4 || bVar3) &&
         (fVar21 = in_stack_00000308 + in_stack_00000210 * fVar15,
         *(float *)(unaff_x19 + 0x100) <= fVar21)) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar21 = (float)FUN_05dc0180(in_stack_00000300 + in_stack_00000208 * fVar15,
                                     in_stack_00000304 + in_stack_0000020c * fVar15,fVar21);
        fVar15 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if ((uint)ABS(fVar21) < 0x7f800001) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar21) && !NAN(fVar15)) {
            bVar3 = fVar21 < fVar15;
            bVar4 = fVar21 == fVar15;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) {
          fVar15 = fVar21;
        }
        bVar3 = true;
        if (((uint)ABS(fVar15) < 0x7f800001) && (bVar3 = false, !NAN(fVar15))) {
          bVar3 = fVar15 < 0.0;
        }
        dVar14 = 0.0;
        if (!bVar3) {
          dVar14 = (double)fVar15;
        }
        iVar1 = 0;
        if (dVar14 != INFINITY) {
          iVar1 = (int)dVar14;
        }
        FUN_05dbb1a8(&stack0x00000204,iVar1);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_05dc0220(fVar16,fVar10,param_7,fVar18,in_stack_0000030c,in_stack_00000310,
                           in_stack_00000314,&stack0x000001f8,&stack0x000001e8);
      uVar6 = extraout_d0;
      if ((uVar8 & 1) != 0) {
        fVar18 = *(float *)(unaff_x19 + 0x100);
        if (fVar18 <= in_stack_00000200) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar15 = (float)FUN_05dc0180(in_stack_000001f8,in_stack_000001fc,in_stack_00000200);
          fVar18 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if ((uint)ABS(fVar15) < 0x7f800001) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar15) && !NAN(fVar18)) {
              bVar3 = fVar15 < fVar18;
              bVar4 = fVar15 == fVar18;
              bVar5 = false;
            }
          }
          if (bVar4 || bVar3 != bVar5) {
            fVar18 = fVar15;
          }
          bVar3 = true;
          if (((uint)ABS(fVar18) < 0x7f800001) && (bVar3 = false, !NAN(fVar18))) {
            bVar3 = fVar18 < 0.0;
          }
          dVar14 = 0.0;
          if (!bVar3) {
            dVar14 = (double)fVar18;
          }
          iVar1 = 0;
          if (dVar14 != INFINITY) {
            iVar1 = (int)dVar14;
          }
          FUN_05dbb1a8(&stack0x00000204,iVar1);
          fVar18 = *(float *)(unaff_x19 + 0x100);
        }
        fVar15 = in_stack_000001f0;
        uVar13 = uStack00000000000001ec;
        uVar12 = uStack00000000000001e8;
        uVar6 = (ulong)(uint)fVar18;
        if (fVar18 <= in_stack_000001f0) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar15 = (float)FUN_05dc0180(uVar12,uVar13,fVar15);
          fVar18 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if ((uint)ABS(fVar15) < 0x7f800001) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar15) && !NAN(fVar18)) {
              bVar3 = fVar15 < fVar18;
              bVar4 = fVar15 == fVar18;
              bVar5 = false;
            }
          }
          if (bVar4 || bVar3 != bVar5) {
            fVar18 = fVar15;
          }
          bVar3 = true;
          if (((uint)ABS(fVar18) < 0x7f800001) && (bVar3 = false, !NAN(fVar18))) {
            bVar3 = fVar18 < 0.0;
          }
          dVar14 = 0.0;
          if (!bVar3) {
            dVar14 = (double)fVar18;
          }
          iVar1 = 0;
          if (dVar14 != INFINITY) {
            iVar1 = (int)dVar14;
          }
          uVar6 = FUN_05dbb1a8(&stack0x00000204,iVar1);
        }
      }
      if (uStack0000000000000084 != 0) {
        fVar18 = *(float *)(unaff_x19 + 0x100);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c(uVar6,in_stack_00000300,in_stack_00000304,in_stack_00000308);
        }
        fVar16 = fVar16 * fVar18;
        FUN_05dc04b8(fVar18,in_stack_00000300,in_stack_00000304,in_stack_00000308,in_stack_0000030c,
                     in_stack_00000310,in_stack_00000314);
        uVar12 = FUN_05dbf9ec(*(undefined4 *)(unaff_x19 + 0x100),in_stack_00000300,in_stack_00000304
                              ,in_stack_00000308,in_stack_0000030c,in_stack_00000310,
                              in_stack_00000314,unaff_s12 / in_stack_0000031c);
        uVar20 = *(undefined4 *)(unaff_x19 + 0x100);
        uVar13 = FUN_05dbf9ec(uVar20,in_stack_00000300,in_stack_00000304,in_stack_00000308,
                              in_stack_0000030c,in_stack_00000310,in_stack_00000314,
                              unaff_s12 / in_stack_0000031c);
        uVar24 = *(undefined4 *)(unaff_x19 + 0x100);
        uVar6 = FUN_05dbfba4(uVar12,fVar16,uVar20,&stack0x0000028c);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar15 = (float)FUN_05dc0180(uVar12,fVar16,uVar20);
          fVar18 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if ((uint)ABS(fVar15) < 0x7f800001) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar15) && !NAN(fVar18)) {
              bVar3 = fVar15 < fVar18;
              bVar4 = fVar15 == fVar18;
              bVar5 = false;
            }
          }
          if (bVar4 || bVar3 != bVar5) {
            fVar18 = fVar15;
          }
          bVar3 = true;
          if (((uint)ABS(fVar18) < 0x7f800001) && (bVar3 = false, !NAN(fVar18))) {
            bVar3 = fVar18 < 0.0;
          }
          dVar14 = 0.0;
          if (!bVar3) {
            dVar14 = (double)fVar18;
          }
          iVar1 = 0;
          if (dVar14 != INFINITY) {
            iVar1 = (int)dVar14;
          }
          FUN_05dbb1a8(&stack0x00000204,iVar1);
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = FUN_05dbfba4(uVar13,fVar16,uVar24,&stack0x0000028c);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar15 = (float)FUN_05dc0180(uVar13,fVar16,uVar24);
          fVar18 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if ((uint)ABS(fVar15) < 0x7f800001) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar15) && !NAN(fVar18)) {
              bVar3 = fVar15 < fVar18;
              bVar4 = fVar15 == fVar18;
              bVar5 = false;
            }
          }
          if (bVar4 || bVar3 != bVar5) {
            fVar18 = fVar15;
          }
          bVar3 = true;
          if (((uint)ABS(fVar18) < 0x7f800001) && (bVar3 = false, !NAN(fVar18))) {
            bVar3 = fVar18 < 0.0;
          }
          dVar14 = 0.0;
          if (!bVar3) {
            dVar14 = (double)fVar18;
          }
          iVar1 = 0;
          if (dVar14 != INFINITY) {
            iVar1 = (int)dVar14;
          }
          FUN_05dbb1a8(&stack0x00000204,iVar1);
        }
      }
      iVar1 = iVar9 + *(int *)(unaff_x19 + 0x10c);
      unaff_x24 = 0;
      unaff_x20 = unaff_x20 & 0xffffffff00000000 | 0x80007fff;
      unaff_x21 = (long *)((ulong)unaff_x21 & 0xffffffff00000000 |
                          (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4));
      uVar12 = FUN_05dbb2f8(unaff_x21,unaff_x20);
      unaff_x22 = unaff_x22 & 0xffffffff00000000 | 0x80007fff;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4) = uVar12;
      unaff_x23 = unaff_x23 & 0xffffffff00000000 |
                  (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4);
      uVar12 = FUN_05dbb2f8(unaff_x23,unaff_x22);
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4) = uVar12;
    } while (iVar9 < *(short *)(unaff_x19 + 0x108));
  }
  FUN_05dbb234((undefined4 *)(unaff_x19 + 0x106),0,*(ushort *)(unaff_x19 + 0xfc) - 1);
  if (*(short *)(unaff_x19 + 0x106) < *(short *)(unaff_x19 + 0x108)) {
    iVar9 = (int)*(short *)(unaff_x19 + 0x106);
    do {
      puVar2 = 
      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
      ;
      iVar9 = iVar9 + 1;
      uStack00000000000001e4 = 0x80007fff;
      fVar18 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                  );
      fVar22 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                   *(undefined8 *)puVar2);
      fVar10 = *(float *)(unaff_x19 + 0xc4);
      uVar12 = *(undefined4 *)(unaff_x19 + 0x100);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dc0918(in_stack_00000300,in_stack_00000304,in_stack_00000308,in_stack_000000e0,uVar12,
                   in_stack_000000f0,fVar18 + (fVar22 - fVar18) * fVar10 * (float)iVar9,
                   &stack0x000001d8,&stack0x000001c8);
      uVar20 = in_stack_000001e0;
      uVar13 = uStack00000000000001dc;
      uVar12 = uStack00000000000001d8;
      uVar6 = FUN_05dbf290(uStack00000000000001d8,uStack00000000000001dc,in_stack_000001e0,
                           &stack0x0000028c);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar22 = (float)FUN_05dc0180(uVar12,uVar13,uVar20);
        fVar18 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if ((uint)ABS(fVar22) < 0x7f800001) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar22) && !NAN(fVar18)) {
            bVar3 = fVar22 < fVar18;
            bVar4 = fVar22 == fVar18;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) {
          fVar18 = fVar22;
        }
        bVar3 = true;
        if (((uint)ABS(fVar18) < 0x7f800001) && (bVar3 = false, !NAN(fVar18))) {
          bVar3 = fVar18 < 0.0;
        }
        dVar14 = 0.0;
        if (!bVar3) {
          dVar14 = (double)fVar18;
        }
        iVar1 = 0;
        if (dVar14 != INFINITY) {
          iVar1 = (int)dVar14;
        }
        FUN_05dbb1a8(&stack0x000001e4,iVar1);
      }
      uVar20 = in_stack_000001d0;
      uVar13 = uStack00000000000001cc;
      uVar12 = uStack00000000000001c8;
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_05dbf290(uVar12,uVar13,uVar20,&stack0x0000028c);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar22 = (float)FUN_05dc0180(uVar12,uVar13,uVar20);
        fVar18 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if ((uint)ABS(fVar22) < 0x7f800001) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar22) && !NAN(fVar18)) {
            bVar3 = fVar22 < fVar18;
            bVar4 = fVar22 == fVar18;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) {
          fVar18 = fVar22;
        }
        bVar3 = true;
        if (((uint)ABS(fVar18) < 0x7f800001) && (bVar3 = false, !NAN(fVar18))) {
          bVar3 = fVar18 < 0.0;
        }
        dVar14 = 0.0;
        if (!bVar3) {
          dVar14 = (double)fVar18;
        }
        iVar1 = 0;
        if (dVar14 != INFINITY) {
          iVar1 = (int)dVar14;
        }
        FUN_05dbb1a8(&stack0x000001e4,iVar1);
      }
      uVar6 = (ulong)uStack00000000000001e4;
      iVar1 = iVar9 + *(int *)(unaff_x19 + 0x10c);
      unaff_x23 = unaff_x23 & 0xffffffff00000000 | uVar6;
      unaff_x24 = unaff_x24 & 0xffffffff00000000 |
                  (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4);
      uVar12 = FUN_05dbb2f8(unaff_x24,unaff_x23);
      unaff_x21 = (long *)((ulong)unaff_x21 & 0xffffffff00000000 | uVar6);
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar1 + 1) * 4) = uVar12;
      unaff_x22 = unaff_x22 & 0xffffffff00000000 |
                  (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4);
      uVar12 = FUN_05dbb2f8(unaff_x22,unaff_x21);
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar1 * 4) = uVar12;
    } while (iVar9 < *(short *)(unaff_x19 + 0x108));
  }
  *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)*(int *)(unaff_x19 + 0x10c) * 4) =
       *(undefined4 *)(unaff_x19 + 0x106);
  return;
}


