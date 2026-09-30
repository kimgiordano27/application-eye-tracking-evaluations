/*
FUNCTION_NAME: FieldMouseDragger_1_UpdateValueOnKeyDown_mD17F794045E44EEE9F4407A702DEE16FABFFCF08_gshared
ENTRY_POINT: 0232b8cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 195
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_7
*/


void FieldMouseDragger_1_UpdateValueOnKeyDown_mD17F794045E44EEE9F4407A702DEE16FABFFCF08_gshared
               (FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *param_1,
               KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA *param_2,long param_3)

{
  Il2CppClass *pIVar1;
  MethodInfo *pMVar2;
  FieldInfo *pFVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  void *apvStack_190 [2];
  int local_17c;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_178;
  int local_16c;
  void **local_168;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_160;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_158;
  void **local_150;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_148;
  int local_13c;
  Il2CppClass *local_138;
  Il2CppObject *local_130;
  undefined8 local_128;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_120;
  Il2CppObject *local_118;
  Il2CppObject *local_110;
  void *local_108;
  Il2CppObject *local_100;
  undefined4 local_f4;
  Il2CppObject *local_f0;
  Il2CppObject *local_e8;
  void *local_e0;
  Il2CppObject *local_d8;
  KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA *local_d0;
  Il2CppObject *local_c8;
  Il2CppObject *local_c0;
  undefined1 local_b8;
  int local_b4;
  KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA *local_b0;
  byte local_a4;
  undefined8 local_a0;
  Il2CppObject *local_98;
  undefined8 local_90;
  void *local_88;
  Il2CppObject *local_80;
  undefined8 local_78;
  void *local_70;
  uint local_64;
  Il2CppObject *local_60;
  undefined1 local_54;
  void **local_50;
  uint local_44;
  long local_40;
  KeyboardEventBase_1_t8A33E6EBB804F18BFE49BE0C38C5D0B8E233B6FA *local_38;
  FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *local_30;
  long local_28;
  
  lVar6 = tpidr_el0;
  local_28 = *(long *)(lVar6 + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if ((FieldMouseDragger_1_UpdateValueOnKeyDown_mD17F794045E44EEE9F4407A702DEE16FABFFCF08_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InjectOptionalPointableElement__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FieldMouseDragger_1_UpdateValueOnKeyDown_mD17F794045E44EEE9F4407A702DEE16FABFFCF08_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),3);
  local_44 = il2cpp_codegen_sizeof(pIVar1);
  local_50 = (void **)((long)apvStack_190 - ((ulong)local_44 + 0xf & 0x1fffffff0));
  local_54 = 0;
  local_128 = 0;
  local_60 = (Il2CppObject *)0x0;
  local_64 = 0;
  local_70 = (void *)0x0;
  local_78 = 0;
  local_80 = (Il2CppObject *)0x0;
  local_88 = (void *)0x0;
  local_90 = 0;
  local_98 = (Il2CppObject *)0x0;
  local_a0 = 0;
  local_120 = local_30;
  pMVar2 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0xe);
  local_a4 = FieldMouseDragger_1_get_dragging_mD7D0BBE8C9CCEAE12FE45B0B4C8086215D3C9DB8_inline
                       (local_120,pMVar2);
  local_a4 = local_a4 & 1;
  if (local_a4 == 0) {
    local_64 = 0;
  }
  else {
    local_b0 = local_38;
    NullCheck(local_38);
    local_b4 = KeyboardEventBase_1_get_keyCode_m1F9724EFC75BE6E998EC0DB5515F7FD577257D6B_inline
                         (local_b0,*(MethodInfo **)
                                    Method_Oculus_Interaction_PointerInteractable<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InjectOptionalPointableElement__
                         );
    local_64 = (uint)(local_b4 == 0x1b);
  }
  local_b8 = local_64 != 0;
  local_54 = local_b8;
  if ((bool)local_b8) {
    local_160 = local_30;
    pMVar2 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),2);
    local_13c = 0;
    FieldMouseDragger_1_set_dragging_mF12F873307B3321775B99CF67916E1118F4AD9E8_inline
              (local_160,false,pMVar2);
    local_158 = local_30;
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
    pFVar3 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,local_13c);
    puVar4 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(local_158,pFVar3);
    local_c0 = (Il2CppObject *)*puVar4;
    local_148 = local_30;
    local_150 = local_50;
    pMVar2 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0xf);
    FieldMouseDragger_1_get_startValue_m1C9274BE91740DF3F999E183F7A84A5BD5186326_inline
              (local_148,local_150,pMVar2);
    NullCheck(local_c0);
    local_138 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),local_13c
                                 );
    local_130 = local_c0;
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),3);
    uVar5 = il2cpp_codegen_class_is_value_type(pIVar1);
    if ((uVar5 & 1) == 0) {
      local_168 = *local_50;
    }
    else {
      local_168 = local_50;
    }
    local_17c = 1;
    InterfaceActionInvoker1Invoker<void*>::Invoke(1,local_138,local_130,local_168);
    local_178 = local_30;
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init
                       (*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),local_17c);
    local_16c = 0;
    pFVar3 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,0);
    puVar4 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(local_178,pFVar3);
    local_c8 = (Il2CppObject *)*puVar4;
    NullCheck(local_c8);
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),local_16c);
    InterfaceActionInvoker0::Invoke(4,pIVar1,local_c8);
    local_d0 = local_38;
    NullCheck(local_38);
    local_d8 = (Il2CppObject *)
               EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(local_d0,0);
    local_e0 = (void *)IsInstClass(local_d8,*(Il2CppClass **)
                                             Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                  );
    if (local_e0 == (void *)0x0) {
      local_80 = (Il2CppObject *)0x0;
      local_78 = 0;
    }
    else {
      local_70 = local_e0;
      NullCheck(local_e0);
      local_e8 = (Il2CppObject *)
                 VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_70,0);
      local_80 = local_e8;
    }
    local_60 = local_80;
    local_f0 = local_80;
    apvStack_190[1] =
         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
    ;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
              );
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)apvStack_190[1]);
    local_f4 = *(undefined4 *)(lVar6 + 8);
    PointerCaptureHelper_ReleasePointer_mE9ABEA39360504C8B5A9CF1C067A63F7535CDECB
              (local_f0,local_f4,0);
    local_100 = local_60;
    local_108 = (void *)IsInstClass(local_60,*(Il2CppClass **)
                                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<string>__ctor__
                                   );
    if (local_108 == (void *)0x0) {
      local_90 = 0;
    }
    else {
      local_88 = local_108;
      NullCheck(local_108);
      local_118 = (Il2CppObject *)
                  BaseVisualElementPanel_get_uiElementsBridge_mE8A13CF4592174C25F80AF9B1EDC68F3EFEB264B
                            (local_88,0);
      local_110 = local_118;
      if (local_118 == (Il2CppObject *)0x0) {
        local_a0 = 0;
      }
      else {
        local_98 = local_118;
        NullCheck(local_118);
        VirtualActionInvoker1<int>::Invoke(4,local_98,0);
      }
    }
  }
  lVar6 = tpidr_el0;
  lVar6 = *(long *)(lVar6 + 0x28) - local_28;
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6);
  }
  return;
}


