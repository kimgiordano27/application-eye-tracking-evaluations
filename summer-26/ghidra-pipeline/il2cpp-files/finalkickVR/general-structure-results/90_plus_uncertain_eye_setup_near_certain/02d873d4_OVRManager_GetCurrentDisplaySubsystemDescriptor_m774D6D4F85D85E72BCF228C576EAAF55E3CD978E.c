/*
FUNCTION_NAME: OVRManager_GetCurrentDisplaySubsystemDescriptor_m774D6D4F85D85E72BCF228C576EAAF55E3CD978E
ENTRY_POINT: 02d873d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
OVRManager_GetCurrentDisplaySubsystemDescriptor_m774D6D4F85D85E72BCF228C576EAAF55E3CD978E(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 *pLVar4;
  undefined8 local_18;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_GetCurrentDisplaySubsystemDescriptor_m774D6D4F85D85E72BCF228C576EAAF55E3CD978E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_TransformChangeListener_<>c_<_ctor>b__4_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_ConvertNull__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Meta_Conduit_ConduitDispatcher_InvocationContextFilter_<>c__DisplayClass4_0_<ResolveInvocationContexts>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Meta_Conduit_ConduitDispatcher_InvocationContextFilter_<>c__DisplayClass5_0_<CompatibleInvocationContext>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Meta_WitAi_CoroutineUtility_CoroutinePerformer_<CoroutineIterateEnumerator>d__9_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
    OVRManager_GetCurrentDisplaySubsystemDescriptor_m774D6D4F85D85E72BCF228C576EAAF55E3CD978E::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (*(long *)(lVar3 + 400) == 0) {
    pLVar4 = (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Meta_Conduit_ConduitDispatcher_InvocationContextFilter_<>c__DisplayClass5_0_<CompatibleInvocationContext>b__0__
                       );
    List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773
              (pLVar4,*(MethodInfo **)
                       Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_TransformChangeListener_<>c_<_ctor>b__4_0__
              );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 **)(lVar3 + 400) = pLVar4;
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 400),pLVar4);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pLVar4 = *(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 **)(lVar3 + 400);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
  SubsystemManager_GetSubsystemDescriptors_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_mE88F154272DC98DD50249B29599ABD64EA6DDC55
            (pLVar4,*(MethodInfo **)
                     Method_Meta_WitAi_CoroutineUtility_CoroutinePerformer_<CoroutineIterateEnumerator>d__9_System_Collections_IEnumerator_Reset__
            );
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pLVar4 = *(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 **)(lVar3 + 400);
  NullCheck(pLVar4);
  iVar2 = List_1_get_Count_mDFAC96AD60DE7FED9378059AEE6864673962A7B8_inline
                    (pLVar4,*(MethodInfo **)
                             Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_ConvertNull__
                    );
  if (iVar2 < 1) {
    local_18 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pLVar4 = *(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4 **)(lVar3 + 400);
    NullCheck(pLVar4);
    local_18 = List_1_get_Item_mBE983C6BF89F37B1D3390A1F3CF1B689D080701E
                         (pLVar4,0,*(MethodInfo **)
                                    Method_Meta_Conduit_ConduitDispatcher_InvocationContextFilter_<>c__DisplayClass4_0_<ResolveInvocationContexts>b__0__
                         );
  }
  return local_18;
}


