/*
FUNCTION_NAME: VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared
ENTRY_POINT: 022353cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8
VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared
          (long param_1,undefined8 param_2,MethodInfo *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppClass *pIVar6;
  Il2CppObject *pIVar7;
  __57 *extraout_x1;
  int local_21c;
  void *local_170;
  undefined8 uStack_168;
  Il2CppObject *local_160;
  undefined8 uStack_158;
  Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD *local_130;
  FinallyHelper<VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared::__57,false>
  aFStack_128 [16];
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [48];
  List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F *local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_91;
  void *local_90;
  undefined8 uStack_88;
  Il2CppObject *local_80;
  undefined8 uStack_78;
  Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD aEStack_68 [48];
  MethodInfo *local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  uVar3 = il2cpp_rgctx_is_initialized(param_3);
  if ((uVar3 & 1) == 0) {
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
    il2cpp_rgctx_method_init(local_38);
  }
  memset(aEStack_68,0,0x30);
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_78 = 0;
  local_80 = (Il2CppObject *)0x0;
  local_91 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = *(List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F **)(local_28 + 0x50);
  NullCheck(local_b8);
  List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253
            (local_b8,*(MethodInfo **)Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
  memcpy(auStack_e8,auStack_118,0x30);
  memcpy(aEStack_68,auStack_e8,0x30);
  local_130 = aEStack_68;
  il2cpp::utils::
  Finally<VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared::__57>
            ((utils *)&local_130,extraout_x1);
  do {
    uVar2 = Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD
                      (aEStack_68,
                       *(MethodInfo **)Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    if ((uVar2 & 1) == 0) {
      local_21c = 8;
      goto LAB_022355a4;
    }
    Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_inline
              (aEStack_68,*(MethodInfo **)Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    uVar4 = local_30;
    uStack_88 = uStack_168;
    local_90 = local_170;
    uStack_78 = uStack_158;
    local_80 = local_160;
    NullCheck(local_170);
    uVar2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(local_170,uVar4,0);
    if ((uVar2 & 1) == 0) {
      local_ac = 0;
    }
    else {
      uVar4 = AssetEntry_get_type_mF58DB144BB0A3D53633E8A2EA2EB4C692CDDC23D(&local_90,0);
      uVar5 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)(local_38 + 0x38),0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
      uVar5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar5,0);
      bVar1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(uVar4,uVar5,0);
      local_ac = (uint)(bVar1 & 1);
    }
    pIVar7 = local_80;
    local_91 = local_ac != 0;
  } while (!(bool)local_91);
  pIVar6 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),1);
  pIVar7 = (Il2CppObject *)IsInst(pIVar7,pIVar6);
  pIVar6 = (Il2CppClass *)il2cpp_rgctx_data(*(Il2CppRGCTXData **)(local_38 + 0x38),1);
  local_a0 = Castclass(pIVar7,pIVar6);
  local_21c = 7;
LAB_022355a4:
  il2cpp::utils::
  FinallyHelper<VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared::$_57,false>
  ::~FinallyHelper(aFStack_128);
  if ((local_21c == 0) || (local_21c != 7)) {
    il2cpp_codegen_initobj(&local_a8,8);
    local_a0 = local_a8;
  }
  return local_a0;
}


