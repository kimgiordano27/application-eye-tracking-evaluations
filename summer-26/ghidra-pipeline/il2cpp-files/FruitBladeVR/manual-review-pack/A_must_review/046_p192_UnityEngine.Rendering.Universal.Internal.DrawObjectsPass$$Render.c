/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DrawObjectsPass$$Render
ENTRY_POINT: 035366bc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 91
LABEL: eye_tracked_foveation_setup_review_near_certain
MODULES: weak_source_state;validity_gate;ui_interaction;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_foveation_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x035373b4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_Rendering_Universal_Internal_DrawObjectsPass__Render
               (long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
               ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  int *piVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 local_a0 [16];
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = param_9;
  uStack_68 = param_10;
  local_80 = param_11;
  uStack_78 = param_12;
  if ((DAT_03ef6298 & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DrawObjectsPass_PassData,_RasterGraphContext>_TypeInfo_03cde4b8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalCameraData>___03cdab38
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalLightData>___03cdabc0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalRenderingData>___03cdabc8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalResourceData>___03cdab40
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                );
    FUN_01c5c92c(PTR_System_IDisposable_TypeInfo_03cb5b98);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<DrawObjectsPass_PassData>___03cde4c0
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_RenderGraphUtils_TypeInfo_03cdd4e8);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<DrawObjectsPass_PassData>___03cde4c8
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ScriptableRenderPass_TypeInfo_03cdab70);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Render>b__17_0___03cde4d0
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_TypeInfo_03cde4d8)
    ;
    FUN_01c5c92c(PTR_StringLiteral_786_03cde4e0);
    DAT_03ef6298 = 1;
  }
  puVar3 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalRenderingData>___03cdabc8;
  puVar1 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalLightData>___03cdabc0;
  puVar2 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalCameraData>___03cdab38;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if (param_3 == 0) {
LAB_035373ac:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar6 = FUN_0348482c(param_3,*(undefined8 *)
                                PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalResourceData>___03cdab40
                      );
  uVar7 = FUN_0348482c(param_3,*(undefined8 *)puVar3);
  lVar8 = FUN_0348482c(param_3,*(undefined8 *)puVar2);
  uVar9 = FUN_0348482c(param_3,*(undefined8 *)puVar1);
  uVar19 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = UnityEngine_Rendering_Universal_ScriptableRenderPass__get_profilingSampler(param_1,0);
  if (param_2 == 0) goto LAB_035373ac;
  plVar11 = (long *)UnityEngine_Rendering_RenderGraphModule_RenderGraph__AddRasterRenderPass<object>
                              (param_2,uVar19,&local_90,uVar10,
                               *(undefined8 *)PTR_StringLiteral_786_03cde4e0,0x108,
                               *(undefined8 *)
                                PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<DrawObjectsPass_PassData>___03cde4c8
                              );
  local_88 = plVar11;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar15 = *plVar11;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)
           PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458) {
        puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
        goto LAB_035368fc;
      }
      uVar18 = uVar18 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_01c8cb54(plVar11,*(long *)
                                  PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                         ,2);
LAB_035368fc:
  (*(code *)*puVar12)(plVar11,1,puVar12[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar4 = UnityEngine_Rendering_Universal_UniversalResourceData__get_isActiveTargetBackBuffer
                    (lVar6,0);
  UnityEngine_Rendering_Universal_Internal_DrawObjectsPass__InitPassData
            (param_1,lVar8,&local_90,param_13,uVar4 & 1);
  puVar2 = PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968;
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968
              + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
  puVar1 = PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068;
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068
              + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  uVar4 = (uint)param_4 & 0xffff0000;
  if ((param_4 & 0xffff0000) != 0) {
    lVar15 = *(long *)puVar1;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar15 = *(long *)puVar1;
    }
    puVar16 = *(uint **)(lVar15 + 0xb8);
    if (uVar4 != *puVar16) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        puVar16 = *(uint **)(*(long *)puVar1 + 0xb8);
      }
      if (uVar4 != puVar16[1]) goto LAB_03536a78;
    }
    plVar11 = local_88;
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    *(ulong *)(local_90 + 0x10) = param_4;
    *(undefined8 *)(local_90 + 0x18) = param_5;
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar15 = *local_88;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)
             PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
           ) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03536a5c;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c8cb54(local_88,*(long *)
                                     PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                           ,0);
LAB_03536a5c:
    (*(code *)*puVar12)(plVar11,param_4,param_5,0,2,puVar12[1]);
  }
LAB_03536a78:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  uVar4 = (uint)param_6 & 0xffff0000;
  if ((param_6 & 0xffff0000) != 0) {
    lVar15 = *(long *)puVar1;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar15 = *(long *)puVar1;
    }
    puVar16 = *(uint **)(lVar15 + 0xb8);
    if (uVar4 != *puVar16) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        puVar16 = *(uint **)(*(long *)puVar1 + 0xb8);
      }
      if (uVar4 != puVar16[1]) goto LAB_03536ba0;
    }
    plVar11 = local_88;
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    *(ulong *)(local_90 + 0x20) = param_6;
    *(undefined8 *)(local_90 + 0x28) = param_7;
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar15 = *local_88;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)
             PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
           ) {
          puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
          goto LAB_03536b88;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c8cb54(local_88,*(long *)
                                     PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                           ,4);
LAB_03536b88:
    (*(code *)*puVar12)(plVar11,param_6,param_7,2,puVar12[1]);
  }
LAB_03536ba0:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  uVar4 = (uint)local_70._2_2_;
  if (local_70._2_2_ != 0) {
    lVar15 = *(long *)puVar1;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar15 = *(long *)puVar1;
    }
    piVar17 = *(int **)(lVar15 + 0xb8);
    if (uVar4 << 0x10 != *piVar17) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        piVar17 = *(int **)(*(long *)puVar1 + 0xb8);
      }
      if (uVar4 << 0x10 != piVar17[1]) goto LAB_03536cb8;
    }
    plVar11 = local_88;
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar15 = *local_88;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)
             PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458)
        {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03536ca4;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c8cb54(local_88,*(long *)
                                     PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                           ,0);
LAB_03536ca4:
    (*(code *)*puVar12)(plVar11,&local_70,1,puVar12[1]);
  }
LAB_03536cb8:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  uVar4 = (uint)local_80._2_2_;
  if (local_80._2_2_ != 0) {
    lVar15 = *(long *)puVar1;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar15 = *(long *)puVar1;
    }
    piVar17 = *(int **)(lVar15 + 0xb8);
    if (uVar4 << 0x10 != *piVar17) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        piVar17 = *(int **)(*(long *)puVar1 + 0xb8);
      }
      if (uVar4 << 0x10 != piVar17[1]) goto LAB_03536dd0;
    }
    plVar11 = local_88;
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar15 = *local_88;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)
             PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458)
        {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03536dbc;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c8cb54(local_88,*(long *)
                                     PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                           ,0);
LAB_03536dbc:
    (*(code *)*puVar12)(plVar11,&local_80,1,puVar12[1]);
  }
LAB_03536dd0:
  local_a0 = UnityEngine_Rendering_Universal_UniversalResourceData__get_ssaoTexture(lVar6,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c(*(long *)puVar2);
  }
  if (DAT_03ef5451 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5451 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef5452 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_ResourceHandle_TypeInfo_03cb9068);
    DAT_03ef5452 = '\x01';
  }
  uVar4 = (uint)(ushort)local_a0._2_2_;
  if (local_a0._2_2_ != 0) {
    lVar15 = *(long *)puVar1;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar15 = *(long *)puVar1;
    }
    piVar17 = *(int **)(lVar15 + 0xb8);
    if (uVar4 << 0x10 != *piVar17) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        piVar17 = *(int **)(*(long *)puVar1 + 0xb8);
      }
      if (uVar4 << 0x10 != piVar17[1]) goto LAB_03536efc;
    }
    plVar11 = local_88;
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar15 = *local_88;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)
             PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458)
        {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03536ee8;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c8cb54(local_88,*(long *)
                                     PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                           ,0);
LAB_03536ee8:
    (*(code *)*puVar12)(plVar11,local_a0,1,puVar12[1]);
  }
LAB_03536efc:
  plVar11 = local_88;
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_Universal_RenderGraphUtils_TypeInfo_03cdd4e8 +
              0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  UnityEngine_Rendering_Universal_RenderGraphUtils__UseDBufferIfValid(plVar11,lVar6,0);
  UnityEngine_Rendering_Universal_Internal_DrawObjectsPass__InitRendererLists
            (param_1,uVar7,lVar8,uVar9,&local_90,0,param_2,1);
  if (*(int *)(*(long *)PTR_UnityEngine_Rendering_Universal_ScriptableRenderPass_TypeInfo_03cdab70 +
              0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  lVar13 = UnityEngine_Rendering_Universal_ScriptableRenderPass__GetActiveDebugHandler(lVar8,0);
  plVar11 = local_88;
  lVar15 = local_90;
  puVar2 = PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458;
  if (lVar13 == 0) {
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar13 = *local_88;
    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)
             PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458)
        {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar17 + 9) * 0x10 + 0x138);
          goto LAB_03536ffc;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c8cb54(local_88,*(long *)
                                     PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                           ,9);
LAB_03536ffc:
    (*(code *)*puVar12)(plVar11,lVar15 + 0x44,puVar12[1]);
    plVar11 = local_88;
    lVar15 = local_90;
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar13 = *local_88;
    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar17 + 9) * 0x10 + 0x138);
          goto LAB_0353706c;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c8cb54(local_88,*(long *)puVar2,9);
LAB_0353706c:
    (*(code *)*puVar12)(plVar11,lVar15 + 0x50,puVar12[1]);
  }
  else {
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(long *)(local_90 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    UnityEngine_Rendering_Universal_DebugRendererLists__PrepareRendererListForRasterPass
              (*(long *)(local_90 + 0x60),local_88,0);
  }
  plVar11 = local_88;
  if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar15 = *local_88;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
        goto LAB_035370d4;
      }
      uVar18 = uVar18 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_01c8cb54(local_88,*(long *)puVar2,0xb);
LAB_035370d4:
  (*(code *)*puVar12)(plVar11,0,puVar12[1]);
  plVar11 = local_88;
  if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar15 = *local_88;
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar18 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0xc) * 0x10 + 0x138);
        goto LAB_0353713c;
      }
      uVar18 = uVar18 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_01c8cb54(local_88,*(long *)puVar2,0xc);
LAB_0353713c:
  (*(code *)*puVar12)(plVar11,1,puVar12[1]);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (*(long *)(lVar8 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar18 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(lVar8 + 0x1a0),0);
  if ((uVar18 & 1) != 0) {
    lVar15 = UnityEngine_Rendering_Universal_UniversalCameraData__get_xrUniversal(lVar8,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(char *)(lVar15 + 0x737) == '\0') {
      uVar4 = UnityEngine_Rendering_Universal_UniversalResourceData__get_isActiveTargetBackBuffer
                        (lVar6,0);
    }
    else {
      uVar4 = 1;
    }
    plVar11 = local_88;
    if (*(long *)(lVar8 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar5 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                      (*(long *)(lVar8 + 0x1a0),0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar6 = *plVar11;
    uVar18 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar6 + (long)(*piVar17 + 0xd) * 0x10 + 0x138);
          goto LAB_03537200;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_01c8cb54(plVar11,*(long *)puVar2,0xd);
LAB_03537200:
    (*(code *)*puVar12)(plVar11,uVar4 & uVar5 & 1,puVar12[1]);
  }
  plVar11 = local_88;
  puVar2 = PTR_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_TypeInfo_03cde4d8;
  lVar6 = *(long *)
           PTR_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_TypeInfo_03cde4d8;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
    lVar6 = *(long *)puVar2;
  }
  puVar12 = *(undefined8 **)(lVar6 + 0xb8);
  lVar8 = puVar12[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar12;
    lVar8 = thunk_FUN_01c8fc48(*(undefined8 *)
                                PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DrawObjectsPass_PassData,_RasterGraphContext>_TypeInfo_03cde4b8
                              );
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<object,_RasterGraphContext>___ctor
              (lVar8,uVar7,
               *(undefined8 *)
                PTR_Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<Render>b__17_0___03cde4d0
               ,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar14 = lVar8;
    thunk_FUN_01cc8040(plVar14,lVar8);
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar6 = *plVar11;
  lVar15 = *(long *)
            PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<DrawObjectsPass_PassData>___03cde4c0
  ;
  uVar18 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar18 != 0) {
    piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)(lVar15 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 + 0x138;
        goto LAB_035372f8;
      }
      uVar18 = uVar18 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar18 != 0);
  }
  lVar6 = FUN_01c8cb54(plVar11);
LAB_035372f8:
  lVar6 = thunk_FUN_01c78174(*(undefined8 *)(lVar6 + 8),lVar15);
  (**(code **)(lVar6 + 8))(plVar11,lVar8,lVar6);
  plVar11 = local_88;
  if (local_88 != (long *)0x0) {
    lVar6 = *local_88;
    uVar18 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar18 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_System_IDisposable_TypeInfo_03cb5b98) {
          puVar12 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03537378;
        }
        uVar18 = uVar18 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c8cb54(local_88,*(long *)PTR_System_IDisposable_TypeInfo_03cb5b98,0);
LAB_03537378:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  return;
}


