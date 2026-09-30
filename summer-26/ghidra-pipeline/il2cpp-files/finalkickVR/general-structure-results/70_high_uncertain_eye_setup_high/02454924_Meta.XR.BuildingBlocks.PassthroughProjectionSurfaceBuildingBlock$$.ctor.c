/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.PassthroughProjectionSurfaceBuildingBlock$$.ctor
ENTRY_POINT: 02454924
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
Meta_XR_BuildingBlocks_PassthroughProjectionSurfaceBuildingBlock___ctor
          (void *param_1,void *param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  Il2CppClass *pIVar3;
  FieldInfo *pFVar4;
  void *pvVar5;
  ulong uVar6;
  long unaff_x29;
  
  il2cpp_codegen_memcpy(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x38);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x40);
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
  pIVar3 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0x6c));
  pFVar4 = (FieldInfo *)il2cpp_rgctx_field(pIVar3,*(int *)(unaff_x29 + -0x50));
  pvVar5 = (void *)il2cpp_codegen_get_instance_field_data_pointer
                             (*(void **)(unaff_x29 + -0x68),pFVar4);
  il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0x60),pvVar5,(ulong)*(uint *)(unaff_x29 + -0x24));
  NullCheck(*(void **)(unaff_x29 + -0x48));
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x48);
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
  pIVar3 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0x50));
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar3);
  if ((uVar6 & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x88) = **(undefined8 **)(unaff_x29 + -0x30);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x30);
  }
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x88);
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x20) + 0x20));
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar2 + 0xc0),0);
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar3);
  if ((uVar6 & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x98) = **(undefined8 **)(unaff_x29 + -0x38);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x38);
  }
  uVar1 = VirtualFuncInvoker2Invoker<int,void*,void*>::Invoke
                    (6,*(Il2CppObject **)(unaff_x29 + -0x58),*(void **)(unaff_x29 + -0x90),
                     *(void **)(unaff_x29 + -0x98));
  *(undefined4 *)(unaff_x29 + -0x4c) = uVar1;
  *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x4c);
  lVar2 = tpidr_el0;
  lVar2 = *(long *)(lVar2 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar2 == 0) {
    return *(undefined4 *)(unaff_x29 + -0x9c);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


