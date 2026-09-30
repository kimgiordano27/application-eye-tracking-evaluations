/*
FUNCTION_NAME: OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3
ENTRY_POINT: 02dbe734
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_8
*/


int OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3
              (void **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  Il2CppFakeBox<int> aIStack_180 [28];
  int local_164;
  int local_160;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  FinallyHelper<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::__8,false>
  aFStack_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  void **local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  Il2CppFakeBox<int> aIStack_e0 [24];
  int local_c8;
  int local_c4;
  int iStack_bc;
  undefined8 uStack_b8;
  void *local_b0;
  uint local_a4;
  uint uStack_9c;
  undefined8 uStack_98;
  void **local_88;
  int local_80;
  byte local_79;
  undefined8 local_78;
  undefined8 local_70;
  void **local_68;
  int local_5c;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  void **local_30;
  int local_24;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_8BBE66A1FC631CA10DD5B83C200A7BEE3CF9D8C782B22934839AA15CA4DF35B8
  ;
  puVar2 = Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_Services_Core_Internal_CoreRegistration_ProvidesComponent<IDiagnosticsFactory>__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_1458F720AE7177FB84F58A428FF4727F7B070A3A055760DC7C6D3E83C33698E3
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_D62A7B00CF5AD77C334BD4EBC934102A7D83AA2199BE0B0D282D5304A50908B3
              );
    OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_4c = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = local_30;
  il2cpp_codegen_initobj(local_30,8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_70 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_78 = *puVar4;
  local_79 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_70,local_78,0);
  local_79 = local_79 & 1;
  if (local_79 == 0) {
    local_24 = -0x3ec;
  }
  else {
    il2cpp_codegen_initobj(&local_48,0x10);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_80 = OVRP_1_83_0_ovrp_GetVirtualKeyboardDirtyTextures_m7B836FE58CDF51A3ACBA9EF63993E04873CE13AB
                         (&local_48,0);
    local_88 = local_30;
    uStack_98 = uStack_40;
    uStack_9c = (uint)((ulong)local_48 >> 0x20);
    local_a4 = uStack_9c;
    local_4c = local_80;
    local_b0 = (void *)SZArrayNew(*(Il2CppClass **)
                                   Method_Unity_Services_Core_Internal_CoreRegistration_ProvidesComponent<IDiagnosticsFactory>__
                                  ,uStack_9c);
    *local_88 = local_b0;
    Il2CppCodeGenWriteBarrier(local_88,local_b0);
    uStack_b8 = uStack_40;
    iStack_bc = (int)((ulong)local_48 >> 0x20);
    local_c4 = iStack_bc;
    if (iStack_bc == 0) {
      local_c8 = local_4c;
      if (local_4c != 0) {
        Il2CppFakeBox<int>::Il2CppFakeBox(aIStack_e0,*(Il2CppClass **)puVar2,&local_4c);
        local_e8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_e0);
        local_f0 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                             (*(undefined8 *)
                               Field_<PrivateImplementationDetails>_1458F720AE7177FB84F58A428FF4727F7B070A3A055760DC7C6D3E83C33698E3
                              ,local_e8,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(local_f0,0);
      }
      local_24 = local_4c;
    }
    else {
      local_100 = local_30;
      local_108 = *local_30;
      auVar6 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(local_108,3);
      local_118 = auVar6._0_8_;
      local_130 = &local_58;
      local_110 = local_118;
      local_58 = local_118;
      il2cpp::utils::
      Finally<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::__8>
                ((utils *)&local_130,auVar6._8_8_);
      uStack_138 = uStack_40;
      local_140 = local_48;
      uVar5 = local_140;
      local_140._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
      local_144 = local_140._4_4_;
      local_48 = CONCAT44(local_140._4_4_,local_140._4_4_);
      local_140 = uVar5;
      local_150 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(&local_58,0)
      ;
      uStack_40 = local_150;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      local_164 = OVRP_1_83_0_ovrp_GetVirtualKeyboardDirtyTextures_m7B836FE58CDF51A3ACBA9EF63993E04873CE13AB
                            (&local_48,0);
      local_160 = local_164;
      local_4c = local_164;
      if (local_164 != 0) {
        Il2CppFakeBox<int>::Il2CppFakeBox(aIStack_180,*(Il2CppClass **)puVar2,&local_4c);
        uVar5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_180,0);
        uVar5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                          (*(undefined8 *)
                            Field_<PrivateImplementationDetails>_D62A7B00CF5AD77C334BD4EBC934102A7D83AA2199BE0B0D282D5304A50908B3
                           ,uVar5,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
      }
      local_5c = local_4c;
      il2cpp::utils::
      FinallyHelper<OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3::$_8,false>
      ::~FinallyHelper(aFStack_128);
      local_24 = local_5c;
    }
  }
  return local_24;
}


