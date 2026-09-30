/*
FUNCTION_NAME: OVRVirtualKeyboard_Awake_mDAB0248564679032917EE6FC2995A81ADF145066
ENTRY_POINT: 02e1ac54
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


void OVRVirtualKeyboard_Awake_mDAB0248564679032917EE6FC2995A81ADF145066(Il2CppObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  Il2CppClass *pIVar8;
  Exception_t *pEVar9;
  MethodInfo *pMVar10;
  void **ppvVar11;
  UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B *pUVar12;
  UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 *pUVar13;
  undefined8 uVar14;
  void *pvVar15;
  
  puVar5 = StringLiteral_324;
  puVar4 = Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__;
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((OVRVirtualKeyboard_Awake_mDAB0248564679032917EE6FC2995A81ADF145066::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_325);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_326);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_327);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_328);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_329);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_330);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_331);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UxmlIntAttributeDescription_<>c_<GetValueFromBag>b__3_0__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_332);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_333);
    OVRVirtualKeyboard_Awake_mDAB0248564679032917EE6FC2995A81ADF145066::s_Il2CppMethodInitialized =
         1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0xb0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar14,0);
  if ((bVar6 & 1) != 0) {
    pvVar15 = (void *)Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5
                                (*(undefined8 *)StringLiteral_331,0);
    *(void **)(param_1 + 0xb0) = pvVar15;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0xb0),pvVar15);
  }
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar14,0);
  if ((bVar6 & 1) != 0) {
    pvVar15 = (void *)Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5
                                (*(undefined8 *)
                                  Method_UnityEngine_UIElements_UxmlIntAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                                 ,0);
    *(void **)(param_1 + 0xb8) = pvVar15;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0xb8),pvVar15);
  }
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
  uVar14 = *puVar7;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar14,0);
  if ((bVar6 & 1) != 0) {
    pIVar8 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    il2cpp_codegen_runtime_class_init_inline(pIVar8);
    Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(param_1);
    pIVar8 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<int,_Item>_ContainsKey__);
    pEVar9 = (Exception_t *)il2cpp_codegen_object_new(pIVar8);
    uVar14 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_334);
    Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(pEVar9,uVar14,0);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_335);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  uVar14 = *(undefined8 *)(param_1 + 0x68);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar14,0);
  if ((bVar6 & 1) != 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar14,0);
    if ((bVar6 & 1) != 0) {
      if (((byte)param_1[0x80] & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)StringLiteral_332,0);
      }
      *(void **)(param_1 + 0x68) = *(void **)(param_1 + 0x60);
      Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x68),*(void **)(param_1 + 0x60));
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar14,0);
  if ((bVar6 & 1) != 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar14,0);
    if ((bVar6 & 1) != 0) {
      if (((byte)param_1[0x80] & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)StringLiteral_333,0);
      }
      *(void **)(param_1 + 0x78) = *(void **)(param_1 + 0x70);
      Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x78),*(void **)(param_1 + 0x70));
    }
  }
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
  *puVar7 = param_1;
  ppvVar11 = (void **)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
  Il2CppCodeGenWriteBarrier(ppvVar11,param_1);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  uVar14 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                     ((MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar14,0);
  if ((bVar6 & 1) != 0) {
    pvVar15 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_325);
    KeyboardEventListener__ctor_mB2AE7EDDF42AD0A5678F6A41CE1B7E3271CA78FB(pvVar15,param_1);
    *(void **)(param_1 + 0x160) = pvVar15;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x160),pvVar15);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    pvVar15 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                                ((MethodInfo *)0x0);
    uVar14 = *(undefined8 *)(param_1 + 0x160);
    NullCheck(pvVar15);
    OVRManager_RegisterEventListener_m8E3B5A57AA9C364340F51EED7C230ACA9C6D29DD(pvVar15,uVar14,0);
  }
  OVRVirtualKeyboard_set_TextCommitField_m9F613125AFE7B97002D35BED92E1827523C80818
            (param_1,*(undefined8 *)(param_1 + 0x58));
  pUVar13 = *(UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 **)(param_1 + 200);
  pUVar12 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
  UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71
            (pUVar12,param_1,*(long *)StringLiteral_327,(MethodInfo *)0x0);
  NullCheck(pUVar13);
  UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F
            (pUVar13,pUVar12,
             *(MethodInfo **)Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
  pvVar15 = *(void **)(param_1 + 0xd0);
  uVar14 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar14,param_1,*(undefined8 *)StringLiteral_326,0);
  NullCheck(pvVar15);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar15,uVar14,0);
  pvVar15 = *(void **)(param_1 + 0xd8);
  uVar14 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar14,param_1,*(undefined8 *)StringLiteral_328,0);
  NullCheck(pvVar15);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar15,uVar14,0);
  pvVar15 = *(void **)(param_1 + 0xe0);
  uVar14 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar14,param_1,*(undefined8 *)StringLiteral_330,0);
  NullCheck(pvVar15);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar15,uVar14,0);
  pvVar15 = *(void **)(param_1 + 0xe8);
  uVar14 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar14,param_1,*(undefined8 *)StringLiteral_329,0);
  NullCheck(pvVar15);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar15,uVar14,0);
  return;
}


