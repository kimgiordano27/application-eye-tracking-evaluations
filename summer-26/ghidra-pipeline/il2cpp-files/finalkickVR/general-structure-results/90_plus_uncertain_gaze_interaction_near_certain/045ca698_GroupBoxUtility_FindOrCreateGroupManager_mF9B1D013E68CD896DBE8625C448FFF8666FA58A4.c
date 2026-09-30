/*
FUNCTION_NAME: GroupBoxUtility_FindOrCreateGroupManager_mF9B1D013E68CD896DBE8625C448FFF8666FA58A4
ENTRY_POINT: 045ca698
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 154
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_12;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_12
*/


Il2CppObject *
GroupBoxUtility_FindOrCreateGroupManager_mF9B1D013E68CD896DBE8625C448FFF8666FA58A4
          (Il2CppObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  Il2CppObject *pIVar5;
  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *pTVar6;
  long lVar7;
  Type_t *pTVar8;
  void *pvVar9;
  Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53 *pAVar10;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *pCVar11;
  EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *pEVar12;
  Dictionary_2_t4FC5FBBEB47C2A7FDE54A92E598382E02A97570F *pDVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *local_a0;
  int local_64;
  Il2CppObject *local_58;
  undefined8 local_38;
  
  puVar2 = Method_Unity_Collections_NativeArray<float3>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<float2>_Dispose__;
  if ((GroupBoxUtility_FindOrCreateGroupManager_mF9B1D013E68CD896DBE8625C448FFF8666FA58A4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53_il2cpp_TypeInfo_var_048d9d00);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_DefaultGroupManager_t74642D7322ED5B8113DA5C8C35F66E302D701157_il2cpp_TypeInfo_var_048de6a8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Dictionary_2_ContainsKey_m43B7095F9F427C88ACD4FCCF5C23C9460B21233E_RuntimeMethod_var_048de6b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Dictionary_2_get_Item_m90A2B3776728235C8F7846BF8CFF46D881E3ED12_RuntimeMethod_var_048de6b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Dictionary_2_set_Item_m67DBC0271B106C3D1E6264AC8157731E48092425_RuntimeMethod_var_048de6c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_GroupBoxUtility_OnGroupBoxDetachedFromPanel_m0DB94D8E684A9DF2E71807F44C13B65080F75263_RuntimeMethod_var_048de6c8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_GroupBoxUtility_OnPanelDestroyed_m7A573F29FF8193CB706B2CB7051E0C5D83043958_RuntimeMethod_var_048de6d0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    GroupBoxUtility_FindOrCreateGroupManager_mF9B1D013E68CD896DBE8625C448FFF8666FA58A4::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pDVar13 = (Dictionary_2_t4FC5FBBEB47C2A7FDE54A92E598382E02A97570F *)*puVar4;
  NullCheck(pDVar13);
  bVar3 = Dictionary_2_ContainsKey_m43B7095F9F427C88ACD4FCCF5C23C9460B21233E
                    (pDVar13,param_1,
                     *(MethodInfo **)
                      PTR_Dictionary_2_ContainsKey_m43B7095F9F427C88ACD4FCCF5C23C9460B21233E_RuntimeMethod_var_048de6b0
                    );
  if ((bVar3 & 1) == 0) {
    local_38 = 0;
    NullCheck(param_1);
    pIVar5 = (Il2CppObject *)Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(param_1,0);
    NullCheck(pIVar5);
    pTVar6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)
             VirtualFuncInvoker0<TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::Invoke
                       (0x77,pIVar5);
    for (local_64 = 0; NullCheck(pTVar6), local_64 < (int)*(undefined8 *)(pTVar6 + 0x18);
        local_64 = il2cpp_codegen_add<int,int>(local_64,1)) {
      NullCheck(pTVar6);
      pIVar5 = (Il2CppObject *)
               TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::GetAt(pTVar6,(long)local_64);
      NullCheck(pIVar5);
      bVar3 = VirtualFuncInvoker0<bool>::Invoke(0x2a,pIVar5);
      if ((bVar3 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        pIVar14 = *(Il2CppObject **)(lVar7 + 0x10);
        NullCheck(pIVar5);
        pTVar8 = (Type_t *)VirtualFuncInvoker0<Type_t*>::Invoke(0x32,pIVar5);
        NullCheck(pIVar14);
        bVar3 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,pIVar14,pTVar8);
        bVar3 = bVar3 & 1;
      }
      if (bVar3 != 0) {
        NullCheck(pIVar5);
        pTVar6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)
                 VirtualFuncInvoker0<TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::Invoke
                           (0x34,pIVar5);
        NullCheck(pTVar6);
        local_38 = TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::GetAt(pTVar6,0);
        break;
      }
    }
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__
              );
    bVar3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(local_38,0);
    if ((bVar3 & 1) == 0) {
      local_a0 = (Il2CppObject *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             PTR_DefaultGroupManager_t74642D7322ED5B8113DA5C8C35F66E302D701157_il2cpp_TypeInfo_var_048de6a8
                           );
      DefaultGroupManager__ctor_m94200A8E4477B3E5652C35E3C143DC2AEE9C1ED4(local_a0,0);
    }
    else {
      pIVar5 = (Il2CppObject *)
               Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(local_38,0);
      local_a0 = (Il2CppObject *)Castclass(pIVar5,*(Il2CppClass **)puVar2);
    }
    NullCheck(local_a0);
    InterfaceActionInvoker1<Il2CppObject*>::Invoke(0,*(Il2CppClass **)puVar2,local_a0,param_1);
    pvVar9 = (void *)IsInstClass(param_1,*(Il2CppClass **)
                                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__
                                );
    if (pvVar9 == (void *)0x0) {
      pCVar11 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
                IsInstClass(param_1,*(Il2CppClass **)
                                     Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                           );
      if (pCVar11 != (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)0x0) {
        pEVar12 = (EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *)
                  il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
                            );
        EventCallback_1__ctor_m0407B736C264F06C81E5CBB70EF40FBB975AC634
                  (pEVar12,(Il2CppObject *)0x0,
                   *(long *)
                    PTR_GroupBoxUtility_OnGroupBoxDetachedFromPanel_m0DB94D8E684A9DF2E71807F44C13B65080F75263_RuntimeMethod_var_048de6c8
                   ,(MethodInfo *)0x0);
        NullCheck(pCVar11);
        CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_t5E26427B0E6AF96F0C522D1FCEDDC078D755E496_mED85B91BE761D1DBE3001231E0050CD612946F2C
                  (pCVar11,pEVar12,0,
                   *(MethodInfo **)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
      }
    }
    else {
      pAVar10 = (Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53 *)
                il2cpp_codegen_object_new
                          (*(Il2CppClass **)
                            PTR_Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53_il2cpp_TypeInfo_var_048d9d00
                          );
      Action_1__ctor_mFD901720CA0969541BCC09A9D54A99329A963BC3
                (pAVar10,(Il2CppObject *)0x0,
                 *(long *)
                  PTR_GroupBoxUtility_OnPanelDestroyed_m7A573F29FF8193CB706B2CB7051E0C5D83043958_RuntimeMethod_var_048de6d0
                 ,(MethodInfo *)0x0);
      NullCheck(pvVar9);
      BaseVisualElementPanel_add_panelDisposed_mC30B137E566B05408BD8ED250AE58EC7ECE14909
                (pvVar9,pAVar10,0);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pDVar13 = (Dictionary_2_t4FC5FBBEB47C2A7FDE54A92E598382E02A97570F *)*puVar4;
    NullCheck(pDVar13);
    Dictionary_2_set_Item_m67DBC0271B106C3D1E6264AC8157731E48092425
              (pDVar13,param_1,local_a0,
               *(MethodInfo **)
                PTR_Dictionary_2_set_Item_m67DBC0271B106C3D1E6264AC8157731E48092425_RuntimeMethod_var_048de6c0
              );
    local_58 = local_a0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pDVar13 = (Dictionary_2_t4FC5FBBEB47C2A7FDE54A92E598382E02A97570F *)*puVar4;
    NullCheck(pDVar13);
    local_58 = (Il2CppObject *)
               Dictionary_2_get_Item_m90A2B3776728235C8F7846BF8CFF46D881E3ED12
                         (pDVar13,param_1,
                          *(MethodInfo **)
                           PTR_Dictionary_2_get_Item_m90A2B3776728235C8F7846BF8CFF46D881E3ED12_RuntimeMethod_var_048de6b8
                         );
  }
  return local_58;
}


