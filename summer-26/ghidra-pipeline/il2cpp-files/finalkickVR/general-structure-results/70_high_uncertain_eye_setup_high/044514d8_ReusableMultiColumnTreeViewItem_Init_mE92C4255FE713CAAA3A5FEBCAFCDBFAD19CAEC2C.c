/*
FUNCTION_NAME: ReusableMultiColumnTreeViewItem_Init_mE92C4255FE713CAAA3A5FEBCAFCDBFAD19CAEC2C
ENTRY_POINT: 044514d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void ReusableMultiColumnTreeViewItem_Init_mE92C4255FE713CAAA3A5FEBCAFCDBFAD19CAEC2C
               (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *param_1,
               VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_2,void *param_3,
               undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  undefined1 auVar11 [16];
  Il2CppObject **local_a8;
  FinallyHelper<ReusableMultiColumnTreeViewItem_Init_mE92C4255FE713CAAA3A5FEBCAFCDBFAD19CAEC2C::__24,false>
  aFStack_a0 [16];
  Il2CppObject *local_90;
  Il2CppObject *local_88;
  void *local_80;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_78;
  undefined8 local_70;
  void *local_68;
  byte local_59;
  undefined8 local_58;
  Il2CppObject *local_50;
  int local_44;
  undefined8 local_40;
  void *local_38;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_30;
  ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *local_28;
  
  puVar2 = Method_System_Nullable<InputUpdateType>_get_HasValue__;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((ReusableMultiColumnTreeViewItem_Init_mE92C4255FE713CAAA3A5FEBCAFCDBFAD19CAEC2C::
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
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    ReusableMultiColumnTreeViewItem_Init_mE92C4255FE713CAAA3A5FEBCAFCDBFAD19CAEC2C::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = (Il2CppObject *)0x0;
  local_58 = 0;
  local_59 = 0;
  local_68 = (void *)0x0;
  local_70 = 0;
  local_44 = 0;
  local_78 = local_30;
  ReusableCollectionItem_set_bindableElement_m0115DE25E0FAF4839E8D7C58A8ACFA0ED08CBB0E_inline
            (local_28,local_30,(MethodInfo *)0x0);
  local_80 = local_38;
  NullCheck(local_38);
  local_88 = (Il2CppObject *)
             Columns_get_visibleList_m4E86EF55B73DA013C449A7C1D9777002AF1496AC(local_80,0);
  NullCheck(local_88);
  auVar11 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                      (0,*(Il2CppClass **)Method_System_Nullable<InputUser>_get_HasValue__,local_88)
  ;
  local_90 = auVar11._0_8_;
  local_a8 = &local_50;
  local_50 = local_90;
  il2cpp::utils::
  Finally<ReusableMultiColumnTreeViewItem_Init_mE92C4255FE713CAAA3A5FEBCAFCDBFAD19CAEC2C::__24>
            ((utils *)&local_a8,auVar11._8_8_);
  do {
    pIVar10 = local_50;
    NullCheck(local_50);
    uVar6 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar10);
    pIVar10 = local_50;
    if ((uVar6 & 1) == 0) {
LAB_04451718:
      il2cpp::utils::
      FinallyHelper<ReusableMultiColumnTreeViewItem_Init_mE92C4255FE713CAAA3A5FEBCAFCDBFAD19CAEC2C::$_24,false>
      ::~FinallyHelper(aFStack_a0);
      return;
    }
    NullCheck(local_50);
    uVar7 = InterfaceFuncInvoker0<Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*>::Invoke
                      (0,*(Il2CppClass **)Method_System_Nullable<InputUserAccountHandle>__ctor__,
                       pIVar10);
    pvVar8 = local_38;
    local_58 = uVar7;
    NullCheck(local_38);
    bVar5 = Columns_IsPrimary_mD3C89EBDBA39EF08807CB7FF31D934373D45B3B9(pvVar8,uVar7,0);
    pVVar4 = local_30;
    iVar3 = local_44;
    local_59 = bVar5 & 1;
    if ((bVar5 & 1) != 0) {
      NullCheck(local_30);
      pvVar8 = (void *)VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693
                                 (pVVar4,iVar3,0);
      local_68 = pvVar8;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar1 = *(undefined4 *)(lVar9 + 4);
      NullCheck(pvVar8);
      pIVar10 = (Il2CppObject *)
                VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2(pvVar8,uVar1,0);
      local_70 = IsInstClass(pIVar10,*(Il2CppClass **)
                                      Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                            );
      ReusableTreeViewItem_InitExpandHierarchy_mCDC8EAA2A7C8DD446319BD4236A3A07F58873B9A
                (local_28,local_68,local_70,0);
      goto LAB_04451718;
    }
    local_44 = il2cpp_codegen_add<int,int>(local_44,1);
  } while( true );
}


