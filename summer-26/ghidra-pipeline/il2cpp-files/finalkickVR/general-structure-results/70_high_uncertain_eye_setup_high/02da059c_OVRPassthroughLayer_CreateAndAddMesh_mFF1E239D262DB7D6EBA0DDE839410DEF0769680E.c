/*
FUNCTION_NAME: OVRPassthroughLayer_CreateAndAddMesh_mFF1E239D262DB7D6EBA0DDE839410DEF0769680E
ENTRY_POINT: 02da059c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPassthroughLayer_CreateAndAddMesh_mFF1E239D262DB7D6EBA0DDE839410DEF0769680E
          (long param_1,GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *param_2,
          undefined8 *param_3,undefined8 *param_4,void *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_384 [67];
  byte local_341;
  undefined8 *local_340;
  undefined1 auStack_338 [64];
  undefined8 local_2f8;
  undefined8 *local_2f0;
  undefined4 local_2e4;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_2e0;
  byte local_2d1;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b4;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_2b0;
  undefined1 auStack_2a8 [64];
  undefined1 auStack_268 [64];
  undefined1 auStack_228 [64];
  undefined1 auStack_1e8 [64];
  void *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  void *local_190;
  void *local_188;
  void *local_180;
  byte local_171;
  void *local_170;
  void *local_168;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_160;
  undefined1 auStack_158 [64];
  undefined1 auStack_118 [64];
  void *local_d8;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_d0;
  void *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 auStack_b0 [64];
  undefined8 local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_38;
  long local_30;
  undefined1 local_21;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPassthroughLayer_CreateAndAddMesh_mFF1E239D262DB7D6EBA0DDE839410DEF0769680E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<OVRSceneAnchor>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_1_<CreateVolumeTable>b__5__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_3_<CreateVolumeTable>b__10__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugUI_EnumField_<>c_<InitQuickSeparators>b__17_0__);
    OVRPassthroughLayer_CreateAndAddMesh_mFF1E239D262DB7D6EBA0DDE839410DEF0769680E::
    s_Il2CppMethodInitialized = 1;
  }
  local_60 = (void *)0x0;
  local_68 = 0;
  local_70 = 0;
  memset(auStack_b0,0,0x40);
  local_b8 = local_40;
  *local_40 = 0;
  local_c0 = local_48;
  *local_48 = 0;
  local_c8 = local_50;
  local_d0 = local_38;
  NullCheck(local_38);
  local_d8 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(local_d0,0);
  NullCheck(local_d8);
  Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(local_d8,0);
  memcpy(auStack_118,auStack_158,0x40);
  memcpy(local_c8,auStack_118,0x40);
  local_160 = local_38;
  NullCheck(local_38);
  local_170 = (void *)GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8
                                (local_160,
                                 *(MethodInfo **)
                                  Method_System_Collections_Generic_List<OVRSceneAnchor>__ctor__);
  local_168 = local_170;
  local_60 = local_170;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  local_171 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_170,0);
  local_171 = local_171 & 1;
  if (local_171 == 0) {
    local_180 = local_60;
    NullCheck(local_60);
    local_190 = (void *)MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C
                                  (local_180);
    local_188 = local_190;
    NullCheck(local_190);
    local_198 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(local_190,0);
    local_68 = local_198;
    NullCheck(local_190);
    local_1a0 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(local_190,0);
    local_1a8 = local_50;
    local_70 = local_1a0;
    memcpy(auStack_1e8,local_50,0x40);
    lVar5 = local_30;
    memcpy(auStack_2a8,auStack_1e8,0x40);
    OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B
              (lVar5,auStack_2a8,0);
    memcpy(auStack_228,auStack_268,0x40);
    memcpy(auStack_b0,auStack_228,0x40);
    local_2b0 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(local_30 + 0xd0);
    NullCheck(local_2b0);
    local_2b4 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                          (local_2b0,(MethodInfo *)0x0);
    local_2c0 = local_68;
    local_2c8 = local_70;
    local_2d0 = local_40;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_2d1 = OVRPlugin_CreateInsightTriangleMesh_m180C5CE9209FC4295F5F8895FA6281F3F3AF8375
                          (local_2b4,local_2c0,local_2c8,local_2d0,0);
    local_2d1 = local_2d1 & 1;
    if (local_2d1 == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_3_<CreateVolumeTable>b__10__
                 ,0);
      local_21 = 0;
    }
    else {
      local_2e0 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(local_30 + 0xd0);
      NullCheck(local_2e0);
      local_2e4 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                            (local_2e0,(MethodInfo *)0x0);
      local_2f0 = local_40;
      local_2f8 = *local_40;
      memcpy(auStack_338,auStack_b0,0x40);
      local_340 = local_48;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      uVar4 = local_2e4;
      uVar3 = local_2f8;
      memcpy(auStack_384,auStack_338,0x40);
      local_341 = OVRPlugin_AddInsightPassthroughSurfaceGeometry_m30C6149BFD3DE003AE132D31362DB09050F0AE03
                            (uVar4,uVar3,auStack_384,local_340,0);
      local_341 = local_341 & 1;
      if (local_341 == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_1_<CreateVolumeTable>b__5__
                   ,0);
        local_21 = 0;
      }
      else {
        local_21 = 1;
      }
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_Rendering_DebugUI_EnumField_<>c_<InitQuickSeparators>b__17_0__,0)
    ;
    local_21 = 0;
  }
  return local_21;
}


