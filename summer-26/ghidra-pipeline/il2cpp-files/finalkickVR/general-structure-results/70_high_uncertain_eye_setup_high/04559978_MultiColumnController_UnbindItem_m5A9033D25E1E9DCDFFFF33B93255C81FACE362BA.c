/*
FUNCTION_NAME: MultiColumnController_UnbindItem_m5A9033D25E1E9DCDFFFF33B93255C81FACE362BA
ENTRY_POINT: 04559978
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

void MultiColumnController_UnbindItem_m5A9033D25E1E9DCDFFFF33B93255C81FACE362BA
               (undefined8 param_1,void *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined1 auVar8 [16];
  Il2CppObject **local_98;
  FinallyHelper<MultiColumnController_UnbindItem_m5A9033D25E1E9DCDFFFF33B93255C81FACE362BA::__16,false>
  aFStack_90 [16];
  Il2CppObject *local_80;
  Il2CppObject *local_78;
  void *local_70;
  undefined1 local_61;
  undefined8 local_60;
  long local_58;
  void *local_50;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined4 local_34;
  void *local_30;
  undefined8 local_28;
  
  puVar2 = Method_System_Nullable<InputUpdateType>_get_HasValue__;
  local_40 = param_4;
  local_34 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((MultiColumnController_UnbindItem_m5A9033D25E1E9DCDFFFF33B93255C81FACE362BA::
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
    MultiColumnController_UnbindItem_m5A9033D25E1E9DCDFFFF33B93255C81FACE362BA::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = (Il2CppObject *)0x0;
  local_50 = (void *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_61 = 0;
  local_70 = local_30;
  NullCheck(local_30);
  local_78 = (Il2CppObject *)
             VisualElement_Children_mA4484B11452E007D8408E20DA53F292C5468AB75(local_70,0);
  NullCheck(local_78);
  auVar8 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                     (0,*(Il2CppClass **)
                         PTR_IEnumerable_1_tCEF1F6C69EA77DC2CEFABB0AC09506F177DC9164_il2cpp_TypeInfo_var_048dc850
                      ,local_78);
  local_80 = auVar8._0_8_;
  local_98 = &local_48;
  local_48 = local_80;
  il2cpp::utils::
  Finally<MultiColumnController_UnbindItem_m5A9033D25E1E9DCDFFFF33B93255C81FACE362BA::__16>
            ((utils *)&local_98,auVar8._8_8_);
  while( true ) {
    pIVar6 = local_48;
    NullCheck(local_48);
    uVar3 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar6);
    pIVar6 = local_48;
    if ((uVar3 & 1) == 0) break;
    NullCheck(local_48);
    pvVar4 = (void *)InterfaceFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
                     ::Invoke(0,*(Il2CppClass **)
                                 PTR_IEnumerator_1_t78324F87C56E8CB9AD12B3C935CD06A25DF87479_il2cpp_TypeInfo_var_048dc858
                              ,pIVar6);
    local_50 = pvVar4;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar5 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar1 = *puVar5;
    NullCheck(pvVar4);
    pIVar6 = (Il2CppObject *)
             VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2(pvVar4,uVar1,0);
    local_58 = IsInstClass(pIVar6,*(Il2CppClass **)
                                   Method_UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_Release__
                          );
    pvVar4 = local_50;
    local_61 = local_58 == 0;
    if (!(bool)local_61) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar1 = *(undefined4 *)(lVar7 + 4);
      NullCheck(pvVar4);
      pIVar6 = (Il2CppObject *)
               VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2(pvVar4,uVar1,0);
      local_60 = IsInstClass(pIVar6,*(Il2CppClass **)
                                     Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                            );
      MultiColumnController_UnbindCellItem_m94DF208752A2F724C03DBBAB8188AAAF69A543B2
                (local_60,local_34,local_58,0);
    }
  }
  il2cpp::utils::
  FinallyHelper<MultiColumnController_UnbindItem_m5A9033D25E1E9DCDFFFF33B93255C81FACE362BA::$_16,false>
  ::~FinallyHelper(aFStack_90);
  return;
}


