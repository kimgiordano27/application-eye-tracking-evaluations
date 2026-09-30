/*
FUNCTION_NAME: OVRSpectatorModeDomeTest_UpdateDefaultExternalCamera_mD87883591FCB75925D0FD0672E6F704FD46ED9EA
ENTRY_POINT: 02e62bac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRSpectatorModeDomeTest_UpdateDefaultExternalCamera_mD87883591FCB75925D0FD0672E6F704FD46ED9EA
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined8 local_54c;
  undefined8 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined8 uStack_538;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined8 local_510;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined8 uStack_4fc;
  undefined8 local_4f0 [2];
  undefined8 uStack_4dc;
  undefined8 local_4cc;
  undefined4 uStack_4c4;
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  undefined4 uStack_4b4;
  undefined8 local_4b0;
  undefined8 local_490;
  undefined8 uStack_484;
  undefined8 uStack_47c;
  undefined8 local_46c;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 local_430 [2];
  undefined8 uStack_41c;
  undefined8 local_40c;
  undefined8 local_3f0;
  undefined8 local_3cc;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 local_390;
  undefined8 uStack_384;
  undefined8 uStack_37c;
  undefined8 local_370 [2];
  undefined8 uStack_35c;
  undefined8 local_34c;
  undefined8 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined8 local_310;
  undefined8 uStack_304;
  undefined8 uStack_2fc;
  undefined8 local_2ec;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2ac;
  undefined4 uStack_2a4;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 local_270;
  void *local_268;
  undefined8 local_25c;
  undefined8 local_240;
  undefined8 local_218;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_210;
  byte local_201;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_200;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_1f8;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *local_1f0;
  float local_1e4;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  undefined4 local_1cc;
  void *local_1c8;
  undefined4 local_1bc;
  void *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  void *local_168;
  float local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140 [4];
  undefined8 local_120;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e8;
  undefined8 local_e0 [4];
  float local_bc;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float local_9c;
  undefined4 local_98 [2];
  double local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 local_60 [2];
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  puVar3 = StringLiteral_706;
  puVar2 = 
  Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRSpectatorModeDomeTest_UpdateDefaultExternalCamera_mD87883591FCB75925D0FD0672E6F704FD46ED9EA
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Stack_StackEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_707);
    OVRSpectatorModeDomeTest_UpdateDefaultExternalCamera_mD87883591FCB75925D0FD0672E6F704FD46ED9EA::
    s_Il2CppMethodInitialized = 1;
  }
  memset(local_60,0,0x30);
  memset(local_98,0,0x38);
  local_9c = 0.0;
  local_a0 = 0.0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)0x0;
  local_bc = 0.0;
  local_e0[0] = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  local_140[0] = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  il2cpp_codegen_initobj(local_60,0x30);
  il2cpp_codegen_initobj(local_98,0x38);
  local_60[0] = 1;
  local_15c = (float)Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(0);
  local_58 = (double)local_15c;
  local_168 = *(void **)(local_28 + 0x28);
  NullCheck(local_168);
  local_16c = (float)Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(local_168,0);
  local_170 = (float)il2cpp_codegen_multiply<float,float>(local_16c,0.017453292);
  local_9c = local_170;
  fVar6 = (float)il2cpp_codegen_multiply<float,float>(local_170,0.5);
  local_174 = tanf(fVar6);
  fVar6 = (float)il2cpp_codegen_multiply<float,float>(local_174,1.7777778);
  local_178 = atanf(fVar6);
  local_a0 = (float)il2cpp_codegen_multiply<float,float>(local_178,2.0);
  il2cpp_codegen_initobj(&local_b0,0x10);
  local_17c = local_9c;
  fVar6 = (float)il2cpp_codegen_multiply<float,float>(local_9c,0.5);
  local_188 = tanf(fVar6);
  local_b0 = CONCAT44(local_188,local_188);
  local_18c = local_a0;
  local_184 = local_188;
  local_180 = local_188;
  local_bc = local_188;
  fVar6 = (float)il2cpp_codegen_multiply<float,float>(local_a0,0.5);
  local_198 = tanf(fVar6);
  uStack_a8 = CONCAT44(local_198,local_198);
  uStack_1a8 = uStack_a8;
  local_1b0 = local_b0;
  uStack_48 = uStack_a8;
  local_50 = local_b0;
  local_1b8 = *(void **)(local_28 + 0x28);
  local_194 = local_198;
  local_190 = local_198;
  local_bc = local_198;
  NullCheck(local_1b8);
  local_1bc = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(local_1b8,0);
  local_1c8 = *(void **)(local_28 + 0x28);
  local_40 = local_1bc;
  NullCheck(local_1c8);
  local_1cc = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(local_1c8,0);
  local_1d8 = &local_38;
  local_38 = 0x780;
  local_1e0 = &local_38;
  local_34 = 0x438;
  local_98[0] = 1;
  local_3c = local_1cc;
  local_1e4 = (float)Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(0);
  local_90 = (double)local_1e4;
  local_88 = 4;
  local_84 = 0xffffffff;
  local_1f0 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
              Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(0);
  NullCheck(local_1f0);
  local_200 = (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
              Component_GetComponentInParent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m132CAE22DC4B18ACA26D293EE1D3799068ADAA5D
                        (local_1f0,
                         *(MethodInfo **)Method_System_Collections_Stack_StackEnumerator_Reset__);
  local_1f8 = local_200;
  local_b8 = local_200;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  local_201 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_200,0);
  local_201 = local_201 & 1;
  if (local_201 == 0) {
    local_148 = *(undefined8 *)puVar3;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_80 = *puVar5;
    uStack_568 = (undefined4)puVar5[1];
    uStack_6c = *(undefined8 *)((long)puVar5 + 0x14);
    uStack_564 = (undefined4)*(undefined8 *)((long)puVar5 + 0xc);
    uStack_560 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20);
    uStack_78 = uStack_568;
    local_158 = local_148;
    uStack_74 = uStack_564;
    uStack_70 = uStack_560;
  }
  else {
    local_150 = *(undefined8 *)puVar3;
    local_210 = local_b8;
    NullCheck(local_b8);
    local_218 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                          (local_210,(MethodInfo *)0x0);
    OVRExtensions_ToOVRPose_m52593B4249478412DFA025AD6DE338B96CFBC265(local_218,0,0);
    local_240 = local_25c;
    local_e0[0] = local_25c;
    local_268 = *(void **)(local_28 + 0x28);
    NullCheck(local_268);
    local_270 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_268,0);
    OVRExtensions_ToOVRPose_m52593B4249478412DFA025AD6DE338B96CFBC265(local_270,0,0);
    local_290 = local_2ac;
    uStack_f8 = uStack_2a4;
    local_100 = local_2ac;
    uStack_e8 = uStack_294;
    uStack_f0 = uStack_29c;
    OVRPose_Inverse_m13457B6B61C9A6D088EBB4F9BCDB1D8137CB21C7(local_e0,0);
    local_2d0 = local_2ec;
    local_310 = local_100;
    uStack_37c = 0;
    uStack_384 = 0;
    local_370[0] = local_2ec;
    uStack_35c = uStack_2d8;
    local_390 = local_100;
    uStack_304 = uStack_384;
    uStack_2fc = uStack_37c;
    OVRPose_op_Multiply_mCAC208D92589C2CA928CB093B3C504DFA9866AFE(local_370,&local_390,0);
    local_330 = local_34c;
    local_120 = local_34c;
    uStack_108 = uStack_334;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRPlugin_GetTrackingTransformRelativePose_m594736E2B1E616394C8BEBE60A2ACB5FEE4F3005(2,0);
    local_3b0 = local_3cc;
    local_430[0] = local_3cc;
    uStack_41c = uStack_3b8;
    OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_430,0);
    local_3f0 = local_40c;
    local_140[0] = local_40c;
    OVRPose_Inverse_m13457B6B61C9A6D088EBB4F9BCDB1D8137CB21C7(local_140,0);
    local_450 = local_46c;
    local_490 = local_120;
    uStack_4fc = 0;
    uStack_484 = 0;
    local_4f0[0] = local_46c;
    uStack_4dc = uStack_458;
    local_510 = local_120;
    uStack_504 = 0;
    uStack_500 = 0;
    uStack_47c = uStack_4fc;
    OVRPose_op_Multiply_mCAC208D92589C2CA928CB093B3C504DFA9866AFE(local_4f0,&local_510,0);
    local_4b0 = local_4cc;
    uStack_118 = uStack_4c4;
    local_120 = local_4cc;
    uStack_108 = uStack_4b4;
    uStack_110 = uStack_4bc;
    OVRPose_ToPosef_m07DD283CB7D729999F7223E8879214C080066192(&local_120,0);
    uStack_528 = (undefined4)uStack_544;
    uStack_6c = uStack_538;
    uStack_524 = uStack_540;
    uStack_520 = uStack_53c;
    uStack_78 = uStack_528;
    local_80 = local_54c;
    local_158 = local_150;
    uStack_74 = uStack_524;
    uStack_70 = uStack_520;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar4 = OVRPlugin_SetDefaultExternalCamera_m72A8D2E0A81939CFF330DF7BB4CDBEF9D2C61AD7
                    (local_158,local_60,local_98,0);
  if ((bVar4 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(*(undefined8 *)StringLiteral_707,0);
  }
  return;
}


