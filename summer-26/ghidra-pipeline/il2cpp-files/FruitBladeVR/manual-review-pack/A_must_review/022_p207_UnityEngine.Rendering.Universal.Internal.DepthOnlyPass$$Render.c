/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass$$Render
ENTRY_POINT: 03534d40
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 96
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0353541c) */
/* WARNING: Removing unreachable block (ram,0x0353542c) */

void UnityEngine_Rendering_Universal_Internal_DepthOnlyPass__Render
               (long param_1,long param_2,long param_3,undefined8 *param_4,undefined4 param_5,
               ulong param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined1 auVar18 [12];
  long local_2d8;
  long *local_2d0;
  undefined1 auStack_2c8 [304];
  undefined1 auStack_198 [212];
  undefined1 auStack_c4 [92];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_03ef628e & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DepthOnlyPass_PassData,_RasterGraphContext>_TypeInfo_03cde478
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
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_TypeInfo_03cdd2b8);
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                );
    FUN_01c5c92c(PTR_System_IDisposable_TypeInfo_03cb5b98);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<DepthOnlyPass_PassData>___03cde480
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<DepthOnlyPass_PassData>___03cde488
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_<Render>b__20_0___03cde490
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo_03cde498);
    FUN_01c5c92c(PTR_StringLiteral_785_03cde4a0);
    DAT_03ef628e = 1;
  }
  local_2d8 = 0;
  local_2d0 = (long *)0x0;
  memset(auStack_198,0,0x130);
  puVar4 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalLightData>___03cdabc0;
  puVar3 = PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalCameraData>___03cdab38;
  if (param_3 != 0) {
    uVar7 = FUN_0348482c(param_3,*(undefined8 *)
                                  PTR_Method_UnityEngine_Rendering_ContextContainer_Get<UniversalRenderingData>___03cdabc8
                        );
    lVar8 = FUN_0348482c(param_3,*(undefined8 *)puVar3);
    uVar9 = FUN_0348482c(param_3,*(undefined8 *)puVar4);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = UnityEngine_Rendering_Universal_ScriptableRenderPass__get_profilingSampler(param_1,0);
    if (param_2 != 0) {
      local_2d0 = (long *)UnityEngine_Rendering_RenderGraphModule_RenderGraph__AddRasterRenderPass<object>
                                    (param_2,uVar17,&local_2d8,uVar10,
                                     *(undefined8 *)PTR_StringLiteral_785_03cde4a0,0x82,
                                     *(undefined8 *)
                                      PTR_Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<DepthOnlyPass_PassData>___03cde488
                                    );
      UnityEngine_Rendering_Universal_Internal_DepthOnlyPass__InitRendererListParams
                (auStack_2c8,param_1,uVar7,lVar8,uVar9);
      memcpy(auStack_198,auStack_2c8,0x130);
      UnityEngine_Rendering_FilteringSettings__set_batchLayerMask(auStack_c4,param_5,0);
      lVar13 = local_2d8;
      auVar18 = UnityEngine_Rendering_RenderGraphModule_RenderGraph__CreateRendererList
                          (param_2,auStack_198,0);
      plVar5 = local_2d0;
      lVar14 = local_2d8;
      if (lVar13 == 0) {
                    /* catch() { ... } // from try @ 035353dc with catch @ 03535434 */
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035355ac;
      }
      *(undefined1 (*) [12])(lVar13 + 0x10) = auVar18;
      puVar3 = PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
      ;
      if (local_2d8 == 0) {
                    /* try { // try from 03535450 to 03635453 has its CatchHandler @ 0353545c */
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035355ac;
      }
      if (local_2d0 == (long *)0x0) {
                    /* catch() { ... } // from try @ 03535450 with catch @ 0353545c */
                    /* try { // try from 03535460 to 03635467 has its CatchHandler @ 03535470 */
                    /* try { // try from 03535468 to 03635473 has its CatchHandler @ 03535080 */
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035355ac;
      }
      lVar13 = *local_2d0;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
             ) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
            goto LAB_03534fa4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01c8cb54(local_2d0,
                             *(long *)
                              PTR_UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_TypeInfo_03cd5458
                             ,9);
LAB_03534fa4:
      (*(code *)*puVar11)(plVar5,lVar14 + 0x10,puVar11[1]);
      plVar5 = local_2d0;
      if (local_2d0 == (long *)0x0) {
                    /* catch() { ... } // from try @ 03535460 with catch @ 03535470 */
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035355ac;
      }
      lVar13 = *local_2d0;
      uVar7 = *param_4;
      uVar9 = param_4[1];
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
             ) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_03535018;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01c8cb54(local_2d0,
                             *(long *)
                              PTR_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_TypeInfo_03cd6350
                             ,4);
LAB_03535018:
      (*(code *)*puVar11)(plVar5,uVar7,uVar9,2,puVar11[1]);
      plVar5 = local_2d0;
      puVar4 = PTR_UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_TypeInfo_03cdd2b8;
      if ((param_6 & 1) != 0) {
        lVar13 = *(long *)
                  PTR_UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_TypeInfo_03cdd2b8;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar13 = *(long *)puVar4;
        }
        if (plVar5 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          goto LAB_035355ac;
        }
        lVar14 = *plVar5;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        uVar1 = *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 4);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
                    /* try { // try from 03535080 to 036351b7 has its CatchHandler @ 03535080
                       catch() { ... } // from try @ 03535080 with catch @ 03535080
                       catch() { ... } // from try @ 03535338 with catch @ 03535080
                       catch() { ... } // from try @ 035353f4 with catch @ 03535080
                       catch() { ... } // from try @ 03535468 with catch @ 03535080 */
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_035350b0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_01c8cb54(plVar5,*(long *)puVar3,3);
LAB_035350b0:
        (*(code *)*puVar11)(plVar5,param_4,uVar1,puVar11[1]);
      }
      plVar5 = local_2d0;
      if (local_2d0 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035355ac;
      }
      lVar13 = *local_2d0;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
            goto LAB_0353511c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01c8cb54(local_2d0,*(long *)puVar3,0xb);
LAB_0353511c:
      (*(code *)*puVar11)(plVar5,0,puVar11[1]);
      plVar5 = local_2d0;
      if (local_2d0 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035355ac;
      }
      lVar13 = *local_2d0;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
            goto LAB_03535184;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01c8cb54(local_2d0,*(long *)puVar3,0xc);
LAB_03535184:
      (*(code *)*puVar11)(plVar5,1,puVar11[1]);
      if (lVar8 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035355ac;
      }
      if (*(long *)(lVar8 + 0x1a0) == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        goto LAB_035355ac;
      }
      uVar15 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(lVar8 + 0x1a0),0);
      plVar5 = local_2d0;
      if ((uVar15 & 1) == 0) {
LAB_0353524c:
        plVar5 = local_2d0;
        puVar3 = PTR_UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo_03cde498;
        lVar8 = *(long *)
                 PTR_UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo_03cde498;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar8 = *(long *)puVar3;
        }
        puVar11 = *(undefined8 **)(lVar8 + 0xb8);
        lVar13 = puVar11[1];
        if (lVar13 == 0) {
                    /* try { // try from 0353527c to 03635287 has its CatchHandler @ 03535414 */
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            puVar11 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
                    /* try { // try from 0353528c to 03635293 has its CatchHandler @ 03535424 */
          uVar7 = *puVar11;
                    /* try { // try from 0353529c to 036352a3 has its CatchHandler @ 03535410 */
          lVar13 = thunk_FUN_01c8fc48(*(undefined8 *)
                                       PTR_UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<DepthOnlyPass_PassData,_RasterGraphContext>_TypeInfo_03cde478
                                     );
                    /* try { // try from 035352b4 to 036352b7 has its CatchHandler @ 03535400 */
                    /* try { // try from 035352b8 to 036352c7 has its CatchHandler @ 0353540c */
          UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<object,_RasterGraphContext>___ctor
                    (lVar13,uVar7,
                     *(undefined8 *)
                      PTR_Method_UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_<Render>b__20_0___03cde490
                     ,0);
          plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *plVar12 = lVar13;
          thunk_FUN_01cc8040(plVar12,lVar13);
        }
        if (plVar5 != (long *)0x0) {
          lVar8 = *plVar5;
          lVar14 = *(long *)
                    PTR_Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<DepthOnlyPass_PassData>___03cde480
          ;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar14 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_03535330;
              }
                    /* try { // try from 03535308 to 0363532b has its CatchHandler @ 03535404 */
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          lVar8 = FUN_01c8cb54(plVar5);
LAB_03535330:
                    /* try { // try from 03535334 to 03635337 has its CatchHandler @ 03535428 */
                    /* try { // try from 03535338 to 036353db has its CatchHandler @ 03535080 */
          lVar8 = thunk_FUN_01c78174(*(undefined8 *)(lVar8 + 8),lVar14);
          (**(code **)(lVar8 + 8))(plVar5,lVar13,lVar8);
          plVar5 = local_2d0;
          if (local_2d0 != (long *)0x0) {
            lVar8 = *local_2d0;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_System_IDisposable_TypeInfo_03cb5b98) {
                  puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_035353b4;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01c8cb54(local_2d0,*(long *)PTR_System_IDisposable_TypeInfo_03cb5b98,0);
LAB_035353b4:
            (*(code *)*puVar11)(plVar5,puVar11[1]);
          }
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 035353dc to 036353e3 has its CatchHandler @ 03535434 */
                    /* try { // try from 035353e4 to 036353e7 has its CatchHandler @ 03535420 */
                    /* try { // try from 035353e8 to 036353eb has its CatchHandler @ 0353541c */
                    /* try { // try from 035353ec to 036353ef has its CatchHandler @ 03535418 */
                    /* try { // try from 035353f0 to 036353f3 has its CatchHandler @ 03535408 */
            return;
          }
          goto LAB_035355ac;
        }
      }
      else {
        if (*(long *)(lVar8 + 0x1a0) == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          goto LAB_035355ac;
        }
                    /* try { // try from 035351b8 to 036351df has its CatchHandler @ 03535430 */
        uVar15 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                           (*(long *)(lVar8 + 0x1a0),0);
        if ((uVar15 & 1) == 0) {
          bVar6 = false;
        }
        else {
          lVar8 = UnityEngine_Rendering_Universal_UniversalCameraData__get_xrUniversal(lVar8,0);
          if (lVar8 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cbd4();
            }
            goto LAB_035355ac;
          }
          bVar6 = *(char *)(lVar8 + 0x737) != '\0';
        }
        if (plVar5 != (long *)0x0) {
          lVar8 = *plVar5;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0xd) * 0x10 + 0x138);
                goto LAB_0353523c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
                    /* try { // try from 0353521c to 03635247 has its CatchHandler @ 0353542c */
          puVar11 = (undefined8 *)FUN_01c8cb54(plVar5,*(long *)puVar3,0xd);
LAB_0353523c:
          (*(code *)*puVar11)(plVar5,bVar6,puVar11[1]);
          goto LAB_0353524c;
        }
      }
                    /* catch() { ... } // from try @ 035353f0 with catch @ 03535408 */
                    /* catch() { ... } // from try @ 035352b8 with catch @ 0353540c */
                    /* catch() { ... } // from try @ 0353529c with catch @ 03535410 */
                    /* catch() { ... } // from try @ 0353527c with catch @ 03535414 */
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035353ec with catch @ 03535418 */
        FUN_01c5cbd4();
      }
      goto LAB_035355ac;
    }
  }
                    /* try { // try from 035353f4 to 0363544f has its CatchHandler @ 03535080 */
                    /* catch() { ... } // from try @ 035352b4 with catch @ 03535400 */
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03535308 with catch @ 03535404 */
    FUN_01c5cbd4();
  }
LAB_035355ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


