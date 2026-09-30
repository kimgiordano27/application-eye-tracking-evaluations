/*
FUNCTION_NAME: OVRAnchor_TryGetComponent_TisIl2CppFullySharedGenericStruct_mCDB73A75601FE3FAF9244339014AC4C283D10B00_gshared
ENTRY_POINT: 0220cfb8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRAnchor_TryGetComponent_TisIl2CppFullySharedGenericStruct_mCDB73A75601FE3FAF9244339014AC4C283D10B00_gshared
               (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 *param_1,void **param_2,
               MethodInfo *param_3)

{
  long lVar1;
  ulong uVar2;
  Il2CppClass *pIVar3;
  ulong uVar4;
  MethodInfo *pMVar5;
  undefined8 uVar6;
  undefined1 auStack_100 [12];
  uint local_f4;
  undefined8 local_f0;
  int local_e8;
  int local_e4;
  Il2CppClass *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  void **local_98;
  void **local_90;
  byte local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void **local_78;
  undefined8 local_70;
  void **local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  void *local_58;
  long local_50;
  undefined1 *local_48;
  uint local_3c;
  MethodInfo *local_38;
  void **local_30;
  OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 *local_28;
  byte local_19;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  uVar2 = il2cpp_rgctx_is_initialized(param_3);
  if ((uVar2 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<long>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_rgctx_method_init(local_38);
  }
  local_e4 = 1;
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_38 + 0x38),1);
  local_3c = il2cpp_codegen_sizeof(pIVar3);
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),local_e4);
  uVar2 = Il2CppFakeBoxBuffer::SizeNeededFor(pIVar3);
  local_48 = auStack_100 + -((uVar2 & 0xffffffff) + 0xf & 0x1fffffff0);
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),local_e4);
  uVar4 = Il2CppFakeBoxBuffer::SizeNeededFor(pIVar3);
  local_50 = (long)(auStack_100 + -((uVar2 & 0xffffffff) + 0xf & 0x1fffffff0)) -
             ((uVar4 & 0xffffffff) + 0xf & 0x1fffffff0);
  local_58 = (void *)(local_50 - ((ulong)local_3c + 0xf & 0x1fffffff0));
  local_5c[0] = 0;
  local_60[0] = 0;
  local_68 = local_30;
  il2cpp_codegen_initobj(local_30,(ulong)local_3c);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)Method_System_Nullable<long>__ctor__);
  local_d8 = 0;
  local_70 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                       (local_28,(MethodInfo *)0x0);
  local_78 = local_30;
  local_e0 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),local_e4);
  pMVar5 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_38 + 0x38),3);
  local_7c = ConstrainedFuncInvoker0<int>::Invoke(local_e0,pMVar5,local_48,local_78);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_80 = OVRPlugin_GetSpaceComponentStatusInternal_m3D907B174A4747720BC0268A6586DF5D1C5C2CD4
                       (local_70,local_7c,local_5c,local_60,local_d8);
  local_84 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(local_80,local_d8);
  local_84 = local_84 & 1;
  if (local_84 == 0) {
    local_19 = 0;
  }
  else {
    local_90 = local_30;
    local_98 = local_30;
    uStack_a8 = *(undefined8 *)(local_28 + 8);
    local_b0 = *(undefined8 *)local_28;
    local_a0 = *(undefined8 *)(local_28 + 0x10);
    local_e8 = 1;
    local_f0 = il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),1);
    uVar6 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_38 + 0x38),4);
    local_c0 = local_a0;
    uStack_c8 = uStack_a8;
    local_d0 = local_b0;
    ConstrainedActionInvoker2<OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061,void**>::Invoke
              (local_f0,uVar6,local_50,local_98,&local_d0,local_58);
    il2cpp_codegen_memcpy(local_90,local_58,(ulong)local_3c);
    pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),local_e8);
    Il2CppCodeGenWriteBarrierForClass(pIVar3,local_90,local_58);
    local_19 = (byte)local_e8;
  }
  local_f4 = (uint)local_19;
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return local_f4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


