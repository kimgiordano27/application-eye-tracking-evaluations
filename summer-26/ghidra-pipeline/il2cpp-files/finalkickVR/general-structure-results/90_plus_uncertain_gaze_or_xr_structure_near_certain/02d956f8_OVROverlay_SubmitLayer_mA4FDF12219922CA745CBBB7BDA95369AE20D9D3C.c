/*
FUNCTION_NAME: OVROverlay_SubmitLayer_mA4FDF12219922CA745CBBB7BDA95369AE20D9D3C
ENTRY_POINT: 02d956f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


byte OVROverlay_SubmitLayer_mA4FDF12219922CA745CBBB7BDA95369AE20D9D3C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               byte param_5,byte param_6,byte param_7,undefined8 param_8,undefined4 param_9,
               undefined8 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 local_430 [2];
  undefined4 local_428;
  byte local_420;
  undefined1 *local_418;
  byte local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  byte local_3f8;
  byte local_3f0;
  byte local_3e8;
  byte local_3e0;
  byte local_3d8;
  byte local_3d0;
  byte local_3c8;
  byte local_3c0;
  undefined8 local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined8 local_3a0;
  undefined1 *local_398;
  undefined1 *local_390;
  size_t local_388;
  uint local_37c;
  uint local_378;
  uint local_374;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 *local_358;
  undefined1 *local_350;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 *local_338;
  undefined8 local_330;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [64];
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined8 uStack_29c;
  byte local_288;
  byte local_287;
  byte local_286;
  byte local_285;
  byte local_284;
  byte local_283;
  byte local_282;
  byte local_281;
  undefined8 local_280 [4];
  byte local_25d;
  undefined1 auStack_25c [67];
  byte local_219;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_1fc;
  undefined4 local_1f0;
  undefined4 local_1e0;
  undefined1 local_1dc [28];
  undefined1 local_1c0 [12];
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined1 local_19c [40];
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined4 local_160;
  undefined4 local_15c;
  uint local_14c;
  byte local_139;
  undefined1 local_125;
  byte local_124;
  byte local_123;
  byte local_122;
  byte local_121;
  undefined4 local_120;
  byte local_11a;
  byte local_119;
  byte local_118;
  byte local_117;
  byte local_116;
  byte local_115;
  byte local_114;
  byte local_113;
  byte local_112;
  byte local_111;
  byte local_110;
  byte local_10f;
  byte local_10e;
  byte local_10d;
  byte local_10c;
  byte local_10b;
  byte local_10a;
  byte local_109;
  int local_108;
  byte local_103;
  byte local_102;
  byte local_101;
  byte local_eb;
  byte local_ea;
  byte local_e9;
  byte local_db;
  byte local_da;
  byte local_d9;
  byte local_cb;
  byte local_ca;
  byte local_c9;
  byte local_be;
  byte local_bd;
  byte local_bc;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  uint local_b8;
  uint local_b4;
  undefined1 local_b0 [12];
  undefined8 uStack_a4;
  ulong uStack_9c;
  byte local_8f;
  byte local_8e;
  byte local_8d;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_7b;
  byte local_7a;
  byte local_79;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  byte local_61;
  
  local_338 = local_280;
  local_79 = param_5 & 1;
  local_7a = param_6 & 1;
  local_7b = param_7 & 1;
  local_330 = param_8;
  local_88 = param_10;
  local_80 = param_9;
  local_78 = param_4;
  local_70 = param_1;
  uStack_6c = param_2;
  local_68 = param_3;
  if ((OVROverlay_SubmitLayer_mA4FDF12219922CA745CBBB7BDA95369AE20D9D3C::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__0__
              );
    OVROverlay_SubmitLayer_mA4FDF12219922CA745CBBB7BDA95369AE20D9D3C::s_Il2CppMethodInitialized = 1;
  }
  local_8c = 0;
  local_8d = 0;
  local_8e = 0;
  local_8f = 0;
  local_338[0x3a] = 0;
  local_338[0x3b] = 0;
  local_338[0x3c] = 0;
  uStack_9c = (ulong)(uint)uStack_9c;
  local_b4 = 0;
  local_b8 = 0;
  local_b9 = 0;
  local_ba = 0;
  local_bb = 0;
  local_bc = 0;
  local_bd = 0;
  local_be = 0;
  local_338[0x37] = 0;
  local_c9 = 0;
  local_ca = 0;
  local_cb = 0;
  local_338[0x35] = 0;
  local_d9 = 0;
  local_da = 0;
  local_db = 0;
  local_338[0x33] = 0;
  local_e9 = 0;
  local_ea = 0;
  local_eb = 0;
  local_338[0x31] = 0;
  local_338[0x30] = 0;
  local_101 = 0;
  local_102 = 0;
  local_103 = 0;
  local_108 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                        (local_338[0x41],0);
  local_b4 = (uint)(1 < local_108);
  local_8c = local_b4;
  local_109 = *(byte *)(local_338[0x41] + 0xac) & 1;
  if (local_109 != 0) {
    OVROverlay_UpdateTextureRectMatrix_m1AD1093FAAA2081F8D12A492771CE8212F09FE27(local_338[0x41],0);
  }
  local_10a = *(byte *)(local_338[0x41] + 0x104) & 1;
  local_10b = *(byte *)(local_338[0x41] + 0x103) & 1;
  local_10c = *(byte *)(local_338[0x41] + 0x105) & 1;
  local_8e = local_10b;
  local_8d = local_10a;
  if ((((local_10c != 0) && (local_10d = *(byte *)(local_338[0x41] + 0x104) & 1, local_10d == 0)) &&
      (local_10e = *(byte *)(local_338[0x41] + 0x103) & 1, local_10e == 0)) &&
     ((local_10f = *(byte *)(local_338[0x41] + 0xd1) & 1, local_10f == 0 &&
      (local_110 = *(byte *)(local_338[0x41] + 0xd0) & 1, local_110 == 0)))) {
    local_8d = 1;
    local_8e = 1;
  }
  local_111 = *(byte *)(local_338[0x41] + 0x105) & 1;
  if (local_111 == 0) {
    local_112 = *(byte *)(local_338[0x41] + 0x104) & 1;
    if ((((local_112 != 0) && (local_113 = *(byte *)(local_338[0x41] + 0x103) & 1, local_113 != 0))
        || ((local_114 = *(byte *)(local_338[0x41] + 0xd1) & 1, local_114 != 0 &&
            (local_115 = *(byte *)(local_338[0x41] + 0xd0) & 1, local_115 != 0)))) ||
       ((local_116 = *(byte *)(local_338[0x41] + 0x104) & 1, local_116 != 0 &&
        (local_117 = *(byte *)(local_338[0x41] + 0xd0) & 1, local_117 != 0)))) {
LAB_02d95ab8:
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__0__
                 ,0);
      local_61 = 0;
      goto LAB_02d9619c;
    }
    local_118 = *(byte *)(local_338[0x41] + 0xd1) & 1;
    if (local_118 != 0) {
      local_119 = *(byte *)(local_338[0x41] + 0x103) & 1;
      if (local_119 != 0) goto LAB_02d95ab8;
      local_119 = 0;
    }
  }
  local_11a = *(byte *)(local_338[0x41] + 0xd3) & 1;
  if (local_11a == 0) {
    local_120 = *(undefined4 *)(local_338[0x41] + 0xec);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
              );
    local_121 = OVROverlay_NeedsTexturesForShape_m7F193B7A4CDE200B3DBF3AF44CD30ADB43AD947D
                          (local_120,0);
    local_121 = local_121 & 1;
    local_b8 = (uint)(local_121 == 0);
  }
  else {
    local_b8 = 1;
  }
  local_125 = local_b8 != 0;
  local_122 = local_79 & 1;
  local_123 = local_7a & 1;
  local_124 = local_7b & 1;
  local_8f = local_125;
  if ((bool)local_125) {
    local_bb = local_122;
    local_ba = local_123;
    local_b9 = local_124;
    local_338[0x37] = 0;
    local_c9 = local_b9 & 1;
    local_ca = local_ba & 1;
    local_cb = local_bb;
  }
  else {
    local_33c = 1;
    local_be = local_122;
    local_bd = local_123;
    local_bc = local_124;
    local_338[0x2a] = *(undefined8 *)(local_338[0x41] + 0x128);
    NullCheck((void *)local_338[0x2a]);
    lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                      ((LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *)
                       local_338[0x2a],0);
    local_338[0x29] = *(undefined8 *)(lVar5 + 8);
    local_338[0x37] = local_338[0x29];
    local_c9 = local_bc & (byte)local_33c;
    local_ca = local_bd & (byte)local_33c;
    local_cb = local_be;
  }
  local_cb = local_cb & 1;
  local_139 = local_8f & 1;
  if (local_139 == 0) {
    local_338[0x33] = local_338[0x37];
    local_340 = 1;
    local_e9 = local_c9 & 1;
    local_ea = local_ca & 1;
    local_eb = local_cb & 1;
    local_338[0x27] = *(undefined8 *)(local_338[0x41] + 0x128);
    local_14c = local_8c;
    NullCheck((void *)local_338[0x27]);
    lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                      ((LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *)
                       local_338[0x27],(long)(int)local_14c);
    local_338[0x25] = *(undefined8 *)(lVar5 + 8);
    local_338[0x31] = local_338[0x25];
    local_338[0x30] = local_338[0x33];
    local_101 = local_e9 & (byte)local_340;
    local_102 = local_ea & (byte)local_340;
    local_103 = local_eb;
  }
  else {
    local_338[0x35] = local_338[0x37];
    local_d9 = local_c9 & 1;
    local_da = local_ca & 1;
    local_db = local_cb & 1;
    local_338[0x31] = 0;
    local_338[0x30] = local_338[0x35];
    local_101 = local_d9 & 1;
    local_102 = local_da & 1;
    local_103 = local_db;
  }
  local_103 = local_103 & 1;
  local_3a0 = 0;
  local_15c = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                        ((OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)local_338[0x41],
                         (MethodInfo *)0x0);
  local_160 = local_80;
  local_3b0 = local_19c;
  OVRPose_flipZ_m733EAC7D6E899B471B373706C787534E4D46E78C(local_330,local_3a0);
  local_338[0x21] = *(undefined8 *)((long)local_338 + 0xec);
  local_338[0x20] = *(undefined8 *)((long)local_338 + 0xe4);
  uStack_16c = *(undefined8 *)(local_3b0 + 0x14);
  uStack_174 = *(undefined8 *)(local_3b0 + 0xc);
  local_338[0x3b] = local_338[0x21];
  local_338[0x3a] = local_338[0x20];
  local_3a8 = local_1dc;
  uStack_a4 = uStack_174;
  uStack_9c = uStack_16c;
  OVRPose_ToPosef_Legacy_mD9CEB204C7B417176FD6A32CD9E6F9CEA9E565C3(local_b0,local_3a0);
  local_398 = local_1c0;
  local_338[0x19] = *(undefined8 *)((long)local_338 + 0xac);
  local_338[0x18] = *(undefined8 *)((long)local_338 + 0xa4);
  uStack_1ac = *(undefined8 *)(local_3a8 + 0x14);
  uStack_1b4 = *(undefined8 *)(local_3a8 + 0xc);
  local_338[0x13] = local_338[0x42];
  local_1e0 = local_68;
  local_338[0xe] = local_338[0x13];
  local_208 = local_1e0;
  uVar10 = local_1e0;
  local_204 = OVRExtensions_ToVector3f_m21A8631A98D29AED03A5ED3FF46475646703F4DC
                        (local_210,local_3a0);
  local_338[0x11] = CONCAT44(uStack_20c,local_204);
  local_214 = *(undefined4 *)(local_338[0x41] + 0x1b0);
  local_218 = *(undefined4 *)(local_338[0x41] + 0xec);
  local_344 = 1;
  local_219 = *(byte *)(local_338[0x41] + 0xac) & 1;
  local_390 = auStack_25c;
  local_388 = 0x40;
  local_1fc = uVar10;
  local_1f0 = uVar10;
  memcpy(local_390,(void *)(local_338[0x41] + 0x6c),0x40);
  local_288 = (byte)local_344;
  local_25d = *(byte *)(local_338[0x41] + 0xad) & local_288;
  uVar6 = *(undefined8 *)(local_338[0x41] + 0xb0);
  local_338[3] = *(undefined8 *)(local_338[0x41] + 0xb8);
  local_338[2] = uVar6;
  uVar6 = *(undefined8 *)(local_338[0x41] + 0xc0);
  local_338[1] = *(undefined8 *)(local_338[0x41] + 200);
  *local_338 = uVar6;
  local_281 = *(byte *)(local_338[0x41] + 0xd0) & local_288;
  local_282 = *(byte *)(local_338[0x41] + 0x101) & local_288;
  local_283 = local_8e & local_288;
  local_284 = local_8d & local_288;
  local_285 = *(byte *)(local_338[0x41] + 0xd1) & local_288;
  local_286 = *(byte *)(local_338[0x41] + 0xd2) & local_288;
  local_287 = *(byte *)(local_338[0x41] + 0x25) & local_288;
  local_288 = *(byte *)(local_338[0x41] + 0x105) & local_288;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = local_214;
  uVar2 = local_218;
  bVar4 = local_219;
  local_37c = (uint)local_103;
  local_378 = (uint)local_102;
  local_374 = (uint)local_101;
  local_370 = local_338[0x30];
  local_368 = local_338[0x31];
  local_360 = local_15c;
  local_35c = local_160;
  local_2b0 = local_338[0x18];
  local_358 = &local_2b0;
  uStack_2a8 = (undefined4)local_338[0x19];
  uStack_29c = *(undefined8 *)(local_398 + 0x14);
  uStack_2a4 = (undefined4)*(undefined8 *)(local_398 + 0xc);
  uStack_2a0 = (undefined4)((ulong)*(undefined8 *)(local_398 + 0xc) >> 0x20);
  local_2c0 = local_338[0x11];
  local_2b8 = local_1f0;
  memcpy(auStack_300,local_390,local_388);
  uVar8 = local_338[3];
  uVar6 = local_338[2];
  uVar9 = local_338[1];
  uVar7 = *local_338;
  local_310._0_4_ = (undefined4)uVar6;
  local_310._4_4_ = (undefined4)((ulong)uVar6 >> 0x20);
  uVar10 = local_310._4_4_;
  uStack_308._0_4_ = (undefined4)uVar8;
  uStack_308._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
  uVar1 = uStack_308._4_4_;
  local_320._0_4_ = (undefined4)uVar7;
  local_320._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
  uStack_318._0_4_ = (undefined4)uVar9;
  uStack_318._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
  local_430[0] = uVar3;
  local_428 = uVar2;
  local_3c0 = (byte)local_344;
  local_420 = bVar4 & local_3c0;
  local_410 = local_25d & local_3c0;
  local_408 = (undefined4)local_320;
  local_404 = local_320._4_4_;
  local_400 = (undefined4)uStack_318;
  local_3fc = uStack_318._4_4_;
  local_3f8 = local_281 & local_3c0;
  local_3f0 = local_282 & local_3c0;
  local_3e8 = local_283 & local_3c0;
  local_3e0 = local_284 & local_3c0;
  local_3d8 = local_285 & local_3c0;
  local_3d0 = local_286 & local_3c0;
  local_3c8 = local_287 & local_3c0;
  local_3c0 = local_288 & local_3c0;
  local_3b8 = 0;
  local_418 = auStack_300;
  local_350 = (undefined1 *)local_430;
  local_320 = uVar7;
  uStack_318 = uVar9;
  uVar2 = (undefined4)local_310;
  local_310 = uVar6;
  uVar3 = (undefined4)uStack_308;
  uStack_308 = uVar8;
  bVar4 = OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
                    (local_2c0 & 0xffffffff,local_2c0._4_4_,local_2b8,uVar2,uVar10,uVar3,uVar1,
                     local_37c & 1,local_378 & 1,local_374 & 1,local_370,local_368,local_360,
                     local_35c,local_358);
  *(undefined4 *)(local_338[0x41] + 0xf0) = *(undefined4 *)(local_338[0x41] + 0xec);
  local_61 = bVar4 & (byte)local_344 & (byte)local_344;
LAB_02d9619c:
  return local_61 & 1;
}


