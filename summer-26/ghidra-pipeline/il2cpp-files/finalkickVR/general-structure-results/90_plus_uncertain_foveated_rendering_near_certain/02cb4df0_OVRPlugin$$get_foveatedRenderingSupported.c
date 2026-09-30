/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 02cb4df0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 149
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_1;telemetry_or_network_hits_3;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin__get_foveatedRenderingSupported(uint param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  undefined8 uVar4;
  MethodInfo *pMVar5;
  long lVar6;
  RequestCallback_tD51C93591FFF102CCC56DD0D35A9F28BCAF1E0A6 *pRVar7;
  Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D *pDVar8;
  undefined8 *puStack0000000000000010;
  uint uStack000000000000002c;
  undefined8 uStack0000000000000048;
  long lStack0000000000000050;
  uint uStack000000000000005c;
  
  puStack0000000000000010 = (undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__;
  uStack0000000000000048 = param_3;
  lStack0000000000000050 = param_2;
  uStack000000000000005c = param_1;
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
  if (lStack0000000000000050 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
    lVar1 = lStack0000000000000050;
    pDVar8 = *(Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D **)(lVar6 + 8);
    uStack000000000000002c = uStack000000000000005c;
    pRVar7 = (RequestCallback_tD51C93591FFF102CCC56DD0D35A9F28BCAF1E0A6 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Oculus_Interaction_InteractorGroup_<>c_<_ctor>b__84_1__);
    RequestCallback__ctor_m2DA8F564F0D33DEFB8CC12C015570194BF6A91CD(pRVar7,lVar1,0);
    NullCheck(pDVar8);
    Dictionary_2_set_Item_mB1FD84DB5E9BC2ECC176ABC08C24D065B43FDA59
              (pDVar8,uStack000000000000002c,pRVar7,
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


