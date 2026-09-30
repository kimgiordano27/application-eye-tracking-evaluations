/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.PassthroughProjectionSurfaceBuildingBlock$$Start
ENTRY_POINT: 02454688
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_BuildingBlocks_PassthroughProjectionSurfaceBuildingBlock__Start(void)

{
  undefined4 uVar1;
  long lVar2;
  Il2CppClass *pIVar3;
  FieldInfo *pFVar4;
  void *pvVar5;
  ulong uVar6;
  long unaff_x29;
  
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
  pIVar3 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0xfc));
  pFVar4 = (FieldInfo *)il2cpp_rgctx_field(pIVar3,*(int *)(unaff_x29 + -0xdc));
  pvVar5 = (void *)il2cpp_codegen_get_instance_field_data_pointer
                             (*(void **)(unaff_x29 + -0xf8),pFVar4);
  il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0xf0),pvVar5,(ulong)*(uint *)(unaff_x29 + -0x30));
  NullCheck(*(void **)(unaff_x29 + -0xa0));
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xa0);
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
  pIVar3 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0xdc));
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar3);
  if ((uVar6 & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x128) = **(undefined8 **)(unaff_x29 + -0x38);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x128) = *(undefined8 *)(unaff_x29 + -0x38);
  }
  *(undefined8 *)(unaff_x29 + -0x130) = *(undefined8 *)(unaff_x29 + -0x128);
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
  pIVar3 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar2 + 0xc0),0);
  uVar6 = il2cpp_codegen_class_is_value_type(pIVar3);
  if ((uVar6 & 1) == 0) {
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
  lVar2 = tpidr_el0;
  lVar2 = *(long *)(lVar2 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar2 == 0) {
    return *(undefined4 *)(unaff_x29 + -0x13c);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


