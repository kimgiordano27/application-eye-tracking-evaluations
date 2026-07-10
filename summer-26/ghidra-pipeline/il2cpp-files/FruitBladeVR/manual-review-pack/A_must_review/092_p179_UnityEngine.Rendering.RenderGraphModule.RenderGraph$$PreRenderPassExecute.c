/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.RenderGraph$$PreRenderPassExecute
ENTRY_POINT: 0340a764
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;pose_vector;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_7;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void UnityEngine_Rendering_RenderGraphModule_RenderGraph__PreRenderPassExecute
               (long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_03ef58cb & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferPool_TypeInfo_03cd29f8);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item___03cd64c8
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<int>_Dispose___03cb7118);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<int>_MoveNext___03cb7120);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<int>_get_Current___03cb7128);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<int>_GetEnumerator___03cb7130);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388);
    DAT_03ef58cb = 1;
  }
  puVar3 = PTR_Method_System_Collections_Generic_List<int>_GetEnumerator___03cb7130;
  puVar2 = PTR_Method_System_Collections_Generic_List_Enumerator<int>_MoveNext___03cb7120;
  puVar1 = PTR_Method_System_Collections_Generic_List_Enumerator<int>_Dispose___03cb7118;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (param_4 == 0) goto LAB_0340aa84;
  plVar8 = (long *)(param_4 + 0x18);
  *(long *)(param_1 + 0x70) = *plVar8;
  thunk_FUN_01cc8040();
  uVar11 = 0;
  uVar9 = 0;
  do {
    lVar6 = *(long *)(param_2 + 0x10);
    if (lVar6 == 0) goto LAB_0340aa84;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    lVar6 = *(long *)(lVar6 + (ulong)uVar9 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_0340aa84;
    System_Collections_Generic_List<int>__GetEnumerator(&local_98,lVar6,*(undefined8 *)puVar3);
    local_80 = local_98;
    local_98 = 0;
    puStack_78 = puStack_90;
    local_70 = local_88;
    puStack_90 = &local_80;
    while (uVar5 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                             (&local_80,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      uVar4 = UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry__CreatePooledResource
                        (*(long *)(param_1 + 0x20),param_4,uVar9,local_70 & 0xffffffff,0);
      uVar11 = uVar11 | uVar4;
    }
    System_Collections_Generic_List_Enumerator<int>__Dispose(&local_80,*(undefined8 *)puVar1);
    uVar9 = uVar9 + 1;
  } while (uVar9 != 3);
  uVar10 = extraout_x1;
  if (*(char *)(param_2 + 0x42) != '\0') {
    if (*plVar8 == 0) goto LAB_0340aa84;
    UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(*plVar8,1,0);
    uVar10 = extraout_x1_00;
  }
  UnityEngine_Rendering_RenderGraphModule_RenderGraph__PreRenderPassSetRenderTargets
            (param_1,uVar10,param_3,param_4);
  if (*(char *)(param_2 + 0x3c) != '\0') {
    if ((uVar11 & 1) == 0) {
      auVar12 = ZEXT816(0);
    }
    else {
      if (*plVar8 == 0) goto LAB_0340aa84;
      auVar12 = UnityEngine_Rendering_CommandBuffer__CreateGraphicsFence(*plVar8,0,7,0);
    }
    if (*(char *)(param_4 + 0x38) == '\0') {
      uVar10 = *(undefined8 *)(param_4 + 0x18);
      if (*(int *)(*(long *)PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388 +
                  0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBuffer(param_4 + 0x10,uVar10,0);
    }
    if ((*plVar8 == 0) || (UnityEngine_Rendering_CommandBuffer__Clear(*plVar8,0), param_3 == 0))
    goto LAB_0340aa84;
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    if (*(int *)(*(long *)PTR_UnityEngine_Rendering_CommandBufferPool_TypeInfo_03cd29f8 + 0xe4) == 0
       ) {
      thunk_FUN_01cb0d4c();
    }
    lVar6 = UnityEngine_Rendering_CommandBufferPool__Get(uVar10,0);
    if (lVar6 == 0) goto LAB_0340aa84;
    UnityEngine_Rendering_CommandBuffer__SetExecutionFlags(lVar6,2,0);
    *plVar8 = lVar6;
    thunk_FUN_01cc8040(plVar8,lVar6);
    if ((uVar11 & 1) != 0) {
      if (*plVar8 == 0) goto LAB_0340aa84;
      UnityEngine_Rendering_CommandBuffer__WaitOnAsyncGraphicsFence
                (*plVar8,auVar12._0_8_,auVar12._8_8_,0);
    }
  }
  if (*(int *)(param_2 + 0x34) == -1) {
    return;
  }
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18), lVar6 != 0)) {
    lVar7 = *plVar8;
    lVar6 = UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>__get_Item
                      (lVar6,*(int *)(param_2 + 0x34),
                       *(undefined8 *)
                        PTR_Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item___03cd64c8
                      );
    if (lVar7 != 0) {
      UnityEngine_Rendering_CommandBuffer__WaitOnAsyncGraphicsFence
                (lVar7,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),0);
      return;
    }
  }
LAB_0340aa84:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


