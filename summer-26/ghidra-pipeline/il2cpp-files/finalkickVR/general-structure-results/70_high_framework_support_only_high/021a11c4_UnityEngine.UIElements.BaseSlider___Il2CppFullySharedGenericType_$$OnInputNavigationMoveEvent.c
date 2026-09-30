/*
FUNCTION_NAME: UnityEngine.UIElements.BaseSlider<__Il2CppFullySharedGenericType>$$OnInputNavigationMoveEvent
ENTRY_POINT: 021a11c4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_9;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8
UnityEngine_UIElements_BaseSlider<__Il2CppFullySharedGenericType>__OnInputNavigationMoveEvent
          (undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x29;
  
  do {
    *(undefined8 *)(unaff_x29 + -0x60) = *param_1;
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x50);
    while( true ) {
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x29 + -0x30),*(void **)(unaff_x29 + -0x48),
                 (ulong)*(uint *)(unaff_x29 + -0x1c));
      uVar5 = il2cpp_rgctx_data_no_init
                        (*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),6);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
      uVar5 = Box(*(Il2CppClass **)(unaff_x19 + 0x20),*(void **)(unaff_x29 + -0x30));
      *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
      *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x18);
      NullCheck(*(void **)(unaff_x29 + -0x68));
      uVar5 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                        (*(undefined8 *)(unaff_x29 + -0x68),*(undefined8 *)(unaff_x29 + -0x60),
                         *(undefined8 *)(unaff_x19 + 0xa0),0);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
      *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x29 + -0x40);
      NullCheck(*(void **)(unaff_x19 + 0x90));
      uVar3 = InterfaceFuncInvoker0<bool>::Invoke
                        (0,*(Il2CppClass **)
                            Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                         ,*(Il2CppObject **)(unaff_x19 + 0x90));
      *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
      *(byte *)(unaff_x19 + 0x8c) = (byte)*(undefined4 *)(unaff_x19 + 0xc) & 1;
      if ((*(byte *)(unaff_x19 + 0x8c) & 1) == 0) {
        *(undefined4 *)(unaff_x19 + 0x7c) = 6;
        il2cpp::utils::
        FinallyHelper<CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared::$_16,false>
        ::~FinallyHelper((FinallyHelper<CollectionExtensions_Stringify_TisIl2CppFullySharedGenericAny_mFA99B876D7A13DB4FEA18216D61FA1036C44EDC3_gshared::__16,false>
                          *)(unaff_x29 + -0xa0));
        puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
        *(undefined **)(unaff_x19 + 0x28) =
             Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        puVar4 = (undefined8 *)
                 il2cpp_codegen_static_fields_for
                           ((Il2CppClass *)**(undefined8 **)(unaff_x19 + 0x28));
        *(undefined8 *)(unaff_x19 + 0x70) = *puVar4;
        NullCheck(*(void **)(unaff_x19 + 0x70));
        uVar5 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(unaff_x19 + 0x70));
        *(undefined8 *)(unaff_x19 + 0x68) = uVar5;
        *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x68);
        lVar1 = tpidr_el0;
        lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
        if (lVar1 == 0) {
          return *(undefined8 *)(unaff_x19 + 0x30);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(lVar1);
      }
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x40);
      NullCheck(*(void **)(unaff_x29 + -0xb0));
      uVar5 = il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x18) + 0x38),4);
      *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
      InterfaceActionInvoker1Invoker<void**>::Invoke
                (0,*(Il2CppClass **)(unaff_x19 + 0x48),*(Il2CppObject **)(unaff_x29 + -0xb0),
                 *(void ***)(unaff_x29 + -0x28));
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x29 + -0x48),*(void **)(unaff_x29 + -0x28),
                 (ulong)*(uint *)(unaff_x29 + -0x1c));
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__
                );
      uVar5 = il2cpp_codegen_static_fields_for
                        (*(Il2CppClass **)
                          Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
      *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
      *(undefined8 *)(unaff_x19 + 0xb8) = **(undefined8 **)(unaff_x19 + 0x40);
      *(undefined4 *)(unaff_x19 + 0xb4) = *(undefined4 *)(unaff_x29 + -0x38);
      *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x19 + 0xb4);
      uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x19 + 0xb0),1);
      *(undefined4 *)(unaff_x19 + 0x3c) = uVar3;
      *(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x19 + 0x3c);
      *(undefined4 *)(unaff_x19 + 0xac) = *(undefined4 *)(unaff_x29 + -0x34);
      if (*(int *)(unaff_x19 + 0xb0) == *(int *)(unaff_x19 + 0xac)) break;
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x29 + -0x60) =
           *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
      *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x58);
    }
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x19 + 0xb8);
    param_1 = (undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
  } while( true );
}


