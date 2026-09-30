/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._FadeGrid$$EndInvoke
ENTRY_POINT: 02d917d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 197
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_21;functionality_possible_biometrics_hits_1
*/


void OVR_OpenVR_IVRCompositor__FadeGrid__EndInvoke
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
  undefined4 auStack_390 [2];
  undefined4 uStack_388;
  undefined1 uStack_380;
  undefined1 *puStack_378;
  undefined1 uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 uStack_358;
  undefined1 uStack_350;
  undefined1 uStack_348;
  undefined1 uStack_340;
  undefined1 uStack_338;
  undefined1 uStack_330;
  undefined1 uStack_328;
  undefined1 uStack_320;
  undefined8 uStack_318;
  MethodInfo *pMStack_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined8 *puStack_2f0;
  ulong uStack_2e8;
  ulong *puStack_2e0;
  undefined1 *puStack_2d8;
  size_t sStack_2d0;
  ulong *puStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 *puStack_2b8;
  undefined4 uStack_2ac;
  undefined1 *puStack_2a8;
  undefined4 uStack_29c;
  MethodInfo *pMStack_298;
  undefined4 uStack_28c;
  ulong *puStack_288;
  undefined8 *puStack_280;
  ulong *puStack_278;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOStack_270;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOStack_268;
  byte bStack_259;
  undefined8 uStack_258;
  byte bStack_249;
  undefined8 uStack_248;
  int iStack_23c;
  Il2CppArray *pIStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [64];
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  ulong uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  byte bStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [64];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulong uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulong uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_fc [28];
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined1 auStack_bc [28];
  ulong uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [64];
  ulong uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_10;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOStack_8;
  
  puStack_288 = (ulong *)&uStack_12c;
  puStack_280 = (undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
  ;
  puStack_278 = (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  uStack_10 = param_5;
  pOStack_8 = param_4;
  if ((OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack_278);
    OVROverlay_DestroyLayer_mCABEA927EFDFE37F86EF9CF10174A73F188A1A25::s_Il2CppMethodInitialized = 1
    ;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  memset(auStack_70,0,0x40);
  uStack_80 = 0;
  uStack_78 = 0;
  iStack_84 = *(int *)(pOStack_8 + 0x1b0);
  if (iStack_84 != -1) {
    puStack_308 = auStack_bc;
    pMStack_298 = (MethodInfo *)0x0;
    OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B();
    uStack_a0 = puStack_288[0xe];
    uStack_98 = (undefined4)puStack_288[0xf];
    uStack_8c = *(undefined8 *)(puStack_308 + 0x14);
    uStack_94 = (undefined4)*(undefined8 *)(puStack_308 + 0xc);
    uStack_90 = (undefined4)((ulong)*(undefined8 *)(puStack_308 + 0xc) >> 0x20);
    uStack_28 = uStack_98;
    uStack_1c = (undefined4)uStack_8c;
    uStack_18 = (undefined4)((ulong)uStack_8c >> 0x20);
    puStack_300 = auStack_fc;
    uStack_30 = uStack_a0;
    uStack_24 = uStack_94;
    uStack_20 = uStack_90;
    OVRPose_ToPosef_Legacy_mD9CEB204C7B417176FD6A32CD9E6F9CEA9E565C3(&uStack_30,pMStack_298);
    uStack_e0 = puStack_288[6];
    puStack_2e0 = &uStack_e0;
    uStack_d8 = (undefined4)puStack_288[7];
    uStack_cc = *(undefined8 *)(puStack_300 + 0x14);
    uStack_d4 = (undefined4)*(undefined8 *)(puStack_300 + 0xc);
    uStack_d0 = (undefined4)((ulong)*(undefined8 *)(puStack_300 + 0xc) >> 0x20);
    uStack_114 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(pMStack_298);
    uStack_108 = puStack_288[3];
    uStack_138._4_4_ = (undefined4)(uStack_108 >> 0x20);
    uVar9 = uStack_138._4_4_;
    uStack_138 = uStack_108;
    uStack_130 = param_3;
    uStack_110 = param_2;
    uStack_10c = param_3;
    uStack_100 = param_3;
    uStack_12c = OVRExtensions_ToVector3f_m21A8631A98D29AED03A5ED3FF46475646703F4DC
                           (uStack_108 & 0xffffffff,pMStack_298);
    uStack_120 = *puStack_288;
    uStack_13c = *(undefined4 *)(pOStack_8 + 0x1b0);
    uStack_140 = *(undefined4 *)(pOStack_8 + 0xf0);
    puStack_2f8 = auStack_70;
    sStack_2d0 = 0x40;
    uStack_128 = uVar9;
    uStack_124 = param_3;
    uStack_118 = param_3;
    il2cpp_codegen_initobj(puStack_2f8,0x40);
    puStack_2d8 = auStack_180;
    memcpy(puStack_2d8,puStack_2f8,sStack_2d0);
    puStack_2f0 = &uStack_80;
    uStack_2e8 = 0x10;
    il2cpp_codegen_initobj(puStack_2f0,0x10);
    uStack_188 = uStack_78;
    uStack_190 = uStack_80;
    il2cpp_codegen_initobj(puStack_2f0,uStack_2e8);
    uStack_198 = uStack_78;
    uStack_1a0 = uStack_80;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack_278);
    puStack_2c8 = &uStack_1c0;
    uStack_1b8 = uStack_d8;
    uStack_1c0 = uStack_e0;
    uStack_1ac = *(undefined8 *)((long)puStack_2e0 + 0x14);
    uStack_1b4 = (undefined4)*(undefined8 *)((long)puStack_2e0 + 0xc);
    uStack_1b0 = (undefined4)((ulong)*(undefined8 *)((long)puStack_2e0 + 0xc) >> 0x20);
    uStack_1d0 = uStack_120;
    uStack_1c8 = uStack_118;
    uStack_2c0 = uStack_13c;
    uStack_2bc = uStack_140;
    puStack_2b8 = auStack_210;
    memcpy(puStack_2b8,puStack_2d8,sStack_2d0);
    uStack_218 = uStack_188;
    uVar6 = uStack_218;
    uStack_220 = uStack_190;
    uVar3 = uStack_220;
    uStack_228 = uStack_198;
    uVar2 = uStack_228;
    uStack_230 = uStack_1a0;
    uVar1 = uStack_230;
    uStack_220._0_4_ = (undefined4)uStack_190;
    uVar9 = (undefined4)uStack_220;
    uStack_220._4_4_ = (undefined4)((ulong)uStack_190 >> 0x20);
    uVar4 = uStack_220._4_4_;
    uStack_218._0_4_ = (undefined4)uStack_188;
    uVar5 = (undefined4)uStack_218;
    uStack_218._4_4_ = (undefined4)((ulong)uStack_188 >> 0x20);
    uVar7 = uStack_218._4_4_;
    uStack_230._0_4_ = (undefined4)uStack_1a0;
    uStack_230._4_4_ = (undefined4)((ulong)uStack_1a0 >> 0x20);
    uStack_228._0_4_ = (undefined4)uStack_198;
    uStack_228._4_4_ = (undefined4)((ulong)uStack_198 >> 0x20);
    uStack_29c = 1;
    uStack_2ac = 0;
    uStack_28c = 0xffffffff;
    auStack_390[0] = uStack_2c0;
    uStack_388 = uStack_2bc;
    uStack_380 = 0;
    puStack_378 = puStack_2b8;
    uStack_370 = 0;
    uStack_368 = (undefined4)uStack_230;
    uStack_364 = uStack_230._4_4_;
    uStack_360 = (undefined4)uStack_228;
    uStack_35c = uStack_228._4_4_;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    puStack_2a8 = (undefined1 *)auStack_390;
    uStack_230 = uVar1;
    uStack_228 = uVar2;
    uStack_220 = uVar3;
    uStack_218 = uVar6;
    bStack_1a1 = OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
                           (uStack_1d0 & 0xffffffff,uStack_1d0._4_4_,uStack_1c8,uVar9,uVar4,uVar5,
                            uVar7,1,0,0,0,0,0xffffffff,0,puStack_2c8);
    bStack_1a1 = bStack_1a1 & (byte)uStack_29c;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack_280);
    puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack_280);
    pIStack_238 = (Il2CppArray *)*puVar8;
    iStack_23c = *(int *)(pOStack_8 + 0x1b0);
    NullCheck(pIStack_238);
    ArrayElementTypeCheck(pIStack_238,pMStack_298);
    OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::SetAt
              ((OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)pIStack_238,
               (long)iStack_23c,(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)pMStack_298)
    ;
    *(undefined4 *)(pOStack_8 + 0x1b0) = uStack_28c;
  }
  uStack_248 = *(undefined8 *)(pOStack_8 + 0x1c0);
  bStack_249 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(uStack_248,0,0);
  bStack_249 = bStack_249 & 1;
  if (bStack_249 != 0) {
    uStack_258 = *(undefined8 *)(pOStack_8 + 0x1c0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack_278);
    pMStack_310 = (MethodInfo *)0x0;
    bStack_259 = OVRPlugin_EnqueueDestroyLayer_mC4A991C01B4734190C2F8291670BE84B30AB252B(uStack_258)
    ;
    bStack_259 = bStack_259 & 1;
    *(undefined8 *)(pOStack_8 + 0x1c0) = 0;
    pOStack_268 = pOStack_8 + 0x1b8;
    GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(pOStack_268,pMStack_310);
    OVROverlay_set_layerId_m28284412D866364354AF5355DD29ED5643F4BA46_inline(pOStack_8,0,pMStack_310)
    ;
  }
  pOStack_270 = pOStack_8 + 0x130;
  il2cpp_codegen_initobj(pOStack_270,0x7c);
  *(undefined4 *)(pOStack_8 + 0x1c8) = 0;
  *(undefined4 *)(pOStack_8 + 0x1cc) = 0xffffffff;
  return;
}


