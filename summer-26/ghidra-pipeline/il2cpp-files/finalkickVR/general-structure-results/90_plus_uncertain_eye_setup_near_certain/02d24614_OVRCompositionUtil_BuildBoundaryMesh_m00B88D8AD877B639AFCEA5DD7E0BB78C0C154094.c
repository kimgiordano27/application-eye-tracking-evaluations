/*
FUNCTION_NAME: OVRCompositionUtil_BuildBoundaryMesh_m00B88D8AD877B639AFCEA5DD7E0BB78C0C154094
ENTRY_POINT: 02d24614
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void * OVRCompositionUtil_BuildBoundaryMesh_m00B88D8AD877B639AFCEA5DD7E0BB78C0C154094
                 (float param_1,float param_2,float param_3,undefined4 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *pVVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *pIVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  void *pvVar15;
  Il2CppClass *pIVar16;
  float fVar17;
  float fVar18;
  undefined4 local_248;
  float fStack_244;
  undefined8 local_240;
  float local_238;
  int local_234;
  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *local_230;
  int local_228;
  int local_224;
  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *local_220;
  undefined8 local_218;
  undefined8 local_210;
  int local_204;
  int local_200;
  int local_1fc;
  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *local_1f8;
  undefined8 local_1f0;
  float local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  undefined8 local_1b8;
  float local_1b0;
  int local_1a8;
  int local_1a4;
  void *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  float local_17c;
  undefined8 local_178;
  float local_170;
  float local_168;
  float local_164;
  undefined8 local_160;
  float local_158;
  int local_154;
  void *local_150;
  float local_144;
  float fStack_140;
  float local_13c;
  undefined8 local_138;
  float local_130;
  int local_12c;
  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *local_128;
  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *local_120;
  int local_114;
  void *local_110;
  int local_108;
  int local_104;
  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *local_100;
  undefined4 local_f8;
  float fStack_f4;
  float local_f0;
  undefined4 local_ec;
  float fStack_e8;
  float local_e4;
  undefined4 local_e0;
  float fStack_dc;
  float local_d8;
  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *local_d0;
  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *local_c8;
  int local_bc;
  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *local_b8;
  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *local_b0;
  Il2CppObject *local_a8;
  undefined4 local_9c;
  void *local_98;
  byte local_89;
  void *local_88;
  int local_7c;
  undefined8 local_78;
  float local_70;
  int local_6c;
  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *local_68;
  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *local_60;
  void *local_58;
  int local_4c;
  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *local_48;
  undefined8 local_40;
  float local_34;
  float local_30;
  undefined4 local_2c;
  void *local_28;
  
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
  ;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_Add__
  ;
  local_40 = param_5;
  local_34 = param_2;
  local_30 = param_1;
  local_2c = param_4;
  if ((OVRCompositionUtil_BuildBoundaryMesh_m00B88D8AD877B639AFCEA5DD7E0BB78C0C154094::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_get_size__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<PlayerLoopSystem>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<long,_ScheduledInvocation>_Remove__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<InternedString,_Func<InputControlLayout>>_GetEnumerator__
              );
    OVRCompositionUtil_BuildBoundaryMesh_m00B88D8AD877B639AFCEA5DD7E0BB78C0C154094::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *)0x0;
  local_4c = 0;
  local_58 = (void *)0x0;
  local_60 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *)0x0;
  local_68 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)0x0;
  local_6c = 0;
  local_78 = 0;
  local_70 = 0.0;
  local_7c = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  local_88 = (void *)OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                               ((MethodInfo *)0x0);
  NullCheck(local_88);
  local_89 = OVRBoundary_GetConfigured_mE96370A2BF117D897B0893A9A3BF5BE3F2CA4D86(local_88,0);
  local_89 = local_89 & 1;
  if (local_89 == 0) {
    local_28 = (void *)0x0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_98 = (void *)OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                                 ((MethodInfo *)0x0);
    local_9c = local_2c;
    NullCheck(local_98);
    local_a8 = (Il2CppObject *)
               OVRBoundary_GetGeometry_mAD8826CF9B9FEC10F50CCB3EC42605761BF27D7A
                         (local_98,local_9c,0);
    local_b0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *)
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Clear__
                         );
    List_1__ctor_mC734A32FAD92BD7492907D4733032FD21348EECD
              (local_b0,local_a8,
               *(MethodInfo **)Method_System_Collections_Generic_List<PlayerLoopSystem>__ctor__);
    local_48 = local_b0;
    local_b8 = local_b0;
    NullCheck(local_b0);
    local_bc = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline
                         (local_b8,*(MethodInfo **)puVar1);
    if (local_bc == 0) {
      local_28 = (void *)0x0;
    }
    else {
      local_c8 = local_48;
      local_d0 = local_48;
      NullCheck(local_48);
      local_ec = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810
                           (local_d0,0,*(MethodInfo **)puVar2);
      fStack_e8 = param_2;
      local_e4 = param_3;
      local_d8 = param_3;
      local_e0 = local_ec;
      fStack_dc = param_2;
      NullCheck(local_c8);
      local_f8 = local_e0;
      fStack_f4 = fStack_dc;
      local_f0 = local_d8;
      fStack_244 = fStack_dc;
      fVar18 = local_d8;
      List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline
                (local_e0,local_c8,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_get_size__
                );
      local_100 = local_48;
      NullCheck(local_48);
      local_108 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline
                            (local_100,*(MethodInfo **)puVar1);
      pIVar16 = *(Il2CppClass **)
                 Method_System_Collections_Generic_Dictionary<InternedString,_Func<InputControlLayout>>_GetEnumerator__
      ;
      local_104 = local_108;
      local_4c = local_108;
      uVar10 = il2cpp_codegen_multiply<int,int>(local_108,2);
      local_110 = (void *)SZArrayNew(pIVar16,uVar10);
      local_114 = local_4c;
      pIVar16 = *(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__;
      local_58 = local_110;
      uVar10 = il2cpp_codegen_multiply<int,int>(local_4c,2);
      local_120 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA *)
                  SZArrayNew(pIVar16,uVar10);
      local_6c = 0;
      local_60 = local_120;
      while( true ) {
        if (local_4c <= local_6c) break;
        local_128 = local_48;
        local_12c = local_6c;
        NullCheck(local_48);
        local_164 = (float)List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810
                                     (local_128,local_12c,*(MethodInfo **)puVar2);
        local_178 = CONCAT44(fStack_244,local_164);
        local_150 = local_58;
        local_154 = local_6c;
        local_168 = local_34;
        local_188 = 0;
        local_180 = 0;
        local_17c = fVar18;
        local_170 = fVar18;
        local_160 = local_178;
        local_158 = fVar18;
        local_144 = local_164;
        fStack_140 = fStack_244;
        local_13c = fVar18;
        local_138 = local_178;
        local_130 = fVar18;
        local_78 = local_178;
        local_70 = fVar18;
        Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                  ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_188,local_164,
                   local_34,fVar18,(MethodInfo *)0x0);
        NullCheck(local_150);
        local_198 = local_188;
        uVar6 = local_198;
        local_190 = local_180;
        local_198._0_4_ = (undefined4)local_188;
        uVar5 = (undefined4)local_198;
        local_198._4_4_ = (undefined4)((ulong)local_188 >> 0x20);
        uVar7 = local_198._4_4_;
        local_198 = uVar6;
        Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C::SetAt
                  (uVar5,uVar7,local_180,local_150,(long)local_154);
        local_1a0 = local_58;
        local_1a4 = local_6c;
        local_1a8 = local_4c;
        local_1b8 = local_78;
        uVar6 = local_1b8;
        local_1b0 = local_70;
        local_1b8._0_4_ = (float)local_78;
        fVar18 = (float)local_1b8;
        local_1bc = (float)local_1b8;
        local_1c0 = local_30;
        local_1d0 = local_78;
        local_1c8 = local_70;
        local_1d4 = local_70;
        local_1e0 = 0;
        local_1d8 = 0.0;
        local_1b8 = uVar6;
        Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                  ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_1e0,fVar18,local_30,
                   local_70,(MethodInfo *)0x0);
        NullCheck(local_1a0);
        pvVar8 = local_1a0;
        iVar11 = il2cpp_codegen_add<int,int>(local_1a4,local_1a8);
        local_1f0 = local_1e0;
        uVar6 = local_1f0;
        local_1e8 = local_1d8;
        local_1f0._0_4_ = (undefined4)local_1e0;
        uVar5 = (undefined4)local_1f0;
        local_1f0._4_4_ = (undefined4)((ulong)local_1e0 >> 0x20);
        uVar7 = local_1f0._4_4_;
        fVar18 = local_1d8;
        local_1f0 = uVar6;
        Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C::SetAt
                  (uVar5,uVar7,pvVar8,(long)iVar11);
        local_1f8 = local_60;
        local_1fc = local_6c;
        local_200 = local_6c;
        local_204 = local_4c;
        local_210 = 0;
        fVar17 = (float)local_6c;
        iVar11 = il2cpp_codegen_subtract<int,int>(local_4c,1);
        Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline
                  ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 *)&local_210,
                   fVar17 / (float)iVar11,0.0,(MethodInfo *)0x0);
        NullCheck(local_1f8);
        local_218 = local_210;
        uVar6 = local_218;
        local_218._0_4_ = (undefined4)local_210;
        uVar5 = (undefined4)local_218;
        local_218._4_4_ = (undefined4)((ulong)local_210 >> 0x20);
        uVar7 = local_218._4_4_;
        local_218 = uVar6;
        Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA::SetAt
                  (uVar5,uVar7,local_1f8,(long)local_1fc);
        local_220 = local_60;
        local_224 = local_6c;
        local_228 = local_4c;
        local_230 = local_60;
        local_234 = local_6c;
        NullCheck(local_60);
        pfVar14 = (float *)Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA::GetAddressAt
                                     (local_230,(long)local_234);
        local_238 = *pfVar14;
        local_240 = 0;
        Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline
                  ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 *)&local_240,local_238,1.0,
                   (MethodInfo *)0x0);
        NullCheck(local_220);
        pVVar4 = local_220;
        iVar11 = il2cpp_codegen_add<int,int>(local_224,local_228);
        local_248 = (undefined4)local_240;
        fStack_244 = (float)((ulong)local_240 >> 0x20);
        Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA::SetAt
                  (local_248,pVVar4,(long)iVar11);
        local_6c = il2cpp_codegen_add<int,int>(local_6c,1);
      }
      pIVar16 = *(Il2CppClass **)
                 Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>__ctor__
      ;
      iVar11 = il2cpp_codegen_subtract<int,int>(local_4c,1);
      iVar11 = il2cpp_codegen_multiply<int,int>(iVar11,2);
      uVar10 = il2cpp_codegen_multiply<int,int>(iVar11,3);
      local_68 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)SZArrayNew(pIVar16,uVar10)
      ;
      local_7c = 0;
      while( true ) {
        iVar11 = local_7c;
        iVar13 = il2cpp_codegen_subtract<int,int>(local_4c,1);
        pIVar9 = local_68;
        iVar12 = local_7c;
        if (iVar13 <= iVar11) break;
        NullCheck(local_68);
        iVar11 = il2cpp_codegen_multiply<int,int>(iVar12,6);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar9,(long)iVar11,iVar12);
        iVar12 = local_4c;
        pIVar9 = local_68;
        iVar11 = local_7c;
        NullCheck(local_68);
        iVar13 = il2cpp_codegen_multiply<int,int>(iVar11,6);
        iVar13 = il2cpp_codegen_add<int,int>(iVar13,1);
        iVar11 = il2cpp_codegen_add<int,int>(iVar11,iVar12);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar9,(long)iVar13,iVar11);
        iVar12 = local_4c;
        pIVar9 = local_68;
        iVar11 = local_7c;
        NullCheck(local_68);
        iVar13 = il2cpp_codegen_multiply<int,int>(iVar11,6);
        iVar13 = il2cpp_codegen_add<int,int>(iVar13,2);
        iVar11 = il2cpp_codegen_add<int,int>(iVar11,1);
        iVar11 = il2cpp_codegen_add<int,int>(iVar11,iVar12);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar9,(long)iVar13,iVar11);
        pIVar9 = local_68;
        iVar11 = local_7c;
        NullCheck(local_68);
        iVar12 = il2cpp_codegen_multiply<int,int>(iVar11,6);
        iVar12 = il2cpp_codegen_add<int,int>(iVar12,3);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar9,(long)iVar12,iVar11);
        iVar12 = local_4c;
        pIVar9 = local_68;
        iVar11 = local_7c;
        NullCheck(local_68);
        iVar13 = il2cpp_codegen_multiply<int,int>(iVar11,6);
        iVar13 = il2cpp_codegen_add<int,int>(iVar13,4);
        iVar11 = il2cpp_codegen_add<int,int>(iVar11,1);
        iVar11 = il2cpp_codegen_add<int,int>(iVar11,iVar12);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar9,(long)iVar13,iVar11);
        pIVar9 = local_68;
        iVar11 = local_7c;
        NullCheck(local_68);
        iVar12 = il2cpp_codegen_multiply<int,int>(iVar11,6);
        iVar12 = il2cpp_codegen_add<int,int>(iVar12,5);
        iVar11 = il2cpp_codegen_add<int,int>(iVar11,1);
        Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt(pIVar9,(long)iVar12,iVar11);
        local_7c = il2cpp_codegen_add<int,int>(local_7c,1);
      }
      pvVar15 = (void *)il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_System_Collections_Generic_Dictionary<long,_ScheduledInvocation>_Remove__
                                  );
      Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(pvVar15);
      pvVar8 = local_58;
      NullCheck(pvVar15);
      Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(pvVar15,pvVar8,0);
      pVVar4 = local_60;
      NullCheck(pvVar15);
      Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(pvVar15,pVVar4,0);
      pIVar9 = local_68;
      NullCheck(pvVar15);
      Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(pvVar15,pIVar9,0);
      local_28 = pvVar15;
    }
  }
  return local_28;
}


