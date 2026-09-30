/*
FUNCTION_NAME: OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25
ENTRY_POINT: 02d917d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_possible_biometrics_hits_1
*/


void OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 local_3b0 [2];
  undefined4 local_3a8;
  undefined1 local_3a0;
  undefined1 *local_398;
  undefined1 local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined1 local_378;
  undefined1 local_370;
  undefined1 local_368;
  undefined1 local_360;
  undefined1 local_358;
  undefined1 local_350;
  undefined1 local_348;
  undefined1 local_340;
  undefined8 local_338;
  MethodInfo *local_330;
  undefined1 *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  undefined8 *local_310;
  ulong local_308;
  ulong *local_300;
  undefined1 *local_2f8;
  size_t local_2f0;
  ulong *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined1 *local_2d8;
  undefined4 local_2cc;
  undefined1 *local_2c8;
  undefined4 local_2bc;
  MethodInfo *local_2b8;
  undefined4 local_2ac;
  ulong *local_2a8;
  undefined8 *local_2a0;
  ulong *local_298;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_290;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_288;
  byte local_279;
  undefined8 local_278;
  byte local_269;
  undefined8 local_268;
  int local_25c;
  Il2CppArray *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [64];
  undefined8 local_1f0;
  undefined4 local_1e8;
  ulong local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  byte local_1c1;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [64];
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  ulong local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  ulong local_128;
  undefined4 local_120;
  undefined1 local_11c [28];
  ulong local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined1 local_dc [28];
  ulong local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [64];
  ulong local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_28;
  
  local_2a8 = (ulong *)&local_14c;
  local_2a0 = (undefined8 *)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
  ;
  local_298 = (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_5;
  local_28 = param_4;
  if ((OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata(local_298);
    OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25::s_Il2CppMethodInitialized = 1
    ;
  }
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  memset(auStack_90,0,0x40);
  local_a0 = 0;
  uStack_98 = 0;
  local_a4 = *(int *)(local_28 + 0x1b0);
  if (local_a4 != -1) {
    local_328 = local_dc;
    local_2b8 = (MethodInfo *)0x0;
    OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B();
    local_c0 = local_2a8[0xe];
    uStack_b8 = (undefined4)local_2a8[0xf];
    uStack_ac = *(undefined8 *)(local_328 + 0x14);
    uStack_b4 = (undefined4)*(undefined8 *)(local_328 + 0xc);
    uStack_b0 = (undefined4)((ulong)*(undefined8 *)(local_328 + 0xc) >> 0x20);
    uStack_48 = uStack_b8;
    uStack_3c = (undefined4)uStack_ac;
    local_38 = (undefined4)((ulong)uStack_ac >> 0x20);
    local_320 = local_11c;
    local_50 = local_c0;
    uStack_44 = uStack_b4;
    local_40 = uStack_b0;
    OVRPose_ToPosef_Legacy_mD9CEB204C7B417176FD6A32CD9E6F9CEA9E565C3(&local_50,local_2b8);
    local_100 = local_2a8[6];
    local_300 = &local_100;
    uStack_f8 = (undefined4)local_2a8[7];
    uStack_ec = *(undefined8 *)(local_320 + 0x14);
    uStack_f4 = (undefined4)*(undefined8 *)(local_320 + 0xc);
    uStack_f0 = (undefined4)((ulong)*(undefined8 *)(local_320 + 0xc) >> 0x20);
    local_134 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(local_2b8);
    local_128 = local_2a8[3];
    local_158._4_4_ = (undefined4)(local_128 >> 0x20);
    uVar9 = local_158._4_4_;
    local_158 = local_128;
    local_150 = param_3;
    uStack_130 = param_2;
    local_12c = param_3;
    local_120 = param_3;
    local_14c = OVRExtensions_ToVector3f_m21A8631A98D29AED03A5ED3FF46475646703F4DC
                          (local_128 & 0xffffffff,local_2b8);
    local_140 = *local_2a8;
    local_15c = *(undefined4 *)(local_28 + 0x1b0);
    local_160 = *(undefined4 *)(local_28 + 0xf0);
    local_318 = auStack_90;
    local_2f0 = 0x40;
    uStack_148 = uVar9;
    local_144 = param_3;
    local_138 = param_3;
    il2cpp_codegen_initobj(local_318,0x40);
    local_2f8 = auStack_1a0;
    memcpy(local_2f8,local_318,local_2f0);
    local_310 = &local_a0;
    local_308 = 0x10;
    il2cpp_codegen_initobj(local_310,0x10);
    uStack_1a8 = uStack_98;
    local_1b0 = local_a0;
    il2cpp_codegen_initobj(local_310,local_308);
    uStack_1b8 = uStack_98;
    local_1c0 = local_a0;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*local_298);
    local_2e8 = &local_1e0;
    uStack_1d8 = uStack_f8;
    local_1e0 = local_100;
    uStack_1cc = *(undefined8 *)((long)local_300 + 0x14);
    uStack_1d4 = (undefined4)*(undefined8 *)((long)local_300 + 0xc);
    uStack_1d0 = (undefined4)((ulong)*(undefined8 *)((long)local_300 + 0xc) >> 0x20);
    local_1f0 = local_140;
    local_1e8 = local_138;
    local_2e0 = local_15c;
    local_2dc = local_160;
    local_2d8 = auStack_230;
    memcpy(local_2d8,local_2f8,local_2f0);
    uStack_238 = uStack_1a8;
    uVar6 = uStack_238;
    local_240 = local_1b0;
    uVar3 = local_240;
    uStack_248 = uStack_1b8;
    uVar2 = uStack_248;
    local_250 = local_1c0;
    uVar1 = local_250;
    local_240._0_4_ = (undefined4)local_1b0;
    uVar9 = (undefined4)local_240;
    local_240._4_4_ = (undefined4)((ulong)local_1b0 >> 0x20);
    uVar4 = local_240._4_4_;
    uStack_238._0_4_ = (undefined4)uStack_1a8;
    uVar5 = (undefined4)uStack_238;
    uStack_238._4_4_ = (undefined4)((ulong)uStack_1a8 >> 0x20);
    uVar7 = uStack_238._4_4_;
    local_250._0_4_ = (undefined4)local_1c0;
    local_250._4_4_ = (undefined4)((ulong)local_1c0 >> 0x20);
    uStack_248._0_4_ = (undefined4)uStack_1b8;
    uStack_248._4_4_ = (undefined4)((ulong)uStack_1b8 >> 0x20);
    local_2bc = 1;
    local_2cc = 0;
    local_2ac = 0xffffffff;
    local_3b0[0] = local_2e0;
    local_3a8 = local_2dc;
    local_3a0 = 0;
    local_398 = local_2d8;
    local_390 = 0;
    local_388 = (undefined4)local_250;
    local_384 = local_250._4_4_;
    local_380 = (undefined4)uStack_248;
    local_37c = uStack_248._4_4_;
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_350 = 0;
    local_348 = 0;
    local_340 = 0;
    local_338 = 0;
    local_2c8 = (undefined1 *)local_3b0;
    local_250 = uVar1;
    uStack_248 = uVar2;
    local_240 = uVar3;
    uStack_238 = uVar6;
    local_1c1 = OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
                          (local_1f0 & 0xffffffff,local_1f0._4_4_,local_1e8,uVar9,uVar4,uVar5,uVar7,
                           1,0,0,0,0,0xffffffff,0,local_2e8);
    local_1c1 = local_1c1 & (byte)local_2bc;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*local_2a0);
    puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*local_2a0);
    local_258 = (Il2CppArray *)*puVar8;
    local_25c = *(int *)(local_28 + 0x1b0);
    NullCheck(local_258);
    ArrayElementTypeCheck(local_258,local_2b8);
    OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::SetAt
              ((OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)local_258,
               (long)local_25c,(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)local_2b8);
    *(undefined4 *)(local_28 + 0x1b0) = local_2ac;
  }
  local_268 = *(undefined8 *)(local_28 + 0x1c0);
  local_269 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(local_268,0,0);
  local_269 = local_269 & 1;
  if (local_269 != 0) {
    local_278 = *(undefined8 *)(local_28 + 0x1c0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*local_298);
    local_330 = (MethodInfo *)0x0;
    local_279 = OVRPlugin_EnqueueDestroyLayer_mC4A991C01B4734190C2F8291670BE84B30AB252B(local_278);
    local_279 = local_279 & 1;
    *(undefined8 *)(local_28 + 0x1c0) = 0;
    local_288 = local_28 + 0x1b8;
    GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(local_288,local_330);
    OVROverlay_set_layerId_m28284412D866364354AF5355DD29ED5643F4BA46_inline(local_28,0,local_330);
  }
  local_290 = local_28 + 0x130;
  il2cpp_codegen_initobj(local_290,0x7c);
  *(undefined4 *)(local_28 + 0x1c8) = 0;
  *(undefined4 *)(local_28 + 0x1cc) = 0xffffffff;
  return;
}


