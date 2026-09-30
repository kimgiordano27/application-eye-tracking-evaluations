/*
FUNCTION_NAME: OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8
ENTRY_POINT: 02d871d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 170
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 *pLVar4;
  undefined8 local_18;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_zonasDeMuseoManager_<procesarPosibleCambioRetrasado>d__67_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_<_ctor>b__4_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_BetterStreamingAssets_ApkImpl_<>c__DisplayClass7_0_<GetFiles>b__0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_BetterStreamingAssets_ApkImpl_<>c__DisplayClass7_1_<GetFiles>b__1__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_<_cctor>b__4_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
    OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (*(long *)(lVar3 + 0x188) == 0) {
    pLVar4 = (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_BetterStreamingAssets_ApkImpl_<>c__DisplayClass7_1_<GetFiles>b__1__)
    ;
    List_1__ctor_mBE7647ECE0B8ABB952EDC379472F9E541D41D6DF
              (pLVar4,*(MethodInfo **)
                       Method_zonasDeMuseoManager_<procesarPosibleCambioRetrasado>d__67_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 **)(lVar3 + 0x188) = pLVar4;
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x188),pLVar4);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pLVar4 = *(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 **)(lVar3 + 0x188);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
  SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370
            (pLVar4,*(MethodInfo **)
                     Method_System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_<_cctor>b__4_0__
            );
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pLVar4 = *(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 **)(lVar3 + 0x188);
  NullCheck(pLVar4);
  iVar2 = List_1_get_Count_mE580FBE05EB71FB41AAE62A9AD4C5A7594C8D27C_inline
                    (pLVar4,*(MethodInfo **)
                             Method_Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_<_ctor>b__4_0__
                    );
  if (iVar2 < 1) {
    local_18 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pLVar4 = *(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597 **)(lVar3 + 0x188);
    NullCheck(pLVar4);
    local_18 = List_1_get_Item_m1C04F2A2E6107833BE00F3C7EAE72DAF048AC643
                         (pLVar4,0,*(MethodInfo **)
                                    Method_BetterStreamingAssets_ApkImpl_<>c__DisplayClass7_0_<GetFiles>b__0__
                         );
  }
  return local_18;
}


