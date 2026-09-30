/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>$$Dispose
ENTRY_POINT: 0220d110
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<__Il2CppFullySharedGenericStructType>__Dispose
               (long param_1)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  MethodInfo *pMVar4;
  Il2CppRGCTXData *pIVar5;
  undefined8 uVar6;
  Il2CppClass *pIVar7;
  undefined8 *puVar8;
  long unaff_x29;
  undefined8 uVar9;
  
  pMVar4 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(param_1 + 0x38),3);
  uVar3 = ConstrainedFuncInvoker0<int>::Invoke
                    (*(Il2CppClass **)(unaff_x29 + -0xd0),pMVar4,*(void **)(unaff_x29 + -0x38),
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
    puVar8 = *(undefined8 **)(unaff_x29 + -0x18);
    uVar9 = puVar8[1];
    uVar6 = *puVar8;
    *(undefined8 *)(unaff_x29 + -0x90) = puVar8[2];
    *(undefined8 *)(unaff_x29 + -0x98) = uVar9;
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar6;
    pIVar5 = *(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38);
    *(undefined4 *)(unaff_x29 + -0xd8) = 1;
    uVar6 = il2cpp_rgctx_data(pIVar5,1);
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar6;
    uVar6 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38),4);
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xa0);
    ConstrainedActionInvoker2<OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061,void**>::Invoke
              (*(undefined8 *)(unaff_x29 + -0xe0),uVar6,*(undefined8 *)(unaff_x29 + -0x40),
               *(undefined8 *)(unaff_x29 + -0x88),unaff_x29 + -0xc0,
               *(undefined8 *)(unaff_x29 + -0x48));
    il2cpp_codegen_memcpy
              (*(void **)(unaff_x29 + -0x80),*(void **)(unaff_x29 + -0x48),
               (ulong)*(uint *)(unaff_x29 + -0x2c));
    pIVar7 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(unaff_x29 + -0x28) + 0x38),
                               *(int *)(unaff_x29 + -0xd8));
    Il2CppCodeGenWriteBarrierForClass
              (pIVar7,*(void ***)(unaff_x29 + -0x80),*(void **)(unaff_x29 + -0x48));
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


