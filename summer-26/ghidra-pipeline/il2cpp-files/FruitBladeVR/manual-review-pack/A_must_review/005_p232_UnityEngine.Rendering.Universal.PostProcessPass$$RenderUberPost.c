/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$RenderUberPost
ENTRY_POINT: 034cb4b4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_21;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x034cc020) */

void UnityEngine_Rendering_Universal_PostProcessPass__RenderUberPost
               (long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 *param_6
               ,undefined8 *param_7,undefined8 *param_8,uint *param_9,byte param_10,byte param_11,
               undefined8 param_12,byte param_13)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  int *piVar22;
  uint *puVar23;
  long lVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  long local_a0;
  long *local_98;
  undefined1 local_90 [16];
  
  if ((DAT_03ef5f62 & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberPostPassData,_RasterGraphContext>_TypeInfo_03cdc390
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalResourceData>___03cdab40
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                );
    FUN_01c5c92c(PTR_System_IDisposable_TypeInfo_03cb5b98);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_UberPostPassData>___03cdc398
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_ProfilingSampler_Get<URPProfileId>___03cdaab8);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>___03cdc3a0
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderUberPost>b__162_0___03cdc3a8
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_PostProcessPass_<>c_TypeInfo_03cdc038);
    FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
    FUN_01c5c92c(PTR_StringLiteral_1627_03cdc3b0);
    FUN_01c5c92c(PTR_StringLiteral_795_03cdc0c8);
    DAT_03ef5f62 = 1;
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0 = 0;
  local_98 = (long *)0x0;
  auVar6 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x1a0) == 0) || (auVar6 = ZEXT816(0), param_5 == 0)) {
LAB_034cc018:
    local_90 = auVar6;
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  iVar2 = *(int *)(param_5 + 0x14);
  auVar6 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x1f8) == 0) ||
     (plVar15 = *(long **)(*(long *)(param_1 + 0x1f8) + 0x38), auVar6 = ZEXT816(0),
     plVar15 == (long *)0x0)) goto LAB_034cc018;
  uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
  iVar3 = *(int *)(param_5 + 0x18);
  fVar25 = (float)(**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220));
  fVar25 = exp2f(fVar25);
  local_90 = UnityEngine_Rendering_Universal_PostProcessPass__TryGetCachedUserLutTextureHandle
                       (param_1,param_2);
  auVar6 = local_90;
  if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_034cc018;
  uVar16 = UnityEngine_Rendering_Universal_ColorLookup__IsActive(*(long *)(param_1 + 0x1f0),0);
  if ((uVar16 & 1) == 0) {
    if (DAT_03ef1420 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Vector4_TypeInfo_03cb6268);
      DAT_03ef1420 = '\x01';
    }
    puVar19 = *(undefined8 **)(*(long *)PTR_UnityEngine_Vector4_TypeInfo_03cb6268 + 0xb8);
    fVar29 = *(float *)(puVar19 + 1);
    uVar26 = *(undefined4 *)((long)puVar19 + 0xc);
    uVar27 = *puVar19;
  }
  else {
    auVar6 = local_90;
    if (((*(long *)(param_1 + 0x1f0) == 0) ||
        (plVar15 = *(long **)(*(long *)(param_1 + 0x1f0) + 0x38), plVar15 == (long *)0x0)) ||
       (plVar15 = (long *)(**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220))
       , auVar6 = local_90, plVar15 == (long *)0x0)) goto LAB_034cc018;
    uVar12 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
    auVar6 = local_90;
    if (((*(long *)(param_1 + 0x1f0) == 0) ||
        (plVar15 = *(long **)(*(long *)(param_1 + 0x1f0) + 0x38), plVar15 == (long *)0x0)) ||
       (plVar15 = (long *)(**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220))
       , auVar6 = local_90, plVar15 == (long *)0x0)) goto LAB_034cc018;
    uVar13 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
    auVar6 = local_90;
    if (((*(long *)(param_1 + 0x1f0) == 0) ||
        (plVar15 = *(long **)(*(long *)(param_1 + 0x1f0) + 0x38), plVar15 == (long *)0x0)) ||
       (plVar15 = (long *)(**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220))
       , auVar6 = local_90, plVar15 == (long *)0x0)) goto LAB_034cc018;
    iVar14 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
    auVar6 = local_90;
    if ((*(long *)(param_1 + 0x1f0) == 0) ||
       (plVar15 = *(long **)(*(long *)(param_1 + 0x1f0) + 0x40), plVar15 == (long *)0x0))
    goto LAB_034cc018;
                    /* try { // try from 034cb6ec to 035cb777 has its CatchHandler @ 034cb6ec
                       catch() { ... } // from try @ 034cb6ec with catch @ 034cb6ec
                       catch() { ... } // from try @ 034cb7e0 with catch @ 034cb6ec
                       catch() { ... } // from try @ 034cb870 with catch @ 034cb6ec */
    uVar26 = (**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220));
    uVar28 = NEON_fmov(0x3f800000,4);
    uVar27 = NEON_scvtf(CONCAT44(uVar13,uVar12),4);
    uVar27 = CONCAT44((float)((ulong)uVar28 >> 0x20) / (float)((ulong)uVar27 >> 0x20),
                      (float)uVar28 / (float)uVar27);
    fVar29 = (float)iVar14 + -1.0;
  }
  uVar28 = UnityEngine_Rendering_ProfilingSampler__Get<Int32Enum>
                     (0x36,*(undefined8 *)
                            PTR_Method_UnityEngine_Rendering_ProfilingSampler_Get<URPProfileId>___03cdaab8
                     );
  auVar6 = local_90;
  if (param_2 == 0) goto LAB_034cc018;
                    /* try { // try from 034cb778 to 035cb793 has its CatchHandler @ 034cb83c */
  local_98 = (long *)UnityEngine_Rendering_RenderGraphModule_RenderGraph__AddRasterRenderPass<object>
                               (param_2,*(undefined8 *)PTR_StringLiteral_1627_03cdc3b0,&local_a0,
                                uVar28,*(undefined8 *)PTR_StringLiteral_795_03cdc0c8,0x744,
                                *(undefined8 *)
                                 PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>___03cdc3a0
                               );
                    /* try { // try from 034cb7a4 to 035cb7df has its CatchHandler @ 034cb838 */
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar17 = FUN_0348482c(param_3,*(undefined8 *)
                                 PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalResourceData>___03cdab40
                       );
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (*(long *)(param_4 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar16 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(param_4 + 0x1a0),0);
  puVar9 = PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458;
                    /* try { // try from 034cb7e0 to 035cb857 has its CatchHandler @ 034cb6ec */
  if ((uVar16 & 1) != 0) {
    lVar18 = UnityEngine_Rendering_Universal_UniversalCameraData__get_xrUniversal(param_4,0);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(char *)(lVar18 + 0x737) == '\0') {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      bVar10 = UnityEngine_Rendering_Universal_UniversalResourceData__get_isActiveTargetBackBuffer
                         (lVar17,0);
    }
    else {
      bVar10 = 1;
    }
    puVar8 = PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500;
    if (*(int *)(*(long *)PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500 + 0xe4)
        == 0) {
      thunk_FUN_01cb0d4c();
    }
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 034cb7a4 with catch @ 034cb838
                        */
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 034cb778 with catch @ 034cb83c
                        */
    if (DAT_03ef5445 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
      DAT_03ef5445 = '\x01';
    }
    lVar17 = *(long *)puVar8;
                    /* try { // try from 034cb858 to 035cb85b has its CatchHandler @ 034cb864 */
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
                    /* catch() { ... } // from try @ 034cb858 with catch @ 034cb864 */
      lVar17 = *(long *)puVar8;
    }
    plVar15 = local_98;
                    /* try { // try from 034cb868 to 035cb86f has its CatchHandler @ 034cb878 */
                    /* try { // try from 034cb870 to 035cb87b has its CatchHandler @ 034cb6ec */
    bVar5 = *(byte *)(*(long *)(lVar17 + 0xb8) + 0x4c);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034cb868 with catch @ 034cb878
                        */
    if (*(long *)(param_4 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    bVar11 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                       (*(long *)(param_4 + 0x1a0),0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar17 = *plVar15;
    uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar16 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar9) {
          puVar19 = (undefined8 *)(lVar17 + (long)(*piVar22 + 0xd) * 0x10 + 0x138);
          goto LAB_034cb8e4;
        }
        uVar16 = uVar16 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar16 != 0);
    }
    puVar19 = (undefined8 *)FUN_01c8cb54(plVar15,*(long *)puVar9,0xd);
LAB_034cb8e4:
    (*(code *)*puVar19)(plVar15,bVar10 & (bVar5 & 2) == 0 & bVar11,puVar19[1]);
  }
  plVar15 = local_98;
  if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar17 = *local_98;
  uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar16 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar9) {
        puVar19 = (undefined8 *)(lVar17 + (long)(*piVar22 + 0xc) * 0x10 + 0x138);
        goto LAB_034cb950;
      }
      uVar16 = uVar16 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar16 != 0);
  }
  puVar19 = (undefined8 *)FUN_01c8cb54(local_98,*(long *)puVar9,0xc);
LAB_034cb950:
  (*(code *)*puVar19)(plVar15,1,puVar19[1]);
  plVar15 = local_98;
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar28 = *param_7;
  *(undefined8 *)(local_a0 + 0x18) = param_7[1];
  *(undefined8 *)(local_a0 + 0x10) = uVar28;
  if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar17 = *local_98;
  uVar28 = *param_7;
  uVar1 = param_7[1];
  uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar16 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) ==
          *(long *)
           PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350)
      {
        puVar19 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_034cb9d0;
      }
      uVar16 = uVar16 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar16 != 0);
  }
  puVar19 = (undefined8 *)
            FUN_01c8cb54(local_98,*(long *)
                                   PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                         ,0);
LAB_034cb9d0:
  (*(code *)*puVar19)(plVar15,uVar28,uVar1,0,2,puVar19[1]);
  plVar15 = local_98;
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar28 = *param_6;
  *(undefined8 *)(local_a0 + 0x28) = param_6[1];
  *(undefined8 *)(local_a0 + 0x20) = uVar28;
  if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar17 = *local_98;
  uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar16 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar9) {
        puVar19 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_034cba50;
      }
      uVar16 = uVar16 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar16 != 0);
  }
  puVar19 = (undefined8 *)FUN_01c8cb54(local_98,*(long *)puVar9,0);
LAB_034cba50:
  (*(code *)*puVar19)(plVar15,param_6,1,puVar19[1]);
  plVar15 = local_98;
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar28 = *param_8;
  *(undefined8 *)(local_a0 + 0x38) = param_8[1];
  *(undefined8 *)(local_a0 + 0x30) = uVar28;
  if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar17 = *local_98;
  uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar16 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar9) {
        puVar19 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_034cbac8;
      }
      uVar16 = uVar16 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar16 != 0);
  }
  puVar19 = (undefined8 *)FUN_01c8cb54(local_98,*(long *)puVar9,0);
LAB_034cbac8:
  (*(code *)*puVar19)(plVar15,param_8,1,puVar19[1]);
  puVar8 = PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968;
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar17 = *(long *)PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968;
  *(float *)(local_a0 + 0x48) = (float)iVar3 + -1.0;
  *(float *)(local_a0 + 0x4c) = fVar25;
  *(float *)(local_a0 + 0x40) = 1.0 / (float)(iVar3 * iVar3);
  *(float *)(local_a0 + 0x44) = 1.0 / (float)iVar3;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
  puVar7 = PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068;
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068
              + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  uVar4 = (uint)(ushort)local_90._2_2_;
  if (local_90._2_2_ != 0) {
    lVar17 = *(long *)puVar7;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar17 = *(long *)puVar7;
    }
    piVar22 = *(int **)(lVar17 + 0xb8);
    if (uVar4 << 0x10 != *piVar22) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        piVar22 = *(int **)(*(long *)puVar7 + 0xb8);
      }
      if (uVar4 << 0x10 != piVar22[1]) goto LAB_034cbc44;
    }
    plVar15 = local_98;
    if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    *(undefined1 (*) [16])(local_a0 + 0x50) = local_90;
    if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar17 = *local_98;
    uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar16 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar9) {
          puVar19 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_034cbc30;
        }
        uVar16 = uVar16 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar16 != 0);
    }
    puVar19 = (undefined8 *)FUN_01c8cb54(local_98,*(long *)puVar9,0);
LAB_034cbc30:
    (*(code *)*puVar19)(plVar15,local_90,1,puVar19[1]);
  }
LAB_034cbc44:
  if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar16 = UnityEngine_Rendering_Universal_Bloom__IsActive(*(long *)(param_1 + 0x1d0),0);
  plVar15 = local_98;
  if ((uVar16 & 1) != 0) {
    lVar17 = *(long *)(param_1 + 0x148);
    if ((lVar17 == 0) || (local_98 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    lVar18 = *local_98;
    uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar16 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar9) {
          puVar19 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_034cbcbc;
        }
        uVar16 = uVar16 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar16 != 0);
    }
    puVar19 = (undefined8 *)FUN_01c8cb54(local_98,*(long *)puVar9,0);
LAB_034cbcbc:
    (*(code *)*puVar19)(plVar15,lVar17 + 0x20,1,puVar19[1]);
  }
  if (((param_10 & 1) != 0) && (*(char *)(param_1 + 0x246) != '\0')) {
    uVar4 = *param_9;
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    if (DAT_03ef5451 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
      DAT_03ef5451 = '\x01';
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    if (DAT_03ef5452 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
      DAT_03ef5452 = '\x01';
    }
    uVar4 = uVar4 & 0xffff0000;
    if (uVar4 != 0) {
      lVar17 = *(long *)puVar7;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar17 = *(long *)puVar7;
      }
      puVar23 = *(uint **)(lVar17 + 0xb8);
      if (uVar4 != *puVar23) {
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          puVar23 = *(uint **)(*(long *)puVar7 + 0xb8);
        }
        if (uVar4 != puVar23[1]) goto LAB_034cbdf4;
      }
      plVar15 = local_98;
      if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      lVar17 = *local_98;
      uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar16 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar9) {
            puVar19 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_034cbde0;
          }
          uVar16 = uVar16 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar16 != 0);
      }
      puVar19 = (undefined8 *)FUN_01c8cb54(local_98,*(long *)puVar9,0);
LAB_034cbde0:
      (*(code *)*puVar19)(plVar15,param_9,1,puVar19[1]);
    }
  }
LAB_034cbdf4:
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  *(long *)(local_a0 + 0x78) = param_4;
  *(undefined8 *)(local_a0 + 0x60) = uVar27;
  *(float *)(local_a0 + 0x68) = fVar29;
  *(undefined4 *)(local_a0 + 0x6c) = uVar26;
  thunk_FUN_01cc8040((long *)(local_a0 + 0x78),param_4);
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  *(undefined8 *)(local_a0 + 0x70) = uVar21;
  thunk_FUN_01cc8040();
  lVar17 = local_a0;
  if (*(long *)(param_1 + 0x200) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  plVar15 = *(long **)(*(long *)(param_1 + 0x200) + 0x38);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar26 = (**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220));
  plVar15 = local_98;
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  *(undefined4 *)(lVar17 + 0x80) = uVar26;
  puVar9 = PTR_UnityEngine_Rendering_Universal_PostProcessPass_<>c_TypeInfo_03cdc038;
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar17 = *(long *)PTR_UnityEngine_Rendering_Universal_PostProcessPass_<>c_TypeInfo_03cdc038;
  *(bool *)(local_a0 + 0x84) = iVar2 == 1;
  *(byte *)(local_a0 + 0x86) = param_11 & 1;
  iVar2 = *(int *)(lVar17 + 0xe4);
  *(byte *)(local_a0 + 0x87) = param_13 & 1;
  if (iVar2 == 0) {
    thunk_FUN_01cb0d4c();
    lVar17 = *(long *)puVar9;
  }
  puVar19 = *(undefined8 **)(lVar17 + 0xb8);
  lVar18 = puVar19[0x17];
  if (lVar18 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      puVar19 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
    }
    uVar21 = *puVar19;
    lVar18 = thunk_FUN_01c8fc48(*(undefined8 *)
                                 PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UberPostPassData,_RasterGraphContext>_TypeInfo_03cdc390
                               );
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<object,_RasterGraphContext>___ctor
              (lVar18,uVar21,
               *(undefined8 *)
                PTR_Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderUberPost>b__162_0___03cdc3a8
               ,0);
    plVar20 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xb8);
    *plVar20 = lVar18;
    thunk_FUN_01cc8040(plVar20,lVar18);
  }
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar17 = *plVar15;
  lVar24 = *(long *)
            PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_UberPostPassData>___03cdc398
  ;
  uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar16 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)(lVar24 + 0x20)) {
        lVar17 = lVar17 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar24 + 0x50)) * 0x10 + 0x138;
        goto LAB_034cbf5c;
      }
      uVar16 = uVar16 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar16 != 0);
  }
  lVar17 = FUN_01c8cb54(plVar15);
LAB_034cbf5c:
  lVar17 = thunk_FUN_01c78174(*(undefined8 *)(lVar17 + 8),lVar24);
  (**(code **)(lVar17 + 8))(plVar15,lVar18,lVar17);
  plVar15 = local_98;
  if (local_98 != (long *)0x0) {
    lVar17 = *local_98;
    uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar16 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_System_IDisposable_TypeInfo_03cb5b98) {
          puVar19 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_034cbfe0;
        }
        uVar16 = uVar16 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar16 != 0);
    }
    puVar19 = (undefined8 *)
              FUN_01c8cb54(local_98,*(long *)PTR_System_IDisposable_TypeInfo_03cb5b98,0);
LAB_034cbfe0:
    (*(code *)*puVar19)(plVar15,puVar19[1]);
  }
  return;
}


