/*
FUNCTION_NAME: Callback_SetNotificationCallback_TisIl2CppFullySharedGenericAny_mBBD5C52FEAD682355A5BD454BC5278F3B3D98005_gshared
ENTRY_POINT: 0219f744
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_5
*/


void Callback_SetNotificationCallback_TisIl2CppFullySharedGenericAny_mBBD5C52FEAD682355A5BD454BC5278F3B3D98005_gshared
               (uint param_1,Callback_t1D121EF8E0E73338B89C4419644D6DACA979DB96 *param_2,
               MethodInfo *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  Exception_t *pEVar3;
  undefined8 uVar4;
  long lVar5;
  Il2CppClass *pIVar6;
  RequestCallback_1_tA88447F465ADB8037C591D5101FD14BD43158A96 *pRVar7;
  MethodInfo *pMVar8;
  Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D *pDVar9;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__;
  uVar2 = il2cpp_rgctx_is_initialized(param_3);
  if ((uVar2 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    il2cpp_rgctx_method_init(param_3);
  }
  if (param_2 == (Callback_t1D121EF8E0E73338B89C4419644D6DACA979DB96 *)0x0) {
    pIVar6 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<int,_Item>_ContainsKey__);
    pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar6);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(pEVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,param_3);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pDVar9 = *(Dictionary_2_tEAE0B23E65320C87A933A9F007EE1784C86EEC1D **)(lVar5 + 8);
  pIVar6 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(param_3 + 0x38),1);
  pRVar7 = (RequestCallback_1_tA88447F465ADB8037C591D5101FD14BD43158A96 *)
           il2cpp_codegen_object_new(pIVar6);
  pMVar8 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(param_3 + 0x38),2);
  RequestCallback_1__ctor_mF0FC20BB25B82ABF1AF1D54FC97C47BBC5BA77E4(pRVar7,param_2,pMVar8);
  NullCheck(pDVar9);
  Dictionary_2_set_Item_mB1FD84DB5E9BC2ECC176ABC08C24D065B43FDA59
            (pDVar9,param_1,(RequestCallback_tD51C93591FFF102CCC56DD0D35A9F28BCAF1E0A6 *)pRVar7,
             *(MethodInfo **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
  if (param_1 == 0x773889f6) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Callback_FlushJoinIntentNotificationQueue_m2AE151331DB59119E18CDD49C2BC94C669FE2BAF(0);
  }
  return;
}


