/*
FUNCTION_NAME: OVROverlay_PopulateLayer_m7384F18049DABA190D5538233BA69B380554C918
ENTRY_POINT: 02d94734
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVROverlay_PopulateLayer_m7384F18049DABA190D5538233BA69B380554C918
               (long param_1,int param_2,byte param_3,undefined8 param_4,int param_5,int param_6,
               undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  Il2CppObject *pIVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  void *pvVar14;
  undefined8 uVar15;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *pTVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined1 auStack_2ec [52];
  void *local_2b8;
  undefined1 auStack_2b0 [52];
  int local_27c;
  undefined4 local_278;
  int local_274;
  int local_270;
  int local_26c;
  uint local_268;
  int local_264;
  undefined8 local_260;
  int local_254;
  uint local_250;
  int local_24c;
  undefined8 local_248;
  Il2CppObject *local_240;
  undefined8 local_238;
  int local_230;
  int local_22c;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *local_228;
  byte local_220;
  byte local_21f;
  byte local_21e;
  byte local_21d;
  int local_21c;
  Il2CppObject *local_218;
  int local_20c;
  void *local_208;
  int local_200;
  int local_1fc;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *local_1f8;
  int local_1ec;
  Il2CppObject *local_1e8;
  int local_1e0;
  int local_1dc;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *local_1d8;
  int local_1cc;
  Il2CppObject *local_1c8;
  int local_1bc;
  Il2CppObject *local_1b8;
  int local_1b0;
  int local_1ac;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *local_1a8;
  int local_19c;
  Il2CppObject *local_198;
  int local_18c;
  int local_188;
  byte local_183;
  byte local_182;
  byte local_181;
  Il2CppObject *local_180;
  Il2CppObject *local_178;
  int local_170;
  int local_16c;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *local_168;
  int local_15c;
  LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *local_158;
  byte local_14a;
  undefined1 local_149;
  void *local_148;
  undefined8 local_140;
  uint local_134;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  uint local_fc;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  int local_c4;
  void *local_c0;
  undefined1 auStack_b4 [52];
  int local_80;
  int local_7c;
  void *local_78;
  uint local_70;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  Il2CppObject *local_68;
  int local_5c;
  undefined4 local_58;
  byte local_51;
  undefined8 local_50;
  int local_48;
  int local_44;
  byte local_3d;
  int local_3c;
  long local_38;
  undefined8 local_2c;
  byte local_21;
  
  puVar7 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_<CreateMapOverlaySize>b__0__
  ;
  puVar6 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass13_0_<CreatePixelValueRangeMax>b__1__
  ;
  puVar5 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
  ;
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Item__;
  local_3d = param_3 & 1;
  local_50 = param_7;
  local_48 = param_6;
  local_44 = param_5;
  local_3c = param_2;
  local_38 = param_1;
  local_2c = param_4;
  if ((OVROverlay_PopulateLayer_m7384F18049DABA190D5538233BA69B380554C918::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_<CreateMapOverlaySize>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    OVROverlay_PopulateLayer_m7384F18049DABA190D5538233BA69B380554C918::s_Il2CppMethodInitialized =
         1;
  }
  local_51 = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = (Il2CppObject *)0x0;
  local_69 = 0;
  local_6a = 0;
  local_6b = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = (void *)0x0;
  local_7c = 0;
  local_80 = 0;
  memset(auStack_b4,0,0x34);
  local_c0 = (void *)0x0;
  local_c4 = 0;
  local_cc = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (void *)0x0;
  local_f0 = 0;
  local_f8 = (void *)0x0;
  local_fc = 0;
  local_108 = 0;
  local_110 = (void *)0x0;
  local_118 = 0;
  local_120 = (void *)0x0;
  local_128 = 0;
  local_130 = (void *)0x0;
  local_134 = 0;
  local_140 = 0;
  local_148 = (void *)0x0;
  if ((*(byte *)(local_38 + 0xd3) & 1) == 0) {
    local_51 = 0;
    local_14a = local_3d & 1;
    if (local_14a == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = 2;
    }
    local_58 = local_c8;
    local_149 = 0;
    for (local_5c = 0; iVar11 = local_5c,
        iVar12 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                           (local_38,0), iVar11 < iVar12;
        local_5c = il2cpp_codegen_add<int,int>(local_5c,1)) {
      local_158 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                   (local_38 + 0x128);
      local_15c = local_5c;
      NullCheck(local_158);
      lVar13 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                         (local_158,(long)local_15c);
      local_168 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)(lVar13 + 0x10);
      local_16c = local_48;
      NullCheck(local_168);
      local_170 = local_16c;
      local_180 = (Il2CppObject *)
                  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                            (local_168,(long)local_16c);
      local_178 = local_180;
      local_68 = local_180;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      local_181 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_180,0);
      local_181 = local_181 & 1;
      if (local_181 == 0) {
        local_51 = 1;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        local_182 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(0);
        local_182 = local_182 & 1;
        if (local_182 == 0) {
          local_183 = *(byte *)(local_38 + 0x100) & 1;
          local_cc = (uint)(local_183 == 0);
        }
        else {
          local_cc = 0;
        }
        local_69 = local_cc != 0;
        local_188 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(0);
        if (local_188 + -0xb == 0) {
          local_d0 = 1;
        }
        else {
          local_18c = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545
                                (local_188 + -0xb,0);
          local_d0 = (uint)(local_18c == 8);
        }
        local_6a = local_d0 != 0;
        local_198 = local_68;
        NullCheck(local_68);
        local_19c = VirtualFuncInvoker0<int>::Invoke(5,local_198);
        local_1a8 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)(local_38 + 0xf8);
        local_1ac = local_5c;
        NullCheck(local_1a8);
        local_1b0 = local_1ac;
        local_1b8 = (Il2CppObject *)
                    TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                              (local_1a8,(long)local_1ac);
        NullCheck(local_1b8);
        local_1bc = VirtualFuncInvoker0<int>::Invoke(5,local_1b8);
        if (local_19c == local_1bc) {
          local_1c8 = local_68;
          NullCheck(local_68);
          local_1cc = VirtualFuncInvoker0<int>::Invoke(7,local_1c8);
          local_1d8 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)(local_38 + 0xf8)
          ;
          local_1dc = local_5c;
          NullCheck(local_1d8);
          local_1e0 = local_1dc;
          local_1e8 = (Il2CppObject *)
                      TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                                (local_1d8,(long)local_1dc);
          NullCheck(local_1e8);
          local_1ec = VirtualFuncInvoker0<int>::Invoke(7,local_1e8);
          local_d4 = (uint)(local_1cc == local_1ec);
        }
        else {
          local_d4 = 0;
        }
        local_6b = local_d4 != 0;
        local_1f8 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)(local_38 + 0xf8);
        local_1fc = local_5c;
        NullCheck(local_1f8);
        local_200 = local_1fc;
        local_208 = (void *)TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                                      (local_1f8,(long)local_1fc);
        NullCheck(local_208);
        local_20c = Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023(local_208);
        local_218 = local_68;
        NullCheck(local_68);
        local_21c = Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023(local_218,0);
        local_6c = local_20c == local_21c;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        local_21d = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(0);
        local_21d = local_21d & 1;
        if (local_21d == 0) {
          local_d8 = 0;
        }
        else {
          local_21e = local_6a & 1;
          local_d8 = (uint)(local_21e == 0);
        }
        local_21f = local_6b & 1;
        local_220 = local_6c & 1;
        if ((local_d8 & local_21f & (uint)local_220) == 0) {
          for (local_70 = 0; (int)local_70 < local_3c;
              local_70 = il2cpp_codegen_add<int,int>(local_70,1)) {
            local_78 = (void *)0x0;
            local_248 = local_2c;
            uVar15 = local_248;
            local_248._0_4_ = (int)local_2c;
            local_24c = (int)local_248;
            local_250 = local_70;
            local_254 = (int)local_248 >> (local_70 & 0x1f);
            local_7c = local_254;
            if (local_254 < 1) {
              local_7c = 1;
            }
            local_260 = local_2c;
            local_260._4_4_ = (int)((ulong)local_2c >> 0x20);
            local_264 = local_260._4_4_;
            local_268 = local_70;
            local_26c = local_260._4_4_ >> (local_70 & 0x1f);
            local_80 = local_26c;
            if (local_26c < 1) {
              local_80 = 1;
            }
            local_270 = local_7c;
            local_274 = local_80;
            local_278 = local_58;
            local_260 = uVar15;
            local_248 = uVar15;
            RenderTextureDescriptor__ctor_mE27A3C225736C1F806C12A7C31C0DC66A0AFE61B
                      (auStack_b4,local_7c,local_80,local_58,0);
            local_27c = local_44;
            RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline
                      (auStack_b4,local_44,(MethodInfo *)0x0);
            RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539
                      (auStack_b4,1,0);
            RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414
                      (auStack_b4,0,0);
            RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429
                      (auStack_b4,1,0);
            memcpy(auStack_2b0,auStack_b4,0x34);
            memcpy(auStack_2ec,auStack_2b0,0x34);
            pvVar14 = (void *)RenderTexture_GetTemporary_mA8C827B80D3C07D0B8CDF7F5270FB5D3E53DD235
                                        (auStack_2ec,0);
            local_2b8 = pvVar14;
            local_78 = pvVar14;
            NullCheck(pvVar14);
            bVar10 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(pvVar14,0);
            pvVar14 = local_78;
            if ((bVar10 & 1) == 0) {
              NullCheck(local_78);
              RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(pvVar14,0);
            }
            pvVar14 = local_78;
            NullCheck(local_78);
            RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(pvVar14,0);
            local_c0 = (void *)0x0;
            if ((*(int *)(local_38 + 0xec) == 2) || (*(int *)(local_38 + 0xec) == 4)) {
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
              lVar13 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
              local_c0 = *(void **)(lVar13 + 0x10);
            }
            else {
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
              lVar13 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
              local_c0 = *(void **)(lVar13 + 8);
            }
            bVar1 = (local_69 & 1) == 0;
            if (bVar1) {
              local_108 = *(undefined8 *)puVar6;
              local_f8 = local_c0;
              local_f0 = local_108;
            }
            else {
              local_108 = *(undefined8 *)puVar6;
              local_e8 = local_c0;
              local_e0 = local_108;
            }
            local_fc = (uint)!bVar1;
            local_110 = local_c0;
            NullCheck(local_c0);
            Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A
                      (local_110,local_108,local_fc,0);
            pvVar14 = local_c0;
            if ((*(int *)(local_38 + 0xec) == 2) || (*(int *)(local_38 + 0xec) == 4)) {
              for (local_c4 = 0; local_c4 < 6; local_c4 = il2cpp_codegen_add<int,int>(local_c4,1)) {
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
                lVar13 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
                iVar11 = local_c4;
                pvVar14 = *(void **)(lVar13 + 0x10);
                NullCheck(pvVar14);
                Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A
                          (pvVar14,*(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_<CreateMapOverlaySize>b__1__
                           ,iVar11);
                iVar11 = local_5c;
                pTVar16 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)
                           (local_38 + 0xf8);
                NullCheck(pTVar16);
                uVar15 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                                   (pTVar16,(long)iVar11);
                pvVar14 = local_78;
                lVar13 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
                uVar17 = *(undefined8 *)(lVar13 + 0x10);
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(uVar15,pvVar14,uVar17,0);
                Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718
                          (local_78,0,0,local_68,local_c4,local_70,0);
              }
            }
            else {
              il2cpp_codegen_runtime_class_init_inline
                        (*(Il2CppClass **)
                          Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
              iVar11 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
              if (iVar11 != 3) {
                local_140 = *(undefined8 *)puVar7;
                local_130 = pvVar14;
                local_128 = local_140;
              }
              else {
                local_140 = *(undefined8 *)puVar7;
                local_120 = pvVar14;
                local_118 = local_140;
              }
              local_134 = (uint)(iVar11 == 3);
              local_148 = pvVar14;
              NullCheck(pvVar14);
              Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A
                        (local_148,local_140,local_134,0);
              iVar11 = local_5c;
              if ((*(byte *)(local_38 + 0xac) & 1) == 0) {
                pTVar16 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)
                           (local_38 + 0xf8);
                NullCheck(pTVar16);
                uVar15 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                                   (pTVar16,(long)iVar11);
                pvVar14 = local_78;
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
                lVar13 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
                uVar17 = *(undefined8 *)(lVar13 + 8);
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(uVar15,pvVar14,uVar17,0);
              }
              else {
                pTVar16 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)
                           (local_38 + 0xf8);
                NullCheck(pTVar16);
                uVar15 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                                   (pTVar16,(long)iVar11);
                pvVar14 = local_78;
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
                lVar13 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
                uVar17 = *(undefined8 *)(lVar13 + 8);
                uVar18 = OVROverlay_GetBlitRect_mF6F1996AB7BA83A169ADAB0728634CC9B62281E2
                                   (local_38,local_5c);
                OVROverlay_BlitSubImage_mAC5F33246DE4AA1EFD2EEC09C7C945B5AB9530B1
                          (uVar18,local_38,uVar15,pvVar14,uVar17,*(byte *)(local_38 + 0x68) & 1,0);
              }
              pIVar9 = local_68;
              uVar8 = local_70;
              pvVar14 = local_78;
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
              Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718
                        (pvVar14,0,0,pIVar9,0,uVar8,0);
            }
            pvVar14 = local_78;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
            bVar10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(pvVar14,0);
            if ((bVar10 & 1) != 0) {
              RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(local_78,0);
            }
          }
        }
        else {
          local_228 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)(local_38 + 0xf8)
          ;
          local_22c = local_5c;
          NullCheck(local_228);
          local_230 = local_22c;
          local_238 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                                (local_228,(long)local_22c);
          local_240 = local_68;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58(local_238,local_240,0);
        }
      }
    }
    local_21 = local_51 & 1;
  }
  else {
    local_21 = 1;
  }
  return local_21;
}


