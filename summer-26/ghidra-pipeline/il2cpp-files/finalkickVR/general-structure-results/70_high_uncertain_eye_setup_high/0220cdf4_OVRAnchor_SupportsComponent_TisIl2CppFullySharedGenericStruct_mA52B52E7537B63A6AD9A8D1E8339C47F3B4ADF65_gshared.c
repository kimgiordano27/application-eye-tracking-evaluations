/*
FUNCTION_NAME: OVRAnchor_SupportsComponent_TisIl2CppFullySharedGenericStruct_mA52B52E7537B63A6AD9A8D1E8339C47F3B4ADF65_gshared
ENTRY_POINT: 0220cdf4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRAnchor_SupportsComponent_TisIl2CppFullySharedGenericStruct_mA52B52E7537B63A6AD9A8D1E8339C47F3B4ADF65_gshared
               (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 *param_1,MethodInfo *param_2)

{
  long lVar1;
  ulong uVar2;
  Il2CppClass *pIVar3;
  MethodInfo *pMVar4;
  undefined1 auStack_80 [12];
  int local_74;
  Il2CppClass *local_70;
  undefined8 local_68;
  uint local_60;
  byte local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 *local_40;
  undefined1 *local_38;
  uint local_2c;
  MethodInfo *local_28;
  OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 *local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  uVar2 = il2cpp_rgctx_is_initialized(param_2);
  if ((uVar2 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<long>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_rgctx_method_init(local_28);
  }
  local_74 = 0;
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_28 + 0x38),0);
  local_2c = il2cpp_codegen_sizeof(pIVar3);
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_28 + 0x38),local_74);
  uVar2 = Il2CppFakeBoxBuffer::SizeNeededFor(pIVar3);
  local_38 = auStack_80 + -((uVar2 & 0xffffffff) + 0xf & 0x1fffffff0);
  local_40 = local_38 + -((ulong)local_2c + 0xf & 0x1fffffff0);
  memset(local_40,local_74,(ulong)local_2c);
  local_48[0] = (undefined1)local_74;
  local_44[0] = local_48[0];
  il2cpp_codegen_initobj(local_40,(ulong)local_2c);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)Method_System_Nullable<long>__ctor__);
  local_68 = 0;
  local_50 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                       (local_20,(MethodInfo *)0x0);
  local_70 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_28 + 0x38),local_74);
  pMVar4 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(local_28 + 0x38),2);
  local_54 = ConstrainedFuncInvoker0<int>::Invoke(local_70,pMVar4,local_38,local_40);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_58 = OVRPlugin_GetSpaceComponentStatusInternal_m3D907B174A4747720BC0268A6586DF5D1C5C2CD4
                       (local_50,local_54,local_44,local_48,local_68);
  local_5c = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(local_58,local_68);
  local_5c = local_5c & 1;
  local_60 = (uint)local_5c;
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


