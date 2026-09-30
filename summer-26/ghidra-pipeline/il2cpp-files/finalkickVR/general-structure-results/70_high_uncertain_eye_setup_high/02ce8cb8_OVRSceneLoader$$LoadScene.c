/*
FUNCTION_NAME: OVRSceneLoader$$LoadScene
ENTRY_POINT: 02ce8cb8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_9;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRSceneLoader__LoadScene(void)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  Il2CppClass *pIVar4;
  undefined8 uVar5;
  MethodInfo *pMVar6;
  long lVar7;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar8;
  int in_w8;
  undefined8 uVar9;
  Exception_t *pEVar10;
  long unaff_x29;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  byte bStack0000000000000087;
  
  if (in_w8 == 2) {
    uVar5 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_Triggering__
                      );
    *(undefined8 *)(unaff_x29 + -0x48) = uVar5;
    WindowsPlatform__ctor_m79CCADED806F83F8F00836792B1E08AB521A5D7A
              (*(undefined8 *)(unaff_x29 + -0x48));
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -8);
    NullCheck(*(void **)(unaff_x29 + -0x48));
    bVar1 = WindowsPlatform_Initialize_m939A8D398945DC10D7F352F1D7EF2768CBAC8B17
                      (*(undefined8 *)(unaff_x29 + -0x48),*(undefined8 *)(unaff_x29 + -0x50),0);
    *(byte *)(unaff_x29 + -0x51) = bVar1 & 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
    bVar1 = *(byte *)(unaff_x29 + -0x51);
    pbVar3 = (byte *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
    *pbVar3 = bVar1 & 1;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
    uVar2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
    *(undefined4 *)(unaff_x29 + -0x58) = uVar2;
    if (*(int *)(unaff_x29 + -0x58) != 0xb) {
      pIVar4 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)Method_System_RuntimeType_ListBuilder<PropertyInfo>_get_Item__);
      uVar5 = il2cpp_codegen_object_new(pIVar4);
      *(undefined8 *)(unaff_x29 + -0x78) = uVar5;
      uVar9 = *(undefined8 *)(unaff_x29 + -0x78);
      uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithInteraction__
                        );
      NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(uVar9,uVar5,0);
      pEVar10 = *(Exception_t **)(unaff_x29 + -0x78);
      pMVar6 = (MethodInfo *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_27__);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar10,pMVar6);
    }
    uVar5 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_NextPartBinding__
                      );
    *(undefined8 *)(unaff_x29 + -0x60) = uVar5;
    AndroidPlatform__ctor_m53AFF61AD8141615B052BE27F644B6EE08B5A4BC
              (*(undefined8 *)(unaff_x29 + -0x60));
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -8);
    NullCheck(*(void **)(unaff_x29 + -0x60));
    bVar1 = AndroidPlatform_Initialize_mF396C3EEDB404C91EF006FB9D4710434A8DE8BAC
                      (*(undefined8 *)(unaff_x29 + -0x60),*(undefined8 *)(unaff_x29 + -0x68),0);
    *(byte *)(unaff_x29 + -0x69) = bVar1 & 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
    bVar1 = *(byte *)(unaff_x29 + -0x69);
    pbVar3 = (byte *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
    *pbVar3 = bVar1 & 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
  pbVar3 = (byte *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(byte *)(unaff_x29 + -0x79) = *pbVar3 & 1;
  if ((*(byte *)(unaff_x29 + -0x79) & 1) == 0) {
    pIVar4 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
    pEVar10 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
    uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithName__
                      );
    UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar10,uVar5,0);
    pMVar6 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_27__);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar10,pMVar6);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  bStack0000000000000087 = *(byte *)(lVar7 + 1) & 1;
  if (bStack0000000000000087 != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__,
               0);
  }
  pGVar8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
                     );
  GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88
            (pGVar8,*(undefined8 *)
                     Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__
             ,0);
  NullCheck(pGVar8);
  GameObject_AddComponent_TisCallbackRunner_t11E18480966FFD791746CC78D266A284502D1B4E_m5024A507E1B5C35CE5B90CE51C6950604F84A906
            (pGVar8,*(MethodInfo **)
                     Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_PreviousPartBinding__
            );
  return;
}


