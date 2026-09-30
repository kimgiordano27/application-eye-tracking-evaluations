/*
FUNCTION_NAME: AsyncTaskMethodBuilder_1__cctor_mCE23FA4A12C9CE98BC9538203F0B9F3C8F002783_gshared
ENTRY_POINT: 02285794
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void AsyncTaskMethodBuilder_1__cctor_mCE23FA4A12C9CE98BC9538203F0B9F3C8F002783_gshared(long param_1)

{
  long lVar1;
  Il2CppClass *pIVar2;
  ulong uVar3;
  MethodInfo *pMVar4;
  undefined8 *puVar5;
  void **ppvVar6;
  void *local_70 [2];
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  void *local_40;
  void *local_38;
  undefined8 *local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_20 = param_1;
  if ((AsyncTaskMethodBuilder_1__cctor_mCE23FA4A12C9CE98BC9538203F0B9F3C8F002783_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    AsyncTaskMethodBuilder_1__cctor_mCE23FA4A12C9CE98BC9538203F0B9F3C8F002783_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_20 + 0x20));
  local_4c = 5;
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar1 + 0xc0),5);
  local_24 = il2cpp_codegen_sizeof(pIVar2);
  local_30 = (undefined8 *)((long)local_70 - ((ulong)local_24 + 0xf & 0x1fffffff0));
  local_38 = (void *)((long)local_30 - ((ulong)local_24 + 0xf & 0x1fffffff0));
  local_40 = (void *)((long)local_38 - ((ulong)local_24 + 0xf & 0x1fffffff0));
  memset(local_40,0,(ulong)local_24);
  il2cpp_codegen_initobj(local_40,(ulong)local_24);
  il2cpp_codegen_memcpy(local_30,local_40,(ulong)local_24);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
  lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_20 + 0x20));
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar1 + 0xc0),local_4c);
  uVar3 = il2cpp_codegen_class_is_value_type(pIVar2);
  if ((uVar3 & 1) == 0) {
    local_58 = (void *)*local_30;
  }
  else {
    local_58 = (void *)il2cpp_codegen_memcpy(local_38,local_30,(ulong)local_24);
  }
  local_70[0] = local_58;
  lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_20 + 0x20));
  pMVar4 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar1 + 0xc0),0xc);
  local_70[1] = (void *)AsyncTaskCache_CreateCacheableTask_TisIl2CppFullySharedGenericAny_mF1F904D36F96839C834A5BFC86634E274F6DA836
                                  (local_70[0],pMVar4);
  local_48 = local_70[1];
  lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_20 + 0x20));
  local_5c = 2;
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar1 + 0xc0),2);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar2);
  *puVar5 = local_70[1];
  lVar1 = InitializedTypeInfo(*(Il2CppClass **)(local_20 + 0x20));
  pIVar2 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar1 + 0xc0),local_5c);
  ppvVar6 = (void **)il2cpp_codegen_static_fields_for(pIVar2);
  Il2CppCodeGenWriteBarrier(ppvVar6,local_48);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


