/*
FUNCTION_NAME: CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2
ENTRY_POINT: 045a7ce8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_11;functionality_eye_api_context_without_clear_sink_hits_1
*/


void CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2
               (Il2CppObject *param_1,EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *param_2,
               undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *pEVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  void *pvVar8;
  __11 *extraout_x1;
  __12 *extraout_x1_00;
  undefined1 *local_250;
  FinallyHelper<CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2::__12,false>
  aFStack_248 [16];
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_238;
  undefined1 local_22a;
  byte local_229;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_228;
  undefined4 local_21c;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_210;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_208;
  undefined1 local_1fa;
  byte local_1f9;
  void *local_1f8;
  void *local_1f0;
  byte local_1e5;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_1d8;
  undefined1 *local_1d0;
  FinallyHelper<CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2::__11,false>
  aFStack_1c8 [16];
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_1b8;
  undefined1 local_1aa;
  byte local_1a9;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_1a8;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_1a0;
  undefined1 local_192;
  byte local_191;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_190;
  byte local_181;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_180;
  void *local_178;
  void *local_170;
  undefined1 local_162;
  byte local_161;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_160;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_158;
  void *local_150;
  void *local_148;
  undefined1 local_13a;
  byte local_139;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_138;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_130;
  undefined1 local_122;
  byte local_121;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_120;
  byte local_115;
  undefined4 local_114;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_110;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_108;
  void *local_100;
  void *local_f8;
  undefined1 local_ea;
  byte local_e9;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_d0;
  undefined1 local_c1;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_c0;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  uint local_84;
  undefined8 local_80;
  void *local_78;
  undefined1 local_69;
  void *local_68;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  void *local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  int local_40;
  undefined1 local_39;
  undefined8 local_38;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_30;
  Il2CppObject *local_28;
  
  puVar2 = PTR_IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26_il2cpp_TypeInfo_var_048d99f8
  ;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26_il2cpp_TypeInfo_var_048d99f8
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  local_44 = 0;
  local_45 = 0;
  local_46 = 0;
  local_47 = 0;
  local_48 = 0;
  local_49 = 0;
  local_4a = 0;
  local_4b = 0;
  local_58 = (void *)0x0;
  local_59 = 0;
  local_5a = 0;
  local_5b = 0;
  local_68 = (void *)0x0;
  local_69 = 0;
  local_78 = (void *)0x0;
  local_80 = 0;
  local_84 = 0;
  local_90 = (void *)0x0;
  local_98 = 0;
  local_a0 = (void *)0x0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_c0 = local_30;
  local_c1 = local_30 == (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)0x0;
  if ((bool)local_c1) {
    return;
  }
  local_d0 = local_30;
  local_39 = local_c1;
  NullCheck(local_30);
  local_dc = EventBase_get_propagationPhase_mB1F61145A8F9ADF7A6730D9E5ABD1A4B50B7EE8C_inline
                       (local_d0,(MethodInfo *)0x0);
  local_d8 = local_dc;
  local_d4 = local_dc;
  local_44 = local_dc;
  local_40 = local_dc;
  uVar5 = il2cpp_codegen_subtract<int,int>(local_dc,1);
  switch(uVar5) {
  case 0:
    goto LAB_045a7e88;
  case 1:
    local_138 = local_30;
    NullCheck(local_30);
    local_139 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3
                          (local_138,0);
    local_139 = local_139 & 1;
    local_13a = local_139 == 0;
    local_47 = local_13a;
    if ((bool)local_13a) {
      local_150 = *(void **)(local_28 + 0x18);
      local_148 = local_150;
      if (local_150 == (void *)0x0) {
        local_98 = 0;
      }
      else {
        local_158 = local_30;
        local_90 = local_150;
        NullCheck(local_150);
        EventCallbackRegistry_InvokeCallbacks_mB1B282F6F91C0E10E00F0A963223649BB4676EA9
                  (local_90,local_158,1,0);
      }
    }
    local_160 = local_30;
    NullCheck(local_30);
    local_161 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3
                          (local_160,0);
    local_161 = local_161 & 1;
    local_162 = local_161 == 0;
    local_48 = local_162;
    if ((bool)local_162) {
      local_178 = *(void **)(local_28 + 0x18);
      local_170 = local_178;
      if (local_178 == (void *)0x0) {
        local_a8 = 0;
      }
      else {
        local_180 = local_30;
        local_a0 = local_178;
        NullCheck(local_178);
        EventCallbackRegistry_InvokeCallbacks_mB1B282F6F91C0E10E00F0A963223649BB4676EA9
                  (local_a0,local_180,3,0);
      }
    }
    local_181 = (byte)local_28[0x10] & 1;
    if (local_181 == 0) {
      local_ac = 0;
    }
    else {
      local_190 = local_30;
      NullCheck(local_30);
      local_191 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3
                            (local_190,0);
      local_191 = local_191 & 1;
      local_ac = (uint)(local_191 == 0);
    }
    local_192 = local_ac != 0;
    if ((bool)local_192) {
      local_1a0 = local_30;
      local_49 = local_192;
      pvVar8 = (void *)CastclassClass(local_28,*(Il2CppClass **)puVar2);
      NullCheck(pvVar8);
      uVar7 = CastclassClass(local_28,*(Il2CppClass **)puVar2);
      IMGUIContainer_ProcessEvent_mD5C9B933DFAA44FF2F68E8F3371085BD0C757AAD(uVar7,local_1a0,0);
    }
    break;
  case 2:
LAB_045a7e88:
    local_e8 = local_30;
    NullCheck(local_30);
    local_e9 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3
                         (local_e8,0);
    local_e9 = local_e9 & 1;
    local_ea = local_e9 == 0;
    local_45 = local_ea;
    if ((bool)local_ea) {
      local_100 = *(void **)(local_28 + 0x18);
      local_f8 = local_100;
      if (local_100 == (void *)0x0) {
        local_80 = 0;
      }
      else {
        local_108 = local_30;
        local_110 = local_30;
        local_78 = local_100;
        NullCheck(local_30);
        local_114 = EventBase_get_propagationPhase_mB1F61145A8F9ADF7A6730D9E5ABD1A4B50B7EE8C_inline
                              (local_110,(MethodInfo *)0x0);
        NullCheck(local_78);
        EventCallbackRegistry_InvokeCallbacks_mB1B282F6F91C0E10E00F0A963223649BB4676EA9
                  (local_78,local_108,local_114,0);
      }
    }
    local_115 = (byte)local_28[0x10] & 1;
    if (local_115 == 0) {
      local_84 = 0;
    }
    else {
      local_120 = local_30;
      NullCheck(local_30);
      local_121 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3
                            (local_120,0);
      local_121 = local_121 & 1;
      local_84 = (uint)(local_121 == 0);
    }
    local_122 = local_84 != 0;
    if ((bool)local_122) {
      local_130 = local_30;
      local_46 = local_122;
      pvVar8 = (void *)CastclassClass(local_28,*(Il2CppClass **)puVar2);
      NullCheck(pvVar8);
      uVar7 = CastclassClass(local_28,*(Il2CppClass **)puVar2);
      IMGUIContainer_ProcessEvent_mD5C9B933DFAA44FF2F68E8F3371085BD0C757AAD(uVar7,local_130,0);
    }
    break;
  case 3:
    local_228 = local_30;
    NullCheck(local_30);
    local_229 = EventBase_get_isDefaultPrevented_m6CD96BAC5EADA87095BB34C7EBE46ACBA75ABDB2
                          (local_228,0);
    local_229 = local_229 & 1;
    local_22a = local_229 == 0;
    if ((bool)local_22a) {
      local_238 = local_30;
      local_5a = local_22a;
      EventDebuggerLogExecuteDefaultAction__ctor_m9AF0AC749478DD49D1B611ED1917877F51CF5A69
                (&local_5b,local_30,0);
      local_250 = &local_5b;
      il2cpp::utils::
      Finally<CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2::__12>
                ((utils *)&local_250,extraout_x1_00);
      pEVar3 = local_30;
      NullCheck(local_30);
      uVar6 = EventBase_get_skipDisabledElements_m92D25C10EE0BE65D488B27481A746791E7C36814(pEVar3,0)
      ;
      if (((uVar6 & 1) == 0) ||
         (pvVar8 = (void *)IsInstClass(local_28,*(Il2CppClass **)puVar1), local_68 = pvVar8,
         pvVar8 == (void *)0x0)) {
        local_b4 = 0;
      }
      else {
        NullCheck(pvVar8);
        uVar6 = VisualElement_get_enabledInHierarchy_mBC4E983E9FD848277D6820F4D7A2743BA38BC412
                          (pvVar8,0);
        local_b4 = (uint)((uVar6 & 1) == 0);
      }
      local_69 = local_b4 != 0;
      if ((bool)local_69) {
        VirtualActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                  (0xe,local_28,local_30);
      }
      else {
        VirtualActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                  (0xc,local_28,local_30);
      }
      local_21c = 0x23;
      il2cpp::utils::
      FinallyHelper<CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2::$_12,false>
      ::~FinallyHelper(aFStack_248);
    }
    break;
  case 4:
    local_1a8 = local_30;
    NullCheck(local_30);
    local_1a9 = EventBase_get_isDefaultPrevented_m6CD96BAC5EADA87095BB34C7EBE46ACBA75ABDB2
                          (local_1a8,0);
    local_1a9 = local_1a9 & 1;
    local_1aa = local_1a9 == 0;
    if ((bool)local_1aa) {
      local_1b8 = local_30;
      local_4a = local_1aa;
      EventDebuggerLogExecuteDefaultAction__ctor_m9AF0AC749478DD49D1B611ED1917877F51CF5A69
                (&local_4b,local_30,0);
      local_1d0 = &local_4b;
      il2cpp::utils::
      Finally<CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2::__11>
                ((utils *)&local_1d0,extraout_x1);
      local_1d8 = local_30;
      NullCheck(local_30);
      bVar4 = EventBase_get_skipDisabledElements_m92D25C10EE0BE65D488B27481A746791E7C36814
                        (local_1d8,0);
      local_1e5 = bVar4 & 1;
      if (((bVar4 & 1) == 0) ||
         (local_1f0 = (void *)IsInstClass(local_28,*(Il2CppClass **)puVar1), local_58 = local_1f0,
         local_1f0 == (void *)0x0)) {
        local_b0 = 0;
      }
      else {
        local_1f8 = local_1f0;
        NullCheck(local_1f0);
        bVar4 = VisualElement_get_enabledInHierarchy_mBC4E983E9FD848277D6820F4D7A2743BA38BC412
                          (local_1f8,0);
        local_1f9 = bVar4 & 1;
        local_b0 = (uint)((bVar4 & 1) == 0);
      }
      local_1fa = local_b0 != 0;
      local_59 = local_1fa;
      if ((bool)local_1fa) {
        local_208 = local_30;
        VirtualActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                  (0xd,local_28,local_30);
      }
      else {
        local_210 = local_30;
        VirtualActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                  (0xb,local_28,local_30);
      }
      local_21c = 0x1d;
      il2cpp::utils::
      FinallyHelper<CallbackEventHandler_HandleEvent_m730E6D7CF91DB205557C39A7BED1874671FFCEE2::$_11,false>
      ::~FinallyHelper(aFStack_1c8);
    }
  }
  return;
}


