/*
FUNCTION_NAME: Unity.XR.Oculus.OculusLoader$$RuntimeLoadOVRPlugin
ENTRY_POINT: 04117424
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_XR_Oculus_OculusLoader__RuntimeLoadOVRPlugin(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 in_w8;
  long in_x9;
  long unaff_x29;
  undefined4 uStack0000000000000000;
  undefined1 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined8 *in_stack_00000018;
  
  *(undefined4 *)(in_x9 + 0x2d8) = in_w8;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x2dc) = 0x40c00000;
  uStack0000000000000008 = 0xffffffff;
  uStack0000000000000010 = 0;
  uVar1 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222();
  *(undefined4 *)(unaff_x29 + -0x18) = uVar1;
  *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -0x18);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x2e0) = *(undefined4 *)(unaff_x29 + -0x14);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x2e4) = 1;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x2e8) = 1;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x2f0) = uStack0000000000000000;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x2f8) = 0x40400000;
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x2fc) = uStack0000000000000004;
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x2fd) = uStack0000000000000004;
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x2fe) = uStack0000000000000004;
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x2ff) = uStack0000000000000004;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x300) = 0x43340000;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x304) = 0x3f800000;
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      PTR_UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298_il2cpp_TypeInfo_var_048d0978
                    );
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  UIHoverEnterEvent__ctor_m309FE9B459595D2EEFB57817D3F3CBFEE7E8C751
            (*(undefined8 *)(unaff_x29 + -0x20),uStack0000000000000010);
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x318) = *(undefined8 *)(unaff_x29 + -0x20);
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -8) + 0x318),*(void **)(unaff_x29 + -0x20));
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      PTR_UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B_il2cpp_TypeInfo_var_048d0980
                    );
  *(undefined8 *)(unaff_x29 + -0x28) = uVar2;
  UIHoverExitEvent__ctor_m29FA3753E0A5207254A50CFD553FB66E72F48B00
            (*(undefined8 *)(unaff_x29 + -0x28),uStack0000000000000010);
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 800) = *(undefined8 *)(unaff_x29 + -0x28);
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -8) + 800),*(void **)(unaff_x29 + -0x28));
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      PTR_List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var_048d0910
                    );
  *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
  List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F
            (*(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810 **)(unaff_x29 + -0x30),
             *(MethodInfo **)
              PTR_List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var_048d0908)
  ;
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x360) = *(undefined8 *)(unaff_x29 + -0x30);
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -8) + 0x360),*(void **)(unaff_x29 + -0x30));
  pvVar3 = (void *)SZArrayNew(*(Il2CppClass **)
                               PTR_RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var_048cfa00
                              ,10);
  *(void **)(*(long *)(unaff_x29 + -8) + 0x388) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x388),pvVar3);
  pvVar3 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               PTR_RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D_il2cpp_TypeInfo_var_048d0970
                             );
  RaycastHitComparer__ctor_mF4CD20A7FEB0D6BE43809FAA21EC3EE87798A8C2(pvVar3,uStack0000000000000010);
  *(void **)(*(long *)(unaff_x29 + -8) + 0x398) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x398),pvVar3);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x3a8) = uStack0000000000000008;
  uStack000000000000000c = 3;
  pvVar3 = (void *)SZArrayNew((Il2CppClass *)*in_stack_00000018,3);
  *(void **)(*(long *)(unaff_x29 + -8) + 0x3b8) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x3b8),pvVar3);
  pvVar3 = (void *)SZArrayNew((Il2CppClass *)*in_stack_00000018,uStack000000000000000c);
  *(void **)(*(long *)(unaff_x29 + -8) + 0x3c0) = pvVar3;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x3c0),pvVar3);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var_048cfec0
            );
  XRBaseControllerInteractor__ctor_m3389EC35F9C9C32149307AEEAF3A39C93A652AC5
            (*(undefined8 *)(unaff_x29 + -8),uStack0000000000000010);
  return;
}


