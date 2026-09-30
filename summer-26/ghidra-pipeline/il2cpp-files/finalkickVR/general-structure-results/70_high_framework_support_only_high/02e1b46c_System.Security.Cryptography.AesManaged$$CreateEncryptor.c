/*
FUNCTION_NAME: System.Security.Cryptography.AesManaged$$CreateEncryptor
ENTRY_POINT: 02e1b46c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Security_Cryptography_AesManaged__CreateEncryptor(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void **ppvVar5;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  ulong *in_stack_00000038;
  ulong *in_stack_00000040;
  ulong *in_stack_00000048;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0xc08));
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000038);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000040);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000048);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__);
  OVRVirtualKeyboard_OnDestroy_mD2245D307E6FE999FF76FE27567D5F08E45D1E1B::s_Il2CppMethodInitialized
       = 1;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 200);
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71
            (*(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B **)(unaff_x29 + -0x20),
             *(Il2CppObject **)(unaff_x29 + -8),*(long *)StringLiteral_327,(MethodInfo *)0x0);
  NullCheck(*(void **)(unaff_x29 + -0x18));
  UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F
            (*(UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 **)(unaff_x29 + -0x18),
             *(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B **)(unaff_x29 + -0x20),
             *(MethodInfo **)Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__
            );
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xd0);
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
  *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)StringLiteral_326,0);
  NullCheck(*(void **)(unaff_x29 + -0x28));
  UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C
            (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30),0);
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xd8);
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)StringLiteral_328,0);
  NullCheck(*(void **)(unaff_x29 + -0x38));
  UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C
            (*(undefined8 *)(unaff_x29 + -0x38),*(undefined8 *)(unaff_x29 + -0x40),0);
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xe0);
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
  *(undefined8 *)(unaff_x29 + -0x50) = uVar2;
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)StringLiteral_330,0);
  NullCheck(*(void **)(unaff_x29 + -0x48));
  UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C
            (*(undefined8 *)(unaff_x29 + -0x48),*(undefined8 *)(unaff_x29 + -0x50),0);
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xe8);
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
  *(undefined8 *)(unaff_x29 + -0x60) = uVar2;
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (*(undefined8 *)(unaff_x29 + -0x60),*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)StringLiteral_329,0);
  NullCheck(*(void **)(unaff_x29 + -0x58));
  UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C
            (*(undefined8 *)(unaff_x29 + -0x58),*(undefined8 *)(unaff_x29 + -0x60),0);
  OVRVirtualKeyboard_set_TextCommitField_m9F613125AFE7B97002D35BED92E1827523C80818
            (*(undefined8 *)(unaff_x29 + -8),0);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
  *(undefined8 *)(unaff_x29 + -0x68) = *puVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                    (*(undefined8 *)(unaff_x29 + -0x68),*(undefined8 *)(unaff_x29 + -8),0);
  *(byte *)(unaff_x29 + -0x69) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x69) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    uVar2 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                      ((MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar2,0);
    if ((bVar1 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      pvVar4 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                                 ((MethodInfo *)0x0);
      uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x160);
      NullCheck(pvVar4);
      OVRManager_DeregisterEventListener_m6C27C4E842FE6F658FA3701134BD132028FC3F7F(pvVar4,uVar2,0);
    }
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
    *puVar3 = 0;
    ppvVar5 = (void **)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
    Il2CppCodeGenWriteBarrier(ppvVar5,(void *)0x0);
  }
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x160) = 0;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x160),(void *)0x0);
  OVRVirtualKeyboard_DestroyKeyboard_m9CD5440A00E72F0D6295F2B0C89AF992D1C08490
            (*(undefined8 *)(unaff_x29 + -8),0);
  return;
}


