/*
FUNCTION_NAME: MultiColumnController_MakeItem_mB641F8FEE2FD8A023CBF280DC2A13EE03D3F5002
ENTRY_POINT: 04559438
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void * MultiColumnController_MakeItem_mB641F8FEE2FD8A023CBF280DC2A13EE03D3F5002
                 (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *pCVar4;
  Il2CppObject *pIVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  void *pvVar9;
  Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2 *pFVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  Il2CppObject **local_e8;
  FinallyHelper<MultiColumnController_MakeItem_mB641F8FEE2FD8A023CBF280DC2A13EE03D3F5002::__15,false>
  aFStack_e0 [16];
  Il2CppObject *local_d0;
  Il2CppObject *local_c8;
  void *local_c0;
  MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2 *local_68;
  undefined8 local_60;
  long local_58;
  void *local_50;
  Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *local_48;
  Il2CppObject *local_40;
  void *local_38;
  undefined8 local_30;
  long local_28;
  
  puVar3 = Method_System_Nullable<InputUpdateType>_get_HasValue__;
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_30 = param_2;
  local_28 = param_1;
  if ((MultiColumnController_MakeItem_mB641F8FEE2FD8A023CBF280DC2A13EE03D3F5002::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUser>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    MultiColumnController_MakeItem_mB641F8FEE2FD8A023CBF280DC2A13EE03D3F5002::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = (void *)0x0;
  local_40 = (Il2CppObject *)0x0;
  local_48 = (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *)0x0;
  local_50 = (void *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_68 = (Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2 *)0x0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_90,0);
  local_98 = local_90;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_a0 = *(undefined8 *)(lVar8 + 0x20);
  NullCheck(local_98);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(local_98,local_a0,0);
  local_38 = local_98;
  local_a8 = local_98;
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_b0 = *(undefined8 *)(lVar8 + 0x20);
  NullCheck(local_a8);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_a8,local_b0,0);
  local_b8 = *(MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D **)
              (local_28 + 0x30);
  NullCheck(local_b8);
  local_c0 = (void *)MultiColumnCollectionHeader_get_columns_mCD478DC5065BA9B43AD13D998169055EAF1C3655_inline
                               (local_b8,(MethodInfo *)0x0);
  NullCheck(local_c0);
  local_c8 = (Il2CppObject *)
             Columns_get_visibleList_m4E86EF55B73DA013C449A7C1D9777002AF1496AC(local_c0,0);
  NullCheck(local_c8);
  auVar13 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                      (0,*(Il2CppClass **)Method_System_Nullable<InputUser>_get_HasValue__,local_c8)
  ;
  local_d0 = auVar13._0_8_;
  local_e8 = &local_40;
  local_40 = local_d0;
  il2cpp::utils::
  Finally<MultiColumnController_MakeItem_mB641F8FEE2FD8A023CBF280DC2A13EE03D3F5002::__15>
            ((utils *)&local_e8,auVar13._8_8_);
  while( true ) {
    pIVar5 = local_40;
    NullCheck(local_40);
    uVar7 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar5);
    pIVar5 = local_40;
    if ((uVar7 & 1) == 0) break;
    NullCheck(local_40);
    local_48 = (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *)
               InterfaceFuncInvoker0<Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*>::Invoke
                         (0,*(Il2CppClass **)Method_System_Nullable<InputUserAccountHandle>__ctor__,
                          pIVar5);
    pvVar9 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar9,0);
    local_50 = pvVar9;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar12 = *(undefined8 *)(lVar8 + 0x28);
    NullCheck(pvVar9);
    VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar12,0);
    pCVar4 = local_48;
    NullCheck(local_48);
    pFVar10 = (Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2 *)
              Column_get_makeCell_m41A3D42C2D0010F095C1F5EA37FF3DD6B7E6FCB2_inline
                        (pCVar4,(MethodInfo *)0x0);
    if (pFVar10 == (Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2 *)0x0) {
      local_78 = 0;
      local_70 = 0;
    }
    else {
      local_68 = pFVar10;
      NullCheck(pFVar10);
      local_78 = Func_1_Invoke_m073521535E43A005444DC0A7BA0082D630D54BCC_inline
                           (local_68,(MethodInfo *)0x0);
    }
    if (local_78 == 0) {
      local_88 = local_78;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      local_80 = MultiColumnController_DefaultMakeCellItem_m5435A19A04AF917C0339006C58A2B2823AF7A580
                           (0);
    }
    else {
      local_80 = local_78;
    }
    pvVar9 = local_50;
    local_58 = local_80;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar11 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    lVar8 = local_58;
    uVar1 = *(undefined4 *)(lVar11 + 4);
    NullCheck(pvVar9);
    VisualElement_SetProperty_m2EB182A4E57AD33CACC3DC0209DCDB5D8773F7E6(pvVar9,uVar1,lVar8,0);
    pvVar9 = local_50;
    lVar8 = local_58;
    NullCheck(local_50);
    VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar9,lVar8,0);
    pvVar6 = local_38;
    pvVar9 = local_50;
    NullCheck(local_38);
    VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar6,pvVar9,0);
  }
  il2cpp::utils::
  FinallyHelper<MultiColumnController_MakeItem_mB641F8FEE2FD8A023CBF280DC2A13EE03D3F5002::$_15,false>
  ::~FinallyHelper(aFStack_e0);
  return local_38;
}


