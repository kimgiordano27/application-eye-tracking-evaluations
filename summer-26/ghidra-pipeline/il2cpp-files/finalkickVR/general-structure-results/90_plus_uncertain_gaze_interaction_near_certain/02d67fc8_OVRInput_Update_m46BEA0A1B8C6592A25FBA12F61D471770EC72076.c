/*
FUNCTION_NAME: OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076
ENTRY_POINT: 02d67fc8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  void *pvVar12;
  List_1_t86E75F5042EFDDED6CC644C92E125E248E01D577 *pLVar13;
  int local_30;
  
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<ushort>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<byte>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(undefined4 *)(lVar9 + 0x14) = 0;
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(undefined4 *)(lVar9 + 0x18) = 0xffffffff;
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(undefined4 *)(lVar9 + 0x1c) = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  if (*(int *)(lVar9 + 0x100) == 2) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    OVRInput_UpdateXRControllerNodeIds_mBADEA537A0EE550060596054C9FE13B8B041E8CA();
    OVRInput_UpdateXRControllerHaptics_m9E0932C8F3F7602C10857A4B6AA0CEFF52F1CC78(0);
  }
  local_30 = 0;
  while( true ) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    pLVar13 = *(List_1_t86E75F5042EFDDED6CC644C92E125E248E01D577 **)(lVar9 + 8);
    NullCheck(pLVar13);
    iVar7 = List_1_get_Count_m116096640A45DC97925281D1AEBE76CC3A0042E3_inline
                      (pLVar13,*(MethodInfo **)
                                Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<ushort>__
                      );
    if (iVar7 <= local_30) break;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    pLVar13 = *(List_1_t86E75F5042EFDDED6CC644C92E125E248E01D577 **)(lVar9 + 8);
    NullCheck(pLVar13);
    pIVar10 = (Il2CppObject *)
              List_1_get_Item_m777E4EB80673BC010F26A9D7A4FD3B337F82D53D
                        (pLVar13,local_30,
                         *(MethodInfo **)
                          Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<byte>__);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar1 = *(uint *)(lVar9 + 0x14);
    NullCheck(pIVar10);
    uVar6 = VirtualFuncInvoker0<int>::Invoke(4,pIVar10);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(uint *)(lVar9 + 0x14) = uVar1 | uVar6;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar1 = *(uint *)(lVar9 + 0x14);
    NullCheck(pIVar10);
    if ((uVar1 & *(uint *)(pIVar10 + 0x10)) != 0) {
      NullCheck(pIVar10);
      uVar8 = *(undefined4 *)(pIVar10 + 0x10);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      bVar5 = OVRInput_Get_m537C5F53DCBD027936460E4183648F5EEBA6A654(0xffffffff,uVar8,0);
      if ((bVar5 & 1) == 0) {
        NullCheck(pIVar10);
        uVar8 = *(undefined4 *)(pIVar10 + 0x10);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        bVar5 = OVRInput_Get_mBEB70324F4BE01D02BE80C0A871A096F1D28D598(0xffffffff,uVar8,0);
        if ((bVar5 & 1) == 0) goto LAB_02d68320;
      }
      NullCheck(pIVar10);
      uVar8 = *(undefined4 *)(pIVar10 + 0x10);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      *(undefined4 *)(lVar9 + 0x10) = uVar8;
    }
LAB_02d68320:
    local_30 = il2cpp_codegen_add<int,int>(local_30,1);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if (*(int *)(lVar9 + 0x10) == 1) {
LAB_02d683f4:
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if ((*(uint *)(lVar9 + 0x14) & 3) == 3) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      *(undefined4 *)(lVar9 + 0x10) = 3;
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if (*(int *)(lVar9 + 0x10) == 2) goto LAB_02d683f4;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if (*(int *)(lVar9 + 0x10) != 0x20) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if (*(int *)(lVar9 + 0x10) != 0x40) goto LAB_02d684fc;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((*(uint *)(lVar9 + 0x14) & 0x60) == 0x60) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(undefined4 *)(lVar9 + 0x10) = 0x60;
  }
LAB_02d684fc:
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar1 = *(uint *)(lVar9 + 0x14);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((uVar1 & *(uint *)(lVar9 + 0x10)) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(undefined4 *)(lVar9 + 0x10) = 0;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  if (*(int *)(lVar9 + 0x100) == 1) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar5 = OVRInput_get_pluginSupportsActiveController_m273F22B55C9B8197B8B372827D45933173F51C05(0)
    ;
    bVar5 = bVar5 & 1;
  }
  else {
    bVar5 = 0;
  }
  bVar4 = bVar5 != 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  uVar11 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                     ((MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar11,0);
  if ((bVar5 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    pvVar12 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                                ((MethodInfo *)0x0);
    NullCheck(pvVar12);
    bVar5 = OVRManager_get_IsSimultaneousHandsAndControllersSupported_m62BA8A989B3EF086155F8E401601D7764020E5A5
                      (pvVar12,0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      bVar4 = *(int *)(lVar9 + 0x100) == 1;
    }
  }
  if (bVar4) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar1 = *(uint *)(lVar9 + 0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar8 = OVRPlugin_GetConnectedControllers_m32CC5DB7DC0C5AD45529BD1A6A9CE6BA80E0E3B5();
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(undefined4 *)(lVar9 + 0x14) = uVar8;
    uVar8 = OVRPlugin_GetActiveController_mB51206F4C3221D56F5D78602D98A765A57E6A14C(0);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(undefined4 *)(lVar9 + 0x10) = uVar8;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if ((*(int *)(lVar9 + 0x10) == 0) && ((uVar1 & 0x60) != 0)) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      *(uint *)(lVar9 + 0x10) = uVar1;
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    if (*(int *)(lVar9 + 0x100) == 2) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar8 = *(undefined4 *)(lVar9 + 0x14);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      *(undefined4 *)(lVar9 + 0x10) = uVar8;
    }
  }
  return;
}


