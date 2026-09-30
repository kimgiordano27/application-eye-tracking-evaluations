/*
FUNCTION_NAME: CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m64F62F848FC640FEA0A7176567655B4C1E6783AF_gshared
ENTRY_POINT: 021a0298
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m64F62F848FC640FEA0A7176567655B4C1E6783AF_gshared
               (Il2CppObject *param_1,undefined8 ****param_2,undefined8 ****param_3,void *param_4,
               MethodInfo *param_5)

{
  long lVar1;
  Il2CppClass *pIVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *pvStack_d0;
  undefined8 ***local_c8;
  void *local_c0;
  undefined8 *local_b8;
  Il2CppClass *local_b0;
  Il2CppObject *local_a8;
  undefined8 ***local_a0;
  undefined8 *local_98;
  Exception_t *local_90;
  byte local_84;
  Il2CppObject *local_80;
  Exception_t *local_78;
  Il2CppObject *local_70;
  void **local_68;
  void *local_60;
  void *local_58;
  undefined8 *local_50;
  uint local_48;
  uint local_44;
  MethodInfo *local_40;
  void *local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  Il2CppObject *local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_40 = param_5;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  il2cpp_rgctx_method_init(param_5);
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_40 + 0x38),4);
  local_44 = il2cpp_codegen_sizeof(pIVar2);
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
  local_48 = il2cpp_codegen_sizeof(pIVar2);
  local_50 = (undefined8 *)((long)&pvStack_d0 - ((ulong)local_48 + 0xf & 0x1fffffff0));
  local_60 = (void *)((long)local_50 - ((ulong)local_44 + 0xf & 0x1fffffff0));
  local_68 = (void **)((long)local_60 - ((ulong)local_44 + 0xf & 0x1fffffff0));
  local_58 = local_60;
  memset(local_68,0,(ulong)local_44);
  local_70 = local_20;
  if (local_20 == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    local_90 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
    local_78 = local_90;
    uVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(local_90,uVar3,0);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(local_78,local_40);
  }
  local_80 = local_20;
  local_98 = local_50;
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
  uVar4 = il2cpp_codegen_class_is_value_type(pIVar2);
  if ((uVar4 & 1) == 0) {
    local_a0 = &local_28;
  }
  else {
    local_a0 = local_28;
  }
  il2cpp_codegen_memcpy(local_98,local_a0,(ulong)local_48);
  NullCheck(local_80);
  local_b0 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_40 + 0x38),0);
  local_a8 = local_80;
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_40 + 0x38),1);
  uVar4 = il2cpp_codegen_class_is_value_type(pIVar2);
  if ((uVar4 & 1) == 0) {
    local_b8 = (undefined8 *)*local_50;
  }
  else {
    local_b8 = local_50;
  }
  local_84 = InterfaceFuncInvoker2Invoker<bool,void*,void**>::Invoke
                       (1,local_b0,local_a8,local_b8,local_68);
  local_84 = local_84 & 1;
  if (local_84 == 0) {
    local_c0 = local_58;
    pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_40 + 0x38),4);
    uVar4 = il2cpp_codegen_class_is_value_type(pIVar2);
    if ((uVar4 & 1) == 0) {
      local_c8 = &local_30;
    }
    else {
      local_c8 = local_30;
    }
    il2cpp_codegen_memcpy(local_c0,local_c8,(ulong)local_44);
    il2cpp_codegen_memcpy(local_38,local_58,(ulong)local_44);
  }
  else {
    il2cpp_codegen_memcpy(local_60,local_68,(ulong)local_44);
    il2cpp_codegen_memcpy(local_38,local_60,(ulong)local_44);
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


