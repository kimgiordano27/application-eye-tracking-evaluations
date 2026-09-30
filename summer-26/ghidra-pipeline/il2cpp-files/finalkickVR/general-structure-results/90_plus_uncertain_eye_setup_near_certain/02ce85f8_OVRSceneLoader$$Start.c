/*
FUNCTION_NAME: OVRSceneLoader$$Start
ENTRY_POINT: 02ce85f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRSceneLoader__Start(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  Il2CppClass *pIVar5;
  Exception_t *pEVar6;
  MethodInfo *pMVar7;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  undefined8 *in_stack_00000040;
  ulong *in_stack_00000048;
  byte bStack000000000000006f;
  byte bStack000000000000007f;
  
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000048);
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
            ((ulong *)Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_To__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroups__);
  Core_AsyncInitialize_m89398DBA94688AC77DF450B2A3BB8BDFCF3E2726::s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  uVar3 = Core_getAppID_m4F2309AE497DCD7FB1DE9FBAD526B35690515DA2
                    (*(undefined8 *)(unaff_x29 + -0x30),0);
  *(undefined8 *)(unaff_x29 + -0x38) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
  bVar1 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(0);
  *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x39) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    uVar2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
    *(undefined4 *)(unaff_x29 + -0x40) = uVar2;
    if (*(int *)(unaff_x29 + -0x40) != 7) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      uVar2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(0);
      *(undefined4 *)(unaff_x29 + -0x44) = uVar2;
      if (*(int *)(unaff_x29 + -0x44) != 2) {
        pIVar5 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)Method_System_RuntimeType_ListBuilder<PropertyInfo>_get_Item__)
        ;
        uVar3 = il2cpp_codegen_object_new(pIVar5);
        *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
        uVar9 = *(undefined8 *)(unaff_x29 + -0x78);
        uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_24__);
                    /* try { // try from 02ce87a4 to 02de87db has its CatchHandler @ 02ce871c */
        NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(uVar9,uVar3,0);
        pEVar6 = *(Exception_t **)(unaff_x29 + -0x78);
        pMVar7 = (MethodInfo *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_25__);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar6,pMVar7);
      }
    }
  }
  uVar3 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_To__);
  *(undefined8 *)(unaff_x29 + -0x50) = uVar3;
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02ce8590 with catch @ 02ce871c
                       catch(type#1 @ 0474a728) { ... } // from try @ 02ce87a4 with catch @ 02ce871c
                        */
  StandalonePlatform__ctor_mED92320996F3E35A5E2C82E7D3A5428529563AAB
            (*(undefined8 *)(unaff_x29 + -0x50));
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -8);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x50));
                    /* try { // try from 02ce8750 to 02de8757 has its CatchHandler @ 02ce87e8 */
                    /* try { // try from 02ce8758 to 02de875b has its CatchHandler @ 02ce8804 */
                    /* try { // try from 02ce875c to 02de87a3 has its CatchHandler @ 02ce84f4 */
  uVar3 = StandalonePlatform_AsyncInitializeWithAccessTokenAndOptions_mB108E899C7939CC46C44EC272E04DC0F94539DC8
                    (*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)(unaff_x29 + -0x58),
                     *(undefined8 *)(unaff_x29 + -0x60),*(undefined8 *)(unaff_x29 + -0x68),0);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x70);
  lVar10 = *(long *)(unaff_x29 + -0x28);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
                    /* catch() { ... } // from try @ 02ce8750 with catch @ 02ce87e8 */
                    /* try { // try from 02ce87fc to 02de881f has its CatchHandler @ 02ce882c */
                    /* catch() { ... } // from try @ 02ce8758 with catch @ 02ce8804 */
  uVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  uStack000000000000001c = 1;
  *(bool *)uVar3 = lVar10 != 0;
                    /* try { // try from 02ce8820 to 02de882f has its CatchHandler @ 02ce84f4 */
  pbVar4 = (byte *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02ce87fc with catch @ 02ce882c
                        */
  bStack000000000000007f = *pbVar4 & (byte)uStack000000000000001c;
  if ((bStack000000000000007f & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    lVar10 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
    bStack000000000000006f = *(byte *)(lVar10 + 1) & 1;
    if (bStack000000000000006f != 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__
                 ,0);
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
    return *(undefined8 *)(unaff_x29 + -0x28);
  }
  pIVar5 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
  pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar5);
  uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_26__);
  UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar6,uVar3,0);
  pMVar7 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_25__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar6,pMVar7);
}


