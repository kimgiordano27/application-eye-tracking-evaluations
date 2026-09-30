/*
FUNCTION_NAME: Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A
ENTRY_POINT: 02ce8ac8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_16;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  byte *pbVar7;
  Il2CppClass *pIVar8;
  Exception_t *pEVar9;
  MethodInfo *pMVar10;
  long lVar11;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar12;
  
  puVar2 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
  ;
  if ((Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_NextPartBinding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_PreviousPartBinding__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_To__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_Triggering__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__)
    ;
    Core_Initialize_m5BD81A79C2D03CD9D898841F711672BE67EBCB2A::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar5 = Core_getAppID_m4F2309AE497DCD7FB1DE9FBAD526B35690515DA2(param_1);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(0);
  if (((bVar3 & 1) == 0) ||
     (bVar3 = PlatformSettings_get_UseStandalonePlatform_mBA8FA8EFBF6833E7B218B3138AE667980DB058A1
                        (0), (bVar3 & 1) == 0)) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
    if (iVar4 != 7) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      iVar4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
      if (iVar4 != 2) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        iVar4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
        if (iVar4 != 0xb) {
          pIVar8 = (Il2CppClass *)
                   il2cpp_codegen_initialize_runtime_metadata_inline
                             ((ulong *)
                              Method_System_RuntimeType_ListBuilder<PropertyInfo>_get_Item__);
          pEVar9 = (Exception_t *)il2cpp_codegen_object_new(pIVar8);
          uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithInteraction__
                            );
          NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(pEVar9,uVar5,0);
          pMVar10 = (MethodInfo *)
                    il2cpp_codegen_initialize_runtime_metadata_inline
                              ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_27__);
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar9,pMVar10);
        }
        pvVar6 = (void *)il2cpp_codegen_object_new
                                   (*(Il2CppClass **)
                                     Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_NextPartBinding__
                                   );
        AndroidPlatform__ctor_m53AFF61AD8141615B052BE27F644B6EE08B5A4BC(pvVar6);
        NullCheck(pvVar6);
        bVar3 = AndroidPlatform_Initialize_mF396C3EEDB404C91EF006FB9D4710434A8DE8BAC(pvVar6,uVar5,0)
        ;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        pbVar7 = (byte *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        *pbVar7 = bVar3 & 1;
        goto LAB_02ce8e44;
      }
    }
    pvVar6 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_Triggering__
                               );
    WindowsPlatform__ctor_m79CCADED806F83F8F00836792B1E08AB521A5D7A(pvVar6);
    NullCheck(pvVar6);
    bVar3 = WindowsPlatform_Initialize_m939A8D398945DC10D7F352F1D7EF2768CBAC8B17(pvVar6,uVar5,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    pbVar7 = (byte *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    *pbVar7 = bVar3 & 1;
  }
  else {
    pvVar6 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_To__
                               );
    StandalonePlatform__ctor_mED92320996F3E35A5E2C82E7D3A5428529563AAB(pvVar6);
    NullCheck(pvVar6);
    lVar11 = StandalonePlatform_InitializeInEditor_m67A7DE25FC0F604E9C9EFB5B2B4D2EC5FA386FDB
                       (pvVar6,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    uVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    *(bool *)uVar5 = lVar11 != 0;
  }
LAB_02ce8e44:
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  pbVar7 = (byte *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  if ((*pbVar7 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    if ((*(byte *)(lVar11 + 1) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__
                 ,0);
    }
    pGVar12 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
                        );
    GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88
              (pGVar12,*(undefined8 *)
                        Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__
               ,0);
    NullCheck(pGVar12);
    GameObject_AddComponent_TisCallbackRunner_t11E18480966FFD791746CC78D266A284502D1B4E_m5024A507E1B5C35CE5B90CE51C6950604F84A906
              (pGVar12,*(MethodInfo **)
                        Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_PreviousPartBinding__
              );
    return;
  }
  pIVar8 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
  pEVar9 = (Exception_t *)il2cpp_codegen_object_new(pIVar8);
  uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithName__
                    );
  UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar9,uVar5,0);
  pMVar10 = (MethodInfo *)
            il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_27__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar9,pMVar10);
}


