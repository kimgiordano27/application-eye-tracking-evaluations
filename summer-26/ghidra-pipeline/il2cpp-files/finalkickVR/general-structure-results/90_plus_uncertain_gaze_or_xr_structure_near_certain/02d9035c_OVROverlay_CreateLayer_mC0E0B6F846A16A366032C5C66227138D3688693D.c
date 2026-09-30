/*
FUNCTION_NAME: OVROverlay_CreateLayer_mC0E0B6F846A16A366032C5C66227138D3688693D
ENTRY_POINT: 02d9035c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVROverlay_CreateLayer_mC0E0B6F846A16A366032C5C66227138D3688693D
          (OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *param_1,int param_2,int param_3,
          int param_4,int param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined1 auStack_4d8 [124];
  int local_45c;
  Il2CppObject *local_458;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_450;
  undefined1 auStack_448 [127];
  byte local_3c9;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined1 auStack_3bc [124];
  undefined8 local_340;
  undefined1 auStack_338 [124];
  undefined1 auStack_2bc [124];
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined8 local_230;
  undefined4 local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_210;
  undefined8 local_208;
  byte local_1f9;
  undefined8 local_1f8;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_1f0;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_1e8;
  int local_1e0;
  int local_1dc;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_1d8;
  int local_1d0;
  int local_1cc;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_1c8;
  int local_1c0;
  int local_1bc;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_1b8;
  int local_1b0;
  int local_1ac;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_1a8;
  int local_1a0;
  int local_19c;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_198;
  byte local_18d;
  int local_18c;
  int local_188;
  int local_184;
  Il2CppArray *local_180;
  int local_178;
  byte local_171;
  undefined8 local_170;
  int local_168;
  int local_164;
  OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *local_160;
  byte local_151;
  undefined8 local_150;
  int local_148;
  int local_144;
  OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *local_140;
  int local_134;
  undefined8 local_130;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined4 local_100;
  byte local_f9;
  undefined8 local_f8;
  byte local_e9;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_e8;
  uint local_dc;
  int local_d8;
  undefined1 auStack_d4 [124];
  undefined8 local_58;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_38;
  undefined8 local_2c;
  undefined1 local_21;
  
  puVar4 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
  ;
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_58 = param_8;
  local_4c = param_7;
  local_48 = param_5;
  local_44 = param_4;
  local_40 = param_3;
  local_3c = param_2;
  local_38 = param_1;
  local_2c = param_6;
  if ((OVROverlay_CreateLayer_mC0E0B6F846A16A366032C5C66227138D3688693D::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
              );
    OVROverlay_CreateLayer_mC0E0B6F846A16A366032C5C66227138D3688693D::s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_d4,0,0x7c);
  local_d8 = 0;
  local_dc = 0;
  local_e8 = local_38 + 0x1b8;
  local_e9 = System_Globalization_CultureData__DateSeparator(local_e8,0);
  local_e9 = local_e9 & 1;
  if (local_e9 == 0) {
LAB_02d9047c:
    local_104 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                          (local_38,(MethodInfo *)0x0);
    local_100 = local_104;
    local_110 = Box(*(Il2CppClass **)puVar2,&local_104);
    local_120 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(local_110,3,0);
    *(undefined8 *)(local_38 + 0x1b8) = local_120;
    local_128 = local_38 + 0x1b8;
    local_118 = local_120;
    local_130 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(local_128,0);
    *(undefined8 *)(local_38 + 0x1c0) = local_130;
  }
  else {
    local_f8 = *(undefined8 *)(local_38 + 0x1c0);
    local_f9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(local_f8,0,0);
    local_f9 = local_f9 & 1;
    if (local_f9 != 0) goto LAB_02d9047c;
  }
  local_134 = *(int *)(local_38 + 0x1b0);
  if (local_134 == -1) {
    local_d8 = 0;
    while( true ) {
      local_18c = local_d8;
      if (0xe < local_d8) break;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      local_140 = (OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)*puVar7;
      local_144 = local_d8;
      NullCheck(local_140);
      local_148 = local_144;
      local_150 = OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::GetAt
                            (local_140,(long)local_144);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_151 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_150,0);
      local_151 = local_151 & 1;
      if (local_151 != 0) {
LAB_02d90614:
        local_178 = local_d8;
        *(int *)(local_38 + 0x1b0) = local_d8;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        local_180 = (Il2CppArray *)*puVar7;
        local_184 = local_d8;
        NullCheck(local_180);
        ArrayElementTypeCheck(local_180,local_38);
        OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::SetAt
                  ((OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)local_180,
                   (long)local_184,local_38);
        break;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      local_160 = (OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)*puVar7;
      local_164 = local_d8;
      NullCheck(local_160);
      local_168 = local_164;
      local_170 = OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::GetAt
                            (local_160,(long)local_164);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_171 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_170,local_38,0)
      ;
      local_171 = local_171 & 1;
      if (local_171 != 0) goto LAB_02d90614;
      local_188 = local_d8;
      local_d8 = il2cpp_codegen_add<int,int>(local_d8,1);
    }
  }
  local_18d = (byte)local_38[0x120] & 1;
  if (local_18d == 0) {
    local_198 = local_38 + 0x130;
    local_19c = *(int *)(local_38 + 0x140);
    local_1a0 = local_3c;
    if (local_19c == local_3c) {
      local_1a8 = local_38 + 0x130;
      local_1ac = *(int *)(local_38 + 0x144);
      local_1b0 = local_40;
      if (local_1ac == local_40) {
        local_1b8 = local_38 + 0x130;
        local_1bc = *(int *)(local_38 + 0x148);
        local_1c0 = local_44;
        if (local_1bc == local_44) {
          local_1c8 = local_38 + 0x130;
          local_1cc = *(int *)(local_38 + 0x134);
          local_1d0 = OVROverlay_get_layout_m4893928952320613F6AAD4E58DCEBDD373B621C8(local_38,0);
          if (local_1cc == local_1d0) {
            local_1d8 = local_38 + 0x130;
            local_1dc = *(int *)(local_38 + 0x14c);
            local_1e0 = local_48;
            if (local_1dc == local_48) {
              local_1e8 = local_38 + 0x130;
              local_1f0 = local_38 + 0x138;
              local_1f8 = local_2c;
              il2cpp_codegen_runtime_class_init_inline
                        (*(Il2CppClass **)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
                        );
              local_208 = local_1f8;
              local_1f9 = Sizei_Equals_mCD498318CBD1F49F2CA7C33ACF59A2A5B70FCD17
                                    (local_1f0,local_1f8,0);
              local_1f9 = local_1f9 & 1;
              if (local_1f9 != 0) {
                local_210 = local_38 + 0x130;
                local_214 = *(int *)local_210;
                local_218 = local_4c;
                if (local_214 == local_4c) {
                  local_21c = *(int *)(local_38 + 0xe0);
                  local_220 = *(int *)(local_38 + 0xdc);
                  local_dc = (uint)(local_21c != local_220);
                  goto LAB_02d908ac;
                }
              }
            }
          }
        }
      }
    }
  }
  local_dc = 1;
LAB_02d908ac:
  if (local_dc == 0) {
    local_21 = 0;
  }
  else {
    local_224 = local_4c;
    local_228 = OVROverlay_get_layout_m4893928952320613F6AAD4E58DCEBDD373B621C8(local_38);
    local_230 = local_2c;
    local_234 = local_3c;
    local_238 = local_40;
    local_23c = local_44;
    local_240 = local_48;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_340 = local_230;
    OVRPlugin_CalculateLayerDesc_m1C5C994D88D2EB1BC56103558F7DB7AFDFDF04C9
              (local_224,local_228,local_230,local_234,local_238,local_23c,local_240,0);
    memcpy(auStack_2bc,auStack_338,0x7c);
    memcpy(auStack_d4,auStack_2bc,0x7c);
    memcpy(auStack_3bc,auStack_d4,0x7c);
    local_3c0 = *(undefined4 *)(local_38 + 0xdc);
    local_3c8 = *(undefined8 *)(local_38 + 0x1c0);
    memcpy(auStack_448,auStack_3bc,0x7c);
    local_3c9 = OVRPlugin_EnqueueSetupLayer_mA1D5C761EE406503F0AA37B6C55C0AC87D61023F
                          (auStack_448,local_3c0,local_3c8,0);
    local_3c9 = local_3c9 & 1;
    local_450 = local_38 + 0x1b8;
    local_458 = (Il2CppObject *)
                GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(local_450,0);
    pOVar5 = local_38;
    piVar8 = (int *)UnBox(local_458,*(Il2CppClass **)puVar2);
    OVROverlay_set_layerId_m28284412D866364354AF5355DD29ED5643F4BA46_inline
              (pOVar5,*piVar8,(MethodInfo *)0x0);
    local_45c = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                          (local_38,(MethodInfo *)0x0);
    if (0 < local_45c) {
      memcpy(auStack_4d8,auStack_d4,0x7c);
      memcpy(local_38 + 0x130,auStack_4d8,0x7c);
      *(undefined4 *)(local_38 + 0xe0) = *(undefined4 *)(local_38 + 0xdc);
      if (((byte)local_38[0xd3] & 1) == 0) {
        uVar6 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                          (local_38,(MethodInfo *)0x0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        uVar6 = OVRPlugin_GetLayerTextureStageCount_m7ACFF1E9AA4708B227460BB30021AA34347ED874
                          (uVar6,0);
        *(undefined4 *)(local_38 + 0x1ac) = uVar6;
      }
      else {
        *(undefined4 *)(local_38 + 0x1ac) = 1;
      }
    }
    local_38[0x120] = (OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D)0x0;
    local_21 = 1;
  }
  return local_21;
}


