/*
FUNCTION_NAME: System.Security.Cryptography.AesManaged$$get_Padding
ENTRY_POINT: 02e1b108
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


void System_Security_Cryptography_AesManaged__get_Padding(MethodInfo *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B *pUVar3;
  UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 *pUVar4;
  void *pvVar5;
  long unaff_x29;
  MethodInfo *pMStack0000000000000020;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  
  pMStack0000000000000020 = param_1;
  uVar2 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline(param_1);
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A
                    (*(undefined8 *)(unaff_x29 + -0xb0),pMStack0000000000000020);
  *(byte *)(unaff_x29 + -0xb1) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0xb1) & 1) != 0) {
    uVar2 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_325);
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar2;
    KeyboardEventListener__ctor_mB2AE7EDDF42AD0A5678F6A41CE1B7E3271CA78FB
              (*(undefined8 *)(unaff_x29 + -0xc0),*(undefined8 *)(unaff_x29 + -8));
    *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x160) = *(undefined8 *)(unaff_x29 + -0xc0);
    Il2CppCodeGenWriteBarrier
              ((void **)(*(long *)(unaff_x29 + -8) + 0x160),*(void **)(unaff_x29 + -0xc0));
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
    pvVar5 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x160);
    NullCheck(pvVar5);
    OVRManager_RegisterEventListener_m8E3B5A57AA9C364340F51EED7C230ACA9C6D29DD(pvVar5,uVar2,0);
  }
  OVRVirtualKeyboard_set_TextCommitField_m9F613125AFE7B97002D35BED92E1827523C80818
            (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58));
  pUVar4 = *(UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257 **)
            (*(long *)(unaff_x29 + -8) + 200);
  pUVar3 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
  UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71
            (pUVar3,*(Il2CppObject **)(unaff_x29 + -8),*(long *)StringLiteral_327,(MethodInfo *)0x0)
  ;
  NullCheck(pUVar4);
  UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F
            (pUVar4,pUVar3,
             *(MethodInfo **)Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0xd0);
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar2,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_326,0);
  NullCheck(pvVar5);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar5,uVar2,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0xd8);
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar2,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_328,0);
  NullCheck(pvVar5);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar5,uVar2,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0xe0);
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar2,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_330,0);
  NullCheck(pvVar5);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar5,uVar2,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0xe8);
  uVar2 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000060);
  UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131
            (uVar2,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_329,0);
  NullCheck(pvVar5);
  UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(pvVar5,uVar2,0);
  return;
}


