/*
FUNCTION_NAME: VisualElement_SetEnabledFromHierarchyPrivate_mFE15B01FAB25DEC59020D9B030627C29C06C6EDC
ENTRY_POINT: 0464662c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_20;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool VisualElement_SetEnabledFromHierarchyPrivate_mFE15B01FAB25DEC59020D9B030627C29C06C6EDC
               (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_1,byte param_2,
               undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *local_158;
  undefined8 *local_150;
  FinallyHelper<VisualElement_SetEnabledFromHierarchyPrivate_mFE15B01FAB25DEC59020D9B030627C29C06C6EDC::__18,false>
  aFStack_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  Il2CppObject *local_108;
  undefined1 local_f9;
  long local_f8;
  Il2CppObject *local_f0;
  Il2CppObject *local_e8;
  undefined1 local_da;
  byte local_d9;
  void *local_d8;
  long local_d0;
  byte local_c3;
  byte local_c2;
  byte local_c1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_9f;
  byte local_9e;
  byte local_9d;
  byte local_9c;
  byte local_9b;
  byte local_9a;
  byte local_99;
  long local_98;
  undefined8 local_90;
  Il2CppObject *local_88;
  uint local_80;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined8 local_38;
  byte local_29;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_28;
  
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__;
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_29 = param_2 & 1;
  local_38 = param_3;
  local_28 = param_1;
  if ((VisualElement_SetEnabledFromHierarchyPrivate_mFE15B01FAB25DEC59020D9B030627C29C06C6EDC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Nullable_1_GetValueOrDefault_mEA0213C8450AF975997BE265393B12173683C1AC_RuntimeMethod_var_048df280
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Nullable_1__ctor_mACC99815581A717D8039FB83F789688D6F0F6F2C_RuntimeMethod_var_048df278
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Nullable_1_get_HasValue_mD84CA09E5F11DDD93305659A62F5CE4022A085F0_RuntimeMethod_var_048df288
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    VisualElement_SetEnabledFromHierarchyPrivate_mFE15B01FAB25DEC59020D9B030627C29C06C6EDC::
    s_Il2CppMethodInitialized = 1;
  }
  local_39 = 0;
  local_3a = 0;
  local_3b = 0;
  local_3c = 0;
  local_3d = 0;
  local_3e = 0;
  local_3f = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_51 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_79 = 0;
  local_80 = 0;
  local_88 = (Il2CppObject *)0x0;
  local_90 = 0;
  local_98 = 0;
  local_99 = VisualElement_get_enabledInHierarchy_mBC4E983E9FD848277D6820F4D7A2743BA38BC412
                       (local_28,0);
  local_99 = local_99 & 1;
  local_3a = 0;
  local_9b = local_29 & 1;
  local_9a = local_9b;
  local_3b = local_9b;
  local_39 = local_99;
  if (local_9b == 0) {
    local_3a = 1;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_c0 = *(undefined8 *)(lVar6 + 0x18);
    local_c1 = VisualElement_get_isParentEnabledInHierarchy_m5DD1BA970BEA52066AD6E29070F7B8A22F338DF0
                         (local_28);
    local_c1 = local_c1 & 1;
    VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365
              (local_28,local_c0,local_c1,0);
  }
  else {
    local_9d = VisualElement_get_isParentEnabledInHierarchy_m5DD1BA970BEA52066AD6E29070F7B8A22F338DF0
                         (local_28,0);
    local_9d = local_9d & 1;
    local_9c = local_9d;
    local_3c = local_9d;
    if (local_9d == 0) {
      local_3a = 1;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      local_b8 = *(undefined8 *)(lVar6 + 0x18);
      VisualElement_RemoveFromClassList_mA7A2EC202004DFCBF38C12B70C6218BF40D21220
                (local_28,local_b8,0);
    }
    else {
      local_9f = VisualElement_get_enabledSelf_m0354238C2D86794523B70A10AB7F2DE97A50D3DC_inline
                           (local_28,(MethodInfo *)0x0);
      local_9f = local_9f & 1;
      local_9e = local_9f;
      local_3d = local_9f;
      if (local_9f == 0) {
        local_3a = 1;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_b0 = *(undefined8 *)(lVar6 + 0x18);
        VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_28,local_b0,0);
      }
      else {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        local_a8 = *(undefined8 *)(lVar6 + 0x18);
        VisualElement_RemoveFromClassList_mA7A2EC202004DFCBF38C12B70C6218BF40D21220
                  (local_28,local_a8,0);
      }
    }
  }
  local_c3 = local_3a & 1;
  local_c2 = local_c3;
  local_3e = local_c3;
  if (local_c3 == 0) {
    uVar5 = VisualElement_get_pseudoStates_m097622852345CD39779967BAC5F0351E472AEC6E(local_28);
    VisualElement_set_pseudoStates_m58F2D1B61692BA0DC7E4F5F98864E8B6F78989BB
              (local_28,uVar5 & 0xffffffdf,0);
  }
  else {
    local_d0 = VirtualFuncInvoker0<FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A*>::
               Invoke(0xf,(Il2CppObject *)local_28);
    if (local_d0 == 0) {
      local_80 = 0;
    }
    else {
      local_d8 = (void *)VirtualFuncInvoker0<FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A*>
                         ::Invoke(0xf,(Il2CppObject *)local_28);
      NullCheck(local_d8);
      local_d9 = FocusController_IsFocused_mC6FBCB39C59950009902CE0F85A97A96EC09DF53
                           (local_d8,local_28,0);
      local_d9 = local_d9 & 1;
      local_80 = (uint)local_d9;
    }
    local_da = local_80 != 0;
    local_3f = local_da;
    if ((bool)local_da) {
      il2cpp_codegen_initobj(&local_50,0x10);
      auVar7 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_28,0);
      local_f0 = auVar7._0_8_;
      local_e8 = local_f0;
      if (local_f0 == (Il2CppObject *)0x0) {
        local_98 = 0;
        local_90 = 0;
      }
      else {
        local_88 = local_f0;
        NullCheck(local_f0);
        auVar8 = InterfaceFuncInvoker0<EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398*>::
                 Invoke(1,*(Il2CppClass **)puVar3,local_88);
        auVar7._8_8_ = auVar8._8_8_;
        auVar7._0_8_ = local_f0;
        local_f8 = auVar8._0_8_;
        local_98 = local_f8;
      }
      local_f0 = auVar7._0_8_;
      local_f9 = local_98 != 0;
      local_51 = local_f9;
      if ((bool)local_f9) {
        local_108 = (Il2CppObject *)
                    VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_28);
        NullCheck(local_108);
        local_110 = InterfaceFuncInvoker0<EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398*>
                    ::Invoke(1,*(Il2CppClass **)puVar3,local_108);
        local_118 = 0;
        EventDispatcherGate__ctor_mF02241D3AB4F068E3F0493D2E407C344C66810A9(&local_118,local_110,0);
        local_120 = local_118;
        Nullable_1__ctor_mACC99815581A717D8039FB83F789688D6F0F6F2C
                  (&local_50,local_118,
                   *(undefined8 *)
                    PTR_Nullable_1__ctor_mACC99815581A717D8039FB83F789688D6F0F6F2C_RuntimeMethod_var_048df278
                  );
        auVar7._8_8_ = extraout_x1;
        auVar7._0_8_ = local_f0;
      }
      local_f0 = auVar7._0_8_;
      uStack_128 = uStack_48;
      local_130 = local_50;
      local_158 = &local_70;
      uStack_68 = uStack_48;
      local_70 = local_50;
      local_150 = &local_78;
      il2cpp::utils::
      Finally<VisualElement_SetEnabledFromHierarchyPrivate_mFE15B01FAB25DEC59020D9B030627C29C06C6EDC::__18>
                ((utils *)&local_158,auVar7._8_8_);
      Focusable_BlurImmediately_m842A3CC7A2AA8E788F977D2E6F6995B3B155DCB7(local_28,0);
      il2cpp::utils::
      FinallyHelper<VisualElement_SetEnabledFromHierarchyPrivate_mFE15B01FAB25DEC59020D9B030627C29C06C6EDC::$_18,false>
      ::~FinallyHelper(aFStack_148);
    }
    uVar5 = VisualElement_get_pseudoStates_m097622852345CD39779967BAC5F0351E472AEC6E(local_28);
    VisualElement_set_pseudoStates_m58F2D1B61692BA0DC7E4F5F98864E8B6F78989BB
              (local_28,uVar5 | 0x20,0);
  }
  bVar1 = local_39 & 1;
  bVar4 = VisualElement_get_enabledInHierarchy_mBC4E983E9FD848277D6820F4D7A2743BA38BC412(local_28,0)
  ;
  return bVar1 != (bVar4 & 1);
}


