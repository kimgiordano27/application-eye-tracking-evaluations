/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$.ctor
ENTRY_POINT: 024545e8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_BuildingBlocks_BuildingBlock___ctor(long param_1)

{
  undefined4 uVar1;
  MethodInfo *pMVar2;
  undefined8 uVar3;
  long lVar4;
  Il2CppClass *pIVar5;
  FieldInfo *pFVar6;
  void *pvVar7;
  ulong uVar8;
  long unaff_x29;
  
  pMVar2 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(param_1 + 0xc0),8);
  uVar3 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(pMVar2);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x108) = *(undefined8 *)(unaff_x29 + -0x38);
  *(undefined8 *)(unaff_x29 + -0x110) = *(undefined8 *)(*(long *)(unaff_x29 + -0xb0) + 8);
  lVar4 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar4 + 0xc0),*(int *)(unaff_x29 + -0xfc));
  *(undefined4 *)(unaff_x29 + -0xdc) = 0;
  pFVar6 = (FieldInfo *)il2cpp_rgctx_field(pIVar5,0);
  pvVar7 = (void *)il2cpp_codegen_get_instance_field_data_pointer
                             (*(void **)(unaff_x29 + -0x110),pFVar6);
  il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0x108),pvVar7,(ulong)*(uint *)(unaff_x29 + -0x30));
  il2cpp_codegen_memcpy
            (*(void **)(unaff_x29 + -0x50),*(void **)(unaff_x29 + -0x58),
             (ulong)*(uint *)(unaff_x29 + -0x2c));
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0x40);
  *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0x50);
  lVar4 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar4 + 0xc0),*(int *)(unaff_x29 + -0xfc));
  pFVar6 = (FieldInfo *)il2cpp_rgctx_field(pIVar5,*(int *)(unaff_x29 + -0xdc));
  pvVar7 = (void *)il2cpp_codegen_get_instance_field_data_pointer
                             (*(void **)(unaff_x29 + -0xf8),pFVar6);
  il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0xf0),pvVar7,(ulong)*(uint *)(unaff_x29 + -0x30));
  NullCheck(*(void **)(unaff_x29 + -0xa0));
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xa0);
  lVar4 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar4 + 0xc0),*(int *)(unaff_x29 + -0xdc));
  uVar8 = il2cpp_codegen_class_is_value_type(pIVar5);
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x128) = **(undefined8 **)(unaff_x29 + -0x38);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x128) = *(undefined8 *)(unaff_x29 + -0x38);
  }
  *(undefined8 *)(unaff_x29 + -0x130) = *(undefined8 *)(unaff_x29 + -0x128);
  lVar4 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
  pIVar5 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar4 + 0xc0),0);
  uVar8 = il2cpp_codegen_class_is_value_type(pIVar5);
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x138) = **(undefined8 **)(unaff_x29 + -0x40);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x138) = *(undefined8 *)(unaff_x29 + -0x40);
  }
  uVar1 = VirtualFuncInvoker2Invoker<int,void*,void*>::Invoke
                    (6,*(Il2CppObject **)(unaff_x29 + -0xe8),*(void **)(unaff_x29 + -0x130),
                     *(void **)(unaff_x29 + -0x138));
  *(undefined4 *)(unaff_x29 + -0xa4) = uVar1;
  *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0xa4);
  *(undefined4 *)(unaff_x29 + -0x13c) = *(undefined4 *)(unaff_x29 + -0xc);
  lVar4 = tpidr_el0;
  lVar4 = *(long *)(lVar4 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar4 == 0) {
    return *(undefined4 *)(unaff_x29 + -0x13c);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


