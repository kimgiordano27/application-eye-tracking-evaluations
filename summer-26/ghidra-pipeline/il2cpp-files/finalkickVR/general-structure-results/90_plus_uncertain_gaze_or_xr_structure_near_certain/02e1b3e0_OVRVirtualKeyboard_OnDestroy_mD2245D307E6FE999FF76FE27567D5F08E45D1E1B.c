/*
FUNCTION_NAME: OVRVirtualKeyboard_OnDestroy_mD2245D307E6FE999FF76FE27567D5F08E45D1E1B
ENTRY_POINT: 02e1b3e0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void OVRVirtualKeyboard_OnDestroy_mD2245D307E6FE999FF76FE27567D5F08E45D1E1B(Il2CppObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B *pUVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 *pUVar10;
  void *pvVar11;
  
  puVar4 = StringLiteral_324;
  puVar3 = Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  if ((OVRVirtualKeyboard_OnDestroy_mD2245D307E6FE999FF76FE27567D5F08E45D1E1B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_326);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_327);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_328);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_329);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_330);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__);
    OVRVirtualKeyboard_OnDestroy_mD2245D307E6FE999FF76FE27567D5F08E45D1E1B::
    s_Il2CppMethodInitialized = 1;
  }
  pUVar10 = *(UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 **)(param_1 + 200);
  pUVar6 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
  UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71
            (pUVar6,param_1,*(long *)StringLiteral_327,(MethodInfo *)0x0);
  NullCheck(pUVar10);
  UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F
            (pUVar10,pUVar6,
             *(MethodInfo **)Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__
            );
  pvVar11 = *(void **)(param_1 + 0xd0);
  uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar7,param_1,*(undefined8 *)StringLiteral_326,0);
  NullCheck(pvVar11);
  UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(pvVar11,uVar7,0);
  pvVar11 = *(void **)(param_1 + 0xd8);
  uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar7,param_1,*(undefined8 *)StringLiteral_328,0);
  NullCheck(pvVar11);
  UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(pvVar11,uVar7,0);
  pvVar11 = *(void **)(param_1 + 0xe0);
  uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar7,param_1,*(undefined8 *)StringLiteral_330,0);
  NullCheck(pvVar11);
  UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(pvVar11,uVar7,0);
  pvVar11 = *(void **)(param_1 + 0xe8);
  uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar7,param_1,*(undefined8 *)StringLiteral_329,0);
  NullCheck(pvVar11);
  UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(pvVar11,uVar7,0);
  OVRVirtualKeyboard_set_TextCommitField_m9F613125AFE7B97002D35BED92E1827523C80818(param_1,0);
  puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  uVar7 = *puVar8;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar7,param_1,0);
  if ((bVar5 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    uVar7 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                      ((MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    bVar5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar7,0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      pvVar11 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                                  ((MethodInfo *)0x0);
      uVar7 = *(undefined8 *)(param_1 + 0x160);
      NullCheck(pvVar11);
      OVRManager_DeregisterEventListener_m6C27C4E842FE6F658FA3701134BD132028FC3F7F(pvVar11,uVar7,0);
    }
    puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
    *puVar8 = 0;
    ppvVar9 = (void **)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
    Il2CppCodeGenWriteBarrier(ppvVar9,(void *)0x0);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x160),(void *)0x0);
  OVRVirtualKeyboard_DestroyKeyboard_m9CD5440A00E72F0D6295F2B0C89AF992D1C08490(param_1,0);
  return;
}


