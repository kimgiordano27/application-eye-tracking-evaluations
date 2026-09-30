/*
FUNCTION_NAME: OVROverlay_LateUpdate_m6743D430CC40E5B751CD6BD03D3716B855DA2332
ENTRY_POINT: 02d97e8c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVROverlay_LateUpdate_m6743D430CC40E5B751CD6BD03D3716B855DA2332
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined4 uStack_aac;
  undefined8 local_aa0;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined8 uStack_a8c;
  byte local_a75;
  undefined4 local_a74;
  ulong local_a70;
  undefined4 local_a68;
  undefined8 local_a60;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined8 uStack_a4c;
  byte local_a43;
  byte local_a42;
  byte local_a41;
  undefined8 local_a40;
  byte local_a35;
  int local_a34;
  undefined4 local_a30;
  undefined1 auStack_a2c [20];
  undefined4 local_a18;
  undefined8 local_9b0;
  undefined1 auStack_9a4 [8];
  undefined8 local_99c;
  byte local_925;
  undefined4 local_924;
  undefined1 auStack_920 [16];
  undefined4 local_910;
  int local_8a4;
  int local_8a0;
  int local_89c;
  int local_898;
  byte local_892;
  byte local_891;
  Il2CppObject *local_890;
  LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *local_888;
  byte local_879;
  undefined8 local_878;
  byte local_86a;
  byte local_869;
  undefined8 local_868;
  undefined1 auStack_85c [8];
  undefined8 local_854;
  byte local_7de;
  byte local_7dd;
  int local_7dc;
  undefined1 auStack_7d8 [16];
  int local_7c8;
  byte local_759;
  int local_750;
  int local_74c;
  undefined8 local_748;
  byte local_739;
  undefined4 local_738;
  undefined4 local_734 [31];
  undefined8 local_6b8;
  undefined1 auStack_6b0 [8];
  undefined8 local_6a8;
  undefined4 local_634;
  undefined1 auStack_630 [28];
  undefined4 local_614;
  undefined4 local_5b4;
  undefined1 auStack_5b0 [24];
  undefined4 local_598;
  undefined4 local_534;
  undefined1 auStack_530 [20];
  undefined4 local_51c;
  undefined4 local_4b4;
  undefined1 auStack_4b0 [16];
  undefined4 local_4a0;
  undefined1 local_433;
  byte local_432;
  byte local_431;
  undefined4 local_430;
  byte local_429;
  undefined4 local_428;
  int local_424;
  undefined8 local_420;
  byte local_411;
  undefined8 local_410;
  undefined1 auStack_404 [8];
  undefined8 local_3fc;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_388;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_380;
  int local_378;
  undefined1 auStack_374 [24];
  int local_35c;
  undefined1 auStack_2f8 [124];
  undefined1 auStack_27c [124];
  undefined8 local_200 [2];
  undefined8 uStack_1ec;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1bc;
  ulong local_1b0;
  undefined4 local_1a8;
  int local_1a0;
  int local_19c;
  byte local_195;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  ulong local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_141;
  undefined8 local_140;
  undefined4 local_134;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *local_130;
  int local_124;
  void *local_120;
  undefined1 local_111;
  int local_110;
  byte local_109;
  undefined4 local_108;
  byte local_101;
  int local_100;
  int local_fc;
  byte local_f7;
  byte local_f6;
  byte local_f5;
  uint local_f4;
  uint local_f0;
  int local_ec;
  undefined1 local_e6;
  byte local_e5;
  byte local_e4;
  undefined1 local_e3;
  byte local_e2;
  byte local_e1;
  undefined1 auStack_e0 [126];
  byte local_62;
  byte local_61;
  ulong local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined1 local_31;
  undefined8 local_30;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_28;
  
  puVar4 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
  ;
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_30 = param_5;
  local_28 = param_4;
  if ((OVROverlay_LateUpdate_m6743D430CC40E5B751CD6BD03D3716B855DA2332::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass5_0_<CreateMaxOverdrawCount>b__0__
              );
    OVROverlay_LateUpdate_m6743D430CC40E5B751CD6BD03D3716B855DA2332::s_Il2CppMethodInitialized = 1;
  }
  local_31 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_61 = 0;
  local_62 = 0;
  memset(auStack_e0,0,0x7c);
  local_e1 = 0;
  local_e2 = 0;
  local_e3 = 0;
  local_e4 = 0;
  local_e5 = 0;
  local_e6 = 0;
  local_ec = 0;
  local_f0 = 0;
  local_f4 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_f5 = *(byte *)(lVar9 + 0x180) & 1;
  if (local_f5 != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_f6 = OVRPlugin_get_userPresent_mDC6C3FFE8897342A888E529C7BEAF368413C8151(0);
    local_f6 = local_f6 & 1;
    if (local_f6 != 0) {
      local_f7 = (byte)local_28[0x1fc] & 1;
      if (local_f7 == 0) {
        OVROverlay_InitOVROverlay_m8B089AEF56625D94A9F896DA7570F130F5EF64BF(local_28,0);
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      local_fc = *(int *)(lVar9 + 0x100);
      local_100 = *(int *)(local_28 + 0x1f8);
      if (local_fc == local_100) {
        local_101 = (byte)local_28[0xd3] & 1;
        if (local_101 == 0) {
          local_108 = *(undefined4 *)(local_28 + 0xec);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
          local_109 = OVROverlay_NeedsTexturesForShape_m7F193B7A4CDE200B3DBF3AF44CD30ADB43AD947D
                                (local_108,0);
          local_109 = local_109 & 1;
          local_f0 = (uint)local_109;
        }
        else {
          local_f0 = 0;
        }
        local_111 = local_f0 != 0;
        local_110 = *(int *)(local_28 + 0x20);
        if (local_110 != 0) {
          local_31 = local_111;
          if ((bool)local_111) {
            local_120 = *(void **)(local_28 + 0xf8);
            NullCheck(local_120);
            local_124 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                                  (local_28,0);
            if ((int)*(undefined8 *)((long)local_120 + 0x18) < local_124) {
              return;
            }
            local_130 = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)
                         (local_28 + 0xf8);
            NullCheck(local_130);
            local_134 = 0;
            local_140 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt(local_130,0);
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_140,0);
            if ((bVar7 & 1) != 0) {
              return;
            }
            local_141 = 0;
          }
          OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B();
          local_160 = local_17c;
          uStack_3c = uStack_168;
          uStack_44 = CONCAT44(uStack_16c,uStack_170);
          local_50 = local_17c;
          local_194 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline
                                ((MethodInfo *)0x0);
          local_188 = CONCAT44(param_2,local_194);
          local_61 = 0;
          local_62 = 0;
          uStack_190 = param_2;
          local_18c = param_3;
          local_180 = param_3;
          local_60 = local_188;
          local_58 = param_3;
          local_195 = OVROverlay_ComputeSubmit_mD3EA4D18F6A3AC12F9A15CAD6B5F04357572FD9F
                                (local_28,&local_50,&local_60,&local_61,&local_62,0);
          local_195 = local_195 & 1;
          if (local_195 != 0) {
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
            lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
            local_19c = *(int *)(lVar9 + 0x100);
            if (local_19c == 2) {
              local_1a0 = *(int *)(local_28 + 0xec);
              if (local_1a0 == 0) {
                local_1b0 = local_60;
                local_1a8 = local_58;
                local_1d0 = local_50;
                uStack_1bc = uStack_3c;
                local_1e0 = local_60;
                uVar5 = local_1e0;
                local_1d8 = local_58;
                local_200[0] = local_50;
                uStack_1ec = uStack_3c;
                local_1e0._0_4_ = (undefined4)local_60;
                uVar8 = (undefined4)local_1e0;
                local_1e0._4_4_ = (undefined4)(local_60 >> 0x20);
                uVar6 = local_1e0._4_4_;
                local_1e0 = uVar5;
                OVROverlay_OpenVROverlayUpdate_m3B2152A89A025BF04C32D2623C772AD17544BE0B
                          (uVar8,uVar6,local_58,local_28,local_200,0);
              }
            }
            else {
              OVROverlay_GetCurrentLayerDesc_m91821535540B4DE656CCAA164A85091BC5AA3B8F(local_28);
              memcpy(auStack_27c,auStack_2f8,0x7c);
              memcpy(auStack_e0,auStack_27c,0x7c);
              memcpy(auStack_374,auStack_e0,0x7c);
              local_378 = local_35c;
              local_e1 = local_35c == 2;
              local_380 = local_28 + 0x130;
              local_388 = local_28 + 0x138;
              memcpy(auStack_404,auStack_e0,0x7c);
              local_410 = local_3fc;
              il2cpp_codegen_runtime_class_init_inline
                        (*(Il2CppClass **)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
                        );
              local_420 = local_410;
              bVar7 = Sizei_Equals_mCD498318CBD1F49F2CA7C33ACF59A2A5B70FCD17(local_388,local_410,0);
              local_411 = bVar7 & 1;
              if ((bVar7 & 1) == 0) {
                local_424 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                                      (local_28,(MethodInfo *)0x0);
                local_f4 = (uint)(0 < local_424);
              }
              else {
                local_f4 = 0;
              }
              local_428 = *(undefined4 *)(local_28 + 0xec);
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
              local_429 = OVROverlay_NeedsTexturesForShape_m7F193B7A4CDE200B3DBF3AF44CD30ADB43AD947D
                                    (local_428);
              local_429 = local_429 & 1;
              local_430 = *(undefined4 *)(local_28 + 0xf0);
              local_e2 = local_429;
              bVar7 = OVROverlay_NeedsTexturesForShape_m7F193B7A4CDE200B3DBF3AF44CD30ADB43AD947D
                                (local_430,0);
              local_431 = bVar7 & 1;
              local_432 = local_e2 & 1;
              local_433 = (bVar7 & 1) != (local_e2 & 1);
              local_e3 = local_433;
              if (local_f4 != 0 || (bool)local_433) {
                OVROverlay_DestroyLayerTextures_mC2EB8CF6BEE55E844E411F82DBDD07B844170672(local_28);
                OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25(local_28,0);
              }
              memcpy(auStack_4b0,auStack_e0,0x7c);
              local_4b4 = local_4a0;
              memcpy(auStack_530,auStack_e0,0x7c);
              local_534 = local_51c;
              memcpy(auStack_5b0,auStack_e0,0x7c);
              local_5b4 = local_598;
              memcpy(auStack_630,auStack_e0,0x7c);
              local_634 = local_614;
              memcpy(auStack_6b0,auStack_e0,0x7c);
              local_6b8 = local_6a8;
              memcpy(local_734,auStack_e0,0x7c);
              local_738 = local_734[0];
              local_748 = local_6b8;
              local_739 = OVROverlay_CreateLayer_mC0E0B6F846A16A366032C5C66227138D3688693D
                                    (local_28,local_4b4,local_534,local_5b4,local_634,local_6b8,
                                     local_734[0],0);
              local_739 = local_739 & 1;
              local_74c = *(int *)(local_28 + 0x1b0);
              local_e4 = local_739;
              if ((local_74c == -1) ||
                 (local_750 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                                        (local_28,(MethodInfo *)0x0), local_750 < 1)) {
                if ((local_e4 & 1) != 0) {
                  *(undefined4 *)(local_28 + 0xf0) = *(undefined4 *)(local_28 + 0xec);
                }
              }
              else {
                local_759 = local_e2 & 1;
                if (local_759 != 0) {
                  memcpy(auStack_7d8,auStack_e0,0x7c);
                  local_7dc = local_7c8;
                  local_7de = 1 < local_7c8;
                  local_7dd = local_e4 & 1;
                  local_e6 = local_7de;
                  memcpy(auStack_85c,auStack_e0,0x7c);
                  local_868 = local_854;
                  local_869 = local_e1 & 1;
                  local_878 = local_854;
                  local_86a = OVROverlay_CreateLayerTextures_m06511B1901D6E9246E21B5AB859A66C7D44D9842
                                        (local_28,local_7de & 1,local_854,local_869,0);
                  local_86a = local_86a & 1;
                  local_e4 = (local_7dd & 1) != 0 || local_86a != 0;
                  local_879 = (byte)local_28[0xd3] & 1;
                  if (((byte)local_28[0xd3] & 1) == 0) {
                    local_888 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                                 (local_28 + 0x128);
                    NullCheck(local_888);
                    puVar10 = (undefined8 *)
                              LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::
                              GetAddressAt(local_888,0);
                    local_890 = (Il2CppObject *)*puVar10;
                    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                    uVar12 = IsInstClass(local_890,
                                         *(Il2CppClass **)
                                          Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                                        );
                    local_891 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                                          (uVar12,0);
                    local_891 = local_891 & 1;
                    if (local_891 != 0) {
                      local_28[0x24] = (OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D)0x1;
                    }
                  }
                  local_892 = OVROverlay_LatchLayerTextures_mE956A0D6D10DDB34531E068F7DC782E1240C0C88
                                        (local_28,0);
                  local_892 = local_892 & 1;
                  if (local_892 == 0) {
                    return;
                  }
                  local_898 = *(int *)(local_28 + 0x1c8);
                  local_89c = *(int *)(local_28 + 0x1cc);
                  if (local_89c < local_898) {
                    local_8a0 = *(int *)(local_28 + 0x1c8);
                    local_8a4 = *(int *)(local_28 + 0x1ac);
                    iVar1 = 0;
                    if (local_8a4 != 0) {
                      iVar1 = local_8a0 / local_8a4;
                    }
                    local_ec = local_8a0 - iVar1 * local_8a4;
                    memcpy(auStack_920,auStack_e0,0x7c);
                    local_924 = local_910;
                    local_925 = local_e1 & 1;
                    memcpy(auStack_9a4,auStack_e0,0x7c);
                    local_9b0 = local_99c;
                    memcpy(auStack_a2c,auStack_e0,0x7c);
                    local_a30 = local_a18;
                    local_a34 = local_ec;
                    local_a40 = local_9b0;
                    bVar7 = OVROverlay_PopulateLayer_m7384F18049DABA190D5538233BA69B380554C918
                                      (local_28,local_924,local_925 & 1,local_9b0,local_a18,local_ec
                                       ,0);
                    local_a35 = bVar7 & 1;
                    if ((bVar7 & 1) == 0) {
                      return;
                    }
                  }
                }
                local_a41 = local_61 & 1;
                local_a42 = local_62 & 1;
                local_a43 = (byte)local_28[0xe4] & 1;
                local_aa0 = local_50;
                uStack_a4c = uStack_3c;
                uStack_a54 = (undefined4)uStack_44;
                uStack_a50 = (undefined4)((ulong)uStack_44 >> 0x20);
                local_a70 = local_60;
                local_a68 = local_58;
                local_a74 = *(undefined4 *)(local_28 + 0x1c8);
                uStack_a8c = uStack_3c;
                uStack_aac = (undefined4)(local_60 >> 0x20);
                uStack_a94 = uStack_a54;
                uStack_a90 = uStack_a50;
                local_a60 = local_aa0;
                local_e5 = OVROverlay_SubmitLayer_mA4FDF12219922CA745CBBB7BDA95369AE20D9D3C
                                     (local_60 & 0xffffffff,uStack_aac,local_58,local_28,local_a41,
                                      local_a42,local_a43,&local_aa0,local_a74,0);
                local_a75 = local_e5 & 1;
                local_e5 = local_e5 & 1;
                *(undefined4 *)(local_28 + 0x1cc) = *(undefined4 *)(local_28 + 0x1c8);
                if (((byte)local_28[0x24] & 1) != 0) {
                  uVar8 = il2cpp_codegen_add<int,int>(*(int *)(local_28 + 0x1c8),1);
                  *(undefined4 *)(local_28 + 0x1c8) = uVar8;
                }
                uVar12 = *(undefined8 *)(local_28 + 0x1d0);
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                bVar7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar12,0);
                if ((bVar7 & 1) != 0) {
                  pvVar11 = *(void **)(local_28 + 0x1d0);
                  bVar7 = local_e5 & 1;
                  NullCheck(pvVar11);
                  Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8
                            (pvVar11,bVar7 == 0,0);
                }
              }
            }
          }
        }
      }
      else {
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                  );
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass5_0_<CreateMaxOverdrawCount>b__0__
                   ,0);
      }
    }
  }
  return;
}


