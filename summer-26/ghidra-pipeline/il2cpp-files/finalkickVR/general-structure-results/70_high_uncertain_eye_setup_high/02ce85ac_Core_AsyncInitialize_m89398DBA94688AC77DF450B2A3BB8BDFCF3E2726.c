/*
FUNCTION_NAME: Core_AsyncInitialize_m89398DBA94688AC77DF450B2A3BB8BDFCF3E2726
ENTRY_POINT: 02ce85ac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long Core_AsyncInitialize_m89398DBA94688AC77DF450B2A3BB8BDFCF3E2726
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  byte *pbVar8;
  Il2CppClass *pIVar9;
  Exception_t *pEVar10;
  MethodInfo *pMVar11;
  long lVar12;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar13;
  
  puVar2 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
  ;
  if ((Core_AsyncInitialize_m89398DBA94688AC77DF450B2A3BB8BDFCF3E2726::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
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
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__)
    ;
    Core_AsyncInitialize_m89398DBA94688AC77DF450B2A3BB8BDFCF3E2726::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar5 = Core_getAppID_m4F2309AE497DCD7FB1DE9FBAD526B35690515DA2(param_3,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(0);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
    if (iVar4 != 7) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      iVar4 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
      if (iVar4 != 2) {
        pIVar9 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)Method_System_RuntimeType_ListBuilder<PropertyInfo>_get_Item__)
        ;
        pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
        uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_24__);
        NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(pEVar10,uVar5,0);
        pMVar11 = (MethodInfo *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_25__);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar10,pMVar11);
      }
    }
  }
  pvVar6 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_To__
                             );
  StandalonePlatform__ctor_mED92320996F3E35A5E2C82E7D3A5428529563AAB(pvVar6);
  NullCheck(pvVar6);
  lVar7 = StandalonePlatform_AsyncInitializeWithAccessTokenAndOptions_mB108E899C7939CC46C44EC272E04DC0F94539DC8
                    (pvVar6,uVar5,param_1,param_2,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(bool *)uVar5 = lVar7 != 0;
  pbVar8 = (byte *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  if ((*pbVar8 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    if ((*(byte *)(lVar12 + 1) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__
                 ,0);
    }
    pGVar13 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
                        );
    GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88
              (pGVar13,*(undefined8 *)
                        Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__
               ,0);
    NullCheck(pGVar13);
    GameObject_AddComponent_TisCallbackRunner_t11E18480966FFD791746CC78D266A284502D1B4E_m5024A507E1B5C35CE5B90CE51C6950604F84A906
              (pGVar13,*(MethodInfo **)
                        Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_PreviousPartBinding__
              );
    return lVar7;
  }
  pIVar9 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
  pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar9);
  uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_26__);
  UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar10,uVar5,0);
  pMVar11 = (MethodInfo *)
            il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_25__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar10,pMVar11);
}


