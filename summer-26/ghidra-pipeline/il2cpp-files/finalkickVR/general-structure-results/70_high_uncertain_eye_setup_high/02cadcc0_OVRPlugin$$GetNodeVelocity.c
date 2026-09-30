/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 02cadcc0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_11;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodeVelocity(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  Il2CppClass *pIVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  byte bStack000000000000007f;
  byte bStack000000000000008f;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
  uVar1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
  *(undefined4 *)(unaff_x29 + -0x44) = uVar1;
  if (*(int *)(unaff_x29 + -0x44) != 7) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
    uVar1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
    *(undefined4 *)(unaff_x29 + -0x48) = uVar1;
    if (*(int *)(unaff_x29 + -0x48) != 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
      uVar1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
      *(undefined4 *)(unaff_x29 + -100) = uVar1;
      if (*(int *)(unaff_x29 + -100) != 0xb) {
        pIVar4 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)Method_System_RuntimeType_ListBuilder<PropertyInfo>_get_Item__)
        ;
        uVar2 = il2cpp_codegen_object_new(pIVar4);
        *(undefined8 *)(unaff_x29 + -0x88) = uVar2;
        uVar8 = *(undefined8 *)(unaff_x29 + -0x88);
        uVar2 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithInteraction__
                          );
        NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(uVar8,uVar2,0);
        pEVar5 = *(Exception_t **)(unaff_x29 + -0x88);
        pMVar6 = (MethodInfo *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithInteractions__
                           );
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar5,pMVar6);
      }
      uVar2 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_NextPartBinding__
                        );
      *(undefined8 *)(unaff_x29 + -0x70) = uVar2;
      AndroidPlatform__ctor_m53AFF61AD8141615B052BE27F644B6EE08B5A4BC
                (*(undefined8 *)(unaff_x29 + -0x70));
      *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -8);
      NullCheck(*(void **)(unaff_x29 + -0x70));
      uVar2 = AndroidPlatform_AsyncInitialize_mBE03676C0F84A08A41A0BFE5A2E9BCA496BDEC60
                        (*(undefined8 *)(unaff_x29 + -0x70),*(undefined8 *)(unaff_x29 + -0x78),0);
      *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x80);
      goto LAB_02cadea0;
    }
  }
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_Triggering__
                    );
  *(undefined8 *)(unaff_x29 + -0x50) = uVar2;
  WindowsPlatform__ctor_m79CCADED806F83F8F00836792B1E08AB521A5D7A
            (*(undefined8 *)(unaff_x29 + -0x50));
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -8);
  NullCheck(*(void **)(unaff_x29 + -0x50));
  uVar2 = WindowsPlatform_AsyncInitialize_m8C815C039E321CF40156E2BBCE1744B79796E36D
                    (*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)(unaff_x29 + -0x58),0);
  *(undefined8 *)(unaff_x29 + -0x60) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x60);
LAB_02cadea0:
  lVar9 = *(long *)(unaff_x29 + -0x18);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  uVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  uStack000000000000001c = 1;
  *(bool *)uVar2 = lVar9 != 0;
  pbVar3 = (byte *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  bStack000000000000008f = *pbVar3 & (byte)uStack000000000000001c;
  if ((bStack000000000000008f & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    lVar9 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    bStack000000000000007f = *(byte *)(lVar9 + 1) & 1;
    if (bStack000000000000007f != 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__
                 ,0);
    }
    pGVar7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
                       );
    GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88
              (pGVar7,*(undefined8 *)
                       Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__
               ,0);
    NullCheck(pGVar7);
    GameObject_AddComponent_TisCallbackRunner_t11E18480966FFD791746CC78D266A284502D1B4E_m5024A507E1B5C35CE5B90CE51C6950604F84A906
              (pGVar7,*(MethodInfo **)
                       Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_PreviousPartBinding__
              );
    return *(undefined8 *)(unaff_x29 + -0x18);
  }
  pIVar4 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
  pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
  uVar2 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithName__
                    );
  UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar5,uVar2,0);
  pMVar6 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithInteractions__
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar5,pMVar6);
}


