/*
FUNCTION_NAME: OVRSpatialAnchor_PopulateUnbound_m89EA046E1D61DD5064C38A220A0D19D8FD5DC439
ENTRY_POINT: 02e09058
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRSpatialAnchor_PopulateUnbound_m89EA046E1D61DD5064C38A220A0D19D8FD5DC439
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  undefined8 local_128;
  byte local_11a;
  byte local_119;
  undefined8 local_118;
  byte local_10a;
  byte local_109;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  byte local_d9;
  undefined8 local_d8;
  byte local_c9;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  SpaceComponentTypeU5BU5D_t0B1B0FC97F1326A6BC34EEDFB77B9BB241D9EB80 *local_b0;
  byte local_a2;
  byte local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  byte local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_58;
  int local_4c;
  byte local_47;
  byte local_46;
  byte local_45;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar3 = StringLiteral_75;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<Material,_int>_Clear__;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  uStack_28 = param_2;
  if ((OVRSpatialAnchor_PopulateUnbound_m89EA046E1D61DD5064C38A220A0D19D8FD5DC439::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<Material,_int>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_79);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<long>_ToString__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_190);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_191);
    OVRSpatialAnchor_PopulateUnbound_m89EA046E1D61DD5064C38A220A0D19D8FD5DC439::
    s_Il2CppMethodInitialized = 1;
  }
  local_44 = 0;
  local_45 = 0;
  local_46 = 0;
  local_47 = 0;
  local_4c = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_58 = (void *)*puVar4;
  uStack_68 = uStack_28;
  local_70 = local_30;
  NullCheck(local_58);
  uStack_88 = uStack_68;
  local_90 = local_70;
  local_71 = Dictionary_2_ContainsKey_mEA94D53AB4EB0A146583F9DEC8A1FED96BC677B2
                       (local_58,local_70,uStack_68,*(undefined8 *)StringLiteral_79);
  local_71 = local_71 & 1;
  if (local_71 == 0) {
    local_98 = local_38;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    local_a0 = *(undefined8 *)(lVar5 + 0x38);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_a1 = OVRPlugin_EnumerateSpaceSupportedComponents_m149FE99EF9805CEA676799CAFAFD6966C756BE55
                         (local_98,&local_44,local_a0,0);
    local_a1 = local_a1 & 1;
    if (local_a1 != 0) {
      local_45 = 0;
      local_4c = 0;
      while( true ) {
        local_c4 = local_4c;
        local_c8 = local_44;
        if ((long)(ulong)local_44 <= (long)local_4c) break;
        local_a2 = local_45 & 1;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        local_b0 = *(SpaceComponentTypeU5BU5D_t0B1B0FC97F1326A6BC34EEDFB77B9BB241D9EB80 **)
                    (lVar5 + 0x38);
        local_b4 = local_4c;
        NullCheck(local_b0);
        local_b8 = local_b4;
        local_bc = SpaceComponentTypeU5BU5D_t0B1B0FC97F1326A6BC34EEDFB77B9BB241D9EB80::GetAt
                             (local_b0,(long)local_b4);
        local_45 = (local_a2 & 1) != 0 || local_bc == 0;
        local_c0 = local_4c;
        local_4c = il2cpp_codegen_add<int,int>(local_4c,1);
      }
      local_c9 = local_45 & 1;
      if (local_c9 != 0) {
        local_d8 = local_38;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        local_d9 = OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                             (local_d8,0,&local_46,&local_47,0);
        local_d9 = local_d9 & 1;
        if (local_d9 != 0) {
          uStack_e8 = uStack_28;
          local_f0 = local_30;
          uStack_f8 = uStack_28;
          local_100 = local_30;
          local_108 = Box(*(Il2CppClass **)Method_System_Nullable<long>_ToString__,&local_100);
          local_10a = local_46 & 1;
          local_109 = local_10a;
          local_118 = Box(*(Il2CppClass **)puVar1,&local_10a);
          local_119 = local_47 & 1;
          local_11a = local_47 & 1;
          local_128 = Box(*(Il2CppClass **)puVar1,&local_11a);
          local_130 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C
                                (*(undefined8 *)StringLiteral_191,local_108,local_118,local_128);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                    );
          Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(local_130,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
          lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
          local_138 = *(void **)(lVar5 + 0x30);
          local_140 = local_38;
          local_180 = OVRSpace_op_Implicit_m5668C0D0B94EFD6CE95FC8C92A7E4418B8C0EFB6(local_38,0);
          uStack_158 = uStack_28;
          local_160 = local_30;
          local_178 = 0;
          uStack_170 = 0;
          local_168 = 0;
          uStack_188 = uStack_28;
          local_190 = local_30;
          local_150 = local_180;
          local_148 = local_180;
          UnboundAnchor__ctor_m5D52B0EF0F4F17EC1BA0FCCE95B76DC637AA04EA
                    (&local_178,local_180,local_30,uStack_28,0);
          NullCheck(local_138);
          uStack_1a8 = uStack_170;
          local_1b0 = local_178;
          local_1a0 = local_168;
          List_1_Add_m63CAAAF9BFB681902C4B2A7861FBB894A467FB71_inline
                    (local_138,&local_1b0,*(undefined8 *)StringLiteral_190);
        }
      }
    }
  }
  return;
}


