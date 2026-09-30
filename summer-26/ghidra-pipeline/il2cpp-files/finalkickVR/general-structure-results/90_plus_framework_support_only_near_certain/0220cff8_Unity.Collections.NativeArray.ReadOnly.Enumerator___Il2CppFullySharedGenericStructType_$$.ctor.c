/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 0220cff8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<__Il2CppFullySharedGenericStructType>___ctor
               (void)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  Il2CppRGCTXData *pIVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  undefined8 uVar7;
  MethodInfo *pMVar8;
  undefined8 *puVar9;
  long unaff_x29;
  undefined8 uVar10;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  il2cpp_rgctx_method_init(*(MethodInfo **)(unaff_x29 + -0x28));
  pIVar4 = *(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38);
  *(undefined4 *)(unaff_x29 + -0xd4) = 1;
  pIVar5 = (Il2CppClass *)il2cpp_rgctx_data_no_init(pIVar4,1);
  uVar3 = il2cpp_codegen_sizeof(pIVar5);
  *(undefined4 *)(unaff_x29 + -0x2c) = uVar3;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38),
                             *(int *)(unaff_x29 + -0xd4));
  uVar6 = Il2CppFakeBoxBuffer::SizeNeededFor(pIVar5);
  lVar1 = (long)&stack0x00000000 - ((uVar6 & 0xffffffff) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x38) = lVar1;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38),
                             *(int *)(unaff_x29 + -0xd4));
  uVar6 = Il2CppFakeBoxBuffer::SizeNeededFor(pIVar5);
  lVar1 = lVar1 - ((uVar6 & 0xffffffff) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x40) = lVar1;
  *(ulong *)(unaff_x29 + -0x48) = lVar1 - ((ulong)*(uint *)(unaff_x29 + -0x2c) + 0xf & 0x1fffffff0);
  *(undefined1 *)(unaff_x29 + -0x4c) = 0;
  *(undefined1 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x20);
  il2cpp_codegen_initobj(*(void **)(unaff_x29 + -0x58),(ulong)*(uint *)(unaff_x29 + -0x2c));
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)Method_System_Nullable<long>__ctor__);
  *(undefined8 *)(unaff_x29 + -200) = 0;
  uVar7 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                    (*(OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 **)(unaff_x29 + -0x18),
                     (MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x60) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x20);
  uVar7 = il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38),
                            *(int *)(unaff_x29 + -0xd4));
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar7;
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38),3);
  uVar3 = ConstrainedFuncInvoker0<int>::Invoke
                    (*(Il2CppClass **)(unaff_x29 + -0xd0),pMVar8,*(void **)(unaff_x29 + -0x38),
                     *(void **)(unaff_x29 + -0x68));
  *(undefined4 *)(unaff_x29 + -0x6c) = uVar3;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_GetSpaceComponentStatusInternal_m3D907B174A4747720BC0268A6586DF5D1C5C2CD4
                    (*(undefined8 *)(unaff_x29 + -0x60),*(undefined4 *)(unaff_x29 + -0x6c),
                     unaff_x29 + -0x4c,unaff_x29 + -0x50,*(undefined8 *)(unaff_x29 + -200));
  *(undefined4 *)(unaff_x29 + -0x70) = uVar3;
  bVar2 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68
                    (*(undefined4 *)(unaff_x29 + -0x70),*(undefined8 *)(unaff_x29 + -200));
  *(byte *)(unaff_x29 + -0x74) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x74) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -9) = 0;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x20);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x20);
    puVar9 = *(undefined8 **)(unaff_x29 + -0x18);
    uVar10 = puVar9[1];
    uVar7 = *puVar9;
    *(undefined8 *)(unaff_x29 + -0x90) = puVar9[2];
    *(undefined8 *)(unaff_x29 + -0x98) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar7;
    pIVar4 = *(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38);
    *(undefined4 *)(unaff_x29 + -0xd8) = 1;
    uVar7 = il2cpp_rgctx_data(pIVar4,1);
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar7;
    uVar7 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38),4);
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xa0);
    ConstrainedActionInvoker2<OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061,void**>::Invoke
              (*(undefined8 *)(unaff_x29 + -0xe0),uVar7,*(undefined8 *)(unaff_x29 + -0x40),
               *(undefined8 *)(unaff_x29 + -0x88),unaff_x29 + -0xc0,
               *(undefined8 *)(unaff_x29 + -0x48));
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x29 + -0x80),*(void **)(unaff_x29 + -0x48),
               (ulong)*(uint *)(unaff_x29 + -0x2c));
    pIVar5 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38),
                               *(int *)(unaff_x29 + -0xd8));
    Il2CppCodeGenWriteBarrierForClass
              (pIVar5,*(void ***)(unaff_x29 + -0x80),*(void **)(unaff_x29 + -0x48));
    *(char *)(unaff_x29 + -9) = (char)*(undefined4 *)(unaff_x29 + -0xd8);
  }
  *(uint *)(unaff_x29 + -0xe4) = (uint)*(byte *)(unaff_x29 + -9);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return *(uint *)(unaff_x29 + -0xe4) & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


