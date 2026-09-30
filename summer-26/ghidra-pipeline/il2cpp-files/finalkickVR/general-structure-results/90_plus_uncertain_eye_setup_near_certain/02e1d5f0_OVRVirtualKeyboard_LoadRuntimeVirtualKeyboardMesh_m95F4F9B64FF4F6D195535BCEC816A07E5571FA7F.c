/*
FUNCTION_NAME: OVRVirtualKeyboard_LoadRuntimeVirtualKeyboardMesh_m95F4F9B64FF4F6D195535BCEC816A07E5571FA7F
ENTRY_POINT: 02e1d5f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVRVirtualKeyboard_LoadRuntimeVirtualKeyboardMesh_m95F4F9B64FF4F6D195535BCEC816A07E5571FA7F
               (Il2CppObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *pFVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined1 auStack_210 [40];
  undefined1 auStack_1e8 [40];
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_1c0;
  Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 *local_1b8;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_1b0;
  Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 *local_1a8;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_1a0;
  Func_3_t5A561011E420678D17FD83790A53CA2F2C068580 *local_198;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_190;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  long lStack_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_130;
  long local_128;
  undefined8 local_120;
  long lStack_118;
  undefined8 local_110;
  byte local_f9;
  undefined8 local_f8;
  byte local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *local_d8;
  Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *local_d0;
  Il2CppObject *local_c8;
  Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *local_c0;
  Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *local_b8;
  Il2CppObject *local_b0;
  Il2CppObject *local_a8;
  Il2CppObject *local_a0;
  Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *local_98;
  Il2CppObject *local_90;
  Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *local_88;
  undefined8 local_80;
  undefined8 local_78;
  Il2CppObject *local_70;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_68;
  long local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  Il2CppObject *local_30;
  byte local_21;
  
  puVar3 = StringLiteral_353;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRVirtualKeyboard_LoadRuntimeVirtualKeyboardMesh_m95F4F9B64FF4F6D195535BCEC816A07E5571FA7F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_354);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UI_Collections_IndexedSet<IClipper>_DisableItem__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_355);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_356);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_357);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_358);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_359);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_360);
    OVRVirtualKeyboard_LoadRuntimeVirtualKeyboardMesh_m95F4F9B64FF4F6D195535BCEC816A07E5571FA7F::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_68 = (OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *)0x0;
  local_70 = (Il2CppObject *)0x0;
  local_78 = 0;
  local_80 = 0;
  local_88 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *)0x0;
  local_90 = (Il2CppObject *)0x0;
  local_98 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *)0x0;
  local_a0 = (Il2CppObject *)0x0;
  local_30[0x139] = (Il2CppObject)0x0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(*(undefined8 *)StringLiteral_359,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_b0 = (Il2CppObject *)
             OVRPlugin_GetRenderModelPaths_m38E661CF50ADD0B3C4D31C64B36ACD8F04D0A6B7(0);
  local_a8 = local_b0;
  if (local_b0 == (Il2CppObject *)0x0) {
    local_80 = 0;
    local_78 = 0;
  }
  else {
    local_70 = local_b0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    local_c0 = *(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D **)(lVar6 + 8);
    local_b8 = local_c0;
    if (local_c0 == (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *)0x0) {
      local_a0 = local_70;
      local_98 = local_c0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      local_c8 = (Il2CppObject *)*puVar7;
      local_d0 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_UnityEngine_UI_Collections_IndexedSet<IClipper>_DisableItem__);
      Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184
                (local_d0,local_c8,*(long *)StringLiteral_357,(MethodInfo *)0x0);
      pFVar4 = local_d0;
      local_d8 = local_d0;
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      *(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D **)(lVar6 + 8) = pFVar4;
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 8),local_d8);
      local_88 = local_d8;
      local_90 = local_a0;
    }
    else {
      local_90 = local_70;
      local_88 = local_c0;
    }
    local_e0 = Enumerable_FirstOrDefault_TisString_t_m14E90E95032DE449BEC4BEC27628E0EC6910FD74
                         (local_90,local_88,*(MethodInfo **)StringLiteral_354);
    local_80 = local_e0;
  }
  local_40 = local_80;
  local_e8 = local_80;
  local_e9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(local_80,0);
  local_e9 = local_e9 & 1;
  if (local_e9 == 0) {
    il2cpp_codegen_initobj(&local_58,0x18);
    local_f8 = local_40;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_f9 = OVRPlugin_GetRenderModelProperties_m2127B2E834AAB019EAA607A12F06B7F51875D7C1
                         (local_f8,&local_58,0);
    local_f9 = local_f9 & 1;
    if (local_f9 != 0) {
      lStack_118 = lStack_50;
      local_120 = local_58;
      local_110 = local_48;
      local_128 = lStack_50;
      if (lStack_50 != 0) {
        lStack_138 = lStack_50;
        local_140 = local_58;
        local_130 = local_48;
        local_148 = lStack_50;
        *(long *)(local_30 + 0x130) = lStack_50;
        lStack_158 = lStack_50;
        local_160 = local_58;
        local_150 = local_48;
        local_168 = lStack_50;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        local_180 = OVRPlugin_LoadRenderModel_m93104E60058F91148AF4E797E59B72CBA5ECA0ED(local_168,0)
        ;
        if (local_180 != 0) {
          local_178 = local_180;
          local_170 = local_180;
          local_60 = local_180;
          local_188 = (OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *)
                      il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_0__);
          OVRGLTFLoader__ctor_m40C1D7C90EB99E1269D1BE8AD1A8027E9CCD0425(local_188,local_180);
          local_68 = local_188;
          local_190 = local_188;
          local_198 = (Func_3_t5A561011E420678D17FD83790A53CA2F2C068580 *)
                      il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_355);
          Func_3__ctor_mDE405DA1AD4D198FB53F9A17BBDA246BC4567FD8
                    (local_198,local_30,*(long *)StringLiteral_356,(MethodInfo *)0x0);
          NullCheck(local_190);
          *(Func_3_t5A561011E420678D17FD83790A53CA2F2C068580 **)(local_190 + 0x70) = local_198;
          Il2CppCodeGenWriteBarrier((void **)(local_190 + 0x70),local_198);
          local_1a0 = local_68;
          local_1a8 = *(Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 **)(local_30 + 0xb0);
          NullCheck(local_68);
          OVRGLTFLoader_SetModelShader_mA12F1B6FADA267C32D8EAE55651C7600EF6010E1_inline
                    (local_1a0,local_1a8,(MethodInfo *)0x0);
          local_1b0 = local_68;
          local_1b8 = *(Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 **)(local_30 + 0xb8);
          NullCheck(local_68);
          OVRGLTFLoader_SetModelAlphaBlendShader_m7360339B43FE1DAC0954F1B001C3C8AEC77C5E2C_inline
                    (local_1b0,local_1b8,(MethodInfo *)0x0);
          local_1c0 = local_68;
          NullCheck(local_68);
          OVRGLTFLoader_LoadGLB_m6EC1E2449BB8A5F3C5DDE7F40DCB9160325F3B33(local_1c0,1,1,0);
          memcpy(auStack_1e8,auStack_210,0x28);
          memcpy(local_30 + 0x108,auStack_1e8,0x28);
          Il2CppCodeGenWriteBarrier((void **)(local_30 + 0x108),(void *)0x0);
          uVar8 = *(undefined8 *)(local_30 + 0x108);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
          bVar5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar8,0);
          local_30[0x139] = (Il2CppObject)(bVar5 & 1);
          if (((byte)local_30[0x139] & 1) != 0) {
            pvVar9 = *(void **)(local_30 + 0x108);
            NullCheck(pvVar9);
            pvVar9 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                       (pvVar9);
            uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_30,0);
            NullCheck(pvVar9);
            Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(pvVar9,uVar8,0,0);
            pvVar9 = *(void **)(local_30 + 0x108);
            NullCheck(pvVar9);
            pvVar9 = (void *)GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC
                                       (pvVar9,0);
            NullCheck(pvVar9);
            Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47
                      (pvVar9,*(undefined8 *)StringLiteral_358,0);
            pvVar9 = *(void **)(local_30 + 0x108);
            NullCheck(pvVar9);
            uVar8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(pvVar9,0);
            OVRVirtualKeyboard_ApplyHideFlags_m094D50FB4ED1397F67CCBD090FD245BFD7A26BEC(uVar8,0);
            OVRVirtualKeyboard_UseSuggestedLocation_mB19E6823ADC820085AADCEF36E19E526C66F64C0
                      (local_30,*(undefined4 *)(local_30 + 0x50),0);
            OVRVirtualKeyboard_PopulateCollision_mC2301FBB5B3759EB3610943CD06EE5535D44060C
                      (local_30,0);
          }
        }
      }
    }
    local_21 = (byte)local_30[0x139] & 1;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(*(undefined8 *)StringLiteral_360,0);
    local_21 = 0;
  }
  return local_21;
}


