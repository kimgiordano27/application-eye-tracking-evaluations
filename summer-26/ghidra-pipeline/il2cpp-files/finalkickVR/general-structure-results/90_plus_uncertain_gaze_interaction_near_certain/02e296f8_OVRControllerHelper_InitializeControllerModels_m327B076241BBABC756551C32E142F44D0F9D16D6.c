/*
FUNCTION_NAME: OVRControllerHelper_InitializeControllerModels_m327B076241BBABC756551C32E142F44D0F9D16D6
ENTRY_POINT: 02e296f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_18;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_12;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_12
*/


void OVRControllerHelper_InitializeControllerModels_m327B076241BBABC756551C32E142F44D0F9D16D6
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  void *pvVar8;
  uint local_d8;
  uint local_d4;
  Il2CppArray *local_d0;
  Il2CppObject *local_c8;
  int local_c0;
  int local_bc;
  Il2CppArray *local_b8;
  Il2CppObject *local_b0;
  Il2CppArray *local_a8;
  Il2CppObject *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  Il2CppArray *local_90;
  Il2CppArray *local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  byte local_59;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  byte local_45;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined8 local_30;
  long local_28;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRControllerHelper_InitializeControllerModels_m327B076241BBABC756551C32E142F44D0F9D16D6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_453);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_454);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_455);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_456);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_457);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_458);
    OVRControllerHelper_InitializeControllerModels_m327B076241BBABC756551C32E142F44D0F9D16D6::
    s_Il2CppMethodInitialized = 1;
  }
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_45 = *(byte *)(local_28 + 0x90) & 1;
  if (local_45 != 0) {
    return;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_4c = OVRPlugin_GetSystemHeadsetType_m78DFDBECE24A926CF89B9A8D93931C78A3824B01(0);
  local_50 = *(int *)(local_28 + 0x70);
  local_44 = (uint)(local_50 != 1);
  local_38 = local_44;
  local_54 = local_44;
  local_34 = local_4c;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_58 = OVRPlugin_GetCurrentInteractionProfile_m12953945102999ED32CED85223563A6EAC9AE7CF
                       (local_54);
  local_3c = local_58;
  local_59 = OVRPlugin_IsMultimodalHandsControllersSupported_m63A2812AFB66A88C74A506B378E105B4D0FACE9D
                       (0);
  local_59 = local_59 & 1;
  iVar4 = local_6c;
  iVar3 = local_3c;
  if (local_59 != 0) {
    local_60 = local_38;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_68 = OVRPlugin_GetCurrentDetachedInteractionProfile_m2AFEEFB0724E660A20253977485077DCDB94794C
                         (local_60,0);
    iVar4 = local_68;
    local_64 = local_68;
    local_40 = local_68;
    iVar3 = local_68;
    if (local_68 == 0) {
      iVar4 = local_6c;
      iVar3 = local_3c;
    }
  }
  local_3c = iVar3;
  local_6c = iVar4;
  local_70 = local_34;
  iVar4 = il2cpp_codegen_subtract<int,int>(local_34,9);
  if (iVar4 == 0) {
    local_78 = local_3c;
    if (local_3c == 2) {
      *(undefined4 *)(local_28 + 0x94) = 4;
    }
    else {
      *(undefined4 *)(local_28 + 0x94) = 3;
    }
    goto LAB_02e29a70;
  }
  if (iVar4 == 1) {
    *(undefined4 *)(local_28 + 0x94) = 4;
    goto LAB_02e29a70;
  }
  if (iVar4 == 2) {
FUN_02e29a2c:
    local_80 = local_3c;
    if (local_3c == 2) {
      *(undefined4 *)(local_28 + 0x94) = 4;
    }
    else {
      *(undefined4 *)(local_28 + 0x94) = 5;
    }
    goto LAB_02e29a70;
  }
  local_74 = local_34;
  uVar5 = il2cpp_codegen_subtract<int,int>(local_34,0x1002);
  switch(uVar5) {
  case 0:
    *(undefined4 *)(local_28 + 0x94) = 2;
    goto LAB_02e29a70;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    local_7c = local_3c;
    if (local_3c == 2) {
      *(undefined4 *)(local_28 + 0x94) = 4;
    }
    else {
      *(undefined4 *)(local_28 + 0x94) = 3;
    }
    goto LAB_02e29a70;
  case 5:
    *(undefined4 *)(local_28 + 0x94) = 4;
    goto LAB_02e29a70;
  case 6:
    goto FUN_02e29a2c;
  }
  *(undefined4 *)(local_28 + 0x94) = 1;
LAB_02e29a70:
  local_90 = (Il2CppArray *)
             SZArrayNew(*(Il2CppClass **)
                         Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                        ,4);
  local_98 = *(undefined4 *)(local_28 + 0x94);
  local_94 = local_98;
  local_88 = local_90;
  local_a0 = (Il2CppObject *)Box(*(Il2CppClass **)StringLiteral_453,&local_98);
  NullCheck(local_90);
  ArrayElementTypeCheck(local_90,local_a0);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_90,0,local_a0);
  local_a8 = local_90;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_b0 = (Il2CppObject *)OVRPlugin_get_productName_mF2E3AB2A95F1FE2DDC35AAEADD9887782C4916C0();
  NullCheck(local_a8);
  ArrayElementTypeCheck(local_a8,local_b0);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_a8,1,local_b0);
  local_b8 = local_a8;
  local_bc = local_34;
  local_c0 = local_34;
  local_c8 = (Il2CppObject *)Box(*(Il2CppClass **)StringLiteral_457,&local_c0);
  NullCheck(local_b8);
  ArrayElementTypeCheck(local_b8,local_c8);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_b8,2,local_c8);
  local_d0 = local_b8;
  local_d4 = local_38;
  local_d8 = local_38;
  pIVar6 = (Il2CppObject *)Box(*(Il2CppClass **)StringLiteral_454,&local_d8);
  NullCheck(local_d0);
  ArrayElementTypeCheck(local_d0,pIVar6);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_d0,3,pIVar6);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
            (*(undefined8 *)StringLiteral_458,local_d0,0);
  pvVar8 = *(void **)(local_28 + 0x20);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x28);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x30);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x38);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x40);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x48);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x50);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x58);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x60);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  pvVar8 = *(void **)(local_28 + 0x68);
  NullCheck(pvVar8);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar8,0,0);
  uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar7,local_28,*(undefined8 *)StringLiteral_455,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(uVar7,0);
  uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar7,local_28,*(undefined8 *)StringLiteral_456,0);
  OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(uVar7,0);
  *(undefined1 *)(local_28 + 0x90) = 1;
  return;
}


