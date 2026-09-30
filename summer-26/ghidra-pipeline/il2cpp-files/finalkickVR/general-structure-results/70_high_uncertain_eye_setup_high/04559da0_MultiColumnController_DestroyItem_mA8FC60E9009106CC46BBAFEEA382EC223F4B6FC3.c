/*
FUNCTION_NAME: MultiColumnController_DestroyItem_mA8FC60E9009106CC46BBAFEEA382EC223F4B6FC3
ENTRY_POINT: 04559da0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void MultiColumnController_DestroyItem_mA8FC60E9009106CC46BBAFEEA382EC223F4B6FC3
               (undefined8 param_1,void *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar3;
  Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *pCVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  Action_1_t66B514BE877E216616DEDD40416127189FE16FA3 *pAVar10;
  undefined1 auVar11 [16];
  Il2CppObject **local_a0;
  FinallyHelper<MultiColumnController_DestroyItem_mA8FC60E9009106CC46BBAFEEA382EC223F4B6FC3::__17,false>
  aFStack_98 [16];
  Il2CppObject *local_88;
  Il2CppObject *local_80;
  void *local_78;
  undefined8 local_70;
  Action_1_t66B514BE877E216616DEDD40416127189FE16FA3 *local_68;
  undefined1 local_59;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_58;
  Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *local_50;
  void *local_48;
  Il2CppObject *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  
  puVar2 = Method_System_Nullable<InputUpdateType>_get_HasValue__;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((MultiColumnController_DestroyItem_mA8FC60E9009106CC46BBAFEEA382EC223F4B6FC3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_Release__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IEnumerable_1_tCEF1F6C69EA77DC2CEFABB0AC09506F177DC9164_il2cpp_TypeInfo_var_048dc850
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IEnumerator_1_t78324F87C56E8CB9AD12B3C935CD06A25DF87479_il2cpp_TypeInfo_var_048dc858
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    MultiColumnController_DestroyItem_mA8FC60E9009106CC46BBAFEEA382EC223F4B6FC3::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = (Il2CppObject *)0x0;
  local_48 = (void *)0x0;
  local_50 = (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *)0x0;
  local_58 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  local_59 = 0;
  local_68 = (Action_1_t66B514BE877E216616DEDD40416127189FE16FA3 *)0x0;
  local_70 = 0;
  local_78 = local_30;
  NullCheck(local_30);
  local_80 = (Il2CppObject *)
             VisualElement_Children_mA4484B11452E007D8408E20DA53F292C5468AB75(local_78,0);
  NullCheck(local_80);
  auVar11 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                      (0,*(Il2CppClass **)
                          PTR_IEnumerable_1_tCEF1F6C69EA77DC2CEFABB0AC09506F177DC9164_il2cpp_TypeInfo_var_048dc850
                       ,local_80);
  local_88 = auVar11._0_8_;
  local_a0 = &local_40;
  local_40 = local_88;
  il2cpp::utils::
  Finally<MultiColumnController_DestroyItem_mA8FC60E9009106CC46BBAFEEA382EC223F4B6FC3::__17>
            ((utils *)&local_a0,auVar11._8_8_);
  while( true ) {
    pIVar8 = local_40;
    NullCheck(local_40);
    uVar5 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar8);
    pIVar8 = local_40;
    if ((uVar5 & 1) == 0) break;
    NullCheck(local_40);
    pvVar6 = (void *)InterfaceFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
                     ::Invoke(0,*(Il2CppClass **)
                                 PTR_IEnumerator_1_t78324F87C56E8CB9AD12B3C935CD06A25DF87479_il2cpp_TypeInfo_var_048dc858
                              ,pIVar8);
    local_48 = pvVar6;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar7 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar1 = *puVar7;
    NullCheck(pvVar6);
    pIVar8 = (Il2CppObject *)
             VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2(pvVar6,uVar1,0);
    local_50 = (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *)
               IsInstClass(pIVar8,*(Il2CppClass **)
                                   Method_UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_Release__
                          );
    pvVar6 = local_48;
    local_59 = local_50 == (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *)0x0;
    if (!(bool)local_59) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar1 = *(undefined4 *)(lVar9 + 4);
      NullCheck(pvVar6);
      pIVar8 = (Il2CppObject *)
               VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2(pvVar6,uVar1,0);
      local_58 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
                 IsInstClass(pIVar8,*(Il2CppClass **)
                                     Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                            );
      pCVar4 = local_50;
      NullCheck(local_50);
      pAVar10 = (Action_1_t66B514BE877E216616DEDD40416127189FE16FA3 *)
                Column_get_destroyCell_m092A9DABEC6CAF09F2B984741F2EA09370982BD3_inline
                          (pCVar4,(MethodInfo *)0x0);
      pVVar3 = local_58;
      if (pAVar10 == (Action_1_t66B514BE877E216616DEDD40416127189FE16FA3 *)0x0) {
        local_70 = 0;
      }
      else {
        local_68 = pAVar10;
        NullCheck(pAVar10);
        Action_1_Invoke_m888F6CE0B6C59F9F67C1098D197F59D1B7CA2211_inline
                  (local_68,pVVar3,(MethodInfo *)0x0);
      }
      pvVar6 = local_48;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      puVar7 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar1 = *puVar7;
      NullCheck(pvVar6);
      VisualElement_SetProperty_m2EB182A4E57AD33CACC3DC0209DCDB5D8773F7E6(pvVar6,uVar1,0);
    }
  }
  il2cpp::utils::
  FinallyHelper<MultiColumnController_DestroyItem_mA8FC60E9009106CC46BBAFEEA382EC223F4B6FC3::$_17,false>
  ::~FinallyHelper(aFStack_98);
  return;
}


