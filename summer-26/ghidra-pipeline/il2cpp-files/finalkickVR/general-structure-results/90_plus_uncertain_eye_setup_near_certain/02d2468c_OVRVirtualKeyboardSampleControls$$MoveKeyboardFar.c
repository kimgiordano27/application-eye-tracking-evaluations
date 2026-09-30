/*
FUNCTION_NAME: OVRVirtualKeyboardSampleControls$$MoveKeyboardFar
ENTRY_POINT: 02d2468c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRVirtualKeyboardSampleControls__MoveKeyboardFar
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  float *pfVar8;
  Il2CppClass *pIVar9;
  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *pLVar10;
  void *pvVar11;
  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *pIVar12;
  long unaff_x29;
  undefined4 uVar13;
  int iStack000000000000000c;
  int iStack00000000000000b4;
  undefined8 *in_stack_000000d0;
  ulong *in_stack_000000d8;
  ulong *in_stack_000000e0;
  ulong *in_stack_000000e8;
  int iStack000000000000012c;
  int iStack00000000000001bc;
  undefined4 uStack00000000000001c8;
  undefined8 in_stack_000001d0;
  float fStack00000000000001d8;
  int iStack00000000000001dc;
  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *in_stack_000001e0;
  int iStack00000000000001e8;
  int iStack00000000000001ec;
  
  il2cpp_codegen_initialize_runtime_metadata(param_4);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_000000d8);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_000000e0);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Clear__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_Dictionary<long,_ScheduledInvocation>_Remove__);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_000000e8);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_Dictionary<InternedString,_Func<InputControlLayout>>_GetEnumerator__
            );
  OVRCompositionUtil_BuildBoundaryMesh_m00B88D8AD877B639AFCEA5DD7E0BB78C0C154094::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined4 *)(unaff_x29 + -0x4c) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined4 *)(unaff_x29 + -0x50) = 0;
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e8);
  uVar7 = OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                    ((MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x68) = uVar7;
  NullCheck(*(void **)(unaff_x29 + -0x68));
  bVar1 = OVRBoundary_GetConfigured_mE96370A2BF117D897B0893A9A3BF5BE3F2CA4D86
                    (*(undefined8 *)(unaff_x29 + -0x68),0);
  *(byte *)(unaff_x29 + -0x69) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x69) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e8);
    uVar7 = OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                      ((MethodInfo *)0x0);
    *(undefined8 *)(unaff_x29 + -0x78) = uVar7;
    *(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(unaff_x29 + -0xc);
    NullCheck(*(void **)(unaff_x29 + -0x78));
    uVar7 = OVRBoundary_GetGeometry_mAD8826CF9B9FEC10F50CCB3EC42605761BF27D7A
                      (*(undefined8 *)(unaff_x29 + -0x78),*(undefined4 *)(unaff_x29 + -0x7c),0);
    *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
    uVar7 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Clear__
                      );
    *(undefined8 *)(unaff_x29 + -0x90) = uVar7;
    List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD
              (*(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B **)(unaff_x29 + -0x90),
               *(Il2CppObject **)(unaff_x29 + -0x88),
               *(MethodInfo **)Method_System_Collections_Generic_List<PlayerLoopSystem>__ctor__);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x28);
    NullCheck(*(void **)(unaff_x29 + -0x98));
    uVar2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline
                      (*(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B **)(unaff_x29 + -0x98),
                       (MethodInfo *)*in_stack_000000d8);
    *(undefined4 *)(unaff_x29 + -0x9c) = uVar2;
    if (*(int *)(unaff_x29 + -0x9c) == 0) {
      *(undefined8 *)(unaff_x29 + -8) = 0;
    }
    else {
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x28);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x28);
      NullCheck(*(void **)(unaff_x29 + -0xb0));
      uVar2 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810
                        (*(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B **)(unaff_x29 + -0xb0),0
                         ,(MethodInfo *)*in_stack_000000e0);
      *(undefined4 *)(unaff_x29 + -0xcc) = uVar2;
      *(undefined4 *)(unaff_x29 + -200) = param_2;
      *(undefined4 *)(unaff_x29 + -0xc4) = param_3;
      *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_000000d0[0xb];
      *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0xc4);
      NullCheck(*(void **)(unaff_x29 + -0xa8));
      *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0xc0);
      *(undefined4 *)(unaff_x29 + -0xd0) = *(undefined4 *)(unaff_x29 + -0xb8);
      uVar13 = *(undefined4 *)(unaff_x29 + -0xd0);
      List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline
                (*(undefined4 *)(unaff_x29 + -0xd8),*(undefined8 *)(unaff_x29 + -0xa8),
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_get_size__
                );
      *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x28);
      NullCheck(*(void **)(unaff_x29 + -0xe0));
      uVar2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline
                        (*(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B **)(unaff_x29 + -0xe0),
                         (MethodInfo *)*in_stack_000000d8);
      *(undefined4 *)(unaff_x29 + -0xe4) = uVar2;
      *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + -0xe4);
      *(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x29 + -0x2c);
      pIVar9 = *(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<InternedString,_Func<InputControlLayout>>_GetEnumerator__
      ;
      iStack00000000000000b4 = 2;
      uVar3 = il2cpp_codegen_multiply<int,int>(*(int *)(unaff_x29 + -0xe8),2);
      uVar7 = SZArrayNew(pIVar9,uVar3);
      *(undefined8 *)(unaff_x29 + -0xf0) = uVar7;
      *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0xf0);
      *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0x2c);
      pIVar9 = *(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__;
      uVar3 = il2cpp_codegen_multiply<int,int>(*(int *)(unaff_x29 + -0xf4),iStack00000000000000b4);
      uVar7 = SZArrayNew(pIVar9,uVar3);
      *(undefined8 *)(unaff_x29 + -0x100) = uVar7;
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x100);
      *(undefined4 *)(unaff_x29 + -0x4c) = 0;
      while( true ) {
        iStack00000000000001bc = *(int *)(unaff_x29 + -0x2c);
        if (iStack00000000000001bc <= *(int *)(unaff_x29 + -0x4c)) break;
        pLVar10 = *(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B **)(unaff_x29 + -0x28);
        iVar4 = *(int *)(unaff_x29 + -0x4c);
        NullCheck(pLVar10);
        List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810
                  (pLVar10,iVar4,(MethodInfo *)*in_stack_000000e0);
        *(undefined8 *)(unaff_x29 + -0x58) = *in_stack_000000d0;
        *(undefined4 *)(unaff_x29 + -0x50) = uVar13;
        pvVar11 = *(void **)(unaff_x29 + -0x38);
        iVar4 = *(int *)(unaff_x29 + -0x4c);
        Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                  (&stack0x00000288,(float)*(undefined8 *)(unaff_x29 + -0x58),
                   *(float *)(unaff_x29 + -0x14),*(float *)(unaff_x29 + -0x50),(MethodInfo *)0x0);
        NullCheck(pvVar11);
        Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C::SetAt(0,0,0,pvVar11,(long)iVar4);
        pvVar11 = *(void **)(unaff_x29 + -0x38);
        iVar4 = *(int *)(unaff_x29 + -0x4c);
        iVar6 = *(int *)(unaff_x29 + -0x2c);
        Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                  (&stack0x00000230,(float)*(undefined8 *)(unaff_x29 + -0x58),
                   *(float *)(unaff_x29 + -0x10),*(float *)(unaff_x29 + -0x50),(MethodInfo *)0x0);
        NullCheck(pvVar11);
        iVar4 = il2cpp_codegen_add<int,int>(iVar4,iVar6);
        uVar13 = 0;
        Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C::SetAt(0,0,pvVar11,(long)iVar4);
        pvVar11 = *(void **)(unaff_x29 + -0x40);
        iVar4 = *(int *)(unaff_x29 + -0x4c);
        iVar6 = *(int *)(unaff_x29 + -0x4c);
        iVar5 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x2c),1);
        Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline
                  (&stack0x00000200,(float)iVar6 / (float)iVar5,0.0,(MethodInfo *)0x0);
        NullCheck(pvVar11);
        Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA::SetAt(0,0,pvVar11,(long)iVar4);
        pvVar11 = *(void **)(unaff_x29 + -0x40);
        iStack00000000000001ec = *(int *)(unaff_x29 + -0x4c);
        iStack00000000000001e8 = *(int *)(unaff_x29 + -0x2c);
        in_stack_000001e0 =
             *(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA **)(unaff_x29 + -0x40);
        iStack00000000000001dc = *(int *)(unaff_x29 + -0x4c);
        NullCheck(in_stack_000001e0);
        pfVar8 = (float *)Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA::GetAddressAt
                                    (in_stack_000001e0,(long)iStack00000000000001dc);
        fStack00000000000001d8 = *pfVar8;
        in_stack_000001d0 = 0;
        Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline
                  ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 *)&stack0x000001d0,
                   fStack00000000000001d8,1.0,(MethodInfo *)0x0);
        NullCheck(pvVar11);
        iVar4 = il2cpp_codegen_add<int,int>(iStack00000000000001ec,iStack00000000000001e8);
        uStack00000000000001c8 = (undefined4)in_stack_000001d0;
        Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA::SetAt
                  (uStack00000000000001c8,pvVar11,(long)iVar4);
        uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x4c),1);
        *(undefined4 *)(unaff_x29 + -0x4c) = uVar2;
      }
      pIVar9 = *(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>__ctor__
      ;
      iVar4 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x2c),1);
      iVar4 = il2cpp_codegen_multiply<int,int>(iVar4,2);
      uVar3 = il2cpp_codegen_multiply<int,int>(iVar4,3);
      uVar7 = SZArrayNew(pIVar9,uVar3);
      *(undefined8 *)(unaff_x29 + -0x48) = uVar7;
      *(undefined4 *)(unaff_x29 + -0x5c) = 0;
      while( true ) {
        iStack000000000000000c = *(int *)(unaff_x29 + -0x5c);
        iStack000000000000012c = *(int *)(unaff_x29 + -0x2c);
        iVar4 = il2cpp_codegen_subtract<int,int>(iStack000000000000012c,1);
        if (iVar4 <= iStack000000000000000c) break;
        pIVar12 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C **)(unaff_x29 + -0x48);
        iVar4 = *(int *)(unaff_x29 + -0x5c);
        iVar6 = *(int *)(unaff_x29 + -0x5c);
        NullCheck(pIVar12);
        iVar4 = il2cpp_codegen_multiply<int,int>(iVar4,6);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar12,(long)iVar4,iVar6);
        pIVar12 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C **)(unaff_x29 + -0x48);
        iVar4 = *(int *)(unaff_x29 + -0x5c);
        iVar6 = *(int *)(unaff_x29 + -0x5c);
        iVar5 = *(int *)(unaff_x29 + -0x2c);
        NullCheck(pIVar12);
        iVar4 = il2cpp_codegen_multiply<int,int>(iVar4,6);
        iVar4 = il2cpp_codegen_add<int,int>(iVar4,1);
        iVar6 = il2cpp_codegen_add<int,int>(iVar6,iVar5);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar12,(long)iVar4,iVar6);
        pIVar12 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C **)(unaff_x29 + -0x48);
        iVar4 = *(int *)(unaff_x29 + -0x5c);
        iVar6 = *(int *)(unaff_x29 + -0x5c);
        iVar5 = *(int *)(unaff_x29 + -0x2c);
        NullCheck(pIVar12);
        iVar4 = il2cpp_codegen_multiply<int,int>(iVar4,6);
        iVar4 = il2cpp_codegen_add<int,int>(iVar4,2);
        iVar6 = il2cpp_codegen_add<int,int>(iVar6,1);
        iVar6 = il2cpp_codegen_add<int,int>(iVar6,iVar5);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar12,(long)iVar4,iVar6);
        pIVar12 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C **)(unaff_x29 + -0x48);
        iVar4 = *(int *)(unaff_x29 + -0x5c);
        iVar6 = *(int *)(unaff_x29 + -0x5c);
        NullCheck(pIVar12);
        iVar4 = il2cpp_codegen_multiply<int,int>(iVar4,6);
        iVar4 = il2cpp_codegen_add<int,int>(iVar4,3);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar12,(long)iVar4,iVar6);
        pIVar12 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C **)(unaff_x29 + -0x48);
        iVar4 = *(int *)(unaff_x29 + -0x5c);
        iVar6 = *(int *)(unaff_x29 + -0x5c);
        iVar5 = *(int *)(unaff_x29 + -0x2c);
        NullCheck(pIVar12);
        iVar4 = il2cpp_codegen_multiply<int,int>(iVar4,6);
        iVar4 = il2cpp_codegen_add<int,int>(iVar4,4);
        iVar6 = il2cpp_codegen_add<int,int>(iVar6,1);
        iVar6 = il2cpp_codegen_add<int,int>(iVar6,iVar5);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar12,(long)iVar4,iVar6);
        pIVar12 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C **)(unaff_x29 + -0x48);
        iVar4 = *(int *)(unaff_x29 + -0x5c);
        iVar6 = *(int *)(unaff_x29 + -0x5c);
        NullCheck(pIVar12);
        iVar4 = il2cpp_codegen_multiply<int,int>(iVar4,6);
        iVar4 = il2cpp_codegen_add<int,int>(iVar4,5);
        iVar6 = il2cpp_codegen_add<int,int>(iVar6,1);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar12,(long)iVar4,iVar6);
        uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x5c),1);
        *(undefined4 *)(unaff_x29 + -0x5c) = uVar2;
      }
      pvVar11 = (void *)il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_System_Collections_Generic_Dictionary<long,_ScheduledInvocation>_Remove__
                                  );
      Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(pvVar11);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x38);
      NullCheck(pvVar11);
      Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(pvVar11,uVar7,0);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x40);
      NullCheck(pvVar11);
      Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(pvVar11,uVar7,0);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x48);
      NullCheck(pvVar11);
      Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(pvVar11,uVar7,0);
      *(void **)(unaff_x29 + -8) = pvVar11;
    }
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


