/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativePassCompiler$$ExecuteGraph
ENTRY_POINT: 03426964
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;pose_vector;paired_state_refs;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_foveated_rendering
*/


void UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler__ExecuteGraph
               (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong unaff_x26;
  ulong uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack_68;
  undefined *puVar8;
  
  lStack_68 = param_2;
  if ((DAT_03ef59f5 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferPool_TypeInfo_03cd29f8);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBuffer_TypeInfo_03cd6918);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<int,_GraphicsFence>_get_Item___03cd7278
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<int,_GraphicsFence>_set_Item___03cd7280
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_get_size___03cd7198
                );
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo_03cd71a0
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<RenderGraphPass>_get_Item___03cd6360);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<NativePassData>_ElementAt___03cd7050);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<PassData>_ElementAt___03cd6368);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<PassData>_get_Length___03cd6370);
    FUN_01c5c92c(PTR_Method_System_ReadOnlySpan<PassRandomWriteData>_get_Length___03cd7288);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388);
    FUN_01c5c92c(PTR_StringLiteral_7594_03cd7290);
    DAT_03ef59f5 = 1;
  }
  if (param_2 != 0) {
    plVar11 = (long *)(param_2 + 0x18);
    *(long *)(param_1 + 0x40) = *plVar11;
    thunk_FUN_01cc8040();
    if (*plVar11 != 0) {
      UnityEngine_Rendering_CommandBuffer__ClearRandomWriteTargets(*plVar11,0);
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 != 0) {
        bVar4 = false;
        iVar13 = 0;
        puVar12 = (undefined8 *)
                  PTR_Method_Unity_Collections_NativeList<PassData>_ElementAt___03cd6368;
        plVar15 = (long *)PTR_Method_Unity_Collections_NativeList<PassData>_get_Length___03cd6370;
        do {
          lVar9 = *(long *)(lVar9 + 0x18);
          if ((*(ushort *)(*(long *)(*plVar15 + 0x20) + 0x135) & 1) == 0) {
            FUN_01c8c820();
          }
          if (*(int *)(lVar9 + 8) <= iVar13) {
            return;
          }
          if (*(long *)(param_1 + 0x30) == 0) break;
          puVar5 = (undefined4 *)
                   Unity_Collections_NativeList<PassData>__ElementAt
                             (*(long *)(param_1 + 0x30) + 0x18,iVar13,*puVar12);
          if (*(char *)((long)puVar5 + 0x6a) == '\0') {
            iVar2 = puVar5[1];
            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler__ExecuteCreateRessource
                      (param_1,param_2,param_3,puVar5);
            if ((puVar5[1] == 3) && (*(char *)(puVar5 + 0x1a) != '\0')) {
              if (*(char *)(param_2 + 0x38) == '\0') {
                lVar9 = *plVar11;
                if (*(int *)(*(long *)
                              PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388 +
                            0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                }
                UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBuffer
                          (param_2 + 0x10,lVar9,0);
              }
              if (*plVar11 == 0) break;
              UnityEngine_Rendering_CommandBuffer__Clear(*plVar11,0);
              if (*(int *)(*(long *)PTR_UnityEngine_Rendering_CommandBufferPool_TypeInfo_03cd29f8 +
                          0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              lVar9 = UnityEngine_Rendering_CommandBufferPool__Get
                                (*(undefined8 *)PTR_StringLiteral_7594_03cd7290,0);
              if (lVar9 == 0) break;
              UnityEngine_Rendering_CommandBuffer__SetExecutionFlags(lVar9,2,0);
              *plVar11 = lVar9;
              thunk_FUN_01cc8040(plVar11,lVar9);
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (puVar5[0x19] != -1) {
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar9 == 0)) break;
              auVar16 = System_Collections_Generic_Dictionary<int,_GraphicsFence>__get_Item
                                  (lVar9,puVar5[0x19],
                                   *(undefined8 *)
                                    PTR_Method_System_Collections_Generic_Dictionary<int,_GraphicsFence>_get_Item___03cd7278
                                  );
              if (*plVar11 == 0) break;
              UnityEngine_Rendering_CommandBuffer__WaitOnAsyncGraphicsFence
                        (*plVar11,auVar16._0_8_,auVar16._8_8_,0);
            }
            if (((iVar2 == 2) && ((int)puVar5[4] < 1)) && (-1 < (int)puVar5[5])) {
              if (*(long *)(param_1 + 0x30) == 0) break;
              lVar9 = Unity_Collections_NativeList<NativePassData>__ElementAt
                                (*(long *)(param_1 + 0x30) + 0x60,puVar5[5],
                                 *(undefined8 *)
                                  PTR_Method_Unity_Collections_NativeList<NativePassData>_ElementAt___03cd7050
                                );
              if (*(int *)(*(long *)
                            PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo_03cd71a0
                          + 0xe4) == 0) {
                thunk_FUN_01cb0d4c(*(long *)
                                    PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo_03cd71a0
                                  );
              }
              if (*(int *)(lVar9 + 400) < 1) goto LAB_03426c08;
              UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler__ExecuteBeginRenderPass
                        (param_1,param_2,param_3,lVar9);
              bVar1 = false;
              bVar4 = true;
            }
            else {
LAB_03426c08:
              bVar1 = true;
            }
            if ((0 < (int)puVar5[4]) && (*(char *)((long)puVar5 + 0x6b) != '\0')) {
              if (!bVar4) {
                thunk_FUN_01cb9718(PTR_System_Exception_TypeInfo_03cb62d0);
                uVar6 = thunk_FUN_01c8fc48();
                puVar8 = PTR_StringLiteral_2069_03cd7298;
                goto LAB_03426f50;
              }
              if (*plVar11 == 0) break;
              UnityEngine_Rendering_CommandBuffer__NextSubPass(*plVar11,0);
            }
            if (0 < (int)puVar5[0x10]) {
              auVar16 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_PassData__RandomWriteTextures
                                  (puVar5,*(undefined8 *)(param_1 + 0x30),0);
              lVar9 = auVar16._0_8_;
              if (0 < auVar16._8_4_) {
                uVar14 = auVar16._8_8_ & 0xffffffff;
                puVar10 = (undefined4 *)(lVar9 + 0xc);
                do {
                  unaff_x26 = unaff_x26 & 0xffffffff00000000 | (ulong)(uint)puVar10[-1];
                  lVar9 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler__SetRandomWriteTarget
                                    (lVar9,plVar11,param_3,*puVar10,*(undefined8 *)(puVar10 + -3),
                                     unaff_x26,1);
                  uVar14 = uVar14 - 1;
                  puVar10 = puVar10 + 5;
                } while (uVar14 != 0);
              }
            }
            if (*param_4 == 0) break;
            uVar6 = System_Collections_Generic_List<object>__get_Item
                              (*param_4,*puVar5,
                               *(undefined8 *)
                                PTR_Method_System_Collections_Generic_List<RenderGraphPass>_get_Item___03cd6360
                              );
            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler__ExecuteGraphNode
                      (uVar6,&lStack_68);
            plVar15 = (long *)
                      PTR_Method_Unity_Collections_NativeList<PassData>_get_Length___03cd6370;
            if (0 < (int)puVar5[0x10]) {
              if (*plVar11 == 0) break;
              UnityEngine_Rendering_CommandBuffer__ClearRandomWriteTargets(*plVar11,0);
            }
            if (*(char *)((long)puVar5 + 0x6e) != '\0') {
              if (*plVar11 == 0) break;
              auVar16 = UnityEngine_Rendering_CommandBuffer__CreateAsyncGraphicsFence(*plVar11,0);
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar9 == 0)) break;
              System_Collections_Generic_Dictionary<int,_GraphicsFence>__set_Item
                        (lVar9,*puVar5,auVar16._0_8_,auVar16._8_8_,
                         *(undefined8 *)
                          PTR_Method_System_Collections_Generic_Dictionary<int,_GraphicsFence>_set_Item___03cd7280
                        );
            }
            puVar12 = (undefined8 *)
                      PTR_Method_Unity_Collections_NativeList<PassData>_ElementAt___03cd6368;
            if (iVar2 == 2) {
              if (puVar5[4] != -1) {
                bVar1 = true;
              }
              if (((puVar5[4] == 2) || (!bVar1)) && (-1 < (int)puVar5[5])) {
                if (*(long *)(param_1 + 0x30) == 0) break;
                lVar9 = Unity_Collections_NativeList<NativePassData>__ElementAt
                                  (*(long *)(param_1 + 0x30) + 0x60,puVar5[5],
                                   *(undefined8 *)
                                    PTR_Method_Unity_Collections_NativeList<NativePassData>_ElementAt___03cd7050
                                  );
                if (*(int *)(*(long *)
                              PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo_03cd71a0
                            + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c(*(long *)
                                      PTR_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo_03cd71a0
                                    );
                }
                if (0 < *(int *)(lVar9 + 400)) {
                  if (!bVar4) {
                    thunk_FUN_01cb9718(PTR_System_Exception_TypeInfo_03cb62d0);
                    uVar6 = thunk_FUN_01c8fc48();
                    puVar8 = PTR_StringLiteral_2068_03cd72a8;
LAB_03426f50:
                    uVar7 = thunk_FUN_01cb9718(puVar8);
                    System_Exception___ctor(uVar6,uVar7,0);
                    uVar7 = thunk_FUN_01cb9718(
                                              PTR_Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_ExecuteGraph___03cd72a0
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_01c5ca98(uVar6,uVar7);
                  }
                  if (*(char *)(lVar9 + 0x2bd) != '\0') {
                    if (*plVar11 == 0) break;
                    UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(*plVar11,0,0);
                  }
                  if (*plVar11 == 0) break;
                  UnityEngine_Rendering_CommandBuffer__EndRenderPass(*plVar11,0);
                  bVar4 = false;
                  **(undefined1 **)
                    (*(long *)PTR_UnityEngine_Rendering_CommandBuffer_TypeInfo_03cd6918 + 0xb8) = 0;
                }
              }
            }
            else if (!bVar3) {
              lVar9 = *plVar11;
              if (*(int *)(*(long *)
                            PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388 +
                          0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBufferAsync
                        (param_2 + 0x10,lVar9,1,0);
              puVar12 = (undefined8 *)
                        PTR_Method_Unity_Collections_NativeList<PassData>_ElementAt___03cd6368;
              lVar9 = *plVar11;
              if (*(int *)(*(long *)PTR_UnityEngine_Rendering_CommandBufferPool_TypeInfo_03cd29f8 +
                          0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              UnityEngine_Rendering_CommandBufferPool__Release(lVar9,0);
              *plVar11 = *(long *)(param_1 + 0x40);
              thunk_FUN_01cc8040(plVar11);
            }
            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler__ExecuteDestroyResource
                      (param_1,param_2,param_3,puVar5);
          }
          lVar9 = *(long *)(param_1 + 0x30);
          iVar13 = iVar13 + 1;
        } while (lVar9 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


