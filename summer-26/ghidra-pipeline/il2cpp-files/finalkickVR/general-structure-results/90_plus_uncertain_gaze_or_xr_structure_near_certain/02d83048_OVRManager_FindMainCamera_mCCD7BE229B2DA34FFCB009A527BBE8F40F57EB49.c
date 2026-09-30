/*
FUNCTION_NAME: OVRManager_FindMainCamera_mCCD7BE229B2DA34FFCB009A527BBE8F40F57EB49
ENTRY_POINT: 02d83048
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *
OVRManager_FindMainCamera_mCCD7BE229B2DA34FFCB009A527BBE8F40F57EB49(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *pCVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF *this;
  List_1_tD2FA3273746E404D72561E8324608D18B52B533E *pLVar12;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar13;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *pCVar14;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *pOVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  Il2CppArray *this_00;
  void *pvVar18;
  Il2CppObject *pIVar19;
  WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93 *pWVar20;
  Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A *local_70;
  int local_54;
  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *local_40;
  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *local_38;
  undefined8 local_30;
  
  puVar7 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_5__;
  puVar6 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_4__;
  puVar5 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_3__;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_Dispose__;
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_30 = param_1;
  if ((OVRManager_FindMainCamera_mCCD7BE229B2DA34FFCB009A527BBE8F40F57EB49::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_6__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Stack_StackEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputControlLayout_ControlItem>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_7__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_8__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Runtime_CompilerServices_TaskAwaiter<ProjectConfiguration>_GetResult__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_9__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__97_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__6_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    OVRManager_FindMainCamera_mCCD7BE229B2DA34FFCB009A527BBE8F40F57EB49::s_Il2CppMethodInitialized =
         1;
  }
  local_38 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *)0x0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if (*(long *)(lVar11 + 0x1a8) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    pWVar20 = *(WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93 **)(lVar11 + 0x1a8);
    NullCheck(pWVar20);
    bVar9 = WeakReference_1_TryGetTarget_m554CBAC52CB26900F9D0E24648D3482A43AB67B6
                      (pWVar20,&local_38,
                       *(MethodInfo **)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                      );
    pCVar8 = local_38;
    if ((bVar9 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(pCVar8,0);
      pCVar8 = local_38;
      if ((bVar9 & 1) != 0) {
        NullCheck(local_38);
        bVar9 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(pCVar8,0)
        ;
        pCVar8 = local_38;
        if ((bVar9 & 1) != 0) {
          NullCheck(local_38);
          bVar9 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5
                            (pCVar8,*(undefined8 *)puVar4,0);
          if ((bVar9 & 1) != 0) {
            return local_38;
          }
        }
      }
    }
  }
  this = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF *)
         GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3
                   (*(undefined8 *)puVar4,0);
  pLVar12 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Runtime_CompilerServices_TaskAwaiter<ProjectConfiguration>_GetResult__
                      );
  List_1__ctor_m62FFCB8D441FA0A3D3002703967951B70D8475F1
            (pLVar12,4,
             *(MethodInfo **)
              Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_8__);
  for (local_54 = 0; NullCheck(this), local_54 < (int)*(undefined8 *)(this + 0x18);
      local_54 = il2cpp_codegen_add<int,int>(local_54,1)) {
    NullCheck(this);
    pGVar13 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
              GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF::GetAt(this,(long)local_54)
    ;
    NullCheck(pGVar13);
    pCVar14 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
              GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6
                        (pGVar13,*(MethodInfo **)
                                  Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__
                        );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(pCVar14,0);
    if ((bVar9 & 1) != 0) {
      NullCheck(pCVar14);
      bVar9 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pCVar14,0);
      if ((bVar9 & 1) != 0) {
        NullCheck(pCVar14);
        pOVar15 = (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                  Component_GetComponentInParent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m132CAE22DC4B18ACA26D293EE1D3799068ADAA5D
                            (pCVar14,*(MethodInfo **)
                                      Method_System_Collections_Stack_StackEnumerator_Reset__);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        bVar9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(pOVar15,0);
        if ((bVar9 & 1) != 0) {
          NullCheck(pOVar15);
          uVar16 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                             (pOVar15,(MethodInfo *)0x0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          bVar9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar16,0);
          if ((bVar9 & 1) != 0) {
            NullCheck(pLVar12);
            List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline
                      (pLVar12,(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *)pCVar14,
                       *(MethodInfo **)
                        Method_System_Nullable<InputControlLayout_ControlItem>__ctor__);
          }
        }
      }
    }
  }
  NullCheck(pLVar12);
  iVar10 = List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline
                     (pLVar12,*(MethodInfo **)puVar5);
  if (iVar10 == 0) {
    local_40 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *)
               Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(0);
  }
  else {
    NullCheck(pLVar12);
    iVar10 = List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline
                       (pLVar12,*(MethodInfo **)puVar5);
    if (iVar10 == 1) {
      NullCheck(pLVar12);
      local_40 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *)
                 List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6
                           (pLVar12,0,*(MethodInfo **)puVar6);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if ((*(byte *)(lVar11 + 0x1a0) & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)
                    Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                   ,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        *(undefined1 *)(lVar11 + 0x1a0) = 1;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
      lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar7);
      local_70 = *(Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A **)(lVar11 + 0x10);
      if (local_70 == (Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A *)0x0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
        puVar17 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar7);
        pIVar19 = (Il2CppObject *)*puVar17;
        local_70 = (Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A *)
                   il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_6__
                             );
        Comparison_1__ctor_mA05E36D38BB75F9EF78F876803A19445EDF81CD5
                  (local_70,pIVar19,
                   *(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_9__
                   ,(MethodInfo *)0x0);
        lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar7);
        *(Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A **)(lVar11 + 0x10) = local_70;
        lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar7);
        Il2CppCodeGenWriteBarrier((void **)(lVar11 + 0x10),local_70);
      }
      NullCheck(pLVar12);
      List_1_Sort_mF0042CBA61BB32CBA4FFE1CD1286329131635B85
                (pLVar12,local_70,
                 *(MethodInfo **)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_7__
                );
      NullCheck(pLVar12);
      local_40 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *)
                 List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6
                           (pLVar12,0,*(MethodInfo **)puVar6);
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_40,0);
  if ((bVar9 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if ((*(byte *)(lVar11 + 0x1a1) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__6_0__,0)
      ;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      *(undefined1 *)(lVar11 + 0x1a1) = 1;
    }
  }
  else {
    this_00 = (Il2CppArray *)
              SZArrayNew(*(Il2CppClass **)
                          Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                         ,1);
    NullCheck(local_40);
    pvVar18 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_40);
    NullCheck(pvVar18);
    pIVar19 = (Il2CppObject *)Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(pvVar18,0);
    NullCheck(this_00);
    ArrayElementTypeCheck(this_00,pIVar19);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this_00,0,pIVar19);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)
                Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
               ,this_00,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(undefined1 *)(lVar11 + 0x1a1) = 0;
  }
  pWVar20 = (WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93 *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
                      );
  WeakReference_1__ctor_m12E7503DDFC128E1736C08DF717D975A0B2BB6E7
            (pWVar20,local_40,
             *(MethodInfo **)
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__97_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93 **)(lVar11 + 0x1a8) = pWVar20;
  lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  Il2CppCodeGenWriteBarrier((void **)(lVar11 + 0x1a8),pWVar20);
  return local_40;
}


