/*
FUNCTION_NAME: OVRPlugin_GetMesh_m41AADDFBD27DBF2B4CFB103CB8C93F00F6BA6E44
ENTRY_POINT: 02dbd1c0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool OVRPlugin_GetMesh_m41AADDFBD27DBF2B4CFB103CB8C93F00F6BA6E44(undefined4 param_1,void **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  void *pvVar10;
  Mesh_t61191F6C23B59686F22141B2D1155EA5AB927C2B *pMVar11;
  bool local_11;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_FE2E743326A31C5D17D3F6BF605C112A78D625959850576EF2F2D4D3A5D1C54C
  ;
  puVar2 = 
  Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__;
  if ((OVRPlugin_GetMesh_m41AADDFBD27DBF2B4CFB103CB8C93F00F6BA6E44::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_FE65CD9E7754F9E5858DA3CD9F722818FD75EC28289105774815A12B5F5969DF
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_380591015662FE9B1ED78753BE9255823E8F0622BA3F3B2FC76F706DF79CE4C1
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetMesh_m41AADDFBD27DBF2B4CFB103CB8C93F00F6BA6E44::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar7 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar7,*puVar8,0);
  if ((bVar4 & 1) == 0) {
    pvVar10 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
    Mesh__ctor_m5903E10D78432C705B54608D792B5763AFEB30AA(pvVar10,0);
    *param_2 = pvVar10;
    Il2CppCodeGenWriteBarrier(param_2,pvVar10);
    local_11 = false;
  }
  else {
    pvVar10 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
    Mesh__ctor_m5903E10D78432C705B54608D792B5763AFEB30AA(pvVar10);
    *param_2 = pvVar10;
    Il2CppCodeGenWriteBarrier(param_2,pvVar10);
    pMVar11 = *param_2;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar5 = Marshal_SizeOf_TisMesh_t61191F6C23B59686F22141B2D1155EA5AB927C2B_m6C166DCB502442C57C811F7884B51FB894B90CC3
                      (pMVar11,*(MethodInfo **)
                                Field_<PrivateImplementationDetails>_380591015662FE9B1ED78753BE9255823E8F0622BA3F3B2FC76F706DF79CE4C1
                      );
    lVar9 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(uVar5,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar6 = OVRP_1_44_0_ovrp_GetMesh_m0AEE6F0358CFFD7B22FF2343C58363CEC0616BED(param_1,lVar9,0);
    if (iVar6 == 0) {
      pMVar11 = *param_2;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Marshal_PtrToStructure_TisMesh_t61191F6C23B59686F22141B2D1155EA5AB927C2B_m445A0F38DEE7A07E22AF65CB195E8EA80F737216
                (lVar9,pMVar11,
                 *(MethodInfo **)
                  Field_<PrivateImplementationDetails>_FE65CD9E7754F9E5858DA3CD9F722818FD75EC28289105774815A12B5F5969DF
                );
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(lVar9,0);
    local_11 = iVar6 == 0;
  }
  return local_11;
}


