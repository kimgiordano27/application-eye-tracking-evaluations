/*
FUNCTION_NAME: System.Security.Cryptography.AesManaged$$get_KeySize
ENTRY_POINT: 02e1af48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Security_Cryptography_AesManaged__get_KeySize(void)

{
  byte bVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B *pUVar4;
  UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 *pUVar5;
  undefined8 uVar6;
  void *pvVar7;
  long unaff_x29;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x78);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                    (*(undefined8 *)(unaff_x29 + -0x88),0);
  *(byte *)(unaff_x29 + -0x89) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x89) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                      (*(undefined8 *)(unaff_x29 + -0x98),0);
    *(byte *)(unaff_x29 + -0x99) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x99) & 1) != 0) {
      *(byte *)(unaff_x29 + -0x9a) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x80) & 1;
      if ((*(byte *)(unaff_x29 + -0x9a) & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)StringLiteral_333,0);
      }
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x70);
      *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x78) = *(undefined8 *)(unaff_x29 + -0xa8);
      Il2CppCodeGenWriteBarrier
                ((void **)(*(long *)(unaff_x29 + -8) + 0x78),*(void **)(unaff_x29 + -0xa8));
    }
  }
  uVar6 = *(undefined8 *)(unaff_x29 + -8);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *puVar2 = uVar6;
  ppvVar3 = (void **)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  Il2CppCodeGenWriteBarrier(ppvVar3,*(void **)(unaff_x29 + -8));
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  uVar6 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                    ((MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar6;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A
                    (*(undefined8 *)(unaff_x29 + -0xb0),0);
  *(byte *)(unaff_x29 + -0xb1) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0xb1) & 1) != 0) {
    uVar6 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_325);
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar6;
    KeyboardEventListener__ctor_mB2AE7EDDF42AD0A5678F6A41CE1B7E3271CA78FB
              (*(undefined8 *)(unaff_x29 + -0xc0),*(undefined8 *)(unaff_x29 + -8));
    *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x160) = *(undefined8 *)(unaff_x29 + -0xc0);
    Il2CppCodeGenWriteBarrier
              ((void **)(*(long *)(unaff_x29 + -8) + 0x160),*(void **)(unaff_x29 + -0xc0));
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    pvVar7 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x160);
    NullCheck(pvVar7);
    OVRManager_RegisterEventListener_m8E3B5A57AA9C364340F51EED7C230ACA9C6D29DD(pvVar7,uVar6,0);
  }
  OVRVirtualKeyboard_set_TextCommitField_m9F613125AFE7B97002D35BED92E1827523C80818
            (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58));
  pUVar5 = *(UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 **)
            (*(long *)(unaff_x29 + -8) + 200);
  pUVar4 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
  UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71
            (pUVar4,*(Il2CppObject **)(unaff_x29 + -8),*(long *)StringLiteral_327,(MethodInfo *)0x0)
  ;
  NullCheck(pUVar5);
  UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F
            (pUVar5,pUVar4,
             *(MethodInfo **)Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0xd0);
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar6,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_326,0);
  NullCheck(pvVar7);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar7,uVar6,0);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0xd8);
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar6,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_328,0);
  NullCheck(pvVar7);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar7,uVar6,0);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0xe0);
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar6,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_330,0);
  NullCheck(pvVar7);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar7,uVar6,0);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0xe8);
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar6,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_329,0);
  NullCheck(pvVar7);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar7,uVar6,0);
  return;
}


