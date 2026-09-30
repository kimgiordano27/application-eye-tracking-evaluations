/*
FUNCTION_NAME: OVRRuntimeController_LoadControllerModel_m12A440A3D6ED34045B021DFC7D14FB012D86F40F
ENTRY_POINT: 02e566a8
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
OVRRuntimeController_LoadControllerModel_m12A440A3D6ED34045B021DFC7D14FB012D86F40F
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined8 local_248;
  undefined4 local_240;
  void *local_238;
  void *local_230;
  void *local_228;
  undefined8 local_220;
  undefined4 local_218;
  ulong local_210;
  undefined4 local_208;
  void *local_200;
  void *local_1f8;
  void *local_1f0;
  undefined8 local_1e8;
  void *local_1e0;
  void *local_1d8;
  byte local_1c9;
  undefined8 local_1c8;
  void *local_1c0;
  undefined1 auStack_1b8 [16];
  void *local_1a8;
  void *local_190;
  void *local_188 [5];
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [47];
  byte local_109;
  Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 *local_108;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_100;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  undefined1 auStack_88 [40];
  long local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRRuntimeController_LoadControllerModel_m12A440A3D6ED34045B021DFC7D14FB012D86F40F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_788);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_789);
    OVRRuntimeController_LoadControllerModel_m12A440A3D6ED34045B021DFC7D14FB012D86F40F::
    s_Il2CppMethodInitialized = 1;
  }
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_60 = 0;
  memset(auStack_88,0,0x28);
  il2cpp_codegen_initobj(&local_58,0x18);
  local_90 = local_38;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_91 = OVRPlugin_GetRenderModelProperties_m2127B2E834AAB019EAA607A12F06B7F51875D7C1
                       (local_90,&local_58,0);
  local_91 = local_91 & 1;
  if (local_91 != 0) {
    local_b8 = lStack_50;
    local_b0 = local_58;
    local_a0 = local_48;
    lStack_a8 = local_b8;
    if (lStack_50 != 0) {
      local_d8 = lStack_50;
      local_d0 = local_58;
      local_c0 = local_48;
      lStack_c8 = local_d8;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_e8 = OVRPlugin_LoadRenderModel_m93104E60058F91148AF4E797E59B72CBA5ECA0ED(local_d8,0);
      local_e0 = local_e8;
      local_60 = local_e8;
      if (local_e8 != 0) {
        local_f0 = local_e8;
        local_f8 = (OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *)
                   il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_0__);
        OVRGLTFLoader__ctor_m40C1D7C90EB99E1269D1BE8AD1A8027E9CCD0425(local_f8,local_f0);
        local_100 = local_f8;
        local_108 = *(Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 **)(local_30 + 0x28);
        NullCheck(local_f8);
        OVRGLTFLoader_SetModelShader_mA12F1B6FADA267C32D8EAE55651C7600EF6010E1_inline
                  (local_100,local_108,(MethodInfo *)0x0);
        local_109 = *(byte *)(local_30 + 0x30) & 1;
        NullCheck(local_100);
        OVRGLTFLoader_LoadGLB_m6EC1E2449BB8A5F3C5DDE7F40DCB9160325F3B33(local_100,local_109 & 1,1,0)
        ;
        memcpy(auStack_138,auStack_160,0x28);
        memcpy(auStack_88,auStack_138,0x28);
        memcpy(local_188,auStack_88,0x28);
        local_190 = local_188[0];
        *(void **)(local_30 + 0x38) = local_188[0];
        Il2CppCodeGenWriteBarrier((void **)(local_30 + 0x38),local_188[0]);
        memcpy(auStack_1b8,auStack_88,0x28);
        local_1c0 = local_1a8;
        *(void **)(local_30 + 0x50) = local_1a8;
        Il2CppCodeGenWriteBarrier((void **)(local_30 + 0x50),local_1a8);
        local_1c8 = *(undefined8 *)(local_30 + 0x38);
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
        bVar4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_1c8,0);
        local_1c9 = bVar4 & 1;
        if ((bVar4 & 1) != 0) {
          local_1d8 = *(void **)(local_30 + 0x38);
          NullCheck(local_1d8);
          local_1e0 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                        (local_1d8);
          local_1e8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_30,0);
          NullCheck(local_1e0);
          Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(local_1e0,local_1e8,0,0);
          local_1f0 = *(void **)(local_30 + 0x38);
          NullCheck(local_1f0);
          local_1f8 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                        (local_1f0,0);
          NullCheck(local_1f8);
          local_200 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E
                                        (local_1f8,0);
          local_210 = 0;
          local_208 = 0;
          Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                    ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_210,0.0,-0.03,-0.04
                     ,(MethodInfo *)0x0);
          NullCheck(local_200);
          local_220 = local_210;
          uVar3 = local_220;
          local_218 = local_208;
          local_220._4_4_ = (undefined4)(local_210 >> 0x20);
          uVar7 = local_220._4_4_;
          local_220 = uVar3;
          Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                    (local_210 & 0xffffffff,uVar7,local_208,local_200,0);
          local_228 = *(void **)(local_30 + 0x38);
          NullCheck(local_228);
          local_230 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                        (local_228,0);
          NullCheck(local_230);
          local_238 = (void *)Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E
                                        (local_230,0);
          local_248 = 0;
          local_240 = 0;
          Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                    ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_248,1.0,0.0,0.0,
                     (MethodInfo *)0x0);
          local_280 = (undefined4)local_248;
          uStack_27c = (undefined4)((ulong)local_248 >> 0x20);
          uVar7 = local_240;
          uVar6 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(0xc2700000,0);
          NullCheck(local_238);
          Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                    (uVar6,local_280,uStack_27c,uVar7,local_238,0);
          return 1;
        }
      }
    }
    uVar5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)StringLiteral_789,local_38);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
  }
  uVar5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)StringLiteral_788,local_38);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
  return 0;
}


