/*
FUNCTION_NAME: StyleValueExtensions_DebugString_TisIl2CppFullySharedGenericAny_m32C5B0480E481BAF30480D44F79AC4F15A39FEF6_gshared
ENTRY_POINT: 022251b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
StyleValueExtensions_DebugString_TisIl2CppFullySharedGenericAny_m32C5B0480E481BAF30480D44F79AC4F15A39FEF6_gshared
          (Il2CppObject *param_1,MethodInfo *param_2)

{
  long lVar1;
  ulong uVar2;
  Il2CppClass *pIVar3;
  void *apvStack_b0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  Il2CppObject *local_78;
  undefined8 local_70;
  undefined8 local_68;
  Il2CppObject *local_60;
  int local_54;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined8 local_40;
  void **local_38;
  uint local_2c;
  MethodInfo *local_28;
  Il2CppObject *local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  uVar2 = il2cpp_rgctx_is_initialized(param_2);
  if ((uVar2 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<SurfaceHit>_get_Value__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    il2cpp_rgctx_method_init(local_28);
  }
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_28 + 0x38),3);
  local_2c = il2cpp_codegen_sizeof(pIVar3);
  local_38 = (void **)((long)apvStack_b0 - ((ulong)local_2c + 0xf & 0x1fffffff0));
  local_40 = 0;
  local_48 = 0;
  local_50 = local_20;
  NullCheck(local_20);
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_28 + 0x38),0);
  local_54 = InterfaceFuncInvoker0<int>::Invoke(1,pIVar3,local_50);
  if (local_54 == 0) {
    local_60 = local_20;
    NullCheck(local_20);
    local_9c = 0;
    pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_28 + 0x38),0);
    InterfaceActionInvoker1Invoker<void**>::Invoke((ushort)local_9c,pIVar3,local_60,local_38);
    pIVar3 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(local_28 + 0x38),3);
    local_68 = Box(pIVar3,local_38);
    local_70 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                         (*(undefined8 *)
                           Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__,local_68
                          ,0);
    local_48 = local_70;
  }
  else {
    local_78 = local_20;
    NullCheck(local_20);
    pIVar3 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_28 + 0x38),0);
    local_80 = InterfaceFuncInvoker0<int>::Invoke(1,pIVar3,local_78);
    local_7c = local_80;
    local_88 = Box(*(Il2CppClass **)Method_System_Nullable<SurfaceHit>_get_Value__,&local_80);
    local_90 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                         (*(undefined8 *)
                           Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__,local_88
                          ,0);
    local_48 = local_90;
  }
  local_40 = local_48;
  local_98 = local_48;
  apvStack_b0[1] = (void *)local_48;
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


