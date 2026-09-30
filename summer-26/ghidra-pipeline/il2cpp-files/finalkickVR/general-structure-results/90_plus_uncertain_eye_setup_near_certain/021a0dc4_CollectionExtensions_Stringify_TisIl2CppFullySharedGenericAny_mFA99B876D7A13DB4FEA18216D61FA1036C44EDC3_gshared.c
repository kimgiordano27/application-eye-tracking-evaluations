/*
FUNCTION_NAME: CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared
ENTRY_POINT: 021a0dc4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_11;functionality_eye_api_context_without_clear_sink_hits_11
*/


undefined8
CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared
          (Il2CppObject *param_1,MethodInfo *param_2)

{
  long lVar1;
  ulong uVar2;
  Il2CppClass *pIVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  void *pvStack_1a0;
  uint local_194;
  undefined8 local_190;
  undefined8 local_188;
  Il2CppClass *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  int local_164;
  undefined8 *local_160;
  Il2CppClass *local_158;
  undefined8 *local_150;
  void *local_148;
  int local_13c;
  undefined8 local_138;
  Il2CppObject *local_130;
  undefined4 local_124;
  byte local_114;
  Il2CppObject *local_110;
  undefined8 local_108;
  undefined8 local_100;
  int local_f4;
  int local_f0;
  int local_ec;
  void *local_e8;
  Il2CppObject *local_d0;
  Il2CppObject **local_c8;
  FinallyHelper<CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared::__16,false>
  aFStack_c0 [16];
  Il2CppObject *local_b0;
  Il2CppObject *local_a8;
  int local_9c;
  Il2CppObject *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  void *local_70;
  void *local_68;
  Il2CppObject *local_60;
  int local_58;
  int local_54;
  void **local_50;
  void **local_48;
  uint local_3c;
  MethodInfo *local_38;
  Il2CppObject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  uVar2 = il2cpp_rgctx_is_initialized(param_2);
  if ((uVar2 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    il2cpp_rgctx_method_init(local_38);
  }
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_38 + 0x38),6);
  local_3c = il2cpp_codegen_sizeof(pIVar3);
  local_50 = (void **)((long)&pvStack_1a0 - ((ulong)local_3c + 0xf & 0x1fffffff0));
  local_13c = 0;
  local_54 = 0;
  local_58 = 0;
  local_148 = (void *)0x0;
  local_60 = (Il2CppObject *)0x0;
  local_68 = (void *)((long)local_50 - ((ulong)local_3c + 0xf & 0x1fffffff0));
  local_48 = local_50;
  memset(local_68,0,(ulong)local_3c);
  local_70 = local_148;
  local_78 = local_148;
  local_80 = local_148;
  local_88 = local_148;
  local_150 = (undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*local_150);
  local_90 = (void *)*puVar4;
  NullCheck(local_90);
  StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(local_90,local_13c,local_148);
  local_98 = local_30;
  NullCheck(local_30);
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),local_13c);
  local_9c = InterfaceFuncInvoker0<int>::Invoke((ushort)local_13c,pIVar3,local_98);
  local_54 = il2cpp_codegen_subtract<int,int>(local_9c,1);
  local_58 = local_13c;
  local_a8 = local_30;
  NullCheck(local_30);
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),2);
  auVar5 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke((ushort)local_13c,pIVar3,local_a8);
  local_b0 = auVar5._0_8_;
  local_c8 = &local_60;
  local_60 = local_b0;
  il2cpp::utils::
  Finally<CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared::__16>
            ((utils *)&local_c8,auVar5._8_8_);
  while( true ) {
    local_110 = local_60;
    NullCheck(local_60);
    local_194 = InterfaceFuncInvoker0<bool>::Invoke
                          (0,*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                           ,local_110);
    local_114 = (byte)local_194 & 1;
    if ((local_194 & 1) == 0) break;
    local_d0 = local_60;
    NullCheck(local_60);
    local_158 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),4);
    InterfaceActionInvoker1Invoker<void**>::Invoke(0,local_158,local_d0,local_48);
    il2cpp_codegen_memcpy(local_68,local_48,(ulong)local_3c);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    local_160 = (undefined8 *)
                il2cpp_codegen_static_fields_for
                          (*(Il2CppClass **)
                            Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    local_e8 = (void *)*local_160;
    local_ec = local_58;
    local_f0 = local_58;
    local_164 = il2cpp_codegen_add<int,int>(local_58,1);
    local_f4 = local_54;
    if (local_f0 == local_54) {
      local_70 = local_e8;
      local_80 = *(void **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
    }
    else {
      local_78 = local_e8;
      local_80 = *(void **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
    }
    local_88 = local_e8;
    local_58 = local_164;
    il2cpp_codegen_memcpy(local_50,local_68,(ulong)local_3c);
    local_180 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_38 + 0x38),6);
    local_188 = Box(local_180,local_50);
    local_100 = local_188;
    NullCheck(local_88);
    local_190 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                          (local_88,local_80,local_100,0);
    local_108 = local_190;
  }
  local_124 = 6;
  il2cpp::utils::
  FinallyHelper<CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared::$_16,false>
  ::~FinallyHelper(aFStack_c0);
  local_178 = (undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*local_178);
  local_130 = (Il2CppObject *)*puVar4;
  NullCheck(local_130);
  local_170 = VirtualFuncInvoker0<String_t*>::Invoke(3,local_130);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 == 0) {
    return local_170;
  }
  local_138 = local_170;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


