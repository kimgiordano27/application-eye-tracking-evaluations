/*
FUNCTION_NAME: UnityEngine.UIElements.BaseSlider<__Il2CppFullySharedGenericType>$$UpdateTextFieldValue
ENTRY_POINT: 021a0e98
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_13;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8
UnityEngine_UIElements_BaseSlider<__Il2CppFullySharedGenericType>__UpdateTextFieldValue
          (undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  Il2CppClass *pIVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x29;
  undefined1 auVar8 [16];
  
  *(undefined8 *)(unaff_x29 + -0x40) = param_1;
  *(ulong *)(unaff_x29 + -0x48) =
       (long)&stack0x00000000 - ((ulong)*(uint *)(unaff_x29 + -0x1c) + 0xf & 0x1fffffff0);
  memset(*(void **)(unaff_x29 + -0x48),param_3,(ulong)*(uint *)(unaff_x29 + -0x1c));
  uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x29 + -0x50) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar7;
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  *(undefined **)(unaff_x19 + 0x50) =
       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar5 = (undefined8 *)
           il2cpp_codegen_static_fields_for((Il2CppClass *)**(undefined8 **)(unaff_x19 + 0x50));
  *(undefined8 *)(unaff_x29 + -0x70) = *puVar5;
  NullCheck(*(void **)(unaff_x29 + -0x70));
  StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414
            (*(undefined8 *)(unaff_x29 + -0x70),*(undefined4 *)(unaff_x19 + 100),
             *(undefined8 *)(unaff_x19 + 0x58));
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x78));
  pIVar6 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),
                             *(int *)(unaff_x19 + 100));
  uVar3 = InterfaceFuncInvoker0<int>::Invoke
                    ((ushort)*(undefined4 *)(unaff_x19 + 100),pIVar6,
                     *(Il2CppObject **)(unaff_x29 + -0x78));
  *(undefined4 *)(unaff_x29 + -0x7c) = uVar3;
  uVar4 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x7c),1);
  uVar3 = *(undefined4 *)(unaff_x19 + 100);
  *(undefined4 *)(unaff_x29 + -0x34) = uVar4;
  *(undefined4 *)(unaff_x29 + -0x38) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x88));
  pIVar6 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),2);
  auVar8 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                     ((ushort)*(undefined4 *)(unaff_x19 + 100),pIVar6,
                      *(Il2CppObject **)(unaff_x29 + -0x88));
  *(long *)(unaff_x29 + -0x90) = auVar8._0_8_;
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x90);
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x40;
  il2cpp::utils::
  Finally<CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared::__16>
            ((utils *)(unaff_x29 + -0xa8),auVar8._8_8_);
  while( true ) {
    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x29 + -0x40);
    NullCheck(*(void **)(unaff_x19 + 0x90));
    uVar3 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,*(Il2CppObject **)(unaff_x19 + 0x90));
    *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
    *(byte *)(unaff_x19 + 0x8c) = (byte)*(undefined4 *)(unaff_x19 + 0xc) & 1;
    if ((*(byte *)(unaff_x19 + 0x8c) & 1) == 0) break;
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x40);
    NullCheck(*(void **)(unaff_x29 + -0xb0));
    uVar7 = il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),4);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar7;
    InterfaceActionInvoker1Invoker<void**>::Invoke
              (0,*(Il2CppClass **)(unaff_x19 + 0x48),*(Il2CppObject **)(unaff_x29 + -0xb0),
               *(void ***)(unaff_x29 + -0x28));
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x29 + -0x48),*(void **)(unaff_x29 + -0x28),
               (ulong)*(uint *)(unaff_x29 + -0x1c));
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    uVar7 = il2cpp_codegen_static_fields_for
                      (*(Il2CppClass **)
                        Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar7;
    *(undefined8 *)(unaff_x19 + 0xb8) = **(undefined8 **)(unaff_x19 + 0x40);
    *(undefined4 *)(unaff_x19 + 0xb4) = *(undefined4 *)(unaff_x29 + -0x38);
    *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x19 + 0xb4);
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x19 + 0xb0),1);
    *(undefined4 *)(unaff_x19 + 0x3c) = uVar3;
    *(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x19 + 0x3c);
    *(undefined4 *)(unaff_x19 + 0xac) = *(undefined4 *)(unaff_x29 + -0x34);
    if (*(int *)(unaff_x19 + 0xb0) == *(int *)(unaff_x19 + 0xac)) {
      *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x29 + -0x60) =
           *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
      *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x50);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x29 + -0x60) =
           *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
      *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x58);
    }
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x29 + -0x30),*(void **)(unaff_x29 + -0x48),
               (ulong)*(uint *)(unaff_x29 + -0x1c));
    uVar7 = il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),6);
    *(undefined8 *)(unaff_x19 + 0x20) = uVar7;
    uVar7 = Box(*(Il2CppClass **)(unaff_x19 + 0x20),*(void **)(unaff_x29 + -0x30));
    *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
    *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x18);
    NullCheck(*(void **)(unaff_x29 + -0x68));
    uVar7 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                      (*(undefined8 *)(unaff_x29 + -0x68),*(undefined8 *)(unaff_x29 + -0x60),
                       *(undefined8 *)(unaff_x19 + 0xa0),0);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x10);
  }
  *(undefined4 *)(unaff_x19 + 0x7c) = 6;
  il2cpp::utils::
  FinallyHelper<CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared::$_16,false>
  ::~FinallyHelper((FinallyHelper<CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared::__16,false>
                    *)(unaff_x29 + -0xa0));
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  *(undefined **)(unaff_x19 + 0x28) =
       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar5 = (undefined8 *)
           il2cpp_codegen_static_fields_for((Il2CppClass *)**(undefined8 **)(unaff_x19 + 0x28));
  *(undefined8 *)(unaff_x19 + 0x70) = *puVar5;
  NullCheck(*(void **)(unaff_x19 + 0x70));
  uVar7 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(unaff_x19 + 0x70));
  *(undefined8 *)(unaff_x19 + 0x68) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x68);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return *(undefined8 *)(unaff_x19 + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


