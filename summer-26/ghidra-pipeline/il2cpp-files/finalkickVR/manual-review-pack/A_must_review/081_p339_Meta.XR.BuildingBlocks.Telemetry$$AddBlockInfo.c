/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 02454380
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 208
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(void)

{
  undefined4 uVar1;
  long lVar2;
  Il2CppRGCTXData *pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  MethodInfo *pMVar6;
  undefined8 uVar7;
  FieldInfo *pFVar8;
  ulong uVar9;
  long unaff_x29;
  
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
  pIVar3 = *(Il2CppRGCTXData **)(lVar2 + 0xc0);
  *(undefined4 *)(unaff_x29 + -0xb4) = 0;
  pIVar4 = (Il2CppClass *)il2cpp_rgctx_data_no_init(pIVar3,0);
  uVar1 = il2cpp_codegen_sizeof(pIVar4);
  *(undefined4 *)(unaff_x29 + -0x30) = uVar1;
  lVar2 = (long)&stack0x00000000 - ((ulong)*(uint *)(unaff_x29 + -0x30) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x38) = lVar2;
  lVar2 = lVar2 - ((ulong)*(uint *)(unaff_x29 + -0x30) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x40) = lVar2;
  lVar2 = lVar2 - ((ulong)*(uint *)(unaff_x29 + -0x2c) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x48) = lVar2;
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x48);
  *(ulong *)(unaff_x29 + -0x58) = lVar2 - ((ulong)*(uint *)(unaff_x29 + -0x2c) + 0xf & 0x1fffffff0);
  memset(*(void **)(unaff_x29 + -0x58),*(int *)(unaff_x29 + -0xb4),
         (ulong)*(uint *)(unaff_x29 + -0x2c));
  *(undefined8 *)(unaff_x29 + -0x60) = **(undefined8 **)(unaff_x29 + -0xb0);
  if (*(long *)(unaff_x29 + -0x60) == 0) {
    *(undefined4 *)(unaff_x29 + -0xc) = 1;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x68) = **(undefined8 **)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x68);
    lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
    pIVar4 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(lVar2 + 0xc0),1);
    lVar2 = IsInstSealed(*(Il2CppObject **)(unaff_x29 + -0xc0),pIVar4);
    if (lVar2 == 0) {
      il2cpp_codegen_memcpy
                (*(void **)(unaff_x29 + -0x48),*(void **)(*(long *)(unaff_x29 + -0xb0) + 8),
                 (ulong)*(uint *)(unaff_x29 + -0x2c));
      lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
      pIVar4 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar2 + 0xc0),1);
      uVar7 = Box(pIVar4,*(void **)(unaff_x29 + -0x48));
      *(undefined8 *)(unaff_x29 + -0x70) = uVar7;
      *(undefined8 *)(unaff_x29 + -0xd0) = 0;
      uVar7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3
                        (*(undefined8 *)(unaff_x29 + -0x70));
      *(undefined8 *)(unaff_x29 + -0x78) = uVar7;
      NullCheck(*(void **)(unaff_x29 + -0x78));
      uVar7 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(unaff_x29 + -0x78));
      *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
      uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_Collections_Generic_Stack<string>__ctor__);
      uVar7 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09
                        (uVar7,*(undefined8 *)(unaff_x29 + -0x80),*(undefined8 *)(unaff_x29 + -0xd0)
                        );
      *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
      pIVar4 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                         );
      uVar7 = il2cpp_codegen_object_new(pIVar4);
      *(undefined8 *)(unaff_x29 + -0x90) = uVar7;
      *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0x90);
      *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x88);
      uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_Unity_Collections_NativeArray<int2>_get_IsCreated__);
      ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62
                (*(undefined8 *)(unaff_x29 + -200),*(undefined8 *)(unaff_x29 + -0xd8),uVar7,
                 *(undefined8 *)(unaff_x29 + -0xd0));
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception
                (*(Exception_t **)(unaff_x29 + -0x90),*(MethodInfo **)(unaff_x29 + -0x28));
    }
    *(undefined8 *)(unaff_x29 + -0x98) = **(undefined8 **)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0x118) = *(undefined8 *)(unaff_x29 + -0x58);
    *(undefined8 *)(unaff_x29 + -0x120) = *(undefined8 *)(unaff_x29 + -0x98);
    lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
    pIVar3 = *(Il2CppRGCTXData **)(lVar2 + 0xc0);
    *(undefined4 *)(unaff_x29 + -0xfc) = 1;
    pIVar4 = (Il2CppClass *)il2cpp_rgctx_data(pIVar3,1);
    pvVar5 = (void *)UnBox(*(Il2CppObject **)(unaff_x29 + -0x120),pIVar4);
    il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0x118),pvVar5,(ulong)*(uint *)(unaff_x29 + -0x2c))
    ;
    lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
    pMVar6 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar2 + 0xc0),8);
    uVar7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(pMVar6);
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar7;
    *(undefined8 *)(unaff_x29 + -0x108) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x110) = *(undefined8 *)(*(long *)(unaff_x29 + -0xb0) + 8);
    lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
    pIVar4 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init
                       (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0xfc));
    *(undefined4 *)(unaff_x29 + -0xdc) = 0;
    pFVar8 = (FieldInfo *)il2cpp_rgctx_field(pIVar4,0);
    pvVar5 = (void *)il2cpp_codegen_get_instance_field_data_pointer
                               (*(void **)(unaff_x29 + -0x110),pFVar8);
    il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0x108),pvVar5,(ulong)*(uint *)(unaff_x29 + -0x30))
    ;
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x29 + -0x50),*(void **)(unaff_x29 + -0x58),
               (ulong)*(uint *)(unaff_x29 + -0x2c));
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0x50);
    lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
    pIVar4 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init
                       (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0xfc));
    pFVar8 = (FieldInfo *)il2cpp_rgctx_field(pIVar4,*(int *)(unaff_x29 + -0xdc));
    pvVar5 = (void *)il2cpp_codegen_get_instance_field_data_pointer
                               (*(void **)(unaff_x29 + -0xf8),pFVar8);
    il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0xf0),pvVar5,(ulong)*(uint *)(unaff_x29 + -0x30));
    NullCheck(*(void **)(unaff_x29 + -0xa0));
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xa0);
    lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
    pIVar4 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init
                       (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0xdc));
    uVar9 = il2cpp_codegen_class_is_value_type(pIVar4);
    if ((uVar9 & 1) == 0) {
      *(undefined8 *)(unaff_x29 + -0x128) = **(undefined8 **)(unaff_x29 + -0x38);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x128) = *(undefined8 *)(unaff_x29 + -0x38);
    }
    *(undefined8 *)(unaff_x29 + -0x130) = *(undefined8 *)(unaff_x29 + -0x128);
    lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x28) + 0x20));
    pIVar4 = (Il2CppClass *)il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(lVar2 + 0xc0),0);
    uVar9 = il2cpp_codegen_class_is_value_type(pIVar4);
    if ((uVar9 & 1) == 0) {
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
  }
  *(undefined4 *)(unaff_x29 + -0x13c) = *(undefined4 *)(unaff_x29 + -0xc);
  lVar2 = tpidr_el0;
  lVar2 = *(long *)(lVar2 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar2 == 0) {
    return *(undefined4 *)(unaff_x29 + -0x13c);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


