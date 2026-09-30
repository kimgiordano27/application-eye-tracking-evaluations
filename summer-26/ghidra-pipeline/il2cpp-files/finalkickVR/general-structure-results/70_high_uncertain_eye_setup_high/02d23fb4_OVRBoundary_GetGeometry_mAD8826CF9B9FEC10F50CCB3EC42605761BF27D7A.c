/*
FUNCTION_NAME: OVRBoundary_GetGeometry_mAD8826CF9B9FEC10F50CCB3EC42605761BF27D7A
ENTRY_POINT: 02d23fb4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void * OVRBoundary_GetGeometry_mAD8826CF9B9FEC10F50CCB3EC42605761BF27D7A
                 (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  OVRNativeBuffer_tEBEDDBFD193B5EE2FE1E0C1B22AA823FB3703915 *pOVar12;
  void *pvVar13;
  undefined8 uVar14;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *pSVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int local_5c;
  void *local_58;
  uint local_4c;
  int local_48;
  uint local_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  
  puVar4 = Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_1__;
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<InternedString,_Func<InputControlLayout>>_GetEnumerator__
  ;
  local_40 = param_3;
  local_34 = param_2;
  local_30 = param_1;
  if ((OVRBoundary_GetGeometry_mAD8826CF9B9FEC10F50CCB3EC42605761BF27D7A::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_<>c_<BeginEndWriteAsync>b__58_0__);
    OVRBoundary_GetGeometry_mAD8826CF9B9FEC10F50CCB3EC42605761BF27D7A::s_Il2CppMethodInitialized = 1
    ;
  }
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_58 = (void *)0x0;
  local_5c = 0;
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar16 = local_34;
  if (*(int *)(lVar9 + 0x100) == 1) {
    local_44 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar6 = OVRPlugin_GetBoundaryGeometry2_m17D8F2B206A7FEE004630496DF3C185E35342EAD
                      (uVar16,0,&local_44,0);
    uVar5 = local_44;
    if (((bVar6 & 1) != 0) && (0 < (int)local_44)) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      piVar10 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      local_48 = il2cpp_codegen_multiply<int,int>(uVar5,*piVar10);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      pOVar12 = *(OVRNativeBuffer_tEBEDDBFD193B5EE2FE1E0C1B22AA823FB3703915 **)(lVar9 + 8);
      NullCheck(pOVar12);
      iVar7 = OVRNativeBuffer_GetCapacity_m388215B1A6727C487815D040FE7DF9E91B2EA1AF_inline
                        (pOVar12,(MethodInfo *)0x0);
      if (iVar7 < local_48) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        iVar7 = local_48;
        pvVar13 = *(void **)(lVar9 + 8);
        NullCheck(pvVar13);
        OVRNativeBuffer_Reset_m65A403E428F766CF99119FFDDC3824A856F6B45A(pvVar13,iVar7,0);
      }
      local_4c = il2cpp_codegen_multiply<int,int>(local_44,3);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      pvVar13 = *(void **)(lVar9 + 0x10);
      NullCheck(pvVar13);
      if ((int)*(undefined8 *)((long)pvVar13 + 0x18) < (int)local_4c) {
        pvVar13 = (void *)SZArrayNew(*(Il2CppClass **)
                                      Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__
                                     ,local_4c);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        *(void **)(lVar9 + 0x10) = pvVar13;
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        Il2CppCodeGenWriteBarrier((void **)(lVar9 + 0x10),pvVar13);
      }
      uVar16 = local_34;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      pvVar13 = *(void **)(lVar9 + 8);
      NullCheck(pvVar13);
      uVar11 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7(pvVar13,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      bVar6 = OVRPlugin_GetBoundaryGeometry2_m17D8F2B206A7FEE004630496DF3C185E35342EAD
                        (uVar16,uVar11,&local_44,0);
      if ((bVar6 & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        pvVar13 = *(void **)(lVar9 + 8);
        NullCheck(pvVar13);
        uVar11 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7(pvVar13);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        uVar5 = local_4c;
        uVar14 = *(undefined8 *)(lVar9 + 0x10);
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__
                  );
        Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(uVar11,uVar14,0,uVar5,0);
        local_58 = (void *)SZArrayNew(*(Il2CppClass **)puVar1,local_44);
        for (local_5c = 0; pvVar13 = local_58, iVar7 = local_5c, local_5c < (int)local_44;
            local_5c = il2cpp_codegen_add<int,int>(local_5c,1)) {
          il2cpp_codegen_initobj(&local_68,0xc);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
          lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          iVar8 = local_5c;
          pSVar15 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(lVar9 + 0x10);
          NullCheck(pSVar15);
          iVar8 = il2cpp_codegen_multiply<int,int>(3,iVar8);
          uVar16 = SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt
                             (pSVar15,(long)iVar8);
          _local_68 = CONCAT44(uStack_64,uVar16);
          lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          iVar8 = local_5c;
          pSVar15 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(lVar9 + 0x10);
          NullCheck(pSVar15);
          iVar8 = il2cpp_codegen_multiply<int,int>(3,iVar8);
          iVar8 = il2cpp_codegen_add<int,int>(iVar8,1);
          uVar16 = SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt
                             (pSVar15,(long)iVar8);
          uStack_64 = uVar16;
          lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          iVar8 = local_5c;
          pSVar15 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)(lVar9 + 0x10);
          NullCheck(pSVar15);
          iVar8 = il2cpp_codegen_multiply<int,int>(3,iVar8);
          iVar8 = il2cpp_codegen_add<int,int>(iVar8,2);
          uVar17 = SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt
                             (pSVar15,(long)iVar8);
          uVar16 = uStack_64;
          local_60 = uVar17;
          uVar18 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                             (local_68,0);
          NullCheck(pvVar13);
          Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C::SetAt
                    (uVar18,uVar16,uVar17,pvVar13,(long)iVar7);
        }
        return local_58;
      }
    }
    local_28 = (void *)SZArrayNew(*(Il2CppClass **)puVar1,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)Method_System_IO_Stream_<>c_<BeginEndWriteAsync>b__58_0__,0);
    local_28 = (void *)0x0;
  }
  return local_28;
}


