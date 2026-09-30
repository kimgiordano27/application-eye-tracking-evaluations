/*
FUNCTION_NAME: OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E
ENTRY_POINT: 02da7904
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;functionality_gaze_interaction_hits_4
*/


undefined8 OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  Il2CppClass *pIVar10;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *pSVar11;
  String_t *pSVar12;
  Exception_t *pEVar13;
  MethodInfo *pMVar14;
  Il2CppObject *pIVar15;
  undefined8 uVar16;
  String_t *local_88;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_40 [16];
  void *local_30;
  undefined8 local_28;
  
  puVar4 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetAttributes__
  ;
  puVar3 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner__
  ;
  puVar2 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_28 = param_1;
  if ((OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromState__);
    OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E::s_Il2CppMethodInitialized = 1;
  }
  local_30 = (void *)0x0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_40);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar5 = Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B
                    (*(undefined8 *)(lVar6 + 8),0);
  if ((bVar5 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    pvVar7 = (void *)OVRP_1_1_0_ovrp_GetVersion_mBAACF9E7F7D87C503690D8D83BD5AA86DFD1D3DF(0);
    local_30 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar7 = *(void **)(lVar6 + 0x1058);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      *(void **)(lVar6 + 8) = pvVar7;
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 8),pvVar7);
    }
    else {
      NullCheck(pvVar7);
      pSVar11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)
                String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(pvVar7,0x2d,0,0);
      NullCheck(pSVar11);
      pvVar7 = (void *)StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt(pSVar11,0);
      local_30 = pvVar7;
      pvVar8 = (void *)il2cpp_codegen_object_new
                                 (*(Il2CppClass **)
                                   Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromState__
                                 );
      Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F(pvVar8,pvVar7,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      *(void **)(lVar6 + 8) = pvVar8;
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 8),pvVar8);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar16 = *(undefined8 *)(lVar6 + 8);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    bVar5 = Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B(uVar16,*puVar9,0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      pvVar7 = (void *)*puVar9;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      *(void **)(lVar6 + 8) = pvVar7;
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 8),pvVar7);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar16 = *(undefined8 *)(lVar6 + 8);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    bVar5 = Version_op_GreaterThan_m82174057E818F77CD26D72F612C47C7516BA7431
                      (uVar16,*(undefined8 *)(lVar6 + 0x1058),0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      uVar16 = *(undefined8 *)(lVar6 + 8);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      bVar5 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar16,*puVar9,0);
      if ((bVar5 & 1) != 0) {
        pIVar10 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
                            );
        pSVar11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)SZArrayNew(pIVar10,5);
        NullCheck(pSVar11);
        pSVar12 = (String_t *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetComponentName__
                            );
        StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(pSVar11,0,pSVar12);
        pIVar10 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
        il2cpp_codegen_runtime_class_init_inline(pIVar10);
        pIVar10 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
        puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar10);
        pIVar15 = (Il2CppObject *)*puVar9;
        if (pIVar15 == (Il2CppObject *)0x0) {
          local_88 = (String_t *)0x0;
        }
        else {
          NullCheck(pIVar15);
          local_88 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar15);
        }
        NullCheck(pSVar11);
        StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(pSVar11,1,local_88);
        NullCheck(pSVar11);
        pSVar12 = (String_t *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter__
                            );
        StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(pSVar11,2,pSVar12);
        pIVar10 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
        il2cpp_codegen_runtime_class_init_inline(pIVar10);
        pIVar10 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
        lVar6 = il2cpp_codegen_static_fields_for(pIVar10);
        pIVar15 = *(Il2CppObject **)(lVar6 + 8);
        NullCheck(pIVar15);
        pSVar12 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar15);
        NullCheck(pSVar11);
        StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(pSVar11,3,pSVar12);
        NullCheck(pSVar11);
        pSVar12 = (String_t *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent__
                            );
        StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(pSVar11,4,pSVar12);
        uVar16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(pSVar11);
        pIVar10 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>__ctor__
                            );
        pEVar13 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
        PlatformNotSupportedException__ctor_mC5103EE3FE4FE245039B1107D6685296D9CC6560
                  (pEVar13,uVar16,0);
        pMVar14 = (MethodInfo *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty__
                            );
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar13,pMVar14);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *(undefined8 *)(lVar6 + 8);
}


