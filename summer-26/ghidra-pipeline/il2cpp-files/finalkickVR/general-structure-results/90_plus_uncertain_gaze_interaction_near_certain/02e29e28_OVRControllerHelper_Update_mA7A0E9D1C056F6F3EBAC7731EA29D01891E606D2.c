/*
FUNCTION_NAME: OVRControllerHelper_Update_mA7A0E9D1C056F6F3EBAC7731EA29D01891E606D2
ENTRY_POINT: 02e29e28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_21
*/


void OVRControllerHelper_Update_mA7A0E9D1C056F6F3EBAC7731EA29D01891E606D2
               (undefined1 param_1 [16],undefined4 param_2,void *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  void *pvVar13;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 local_360;
  undefined4 local_354;
  undefined8 local_328;
  undefined4 local_31c;
  undefined8 local_2f0;
  undefined4 local_2e4;
  void *local_2b8;
  void *local_298;
  void *local_238;
  void *local_218;
  void *local_1b8;
  void *local_198;
  void *local_138;
  void *local_118;
  void *local_b8;
  void *local_98;
  bool local_36;
  
  puVar8 = StringLiteral_461;
  puVar7 = StringLiteral_460;
  puVar6 = StringLiteral_459;
  puVar5 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
  ;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  if ((OVRControllerHelper_Update_mA7A0E9D1C056F6F3EBAC7731EA29D01891E606D2::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_462);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_463);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_MoveNext__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar8);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_464);
    OVRControllerHelper_Update_mA7A0E9D1C056F6F3EBAC7731EA29D01891E606D2::s_Il2CppMethodInitialized
         = 1;
  }
  if ((*(byte *)((long)param_3 + 0x90) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    if ((*(byte *)(lVar12 + 0x180) & 1) == 0) {
      return;
    }
    OVRControllerHelper_InitializeControllerModels_m327B076241BBABC756551C32E142F44D0F9D16D6
              (param_3,0);
  }
  iVar11 = *(int *)((long)param_3 + 0x70);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  iVar11 = OVRInput_GetControllerIsInHandState_m1F89D272E3F3FD38292CC65DA0C176F315C05C9A
                     (iVar11 != 1);
  bVar10 = OVRInput_IsControllerConnected_mC3BA5BE3D3A5642D36965D4CD82525C989F85E9A
                     (*(undefined4 *)((long)param_3 + 0x70),0);
  bVar10 = bVar10 & 1;
  if ((((bVar10 != (*(byte *)((long)param_3 + 0x98) & 1)) ||
       ((*(byte *)((long)param_3 + 0x99) & 1) == 0)) || (iVar11 != *(int *)((long)param_3 + 0x9c)))
     || ((*(byte *)((long)param_3 + 0x91) & 1) != (*(byte *)((long)param_3 + 0x92) & 1))) {
    if (*(int *)((long)param_3 + 0x94) == 2) {
      pvVar13 = *(void **)((long)param_3 + 0x20);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0);
      pvVar13 = *(void **)((long)param_3 + 0x28);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x30);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 1;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9,0);
      pvVar13 = *(void **)((long)param_3 + 0x38);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 2;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9);
      pvVar13 = *(void **)((long)param_3 + 0x40);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x48);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x50);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x58);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x60);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x68);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x30);
        NullCheck(pGVar14);
        local_98 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                     (pGVar14,*(MethodInfo **)puVar4);
      }
      else {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x38);
        NullCheck(pGVar14);
        local_98 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                     (pGVar14,*(MethodInfo **)puVar4);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x80) = local_98;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x80),local_98);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        local_b8 = *(void **)((long)param_3 + 0x30);
      }
      else {
        local_b8 = *(void **)((long)param_3 + 0x38);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x88) = local_b8;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x88),local_b8);
    }
    else if (*(int *)((long)param_3 + 0x94) == 3) {
      pvVar13 = *(void **)((long)param_3 + 0x20);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0);
      pvVar13 = *(void **)((long)param_3 + 0x28);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x30);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x38);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x40);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 1;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9,0);
      pvVar13 = *(void **)((long)param_3 + 0x48);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 2;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9);
      pvVar13 = *(void **)((long)param_3 + 0x50);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x58);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x60);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x68);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x40);
        NullCheck(pGVar14);
        local_118 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                      (pGVar14,*(MethodInfo **)puVar4);
      }
      else {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x48);
        NullCheck(pGVar14);
        local_118 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                      (pGVar14,*(MethodInfo **)puVar4);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x80) = local_118;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x80),local_118);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        local_138 = *(void **)((long)param_3 + 0x40);
      }
      else {
        local_138 = *(void **)((long)param_3 + 0x48);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x88) = local_138;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x88),local_138);
    }
    else if (*(int *)((long)param_3 + 0x94) == 1) {
      pvVar13 = *(void **)((long)param_3 + 0x20);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 1;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9,0);
      pvVar13 = *(void **)((long)param_3 + 0x28);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 2;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9);
      pvVar13 = *(void **)((long)param_3 + 0x30);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x38);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x40);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x48);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x50);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x58);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x60);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x68);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x20);
        NullCheck(pGVar14);
        local_198 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                      (pGVar14,*(MethodInfo **)puVar4);
      }
      else {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x28);
        NullCheck(pGVar14);
        local_198 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                      (pGVar14,*(MethodInfo **)puVar4);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x80) = local_198;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x80),local_198);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        local_1b8 = *(void **)((long)param_3 + 0x20);
      }
      else {
        local_1b8 = *(void **)((long)param_3 + 0x28);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x88) = local_1b8;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x88),local_1b8);
    }
    else if (*(int *)((long)param_3 + 0x94) == 4) {
      pvVar13 = *(void **)((long)param_3 + 0x20);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0);
      pvVar13 = *(void **)((long)param_3 + 0x28);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x30);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x38);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x40);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x48);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x50);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 1;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9,0);
      pvVar13 = *(void **)((long)param_3 + 0x58);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 2;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9);
      pvVar13 = *(void **)((long)param_3 + 0x60);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x68);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x50);
        NullCheck(pGVar14);
        local_218 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                      (pGVar14,*(MethodInfo **)puVar4);
      }
      else {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x58);
        NullCheck(pGVar14);
        local_218 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                      (pGVar14,*(MethodInfo **)puVar4);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x80) = local_218;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x80),local_218);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        local_238 = *(void **)((long)param_3 + 0x50);
      }
      else {
        local_238 = *(void **)((long)param_3 + 0x58);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x88) = local_238;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x88),local_238);
    }
    else {
      pvVar13 = *(void **)((long)param_3 + 0x20);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0);
      pvVar13 = *(void **)((long)param_3 + 0x28);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x30);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x38);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x40);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x48);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x50);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x58);
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,0,0);
      pvVar13 = *(void **)((long)param_3 + 0x60);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 1;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9,0);
      pvVar13 = *(void **)((long)param_3 + 0x68);
      if (bVar10 == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)((long)param_3 + 0x70) == 2;
      }
      NullCheck(pvVar13);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,bVar9,0);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x60);
        NullCheck(pGVar14);
        local_298 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                      (pGVar14,*(MethodInfo **)puVar4);
      }
      else {
        pGVar14 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)param_3 + 0x68);
        NullCheck(pGVar14);
        local_298 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                      (pGVar14,*(MethodInfo **)puVar4);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x80) = local_298;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x80),local_298);
      if (*(int *)((long)param_3 + 0x70) == 1) {
        local_2b8 = *(void **)((long)param_3 + 0x60);
      }
      else {
        local_2b8 = *(void **)((long)param_3 + 0x68);
      }
      NullCheck(param_3);
      *(void **)((long)param_3 + 0x88) = local_2b8;
      Il2CppCodeGenWriteBarrier((void **)((long)param_3 + 0x88),local_2b8);
    }
    *(byte *)((long)param_3 + 0x98) = bVar10;
    *(undefined1 *)((long)param_3 + 0x99) = 1;
    *(int *)((long)param_3 + 0x9c) = iVar11;
    *(byte *)((long)param_3 + 0x92) = *(byte *)((long)param_3 + 0x91) & 1;
  }
  local_36 = (*(byte *)((long)param_3 + 0x91) & 1 & bVar10) != 0;
  switch(*(undefined4 *)((long)param_3 + 0x74)) {
  case 0:
    break;
  case 1:
    if (iVar11 == 2) {
      local_36 = false;
    }
    break;
  case 2:
    if (iVar11 != 1) {
      local_36 = false;
    }
    break;
  case 3:
    if (iVar11 != 2) {
      local_36 = false;
    }
    break;
  case 4:
    if (iVar11 != 0) {
      local_36 = false;
    }
  }
  if ((*(byte *)((long)param_3 + 0x78) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
    bVar10 = OVRPlugin_IsControllerDrivenHandPosesEnabled_m3AAF0B439A4B61B782CC76FC8BD651229E088533
                       (0);
    if ((bVar10 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
      bVar10 = OVRPlugin_AreControllerDrivenHandPosesNatural_mC5F1D327BC5B0A79190FEA4433F9FC4F488445A7
                         (0);
      if ((bVar10 & 1) != 0) {
        local_36 = false;
      }
    }
  }
  uVar15 = *(undefined8 *)((long)param_3 + 0x88);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar15,0);
  if ((bVar10 & 1) != 0) {
    pvVar13 = *(void **)((long)param_3 + 0x88);
    NullCheck(pvVar13);
    GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar13,local_36,0);
  }
  uVar15 = *(undefined8 *)((long)param_3 + 0x80);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar15,0);
  if ((bVar10 & 1) != 0) {
    pvVar13 = *(void **)((long)param_3 + 0x80);
    uVar16 = *(undefined4 *)((long)param_3 + 0x70);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar10 = OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(1,uVar16,0);
    if ((bVar10 & 1) == 0) {
      local_2f0 = *(undefined8 *)puVar7;
      local_2e4 = 0;
    }
    else {
      local_2f0 = *(undefined8 *)puVar7;
      local_2e4 = 0x3f800000;
    }
    NullCheck(pvVar13);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(local_2e4,pvVar13,local_2f0);
    pvVar13 = *(void **)((long)param_3 + 0x80);
    uVar16 = *(undefined4 *)((long)param_3 + 0x70);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar10 = OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(2,uVar16,0);
    if ((bVar10 & 1) == 0) {
      local_328 = *(undefined8 *)puVar6;
      local_31c = 0;
    }
    else {
      local_328 = *(undefined8 *)puVar6;
      local_31c = 0x3f800000;
    }
    NullCheck(pvVar13);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(local_31c,pvVar13,local_328);
    pvVar13 = *(void **)((long)param_3 + 0x80);
    uVar16 = *(undefined4 *)((long)param_3 + 0x70);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar10 = OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(0x100,uVar16,0);
    if ((bVar10 & 1) == 0) {
      local_360 = *(undefined8 *)puVar8;
      local_354 = 0;
    }
    else {
      local_360 = *(undefined8 *)puVar8;
      local_354 = 0x3f800000;
    }
    NullCheck(pvVar13);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(local_354,pvVar13,local_360);
    pvVar13 = *(void **)((long)param_3 + 0x80);
    uVar16 = *(undefined4 *)((long)param_3 + 0x70);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    uVar16 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(1,uVar16,0);
    NullCheck(pvVar13);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uVar16,pvVar13,*(undefined8 *)StringLiteral_464,0);
    pvVar13 = *(void **)((long)param_3 + 0x80);
    OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8
              (1,*(undefined4 *)((long)param_3 + 0x70),0);
    NullCheck(pvVar13);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (param_2,pvVar13,*(undefined8 *)StringLiteral_462,0);
    pvVar13 = *(void **)((long)param_3 + 0x80);
    uVar16 = OVRSimpleJSON_JSONNode__get_Value(1,*(undefined4 *)((long)param_3 + 0x70),0);
    NullCheck(pvVar13);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uVar16,pvVar13,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_MoveNext__
               ,0);
    pvVar13 = *(void **)((long)param_3 + 0x80);
    uVar16 = OVRSimpleJSON_JSONNode__get_Value(4,*(undefined4 *)((long)param_3 + 0x70),0);
    NullCheck(pvVar13);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uVar16,pvVar13,*(undefined8 *)StringLiteral_463,0);
  }
  return;
}


