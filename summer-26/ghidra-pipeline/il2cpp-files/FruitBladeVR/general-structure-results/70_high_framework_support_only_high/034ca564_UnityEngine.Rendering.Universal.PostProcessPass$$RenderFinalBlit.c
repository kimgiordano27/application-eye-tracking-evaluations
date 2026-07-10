/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$RenderFinalBlit
ENTRY_POINT: 034ca564
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;telemetry_or_network_hits_19;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x034cab74) */

void UnityEngine_Rendering_Universal_PostProcessPass__RenderFinalBlit
               (long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
               undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long local_60;
  long *local_58;
  
  puVar4 = PTR_Method_UnityEngine_Rendering_ProfilingSampler_Get<URPProfileId>___03cdaab8;
  if ((DAT_03ef5f5f & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalBlitPassData,_RasterGraphContext>_TypeInfo_03cdc360
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                );
    FUN_01c5c92c(PTR_System_IDisposable_TypeInfo_03cb5b98);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PostProcessingFinalBlitPassData>___03cdc368
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_ProfilingSampler_Get<URPProfileId>___03cdaab8);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PostProcessingFinalBlitPassData>___03cdc370
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderFinalBlit>b__158_0___03cdc378
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_PostProcessPass_<>c_TypeInfo_03cdc038);
    FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
    FUN_01c5c92c(PTR_StringLiteral_4548_03cdc380);
    FUN_01c5c92c(PTR_StringLiteral_795_03cdc0c8);
    DAT_03ef5f5f = 1;
  }
  local_60 = 0;
  local_58 = (long *)0x0;
  uVar6 = UnityEngine_Rendering_ProfilingSampler__Get<Int32Enum>(0x39,*(undefined8 *)puVar4);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  plVar7 = (long *)UnityEngine_Rendering_RenderGraphModule_RenderGraph__AddRasterRenderPass<object>
                             (param_2,*(undefined8 *)PTR_StringLiteral_4548_03cdc380,&local_60,uVar6
                              ,*(undefined8 *)PTR_StringLiteral_795_03cdc0c8,0x60e,
                              *(undefined8 *)
                               PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PostProcessingFinalBlitPassData>___03cdc370
                             );
  puVar4 = PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458;
  local_58 = plVar7;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar10 = *plVar7;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto LAB_034ca6fc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01c8cb54(plVar7,*(long *)
                                PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                        ,0xc);
LAB_034ca6fc:
  (*(code *)*puVar8)(plVar7,1,puVar8[1]);
  plVar7 = local_58;
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar6 = *param_6;
  *(undefined8 *)(local_60 + 0x18) = param_6[1];
  *(undefined8 *)(local_60 + 0x10) = uVar6;
  if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar10 = *local_58;
  uVar6 = *param_6;
  uVar1 = param_6[1];
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350)
      {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_034ca77c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01c8cb54(local_58,*(long *)
                                  PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                        ,0);
LAB_034ca77c:
  (*(code *)*puVar8)(plVar7,uVar6,uVar1,0,2,puVar8[1]);
  plVar7 = local_58;
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar6 = *param_4;
  *(undefined8 *)(local_60 + 0x28) = param_4[1];
  *(undefined8 *)(local_60 + 0x20) = uVar6;
  if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar10 = *local_58;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_034ca7fc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_01c8cb54(local_58,*(long *)puVar4,0);
LAB_034ca7fc:
  (*(code *)*puVar8)(plVar7,param_4,1,puVar8[1]);
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  *(long *)(local_60 + 0x38) = param_3;
  thunk_FUN_01cc8040((long *)(local_60 + 0x38),param_3);
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  *(undefined8 *)(local_60 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x80);
  thunk_FUN_01cc8040();
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar6 = *param_7;
  *(undefined4 *)(local_60 + 0x48) = *(undefined4 *)(param_7 + 1);
  *(undefined8 *)(local_60 + 0x40) = uVar6;
  if ((*(char *)((long)param_7 + 3) != '\0') && (*(char *)(param_1 + 0x246) != '\0')) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar11 = UnityEngine_Rendering_Universal_UniversalCameraData__get_rendersOverlayUI(param_3,0);
    plVar7 = local_58;
    if ((uVar11 & 1) == 0) goto LAB_034ca8e8;
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar10 = *local_58;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_034ca8d0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01c8cb54(local_58,*(long *)puVar4,0);
LAB_034ca8d0:
    (*(code *)*puVar8)(plVar7,param_5,1,puVar8[1]);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
LAB_034ca8e8:
  if (*(long *)(param_3 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar11 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(param_3 + 0x1a0),0);
  puVar3 = PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500;
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500 + 0xe4)
        == 0) {
      thunk_FUN_01cb0d4c();
    }
    if (DAT_03ef5445 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Experimental_Rendering_XRSystem_TypeInfo_03cd2500);
      DAT_03ef5445 = '\x01';
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar10 = *(long *)puVar3;
    }
    plVar7 = local_58;
    if (*(long *)(param_3 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar2 = *(uint *)(*(long *)(lVar10 + 0xb8) + 0x4c);
    bVar5 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                      (*(long *)(param_3 + 0x1a0),0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
          goto LAB_034ca9c8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01c8cb54(plVar7,*(long *)puVar4,0xd);
LAB_034ca9c8:
    (*(code *)*puVar8)(plVar7,(uVar2 & 2) == 0 & bVar5,puVar8[1]);
  }
  plVar7 = local_58;
  puVar4 = PTR_UnityEngine_Rendering_Universal_PostProcessPass_<>c_TypeInfo_03cdc038;
  lVar10 = *(long *)PTR_UnityEngine_Rendering_Universal_PostProcessPass_<>c_TypeInfo_03cdc038;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
    lVar10 = *(long *)puVar4;
  }
  puVar8 = *(undefined8 **)(lVar10 + 0xb8);
  lVar13 = puVar8[0x16];
  if (lVar13 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar6 = *puVar8;
    lVar13 = thunk_FUN_01c8fc48(*(undefined8 *)
                                 PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_PostProcessingFinalBlitPassData,_RasterGraphContext>_TypeInfo_03cdc360
                               );
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<object,_RasterGraphContext>___ctor
              (lVar13,uVar6,
               *(undefined8 *)
                PTR_Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderFinalBlit>b__158_0___03cdc378
               ,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
    *plVar9 = lVar13;
    thunk_FUN_01cc8040(plVar9,lVar13);
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  lVar10 = *plVar7;
  lVar14 = *(long *)
            PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<PostProcessPass_PostProcessingFinalBlitPassData>___03cdc368
  ;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)(lVar14 + 0x20)) {
        lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
        goto LAB_034caabc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  lVar10 = FUN_01c8cb54(plVar7);
LAB_034caabc:
  lVar10 = thunk_FUN_01c78174(*(undefined8 *)(lVar10 + 8),lVar14);
  (**(code **)(lVar10 + 8))(plVar7,lVar13,lVar10);
  plVar7 = local_58;
  if (local_58 != (long *)0x0) {
    lVar10 = *local_58;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_System_IDisposable_TypeInfo_03cb5b98) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_034cab40;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01c8cb54(local_58,*(long *)PTR_System_IDisposable_TypeInfo_03cb5b98,0);
LAB_034cab40:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return;
}


