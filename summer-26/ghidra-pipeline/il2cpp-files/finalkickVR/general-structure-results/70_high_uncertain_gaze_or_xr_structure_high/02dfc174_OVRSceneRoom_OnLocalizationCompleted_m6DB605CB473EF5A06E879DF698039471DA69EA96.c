/*
FUNCTION_NAME: OVRSceneRoom_OnLocalizationCompleted_m6DB605CB473EF5A06E879DF698039471DA69EA96
ENTRY_POINT: 02dfc174
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVRSceneRoom_OnLocalizationCompleted_m6DB605CB473EF5A06E879DF698039471DA69EA96
               (OVRSceneRoom_t2496DF886AAF0D50F0B601D37DAFADC2E864FA1E *param_1,byte param_2,
               OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *pNVar6;
  byte bVar7;
  undefined4 uVar8;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *pCVar9;
  OVRScenePlaneU5BU5D_t435D72AD87208ED0B79DAF1D05B4B60B4F0E5522 *pOVar10;
  undefined8 uVar11;
  List_1_t3E1EE7EFF1F9427FC5A0F7B04EDF79156A32DA2A *pLVar12;
  Comparison_1_tB95E149322766251E7DA0138F072023B17B9E746 *pCVar13;
  void *pvVar14;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  byte local_136;
  undefined1 local_135;
  byte local_134;
  byte local_133;
  byte local_132;
  byte local_131;
  undefined8 local_130;
  byte local_123;
  byte local_122;
  byte local_121;
  undefined8 local_120;
  byte local_111;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_b3;
  undefined1 local_b2;
  byte local_b1;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *local_b0;
  undefined8 local_a8;
  undefined2 local_9c;
  undefined2 local_9a;
  void *local_98;
  byte local_8d;
  int local_8c;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *local_88;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *local_80;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *local_60;
  undefined1 local_54;
  undefined1 local_53;
  undefined2 local_52;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *local_50;
  undefined8 local_48;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined8 local_38;
  byte local_29;
  OVRSceneRoom_t2496DF886AAF0D50F0B601D37DAFADC2E864FA1E *local_28;
  
  puVar5 = StringLiteral_11;
  puVar4 = 
  Field_<PrivateImplementationDetails>_48FA2B2FD7A202D3952D07F8ED3C23196F51A91F4130D0C23DA616CFFF547D2C
  ;
  puVar3 = 
  Field_<PrivateImplementationDetails>_E1DC3A1EA16CD5E9DBD0F81E8F7AE4BBB4DF3BCFEF388DE056B3EE11868EE846
  ;
  puVar2 = Method_System_Nullable<long>__ctor__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_29 = param_2 & 1;
  local_38 = param_4;
  local_28 = param_1;
  if ((OVRSceneRoom_OnLocalizationCompleted_m6DB605CB473EF5A06E879DF698039471DA69EA96::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_26);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Nullable<long>_ToString__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_27);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_28);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_29);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_30);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_31);
    OVRSceneRoom_OnLocalizationCompleted_m6DB605CB473EF5A06E879DF698039471DA69EA96::
    s_Il2CppMethodInitialized = 1;
  }
  local_39 = 0;
  local_3a = 0;
  local_3b = 0;
  local_3c = 0;
  local_48 = 0;
  local_50 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)0x0;
  local_52 = 0;
  local_53 = 0;
  local_54 = 0;
  local_60 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)0x0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)0x0;
  local_88 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)0x0;
  local_8c = *(int *)(local_28 + 0x70);
  uVar8 = il2cpp_codegen_subtract<int,int>(local_8c,1);
  *(undefined4 *)(local_28 + 0x70) = uVar8;
  local_8d = local_29 & 1;
  if (local_8d == 0) {
    local_98 = *(void **)(local_28 + 0x58);
    NullCheck(local_98);
    local_a8 = OVRSceneManager_get_Verbose_m7F89EAFB7FBB9989CFC1ACC5A6EF2789917B170E(local_98,0);
    local_9c = (undefined2)local_a8;
    local_9a = (undefined2)local_a8;
    local_b0 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_52;
    local_52 = (undefined2)local_a8;
    local_b1 = Nullable_1_get_HasValue_m708832CEE7BFE56B811529C190A1BAEB80E6EAA3_inline
                         (local_b0,*(MethodInfo **)puVar4);
    local_b1 = local_b1 & 1;
    if (local_b1 != 0) {
      local_60 = local_b0;
      local_b3 = Nullable_1_GetValueOrDefault_m9A9401B9AE0B1623F091FB8B68F2620261999226_inline
                           (local_b0,*(MethodInfo **)puVar3);
      local_b2 = local_b3;
      local_53 = local_b3;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_f0 = OVRAnchor_get_Uuid_mB4A38F13C1AA2C5F8DC98BFED64D55DE34F4059D_inline
                           (param_3,(MethodInfo *)0x0);
      local_e0 = local_f0;
      local_d0 = local_f0;
      local_f8 = Box(*(Il2CppClass **)Method_System_Nullable<long>_ToString__,local_f0);
      local_100 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987
                            (*(undefined8 *)StringLiteral_29,*(undefined8 *)StringLiteral_31,
                             local_f8,0);
      local_108 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_28,0);
      LogForwarder_LogWarning_mA2D3E15055184DC0D55BDFD375ADBC0852F753B2
                (&local_53,*(undefined8 *)puVar5,local_100,local_108,0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_110 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                          (param_3,(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_111 = OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                          (local_110,3,&local_39,&local_54,0);
    local_111 = local_111 & 1;
    local_120 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                          (param_3,(MethodInfo *)0x0);
    local_121 = OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                          (local_120,4,&local_3a,&local_54,0);
    local_121 = local_121 & 1;
    local_122 = local_39 & 1;
    if (local_122 == 0) {
      local_6c = 0;
    }
    else {
      local_123 = local_3a & 1;
      local_6c = (uint)(local_123 == 0);
    }
    local_3b = local_6c != 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_130 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                          (param_3,(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_131 = OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                          (local_130,0x3b9ee4c8,&local_3c,&local_54,0);
    local_131 = local_131 & 1;
    local_132 = local_39 & 1;
    if (local_132 == 0) {
      local_70 = 0;
    }
    else {
      local_133 = local_3a & 1;
      local_134 = local_3c & 1;
      local_70 = (uint)(local_133 == 0 && local_134 == 0);
    }
    local_135 = local_70 != 0;
    local_3b = local_135;
    if ((bool)local_135) {
      local_150 = *(void **)(local_28 + 0x58);
      NullCheck(local_150);
      local_158 = *(undefined8 *)((long)local_150 + 0x20);
      local_78 = local_158;
    }
    else {
      local_136 = local_3a & 1;
      if (local_136 == 0) {
        local_78 = 0;
      }
      else {
        local_140 = *(void **)(local_28 + 0x58);
        NullCheck(local_140);
        local_148 = *(undefined8 *)((long)local_140 + 0x28);
        local_78 = local_148;
      }
    }
    local_48 = local_78;
    local_160 = *(void **)(local_28 + 0x58);
    uStack_178 = *(undefined8 *)(param_3 + 8);
    local_180 = *(undefined8 *)param_3;
    local_170 = *(undefined8 *)(param_3 + 0x10);
    local_188 = local_78;
    NullCheck(local_160);
    uStack_1a8 = uStack_178;
    local_1b0 = local_180;
    local_1a0 = local_170;
    pCVar9 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
             OVRSceneManager_InstantiateSceneAnchor_m53D220EE668BF01E7581E75F2CC41FE98716C834
                       (local_160,&local_1b0,local_188);
    local_190 = pCVar9;
    local_50 = pCVar9;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(pCVar9,0);
    pCVar9 = local_50;
    if ((bVar7 & 1) != 0) {
      NullCheck(local_50);
      pvVar14 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pCVar9);
      uVar11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_28,0);
      NullCheck(pvVar14);
      Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(pvVar14,uVar11,0);
      pCVar9 = local_50;
      if ((local_3b & 1) != 0) {
        NullCheck(local_50);
        uVar11 = Component_GetComponent_TisOVRScenePlane_tC2404DF0ACDE221C71E8FCBC331712860D4F403C_m395BF52A77F9D8D0C83FB8CEF6E722948FA70541
                           (pCVar9,*(MethodInfo **)StringLiteral_26);
        OVRSceneRoom_UpdateRoomInformation_mA9B47A86B3C831D4DA5CF00694258B4C124A27BF
                  (local_28,uVar11,0);
      }
    }
    if (*(int *)(local_28 + 0x70) == 0) {
      pLVar12 = *(List_1_t3E1EE7EFF1F9427FC5A0F7B04EDF79156A32DA2A **)(local_28 + 0x38);
      pCVar13 = *(Comparison_1_tB95E149322766251E7DA0138F072023B17B9E746 **)(local_28 + 0x48);
      NullCheck(pLVar12);
      List_1_Sort_mD104AAF37DA945567AD068D84FE9A4593DA15EA5
                (pLVar12,pCVar13,*(MethodInfo **)StringLiteral_27);
      pLVar12 = *(List_1_t3E1EE7EFF1F9427FC5A0F7B04EDF79156A32DA2A **)(local_28 + 0x38);
      NullCheck(pLVar12);
      pOVar10 = (OVRScenePlaneU5BU5D_t435D72AD87208ED0B79DAF1D05B4B60B4F0E5522 *)
                List_1_ToArray_mCE976FD74ED67F8AF38E70ADA00901709905D98F
                          (pLVar12,*(MethodInfo **)StringLiteral_28);
      OVRSceneRoom_set_Walls_m2B457E52E8E0A9D47E844D088D90BEC172AEE857_inline
                (local_28,pOVar10,(MethodInfo *)0x0);
      pvVar14 = *(void **)(local_28 + 0x58);
      NullCheck(pvVar14);
      local_52 = OVRSceneManager_get_Verbose_m7F89EAFB7FBB9989CFC1ACC5A6EF2789917B170E(pvVar14,0);
      bVar7 = Nullable_1_get_HasValue_m708832CEE7BFE56B811529C190A1BAEB80E6EAA3_inline
                        ((Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_52,
                         *(MethodInfo **)puVar4);
      pNVar6 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_52;
      if ((bVar7 & 1) != 0) {
        local_80 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_52;
        local_53 = Nullable_1_GetValueOrDefault_m9A9401B9AE0B1623F091FB8B68F2620261999226_inline
                             ((Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)&local_52,
                              *(MethodInfo **)puVar3);
        uVar11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_28);
        LogForwarder_Log_mEA2227D3CC8532C4FE53B12DF1CE6F98ED09B867
                  (&local_53,*(undefined8 *)puVar5,*(undefined8 *)StringLiteral_30,uVar11,0);
        pNVar6 = local_88;
      }
      local_88 = pNVar6;
      pvVar14 = *(void **)(local_28 + 0x58);
      NullCheck(pvVar14);
      OVRSceneManager_OnSceneRoomLoadCompleted_mFD2B33316B65D194A7469DB8F03E1C81224E3E4E(pvVar14,0);
    }
  }
  return;
}


