/*
FUNCTION_NAME: VisualTreeAsset_AssetEntryExists_mE0A36C3773DD12D62AF5E77FB25C82DEBD018B23
ENTRY_POINT: 046a5908
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte VisualTreeAsset_AssetEntryExists_mE0A36C3773DD12D62AF5E77FB25C82DEBD018B23
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  __24 *extraout_x1;
  int local_1ec;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD *local_138;
  FinallyHelper<VisualTreeAsset_AssetEntryExists_mE0A36C3773DD12D62AF5E77FB25C82DEBD018B23::__24,false>
  aFStack_130 [16];
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [48];
  List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F *local_c0;
  undefined1 local_b1;
  long local_b0;
  uint local_a8;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD aEStack_78 [54];
  byte local_42;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((VisualTreeAsset_AssetEntryExists_mE0A36C3773DD12D62AF5E77FB25C82DEBD018B23::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<OVRInput_Controller>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
    VisualTreeAsset_AssetEntryExists_mE0A36C3773DD12D62AF5E77FB25C82DEBD018B23::
    s_Il2CppMethodInitialized = 1;
  }
  local_41 = 0;
  local_42 = 0;
  memset(aEStack_78,0,0x30);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_a1 = 0;
  local_a8 = 0;
  local_b0 = *(long *)(local_28 + 0x50);
  local_b1 = local_b0 == 0;
  if ((bool)local_b1) {
    local_42 = 0;
  }
  else {
    local_c0 = *(List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F **)(local_28 + 0x50);
    local_41 = local_b1;
    NullCheck(local_c0);
    List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253
              (local_c0,*(MethodInfo **)Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    memcpy(auStack_f0,auStack_120,0x30);
    memcpy(aEStack_78,auStack_f0,0x30);
    local_138 = aEStack_78;
    il2cpp::utils::
    Finally<VisualTreeAsset_AssetEntryExists_mE0A36C3773DD12D62AF5E77FB25C82DEBD018B23::__24>
              ((utils *)&local_138,extraout_x1);
    do {
      uVar3 = Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD
                        (aEStack_78,
                         *(MethodInfo **)Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
      if ((uVar3 & 1) == 0) {
        local_1ec = 9;
        goto LAB_046a5b4c;
      }
      Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_inline
                (aEStack_78,*(MethodInfo **)Method_System_Nullable<OVRPlugin_Posef>__ctor__);
      uStack_98 = uStack_178;
      local_a0 = local_180;
      uStack_88 = uStack_168;
      local_90 = local_170;
      uVar3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(local_180,local_30,0);
      if ((uVar3 & 1) == 0) {
        local_a8 = 0;
      }
      else {
        uVar4 = AssetEntry_get_type_mF58DB144BB0A3D53633E8A2EA2EB4C692CDDC23D(&local_a0,0);
        uVar1 = local_38;
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
        bVar2 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(uVar4,uVar1,0);
        local_a8 = (uint)(bVar2 & 1);
      }
      local_a1 = local_a8 != 0;
    } while (!(bool)local_a1);
    local_42 = 1;
    local_1ec = 3;
LAB_046a5b4c:
    il2cpp::utils::
    FinallyHelper<VisualTreeAsset_AssetEntryExists_mE0A36C3773DD12D62AF5E77FB25C82DEBD018B23::$_24,false>
    ::~FinallyHelper(aFStack_130);
    if ((local_1ec == 0) || (local_1ec != 3)) {
      local_42 = 0;
    }
  }
  return local_42 & 1;
}


