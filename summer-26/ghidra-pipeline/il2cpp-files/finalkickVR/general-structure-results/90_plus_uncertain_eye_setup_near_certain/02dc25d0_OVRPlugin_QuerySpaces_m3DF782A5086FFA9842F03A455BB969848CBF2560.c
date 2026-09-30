/*
FUNCTION_NAME: OVRPlugin_QuerySpaces_m3DF782A5086FFA9842F03A455BB969848CBF2560
ENTRY_POINT: 02dc25d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_QuerySpaces_m3DF782A5086FFA9842F03A455BB969848CBF2560
               (void *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_2f0 [48];
  void *local_2c0;
  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 **local_2b0;
  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 **local_2a8;
  void *local_2a0;
  void *local_298;
  void *local_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [32];
  void *local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined8 local_238;
  void *local_230;
  void *local_228;
  void *local_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [48];
  void *local_1d8;
  undefined8 uStack_1d0;
  int local_1c4;
  undefined1 auStack_1c0 [24];
  int local_1a8;
  undefined8 local_180;
  undefined8 local_178;
  void *local_170;
  void *local_168;
  void *local_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [32];
  void *local_128;
  undefined8 uStack_120;
  int local_104;
  undefined1 auStack_100 [24];
  int local_e8;
  byte local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  uint local_9c;
  void *local_98;
  void *local_90;
  uint local_84;
  void *local_80;
  void *local_78;
  uint local_6c;
  void *local_68;
  void *local_60;
  uint local_54;
  void *local_50;
  void *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 *local_30;
  bool local_21;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_38 = param_3;
  local_30 = param_2;
  if ((OVRPlugin_QuerySpaces_m3DF782A5086FFA9842F03A455BB969848CBF2560::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_99054E0CF2E77E433695D8C314F5D62954768AC22946A03DA17B4999CA13065A
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_E7A6520935E622D270A66BB158A7049033032A904B991BB281E52C703BF7985B
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_63CEF3E75635BF279329C312B9E2EF75617DD3ADF08A7965FC4529C3A07C3277
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_8F34E293FD775FA861A35F571EDAA10DC97AE4B13D68852A0B309436C7F61E04
              );
    OVRPlugin_QuerySpaces_m3DF782A5086FFA9842F03A455BB969848CBF2560::s_Il2CppMethodInitialized = 1;
  }
  local_3c = 0;
  local_48 = (void *)0x0;
  local_50 = (void *)0x0;
  local_54 = 0;
  local_60 = (void *)0x0;
  local_68 = (void *)0x0;
  local_6c = 0;
  local_78 = (void *)0x0;
  local_80 = (void *)0x0;
  local_84 = 0;
  local_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_9c = 0;
  local_a8 = local_30;
  *local_30 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_b0 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_b8 = *puVar4;
  local_b9 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_b0,local_b8,0);
  local_b9 = local_b9 & 1;
  if (local_b9 == 0) {
    local_21 = false;
  }
  else {
    memcpy(auStack_100,param_1,0x40);
    local_104 = local_e8;
    if (local_e8 == 1) {
      memcpy(auStack_148,param_1,0x40);
      uStack_158 = uStack_120;
      local_160 = local_128;
      local_168 = local_128;
      local_170 = local_128;
      if (local_128 == (void *)0x0) {
        local_50 = local_128;
        local_54 = 0;
      }
      else {
        local_48 = local_128;
        NullCheck(local_128);
        local_54 = (uint)(0x400 < (int)*(undefined8 *)((long)local_48 + 0x18));
      }
      if (local_54 != 0) {
        local_3c = 0x400;
        local_178 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(&local_3c);
        local_180 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                              (*(undefined8 *)
                                Field_<PrivateImplementationDetails>_8F34E293FD775FA861A35F571EDAA10DC97AE4B13D68852A0B309436C7F61E04
                               ,local_178,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(local_180,0);
        return false;
      }
    }
    else {
      memcpy(auStack_1c0,param_1,0x40);
      local_1c4 = local_1a8;
      if (local_1a8 == 2) {
        memcpy(auStack_208,param_1,0x40);
        uStack_218 = uStack_1d0;
        local_220 = local_1d8;
        local_228 = local_1d8;
        local_230 = local_1d8;
        if (local_1d8 == (void *)0x0) {
          local_68 = local_1d8;
          local_6c = 0;
        }
        else {
          local_60 = local_1d8;
          NullCheck(local_1d8);
          local_6c = (uint)(0x10 < (int)*(undefined8 *)((long)local_60 + 0x18));
        }
        if (local_6c != 0) {
          local_3c = 0x10;
          local_238 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(&local_3c);
          local_240 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                                (*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_63CEF3E75635BF279329C312B9E2EF75617DD3ADF08A7965FC4529C3A07C3277
                                 ,local_238,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(local_240,0);
          return false;
        }
      }
    }
    memcpy(auStack_280,param_1,0x40);
    uStack_288 = uStack_258;
    local_290 = local_260;
    local_298 = local_260;
    local_2a0 = local_260;
    if (local_260 == (void *)0x0) {
      local_80 = local_260;
      local_84 = 1;
    }
    else {
      local_78 = local_260;
      NullCheck(local_260);
      local_84 = (uint)((int)*(undefined8 *)((long)local_78 + 0x18) != 0x400);
    }
    if (local_84 != 0) {
      local_2b0 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42 **)((long)param_1 + 0x20);
      local_2a8 = local_2b0;
      Array_Resize_TisGuid_t_mB8C56F10BA35BF31ADAE87039DE8468E94671B9D
                (local_2b0,0x400,
                 *(MethodInfo **)
                  Field_<PrivateImplementationDetails>_99054E0CF2E77E433695D8C314F5D62954768AC22946A03DA17B4999CA13065A
                );
    }
    memcpy(auStack_2f0,param_1,0x40);
    if (local_2c0 == (void *)0x0) {
      local_98 = local_2c0;
      local_9c = 1;
    }
    else {
      local_90 = local_2c0;
      NullCheck(local_2c0);
      local_9c = (uint)((int)*(undefined8 *)((long)local_90 + 0x18) != 0x10);
    }
    if (local_9c != 0) {
      Array_Resize_TisSpaceComponentType_tCD4A67FF4EBD7D9997F959066452AFAD5255910E_m87188493899EB698D3CE3F06BD196341DCE84D0D
                ((SpaceComponentTypeU5BU5D_t0B1B0FC97F1326A6BC34EEDFB77B9BB241D9EB80 **)
                 ((long)param_1 + 0x30),0x10,
                 *(MethodInfo **)
                  Field_<PrivateImplementationDetails>_E7A6520935E622D270A66BB158A7049033032A904B991BB281E52C703BF7985B
                );
    }
    puVar4 = local_30;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar3 = OVRP_1_72_0_ovrp_QuerySpaces_mA0DC1BBDA0DEFB4F78A97FE0B6069548ADD8CC99(param_1,puVar4,0)
    ;
    local_21 = iVar3 == 0;
  }
  return local_21;
}


