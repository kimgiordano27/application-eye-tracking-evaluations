/*
FUNCTION_NAME: Callback_SetNotificationCallback_m92464C01AB0E42585D036E9B0CF938299D7FD7A3
ENTRY_POINT: 02cb4de8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void Callback_SetNotificationCallback_m92464C01AB0E42585D036E9B0CF938299D7FD7A3
               (uint param_1,long param_2)

{
  undefined *puVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  undefined8 uVar4;
  MethodInfo *pMVar5;
  long lVar6;
  RequestCallback_tD51C93591FFF102CCC56DD0D35A9F28BCAF1E0A6 *pRVar7;
  Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D *pDVar8;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__;
  if ((Callback_SetNotificationCallback_m92464C01AB0E42585D036E9B0CF938299D7FD7A3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Interaction_InteractorGroup_<>c_<_ctor>b__84_1__);
    Callback_SetNotificationCallback_m92464C01AB0E42585D036E9B0CF938299D7FD7A3::
    s_Il2CppMethodInitialized = 1;
  }
  if (param_2 != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pDVar8 = *(Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D **)(lVar6 + 8);
    pRVar7 = (RequestCallback_tD51C93591FFF102CCC56DD0D35A9F28BCAF1E0A6 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Oculus_Interaction_InteractorGroup_<>c_<_ctor>b__84_1__);
    RequestCallback__ctor_m2DA8F564F0D33DEFB8CC12C015570194BF6A91CD(pRVar7,param_2,0);
    NullCheck(pDVar8);
    Dictionary_2_set_Item_mB1FD84DB5E9BC2ECC176ABC08C24D065B43FDA59
              (pDVar8,param_1,pRVar7,
               *(MethodInfo **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    return;
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Item>_ContainsKey__
                     );
  pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
  Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(pEVar3,uVar4,0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_Oculus_Interaction_InteractorGroup_<>c_<_ctor>b__84_2__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar5);
}


