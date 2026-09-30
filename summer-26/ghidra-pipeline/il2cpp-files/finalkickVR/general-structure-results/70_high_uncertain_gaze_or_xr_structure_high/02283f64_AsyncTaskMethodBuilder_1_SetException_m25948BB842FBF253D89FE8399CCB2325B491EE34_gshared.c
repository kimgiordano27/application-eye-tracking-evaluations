/*
FUNCTION_NAME: AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared
ENTRY_POINT: 02283f64
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared
               (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 *param_1,
               Il2CppObject *param_2,MethodInfo *param_3)

{
  long lVar1;
  MethodInfo *pMVar2;
  OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662 *pOVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  Exception_t *pEVar6;
  byte local_39;
  void *local_30;
  
  if ((AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>__ctor__);
    AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  if (param_2 == (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_System_Nullable<TransactionServer>_GetValueOrDefault__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,param_3);
  }
  local_30 = *(void **)(param_1 + 0x10);
  if (local_30 == (void *)0x0) {
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(param_3 + 0x20));
    pIVar5 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar1 + 0xc0),2);
    il2cpp_codegen_runtime_class_init_inline(pIVar5);
    lVar1 = InitializedTypeInfo(*(Il2CppClass **)(param_3 + 0x20));
    pMVar2 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar1 + 0xc0),1);
    local_30 = (void *)AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B
                                 (param_1,pMVar2);
  }
  pOVar3 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662 *)
           IsInstClass(param_2,*(Il2CppClass **)
                                Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>__ctor__
                      );
  if (pOVar3 == (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662 *)0x0) {
    NullCheck(local_30);
    local_39 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D(local_30,param_2,0);
  }
  else {
    NullCheck(pOVar3);
    uVar4 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline
                      (pOVar3,(MethodInfo *)0x0);
    NullCheck(local_30);
    local_39 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771
                         (local_30,uVar4,pOVar3,0);
  }
  local_39 = local_39 & 1;
  if (local_39 == 0) {
    il2cpp_codegen_initialize_runtime_metadata_inline
              ((ulong *)Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    uVar4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058();
    pIVar5 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                       );
    pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
    InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,param_3);
  }
  return;
}


