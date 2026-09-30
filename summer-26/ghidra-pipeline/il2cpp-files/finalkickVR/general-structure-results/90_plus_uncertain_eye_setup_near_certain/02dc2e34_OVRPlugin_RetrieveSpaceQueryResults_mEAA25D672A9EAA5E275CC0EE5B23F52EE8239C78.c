/*
FUNCTION_NAME: OVRPlugin_RetrieveSpaceQueryResults_mEAA25D672A9EAA5E275CC0EE5B23F52EE8239C78
ENTRY_POINT: 02dc2e34
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPlugin_RetrieveSpaceQueryResults_mEAA25D672A9EAA5E275CC0EE5B23F52EE8239C78
          (undefined8 param_1,void **param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  int local_164;
  SpaceQueryResultU5BU5D_tFF2C7DAB792A6D43D65D47F5306F25F997C58621 *local_160;
  void **local_158;
  Il2CppObject *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  int local_128;
  int local_124;
  undefined8 local_120;
  void *local_118;
  uint local_10c;
  void **local_108;
  undefined8 local_100;
  int local_f4;
  undefined8 local_f0;
  uint local_e4;
  undefined8 local_e0;
  int local_d4;
  uint local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_ac;
  undefined8 local_a8;
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  void **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_5c;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  void **local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  puVar4 = 
  Field_<PrivateImplementationDetails>_31C41E563467B6D1ED0CE8AE10121B6B21F93FF15070D8154C46919AFB22513F
  ;
  puVar3 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_RetrieveSpaceQueryResults_mEAA25D672A9EAA5E275CC0EE5B23F52EE8239C78::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_3673B56DA9C56396E041CADEBF654EDD318FE90A96A0E7CA6AE090B9BE84EFBD
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_3BA20E66882BA2DB8370AA6251D396012AD072FE5A7CF059521FB4A5A02B92D8
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_RetrieveSpaceQueryResults_mEAA25D672A9EAA5E275CC0EE5B23F52EE8239C78::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  local_5c = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = local_38;
  *local_38 = (void *)0x0;
  Il2CppCodeGenWriteBarrier(local_38,(void *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_90 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_98 = *puVar6;
  local_99 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_90,local_98,0);
  local_99 = local_99 & 1;
  if (local_99 == 0) {
    local_21 = 0;
  }
  else {
    IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7(&local_48);
    local_4c = 0;
    local_a8 = local_48;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_ac = OVRP_1_72_0_ovrp_RetrieveSpaceQueryResults_m3DA7C85DF1E171AD9541B8D6EF42560655491865
                         (&local_30,0,&local_4c,local_a8,0);
    if (local_ac == 0) {
      local_b8 = *(undefined8 *)puVar4;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_c8 = local_b8;
      local_c0 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_b8);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_d4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(local_c0,0);
      local_d0 = local_4c;
      local_cc = local_d4;
      local_50 = local_d4;
      uVar7 = il2cpp_codegen_multiply<int,int>(local_4c,local_d4);
      local_f0 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(uVar7,0);
      local_e4 = local_4c;
      local_e0 = local_f0;
      local_58 = local_f0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      local_f4 = OVRP_1_72_0_ovrp_RetrieveSpaceQueryResults_m3DA7C85DF1E171AD9541B8D6EF42560655491865
                           (&local_30,local_e4,&local_4c,local_f0,0);
      if (local_f4 == 0) {
        local_108 = local_38;
        local_10c = local_4c;
        local_118 = (void *)SZArrayNew(*(Il2CppClass **)
                                        Field_<PrivateImplementationDetails>_3673B56DA9C56396E041CADEBF654EDD318FE90A96A0E7CA6AE090B9BE84EFBD
                                       ,local_4c);
        *local_108 = local_118;
        Il2CppCodeGenWriteBarrier(local_108,local_118);
        local_5c = 0;
        while( true ) {
          uVar7 = local_58;
          if ((long)(ulong)local_4c <= (long)local_5c) break;
          local_120 = local_58;
          local_124 = local_5c;
          local_128 = local_50;
          uVar5 = il2cpp_codegen_multiply<int,int>(local_5c,local_50);
          local_130 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(uVar7,uVar5);
          local_138 = *(undefined8 *)puVar4;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          local_148 = local_138;
          local_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_138,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          local_150 = (Il2CppObject *)
                      Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3
                                (local_130,local_140,0);
          puVar6 = (undefined8 *)
                   UnBox(local_150,
                         *(Il2CppClass **)
                          Field_<PrivateImplementationDetails>_3BA20E66882BA2DB8370AA6251D396012AD072FE5A7CF059521FB4A5A02B92D8
                        );
          uStack_178 = puVar6[1];
          local_180 = *puVar6;
          local_170 = puVar6[2];
          local_158 = local_38;
          local_160 = *local_38;
          local_164 = local_5c;
          local_80 = local_180;
          uStack_78 = uStack_178;
          local_70 = local_170;
          NullCheck(local_160);
          uStack_198 = uStack_178;
          local_1a0 = local_180;
          local_190 = local_170;
          SpaceQueryResultU5BU5D_tFF2C7DAB792A6D43D65D47F5306F25F997C58621::SetAt
                    (local_160,(long)local_164,&local_1a0);
          local_5c = il2cpp_codegen_add<int,int>(local_5c,1);
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(uVar7,0);
        local_21 = 1;
      }
      else {
        local_100 = local_58;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(local_100,0);
        local_21 = 0;
      }
    }
    else {
      local_21 = 0;
    }
  }
  return local_21;
}


