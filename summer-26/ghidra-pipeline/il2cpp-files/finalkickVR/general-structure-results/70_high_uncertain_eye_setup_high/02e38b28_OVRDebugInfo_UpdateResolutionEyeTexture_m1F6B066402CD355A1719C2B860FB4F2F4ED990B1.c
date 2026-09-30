/*
FUNCTION_NAME: OVRDebugInfo_UpdateResolutionEyeTexture_m1F6B066402CD355A1719C2B860FB4F2F4ED990B1
ENTRY_POINT: 02e38b28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRDebugInfo_UpdateResolutionEyeTexture_m1F6B066402CD355A1719C2B860FB4F2F4ED990B1
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float local_1f8;
  float local_1f4;
  undefined8 local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  float local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  float local_17c;
  undefined8 local_178;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_14c;
  undefined8 local_148;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRDebugInfo_UpdateResolutionEyeTexture_m1F6B066402CD355A1719C2B860FB4F2F4ED990B1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_603);
    OVRDebugInfo_UpdateResolutionEyeTexture_m1F6B066402CD355A1719C2B860FB4F2F4ED990B1::
    s_Il2CppMethodInitialized = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_74 = 0.0;
  local_78 = 0.0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  local_80 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
  NullCheck(local_80);
  OVRDisplay_GetEyeRenderDesc_m91EBAB90D5AB48FFAE40119CE89E12B46FBE0C21(&local_c0,local_80,0,0);
  uStack_98 = uStack_b8;
  local_a0 = local_c0;
  uStack_88 = uStack_a8;
  local_90 = local_b0;
  uStack_48 = uStack_b8;
  local_50 = local_c0;
  uStack_38 = uStack_a8;
  local_40 = local_b0;
  local_c8 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
  NullCheck(local_c8);
  OVRDisplay_GetEyeRenderDesc_m91EBAB90D5AB48FFAE40119CE89E12B46FBE0C21(&local_110,local_c8,1,0);
  uStack_e8 = uStack_108;
  local_f0 = local_110;
  uStack_d8 = uStack_f8;
  local_e0 = local_100;
  uStack_68 = uStack_108;
  local_70 = local_110;
  uStack_58 = uStack_f8;
  local_60 = local_100;
  fVar7 = (float)XRSettings_get_renderViewportScale_mB35A32F5FE6B2EEE0CEF95ADFC04F171B6E5F5D1(0);
  uStack_138 = uStack_48;
  uStack_128 = uStack_38;
  local_130 = local_40;
  local_148 = local_50;
  uVar3 = local_148;
  local_148._0_4_ = (float)local_50;
  fVar2 = (float)local_148;
  local_14c = (float)local_148;
  uStack_168 = uStack_68;
  uStack_158 = uStack_58;
  local_160 = local_60;
  local_178 = local_70;
  uVar5 = local_178;
  local_178._0_4_ = (float)local_70;
  fVar8 = (float)local_178;
  local_17c = (float)local_178;
  local_178 = uVar5;
  local_148 = uVar3;
  local_118 = fVar7;
  local_114 = fVar7;
  fVar8 = (float)il2cpp_codegen_add<float,float>(fVar2,fVar8);
  fVar8 = (float)il2cpp_codegen_multiply<float,float>(fVar7,fVar8);
  iVar4 = il2cpp_codegen_cast_double_to_int<int>((double)fVar8);
  local_74 = (float)iVar4;
  uStack_198 = uStack_48;
  local_1a0 = local_50;
  uStack_188 = uStack_38;
  local_190 = local_40;
  local_1a8._4_4_ = (float)((ulong)local_50 >> 0x20);
  fVar2 = local_1a8._4_4_;
  local_1ac = local_1a8._4_4_;
  uStack_1c8 = uStack_68;
  local_1d0 = local_70;
  uStack_1b8 = uStack_58;
  local_1c0 = local_60;
  local_1d8._4_4_ = (float)((ulong)local_70 >> 0x20);
  fVar8 = local_1d8._4_4_;
  local_1dc = local_1d8._4_4_;
  local_1d8 = local_1d0;
  local_1a8 = local_1a0;
  local_1e0 = (float)Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                               (fVar2,fVar8,(MethodInfo *)0x0);
  fVar8 = (float)il2cpp_codegen_multiply<float,float>(local_118,local_1e0);
  iVar4 = il2cpp_codegen_cast_double_to_int<int>((double)fVar8);
  local_78 = (float)iVar4;
  local_1e4 = local_74;
  local_1e8 = local_74;
  local_1f0 = Box(*(Il2CppClass **)puVar1,&local_1e8);
  local_1f4 = local_78;
  local_1f8 = local_78;
  uVar5 = Box(*(Il2CppClass **)puVar1,&local_1f8);
  pvVar6 = (void *)String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987
                             (*(undefined8 *)StringLiteral_603,local_1f0,uVar5,0);
  *(void **)(local_28 + 0xa8) = pvVar6;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0xa8),pvVar6);
  return;
}


