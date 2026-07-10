/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass$$Render
ENTRY_POINT: 035335f8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 96
LABEL: eye_tracked_foveation_setup_review_near_certain
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x03533f54) */
/* WARNING: Removing unreachable block (ram,0x03533f64) */

void UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass__Render
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined4 param_11,byte param_12,byte param_13)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined1 auVar19 [12];
  long local_308;
  long *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [304];
  undefined1 auStack_198 [212];
  undefined1 auStack_c4 [92];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_2f8 = param_9;
  uStack_2f0 = param_10;
  local_2e8 = param_6;
  uStack_2e0 = param_7;
  local_2d8 = param_4;
  uStack_2d0 = param_5;
  if ((DAT_03ef6286 & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DepthNormalOnlyPass_PassData,_RasterGraphContext>_TypeInfo_03cde430
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
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo_03cdd2b0)
    ;
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                );
    FUN_01c5c92c(PTR_System_IDisposable_TypeInfo_03cb5b98);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<DepthNormalOnlyPass_PassData>___03cde438
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<DepthNormalOnlyPass_PassData>___03cde440
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_<>c_<Render>b__42_0___03cde448
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_<>c_TypeInfo_03cde450
                );
    FUN_01c5c92c(PTR_StringLiteral_784_03cde458);
    DAT_03ef6286 = 1;
  }
  local_308 = 0;
  local_300 = (long *)0x0;
  memset(auStack_198,0,0x130);
  puVar5 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalLightData>___03cdabc0;
  puVar4 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalCameraData>___03cdab38;
  if (param_3 != 0) {
    uVar7 = FUN_0348482c(param_3,*(undefined8 *)
                                  PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalRenderingData>___03cdabc8
                        );
    lVar8 = FUN_0348482c(param_3,*(undefined8 *)puVar4);
    uVar9 = FUN_0348482c(param_3,*(undefined8 *)puVar5);
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = UnityEngine_Rendering_Universal_ScriptableRenderPass__get_profilingSampler(param_1,0);
    if (param_2 != 0) {
      plVar11 = (long *)UnityEngine_Rendering_RenderGraphModule_RenderGraph__AddRasterRenderPass<object>
                                  (param_2,uVar18,&local_308,uVar10,
                                   *(undefined8 *)PTR_StringLiteral_784_03cde458,0xc3,
                                   *(undefined8 *)
                                    PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<DepthNormalOnlyPass_PassData>___03cde440
                                  );
      uVar18 = uStack_2d0;
      uVar10 = local_2d8;
      local_300 = plVar11;
      if (local_308 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      *(undefined8 *)(local_308 + 0x28) = uStack_2d0;
      *(undefined8 *)(local_308 + 0x20) = local_2d8;
      puVar4 = 
      PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350;
      if (plVar11 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      lVar14 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
             ) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03533810;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01c8cb54(plVar11,*(long *)
                                      PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                             ,0);
LAB_03533810:
      (*(code *)*puVar12)(plVar11,uVar10,uVar18,0,2,puVar12[1]);
      uVar18 = uStack_2e0;
      uVar10 = local_2e8;
      plVar11 = local_300;
      if (local_308 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      *(undefined8 *)(local_308 + 0x18) = uStack_2e0;
      *(undefined8 *)(local_308 + 0x10) = local_2e8;
      if (local_300 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      lVar15 = *local_300;
      lVar14 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
            goto LAB_03533898;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_01c8cb54(local_300,lVar14,4);
LAB_03533898:
      (*(code *)*puVar12)(plVar11,uVar10,uVar18,2,puVar12[1]);
      uVar18 = uStack_2f0;
      uVar10 = local_2f8;
      plVar11 = local_300;
      if (local_308 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      cVar2 = *(char *)(param_1 + 0xd8);
      *(char *)(local_308 + 0x30) = cVar2;
      if (cVar2 != '\0') {
        if (local_300 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          goto LAB_035341b0;
        }
        lVar15 = *local_300;
        lVar14 = *(long *)puVar4;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0353391c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c8cb54(local_300,lVar14,0);
LAB_0353391c:
        (*(code *)*puVar12)(plVar11,uVar10,uVar18,1,2,puVar12[1]);
        if (local_308 == 0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          goto LAB_035341b0;
        }
        *(undefined4 *)(local_308 + 0x34) = *(undefined4 *)(param_1 + 0xdc);
      }
      UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass__InitRendererListParams
                (auStack_2c8,param_1,uVar7,lVar8,uVar9);
      memcpy(auStack_198,auStack_2c8,0x130);
      UnityEngine_Rendering_FilteringSettings__set_batchLayerMask(auStack_c4,param_11,0);
      lVar14 = local_308;
      auVar19 = UnityEngine_Rendering_RenderGraphModule_RenderGraph__CreateRendererList
                          (param_2,auStack_198,0);
      plVar11 = local_300;
      lVar15 = local_308;
      if (lVar14 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      *(undefined1 (*) [12])(lVar14 + 0x38) = auVar19;
      puVar4 = PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
      ;
      if (local_308 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      if (local_300 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      lVar14 = *local_300;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
             ) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 9) * 0x10 + 0x138);
            goto LAB_03533a10;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01c8cb54(local_300,
                             *(long *)
                              PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                             ,9);
LAB_03533a10:
      (*(code *)*puVar12)(plVar11,lVar15 + 0x38,puVar12[1]);
      if (lVar8 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      if (*(long *)(lVar8 + 0x1a0) == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035341b0;
      }
      uVar16 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(lVar8 + 0x1a0),0);
      plVar11 = local_300;
      if ((uVar16 & 1) == 0) {
LAB_03533ad8:
        plVar11 = local_300;
        puVar5 = PTR_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo_03cdd2b0;
        if ((param_13 & 1) != 0) {
          lVar8 = *(long *)
                   PTR_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo_03cdd2b0
          ;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            lVar8 = *(long *)puVar5;
          }
          if (plVar11 == (long *)0x0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cbd4();
            }
            goto LAB_035341b0;
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x1c);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_03533b5c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_01c8cb54(plVar11,*(long *)puVar4,3);
LAB_03533b5c:
          (*(code *)*puVar12)(plVar11,&local_2d8,uVar1,puVar12[1]);
          plVar11 = local_300;
          if (local_308 == 0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cbd4();
            }
            goto LAB_035341b0;
          }
          if (*(char *)(local_308 + 0x30) != '\0') {
            lVar8 = *(long *)puVar5;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar8 = *(long *)puVar5;
            }
            if (plVar11 == (long *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5cbd4();
              }
              goto LAB_035341b0;
            }
            lVar14 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x20);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_03533bf4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_01c8cb54(plVar11,*(long *)puVar4,3);
LAB_03533bf4:
            (*(code *)*puVar12)(plVar11,&local_2f8,uVar1,puVar12[1]);
          }
        }
        plVar11 = local_300;
        puVar5 = PTR_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo_03cdd2b0;
        if ((param_12 & 1) != 0) {
          lVar8 = *(long *)
                   PTR_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo_03cdd2b0
          ;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            lVar8 = *(long *)puVar5;
          }
          if (plVar11 == (long *)0x0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cbd4();
            }
            goto LAB_035341b0;
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x18);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_03533c8c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_01c8cb54(plVar11,*(long *)puVar4,3);
LAB_03533c8c:
          (*(code *)*puVar12)(plVar11,&local_2e8,uVar1,puVar12[1]);
        }
        plVar11 = local_300;
        if (local_300 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          goto LAB_035341b0;
        }
        lVar8 = *local_300;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar8 + (long)(*piVar17 + 0xb) * 0x10 + 0x138);
              goto LAB_03533cf8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c8cb54(local_300,*(long *)puVar4,0xb);
LAB_03533cf8:
        (*(code *)*puVar12)(plVar11,0,puVar12[1]);
        plVar11 = local_300;
        if (local_300 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          goto LAB_035341b0;
        }
        lVar8 = *local_300;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar8 + (long)(*piVar17 + 0xc) * 0x10 + 0x138);
              goto LAB_03533d60;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c8cb54(local_300,*(long *)puVar4,0xc);
LAB_03533d60:
        (*(code *)*puVar12)(plVar11,1,puVar12[1]);
        plVar11 = local_300;
        puVar4 = 
        PTR_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_<>c_TypeInfo_03cde450;
        lVar8 = *(long *)
                 PTR_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_<>c_TypeInfo_03cde450
        ;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar8 = *(long *)puVar4;
        }
        puVar12 = *(undefined8 **)(lVar8 + 0xb8);
        lVar14 = puVar12[1];
        if (lVar14 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar7 = *puVar12;
          lVar14 = thunk_FUN_01c8fc48(*(undefined8 *)
                                       PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DepthNormalOnlyPass_PassData,_RasterGraphContext>_TypeInfo_03cde430
                                     );
          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<object,_RasterGraphContext>___ctor
                    (lVar14,uVar7,
                     *(undefined8 *)
                      PTR_Method_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_<>c_<Render>b__42_0___03cde448
                     ,0);
          plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          *plVar13 = lVar14;
          thunk_FUN_01cc8040(plVar13,lVar14);
        }
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          lVar15 = *(long *)
                    PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<DepthNormalOnlyPass_PassData>___03cde438
          ;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_03533e54;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          lVar8 = FUN_01c8cb54(plVar11);
LAB_03533e54:
          lVar8 = thunk_FUN_01c78174(*(undefined8 *)(lVar8 + 8),lVar15);
          (**(code **)(lVar8 + 8))(plVar11,lVar14,lVar8);
          plVar11 = local_300;
          if (local_300 != (long *)0x0) {
            lVar8 = *local_300;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_System_IDisposable_TypeInfo_03cb5b98) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_03533ed8;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_01c8cb54(local_300,*(long *)PTR_System_IDisposable_TypeInfo_03cb5b98,0);
LAB_03533ed8:
            (*(code *)*puVar12)(plVar11,puVar12[1]);
          }
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return;
          }
          goto LAB_035341b0;
        }
      }
      else {
        if (*(long *)(lVar8 + 0x1a0) == 0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          goto LAB_035341b0;
        }
        uVar16 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                           (*(long *)(lVar8 + 0x1a0),0);
        if ((uVar16 & 1) == 0) {
          bVar6 = false;
        }
        else {
          lVar8 = UnityEngine_Rendering_Universal_UniversalCameraData__get_xrUniversal(lVar8,0);
          if (lVar8 == 0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cbd4();
            }
            goto LAB_035341b0;
          }
          bVar6 = *(char *)(lVar8 + 0x737) != '\0';
        }
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar8 + (long)(*piVar17 + 0xd) * 0x10 + 0x138);
                goto LAB_03533ac8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_01c8cb54(plVar11,*(long *)puVar4,0xd);
LAB_03533ac8:
          (*(code *)*puVar12)(plVar11,bVar6,puVar12[1]);
          goto LAB_03533ad8;
        }
      }
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      goto LAB_035341b0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
LAB_035341b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


