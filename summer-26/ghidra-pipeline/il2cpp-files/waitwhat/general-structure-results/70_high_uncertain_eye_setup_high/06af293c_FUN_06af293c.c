/*
FUNCTION_NAME: FUN_06af293c
ENTRY_POINT: 06af293c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06af293c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = 
  Method_Oculus_Interaction_DistantCandidateComputer<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
  ;
  if ((DAT_0755f939 & 1) == 0) {
    FUN_03188a78(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_Clear__
                );
    FUN_03188a78(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_get_Item__
                );
    FUN_03188a78(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_get_size__
                );
    FUN_03188a78(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_Clear__
                );
    FUN_03188a78(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_get_Item__
                );
    FUN_03188a78(
                Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_get_size__
                );
    FUN_03188a78(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
    FUN_03188a78(PTR_DAT_070cb8d0);
    FUN_03188a78(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__);
    FUN_03188a78(Method_UnityEngine_Rendering_DynamicArray<char>_AddRange__);
    FUN_03188a78(Method_UnityEngine_Rendering_DynamicArray<char>_BumpVersion__);
    FUN_03188a78(Method_UnityEngine_Rendering_DynamicArray<char>_Reserve__);
    FUN_03188a78(
                Method_Oculus_Interaction_DistantCandidateComputer<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
                );
    FUN_03188a78(Method_UnityEngine_Rendering_DynamicArray<char>_get_size__);
    DAT_0755f939 = 1;
  }
  puVar10 = Method_UnityEngine_Rendering_DynamicArray<char>_BumpVersion__;
  puVar9 = Method_UnityEngine_Rendering_DynamicArray<char>_AddRange__;
  puVar8 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  puVar7 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  puVar6 = 
  Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_Clear__
  ;
  puVar5 = 
  Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>__ctor__
  ;
  puVar4 = 
  Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_get_size__
  ;
  puVar3 = 
  Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_get_Item__
  ;
  puVar2 = 
  Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_Clear__
  ;
  lVar11 = *(long *)puVar1;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar11 = *(long *)puVar1;
  }
  uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar4);
  FUN_0570ec28(uVar12,uVar13,*(undefined8 *)puVar8,0);
  uVar14 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar2);
  FUN_05110878(uVar13,uVar14,*(undefined8 *)puVar9,0);
  uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar7);
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
            (uVar14,uVar12,uVar13,0,0,1,1,10000,*(undefined8 *)puVar6);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar14;
  uVar13 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar5);
  FUN_0570ec28(uVar12,uVar13,*(undefined8 *)puVar10,0);
  uVar14 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)
                       Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>__ctor__
                     );
  FUN_05110878(uVar13,uVar14,
               *(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>_Reserve__,0);
  uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)
                       Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_get_size__
                     );
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
            (uVar14,uVar12,uVar13,0,0,1,1,10000,
             *(undefined8 *)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_get_Item__
            );
  uVar12 = *(undefined8 *)PTR_DAT_070cb8d0;
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar14;
  uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar12);
  FUN_063f7aac(uVar12,*(undefined8 *)Method_UnityEngine_Rendering_DynamicArray<char>_get_size__,8,0)
  ;
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar12;
  return;
}


