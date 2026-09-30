/*
FUNCTION_NAME: OVRTrackedKeyboard_LoadRuntimeKeyboardMesh_m71EFA3F1FEA9B1A076676EF10558AB48780DF658
ENTRY_POINT: 02e0f684
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
OVRTrackedKeyboard_LoadRuntimeKeyboardMesh_m71EFA3F1FEA9B1A076676EF10558AB48780DF658
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *pSVar4;
  undefined1 auStack_1b8 [40];
  undefined8 local_190 [5];
  Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 *local_168;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_160;
  Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 *local_158;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_150;
  OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  long lStack_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  long lStack_f8;
  undefined8 local_f0;
  byte local_d9;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_c8;
  byte local_b9;
  void *local_b8;
  int local_b0;
  int local_ac;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_a8;
  byte local_9a;
  byte local_99;
  void *local_98;
  int local_90;
  int local_8c;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_88;
  byte local_79;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_78;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_70;
  long local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  int local_44;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *local_40;
  undefined8 local_38;
  long local_30;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRTrackedKeyboard_LoadRuntimeKeyboardMesh_m71EFA3F1FEA9B1A076676EF10558AB48780DF658::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_236);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_237);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_238);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_239);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_240);
    OVRTrackedKeyboard_LoadRuntimeKeyboardMesh_m71EFA3F1FEA9B1A076676EF10558AB48780DF658::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0;
  local_44 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(*(undefined8 *)StringLiteral_237,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_78 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)
             OVRPlugin_GetRenderModelPaths_m38E661CF50ADD0B3C4D31C64B36ACD8F04D0A6B7(0);
  local_70 = local_78;
  local_40 = local_78;
  if (local_78 != (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)0x0) {
    local_44 = 0;
    while( true ) {
      pSVar4 = local_40;
      iVar3 = local_44;
      NullCheck(local_40);
      if ((int)*(undefined8 *)(pSVar4 + 0x18) <= iVar3) break;
      local_79 = OVRTrackedKeyboard_get_RemoteKeyboard_m964A807D2B7D4FF325794F698F8170D4B540E29D
                           (iVar3 - (int)*(undefined8 *)(pSVar4 + 0x18),local_30,0);
      local_79 = local_79 & 1;
      if (local_79 != 0) {
        local_88 = local_40;
        local_8c = local_44;
        NullCheck(local_40);
        local_90 = local_8c;
        local_98 = (void *)StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt
                                     (local_88,(long)local_8c);
        NullCheck(local_98);
        local_99 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D
                             (local_98,*(undefined8 *)StringLiteral_238,0);
        local_99 = local_99 & 1;
        if (local_99 == 0) goto LAB_02e0f828;
LAB_02e0f8b0:
        il2cpp_codegen_initobj(&local_60,0x18);
        local_c8 = local_40;
        local_cc = local_44;
        NullCheck(local_40);
        local_d0 = local_cc;
        local_d8 = StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt
                             (local_c8,(long)local_cc);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        local_d9 = OVRPlugin_GetRenderModelProperties_m2127B2E834AAB019EAA607A12F06B7F51875D7C1
                             (local_d8,&local_60,0);
        local_d9 = local_d9 & 1;
        if (local_d9 != 0) {
          lStack_f8 = lStack_58;
          local_100 = local_60;
          local_f0 = local_50;
          local_108 = lStack_58;
          if (lStack_58 != 0) {
            lStack_118 = lStack_58;
            local_120 = local_60;
            local_110 = local_50;
            local_128 = lStack_58;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            local_140 = OVRPlugin_LoadRenderModel_m93104E60058F91148AF4E797E59B72CBA5ECA0ED
                                  (local_128,0);
            if (local_140 != 0) {
              local_138 = local_140;
              local_130 = local_140;
              local_68 = local_140;
              local_148 = (OVRGLTFLoader_t2E5E39D416422D0459916F5D1FA9C83CA2C92CD1 *)
                          il2cpp_codegen_object_new
                                    (*(Il2CppClass **)
                                      Method_System_Dynamic_Utils_TypeUtils_<>c_<_cctor>b__44_0__);
              OVRGLTFLoader__ctor_m40C1D7C90EB99E1269D1BE8AD1A8027E9CCD0425(local_148,local_140);
              local_150 = local_148;
              local_158 = *(Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 **)(local_30 + 0x90);
              NullCheck(local_148);
              OVRGLTFLoader_SetModelShader_mA12F1B6FADA267C32D8EAE55651C7600EF6010E1_inline
                        (local_150,local_158,(MethodInfo *)0x0);
              local_160 = local_150;
              local_168 = *(Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692 **)(local_30 + 0x98);
              NullCheck(local_150);
              OVRGLTFLoader_SetModelAlphaBlendShader_m7360339B43FE1DAC0954F1B001C3C8AEC77C5E2C_inline
                        (local_160,local_168,(MethodInfo *)0x0);
              NullCheck(local_160);
              OVRGLTFLoader_LoadGLB_m6EC1E2449BB8A5F3C5DDE7F40DCB9160325F3B33(local_160,0,1,0);
              memcpy(local_190,auStack_1b8,0x28);
              return local_190[0];
            }
            local_138 = 0;
            local_130 = 0;
            local_68 = 0;
          }
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(*(undefined8 *)StringLiteral_236,0)
        ;
        break;
      }
LAB_02e0f828:
      local_9a = OVRTrackedKeyboard_get_RemoteKeyboard_m964A807D2B7D4FF325794F698F8170D4B540E29D
                           (local_30,0);
      local_9a = local_9a & 1;
      if (local_9a == 0) {
        local_a8 = local_40;
        local_ac = local_44;
        NullCheck(local_40);
        local_b0 = local_ac;
        local_b8 = (void *)StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt
                                     (local_a8,(long)local_ac);
        NullCheck(local_b8);
        local_b9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D
                             (local_b8,*(undefined8 *)StringLiteral_239,0);
        local_b9 = local_b9 & 1;
        if (local_b9 != 0) goto LAB_02e0f8b0;
      }
      local_44 = il2cpp_codegen_add<int,int>(local_44,1);
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(*(undefined8 *)StringLiteral_240,0);
  return 0;
}


