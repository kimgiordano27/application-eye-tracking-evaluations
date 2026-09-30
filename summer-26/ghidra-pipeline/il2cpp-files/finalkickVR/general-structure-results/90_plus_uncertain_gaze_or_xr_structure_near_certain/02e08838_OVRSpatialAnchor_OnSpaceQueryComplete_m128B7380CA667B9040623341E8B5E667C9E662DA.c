/*
FUNCTION_NAME: OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA
ENTRY_POINT: 02e08838
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02e08e0c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA
               (ulong param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *pUVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  __10 *extraout_x1;
  __11 *extraout_x1_00;
  List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF *pLVar9;
  undefined1 auVar10 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  Enumerator_t20FBB490F5644C37D772EBD51A77F63BC93D1943 *local_278;
  FinallyHelper<OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA::__11,false>
  aFStack_270 [16];
  undefined1 auStack_260 [48];
  undefined1 auStack_230 [48];
  List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF *local_200;
  undefined8 *local_1e8;
  FinallyHelper<OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA::__10,false>
  aFStack_1e0 [16];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  ulong local_198;
  byte local_189;
  ulong local_188;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  ulong local_158;
  byte local_149;
  int local_148;
  byte local_141;
  Il2CppObject *local_140;
  byte local_131;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  ulong local_110;
  UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *local_108;
  Il2CppObject *local_100;
  int local_f8;
  undefined4 local_f4;
  Il2CppObject *local_f0;
  undefined4 local_e4;
  Il2CppObject *local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Enumerator_t20FBB490F5644C37D772EBD51A77F63BC93D1943 aEStack_b0 [48];
  undefined1 local_80 [16];
  UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  byte local_29;
  ulong local_28;
  
  puVar4 = StringLiteral_186;
  puVar3 = StringLiteral_185;
  puVar2 = StringLiteral_180;
  puVar1 = StringLiteral_75;
  local_29 = param_2 & 1;
  local_38 = param_3;
  local_28 = param_1;
  if ((OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_187);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TMPro_TMP_Dropdown_<DelayedDestroyDropdownList>d__81_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_TMPro_TMP_FontAsset_<>c_<SortCharacterTable>b__124_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_TMPro_TMP_FontAsset_<>c_<SortGlyphTable>b__125_0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_139);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_188);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_189);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TMPro_TMP_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TMPro_TMP_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_1__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_179);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
              );
    OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *)0x0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  memset(aEStack_b0,0,0x30);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_d4 = 0;
  local_e0 = (Il2CppObject *)0x0;
  local_e4 = 0;
  local_f0 = (Il2CppObject *)0x0;
  local_f4 = 0;
  local_f8 = 0;
  local_100 = (Il2CppObject *)0x0;
  local_108 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *)0x0;
  local_110 = local_28;
  local_130 = OVRTask_GetExisting_TisUnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4_mE8B766CEC36D475F9B59FC4B623B0E2DD561ADF2
                        (local_28,*(MethodInfo **)puVar4);
  local_120 = local_130;
  local_80 = local_130;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_131 = OVRTask_1_get_IsPending_mCA05B36CB402D384398A45E6394A3B5DC784B2EA
                        ((OVRTask_1_tB0A382C12019CF90183FE1729C3DD69E62269F35 *)local_80,
                         *(MethodInfo **)StringLiteral_179);
  local_131 = local_131 & 1;
  if (local_131 != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
              );
    local_140 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0)
    ;
    local_141 = local_29 & 1;
    if (local_141 == 0) {
      local_e4 = 0x9b810ce;
      local_f4 = 3;
      local_f0 = local_140;
    }
    else {
      local_d4 = 0x9b810ce;
      local_f4 = 2;
      local_e0 = local_140;
    }
    local_f8 = 0x9b810ce;
    local_100 = local_140;
    local_148 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(&local_28,0);
    NullCheck(local_100);
    VirtualActionInvoker4<int,short,int,long>::Invoke
              (7,local_100,local_f8,(short)local_f4,local_148,-1);
    local_149 = local_29 & 1;
    if (local_149 == 0) {
      local_158 = local_28;
      local_180 = OVRTask_GetExisting_TisUnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4_mE8B766CEC36D475F9B59FC4B623B0E2DD561ADF2
                            (local_28,*(MethodInfo **)puVar4);
      local_170 = local_180;
      local_80 = local_180;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      OVRTask_1_SetResult_mE0342B0991C29C7F33A28F354E67188DEDEDBA22
                ((OVRTask_1_tB0A382C12019CF90183FE1729C3DD69E62269F35 *)local_80,
                 (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *)0x0,
                 *(MethodInfo **)puVar3);
    }
    else {
      local_188 = local_28;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      local_189 = OVRPlugin_RetrieveSpaceQueryResults_m814F7704ED5C17471CCC683F49EBF032742C4ACA
                            (local_188,&local_48,2,0);
      local_189 = local_189 & 1;
      if (local_189 == 0) {
        local_198 = local_28;
        local_1c0 = OVRTask_GetExisting_TisUnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4_mE8B766CEC36D475F9B59FC4B623B0E2DD561ADF2
                              (local_28,*(MethodInfo **)puVar4);
        local_1b0 = local_1c0;
        local_80 = local_1c0;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        OVRTask_1_SetResult_mE0342B0991C29C7F33A28F354E67188DEDEDBA22
                  ((OVRTask_1_tB0A382C12019CF90183FE1729C3DD69E62269F35 *)local_80,
                   (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *)0x0,
                   *(MethodInfo **)puVar3);
      }
      else {
        uStack_1c8 = uStack_40;
        local_1d0 = local_48;
        local_1e8 = &local_60;
        local_60 = local_1d0;
        uStack_58 = uStack_1c8;
        il2cpp::utils::
        Finally<OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA::__10>
                  ((utils *)&local_1e8,extraout_x1);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        local_200 = *(List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF **)(lVar8 + 0x30);
        NullCheck(local_200);
        List_1_Clear_mCFA42DA16EDB70FCB13D7264D48431269B467881_inline
                  (local_200,*(MethodInfo **)StringLiteral_139);
        NativeArray_1_GetEnumerator_mC9E827F4D31C57813FBEDB46A62D56587854AD58
                  ((NativeArray_1_t4B6FC554E5203176C3837F600E531A6814A599F7 *)&local_48,
                   *(MethodInfo **)
                    Method_TMPro_TMP_FontFeatureTable_<>c_<SortGlyphPairAdjustmentRecords>b__6_1__);
        memcpy(auStack_230,auStack_260,0x30);
        memcpy(aEStack_b0,auStack_230,0x30);
        local_278 = aEStack_b0;
        il2cpp::utils::
        Finally<OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA::__11>
                  ((utils *)&local_278,extraout_x1_00);
        while( true ) {
          uVar6 = Enumerator_MoveNext_m46E81575401226CDD92608629200D6717ECB6FF3_inline
                            (aEStack_b0,
                             *(MethodInfo **)
                              Method_TMPro_TMP_FontAsset_<>c_<SortCharacterTable>b__124_0__);
          if ((uVar6 & 1) == 0) break;
          Enumerator_get_Current_mD4E5FF4AB4800578F5329E143C78876A277AE08F_inline
                    (aEStack_b0,
                     *(MethodInfo **)Method_TMPro_TMP_FontAsset_<>c_<SortGlyphTable>b__125_0__);
          uStack_c8 = uStack_2a0;
          local_d0 = local_2a8;
          local_c0 = local_298;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          OVRSpatialAnchor_PopulateUnbound_m89EA046E1D61DD5064C38A220A0D19D8FD5DC439
                    (uStack_2a0,local_298,local_2a8,0);
        }
        il2cpp::utils::
        FinallyHelper<OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA::$_11,false>
        ::~FinallyHelper(aFStack_270);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        pLVar9 = *(List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF **)(lVar8 + 0x30);
        NullCheck(pLVar9);
        iVar7 = List_1_get_Count_mA84EA4E88E41205D4733AD12C27C0B899392E8A2_inline
                          (pLVar9,*(MethodInfo **)StringLiteral_189);
        if (iVar7 == 0) {
          local_108 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *)
                      Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_inline
                                (*(MethodInfo **)StringLiteral_187);
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          pLVar9 = *(List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF **)(lVar8 + 0x30);
          NullCheck(pLVar9);
          local_108 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4 *)
                      List_1_ToArray_m61D8CC3CDCBF05D0EA2B895A55716DE469B1A93C
                                (pLVar9,*(MethodInfo **)StringLiteral_188);
        }
        local_68 = local_108;
        auVar10 = OVRTask_GetExisting_TisUnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4_mE8B766CEC36D475F9B59FC4B623B0E2DD561ADF2
                            (local_28,*(MethodInfo **)puVar4);
        pUVar5 = local_68;
        local_80 = auVar10;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        OVRTask_1_SetResult_mE0342B0991C29C7F33A28F354E67188DEDEDBA22
                  ((OVRTask_1_tB0A382C12019CF90183FE1729C3DD69E62269F35 *)local_80,pUVar5,
                   *(MethodInfo **)puVar3);
        il2cpp::utils::
        FinallyHelper<OVRSpatialAnchor_OnSpaceQueryComplete_m128B7380CA667B9040623341E8B5E667C9E662DA::$_10,false>
        ::~FinallyHelper(aFStack_1e0);
      }
    }
  }
  return;
}


