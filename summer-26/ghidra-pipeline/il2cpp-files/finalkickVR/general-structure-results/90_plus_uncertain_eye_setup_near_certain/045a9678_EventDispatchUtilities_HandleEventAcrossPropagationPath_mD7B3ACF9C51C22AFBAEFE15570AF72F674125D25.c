/*
FUNCTION_NAME: EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25
ENTRY_POINT: 045a9678
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25
               (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *pEVar5;
  byte bVar6;
  uint uVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  __13 *extraout_x1;
  __14 *extraout_x1_00;
  __15 *extraout_x1_01;
  undefined8 *local_4c0;
  FinallyHelper<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::__15,false>
  aFStack_4b8 [16];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 *local_470;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_468;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_460;
  byte local_452;
  byte local_451;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_450;
  undefined8 local_448;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_440;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_438;
  byte local_421;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_420;
  Il2CppObject *local_418;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_410;
  Il2CppObject *local_408;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_400;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_3f8;
  void *local_3f0;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_3e8;
  undefined1 local_3d9;
  long local_3d8;
  long local_3d0;
  void *local_3c8;
  byte local_3b9;
  void *local_3b8;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_3b0;
  void *local_3a8;
  undefined8 *local_3a0;
  FinallyHelper<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::__14,false>
  aFStack_398 [16];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 *local_350;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_348;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_340;
  undefined4 local_334;
  byte local_321;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_320;
  Il2CppObject *local_318;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_310;
  Il2CppObject *local_308;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_300;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_2f8;
  void *local_2f0;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_2e8;
  undefined1 local_2d9;
  long local_2d8;
  long local_2d0;
  void *local_2c8;
  byte local_2b9;
  void *local_2b8;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_2b0;
  void *local_298;
  undefined8 *local_290;
  FinallyHelper<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::__13,false>
  aFStack_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 *local_240;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_238;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_230;
  undefined1 local_221;
  int local_220;
  int local_21c;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_218;
  Il2CppObject *local_210;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_208;
  Il2CppObject *local_200;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_1f8;
  undefined1 local_1e9;
  long local_1e8;
  long local_1e0;
  Il2CppObject *local_1d8;
  byte local_1c9;
  Il2CppObject *local_1c8;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_1c0;
  Il2CppObject *local_1b8;
  int local_1ac;
  List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 *local_1a8;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_1a0;
  byte local_192;
  byte local_191;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_190;
  int local_184;
  List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 *local_180;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_178;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_170;
  byte local_162;
  byte local_161;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_160;
  long local_158;
  void *local_150;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_148;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_140;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_138;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_130;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_128;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_120;
  void *local_118;
  Il2CppObject *local_110;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_108;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  undefined1 local_e9;
  Il2CppObject *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  byte local_ba;
  undefined1 local_b9;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_89;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_5b;
  undefined1 local_5a;
  byte local_59;
  Il2CppObject *local_58;
  int local_50;
  byte local_49;
  long local_48;
  PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *local_40;
  void *local_38;
  undefined8 local_30;
  EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *local_28;
  
  puVar4 = 
  PTR_List_1_GetEnumerator_m57952DE1FACF2FE8083546945916B0B995290EAF_RuntimeMethod_var_048dd680;
  puVar3 = 
  PTR_Enumerator_get_Current_mB7757CAB14504096954228BA7CF5F646853128D4_RuntimeMethod_var_048dd678;
  puVar2 = 
  PTR_Enumerator_MoveNext_m9F65E2FE306240D5385DDF1C59E50F8B139AD844_RuntimeMethod_var_048dd670;
  puVar1 = PTR_IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3_il2cpp_TypeInfo_var_048d85f8;
  local_30 = param_2;
  local_28 = param_1;
  if ((EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Enumerator_Dispose_m2A5FB7E43101302337178BF43E63DB8368759BB4_RuntimeMethod_var_048dd668
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUpdateType>_GetValueOrDefault__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputDeviceMatcher>_get_Value__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5_il2cpp_TypeInfo_var_048dd688
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25
    ::s_Il2CppMethodInitialized = 1;
  }
  local_38 = (void *)0x0;
  local_40 = (PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *)0x0;
  local_48 = 0;
  local_49 = 0;
  local_50 = 0;
  local_58 = (Il2CppObject *)0x0;
  local_59 = 0;
  local_5a = 0;
  local_5b = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = (void *)0x0;
  local_89 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b8 = (void *)0x0;
  local_b9 = 0;
  local_ba = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_e8 = (Il2CppObject *)0x0;
  local_e9 = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = local_28;
  NullCheck(local_28);
  local_110 = (Il2CppObject *)
              EventBase_get_leafTarget_m04359C6A144D1D92913C96EA6410ED01955D438E_inline
                        (local_108,(MethodInfo *)0x0);
  local_118 = (void *)CastclassClass(local_110,
                                     *(Il2CppClass **)
                                      Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                    );
  local_120 = local_28;
  local_38 = local_118;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5_il2cpp_TypeInfo_var_048dd688
            );
  local_138 = (PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5 *)
              PropagationPaths_Build_mDAE6BDA5595D8964B9DAFFEB81B4D18D0EAB387E
                        (local_118,local_120,0);
  local_130 = local_28;
  local_128 = local_138;
  local_40 = local_138;
  NullCheck(local_28);
  EventBase_set_path_mB1DA0B623A489764AB4B394B3D6EDA564BEBF73E_inline
            (local_130,local_138,(MethodInfo *)0x0);
  local_140 = local_28;
  local_148 = local_40;
  EventDebugger_LogPropagationPaths_m2320DCFA24AE8AED1A31B20717E82133AD16099E(local_28,local_40,0);
  local_150 = local_38;
  NullCheck(local_38);
  local_158 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_150,0);
  local_160 = local_28;
  local_48 = local_158;
  NullCheck(local_28);
  local_162 = EventBase_get_tricklesDown_m8AA6FDD44359CE2C3BF327D510B49E6C48D5CFF3(local_160,0);
  local_162 = local_162 & 1;
  local_161 = local_162;
  local_49 = local_162;
  if (local_162 != 0) {
    local_170 = local_28;
    NullCheck(local_28);
    EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
              (local_170,1,(MethodInfo *)0x0);
    local_178 = local_40;
    NullCheck(local_40);
    local_180 = *(List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 **)(local_178 + 0x10);
    NullCheck(local_180);
    local_184 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline
                          (local_180,
                           *(MethodInfo **)
                            Method_System_Nullable<InputUpdateType>_GetValueOrDefault__);
    local_50 = il2cpp_codegen_subtract<int,int>(local_184,1);
    while( true ) {
      local_220 = local_50;
      local_221 = -1 < local_50;
      local_5b = local_221;
      if (!(bool)local_221) break;
      local_190 = local_28;
      NullCheck(local_28);
      local_192 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3
                            (local_190,0);
      local_192 = local_192 & 1;
      local_191 = local_192;
      local_59 = local_192;
      if (local_192 != 0) break;
      local_1a0 = local_40;
      NullCheck(local_40);
      local_1a8 = *(List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 **)(local_1a0 + 0x10);
      local_1ac = local_50;
      NullCheck(local_1a8);
      local_1c8 = (Il2CppObject *)
                  List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092
                            (local_1a8,local_1ac,
                             *(MethodInfo **)Method_System_Nullable<InputDeviceMatcher>_get_Value__)
      ;
      local_1c0 = local_28;
      local_1b8 = local_1c8;
      local_58 = local_1c8;
      NullCheck(local_28);
      local_1c9 = EventBase_Skip_m63795C0012AD0F36A95467C55BC06931F98F7298(local_1c0,local_1c8,0);
      local_1c9 = local_1c9 & 1;
      if (local_1c9 == 0) {
        local_1d8 = local_58;
        NullCheck(local_58);
        local_1e0 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_1d8,0);
        local_1e8 = local_48;
        local_f0 = (uint)(local_1e0 != local_48);
      }
      else {
        local_f0 = 1;
      }
      local_1e9 = local_f0 != 0;
      local_5a = local_1e9;
      if (!(bool)local_1e9) {
        local_1f8 = local_28;
        local_200 = local_58;
        NullCheck(local_28);
        VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,(Il2CppObject *)local_1f8,local_200);
        local_208 = local_28;
        NullCheck(local_28);
        local_210 = (Il2CppObject *)
                    VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,(Il2CppObject *)local_208);
        local_218 = local_28;
        NullCheck(local_210);
        InterfaceActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                  (1,*(Il2CppClass **)puVar1,local_210,local_218);
      }
      local_21c = local_50;
      local_50 = il2cpp_codegen_subtract<int,int>(local_50,1);
    }
  }
  local_230 = local_28;
  NullCheck(local_28);
  EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
            (local_230,2,(MethodInfo *)0x0);
  local_238 = local_40;
  NullCheck(local_40);
  local_240 = *(List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 **)(local_238 + 0x18);
  NullCheck(local_240);
  List_1_GetEnumerator_m57952DE1FACF2FE8083546945916B0B995290EAF(local_240,*(MethodInfo **)puVar4);
  uStack_258 = uStack_270;
  local_260 = local_278;
  local_250 = local_268;
  local_290 = &local_80;
  local_70 = local_268;
  il2cpp::utils::
  Finally<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::__13>
            ((utils *)&local_290,extraout_x1);
  while( true ) {
    bVar6 = Enumerator_MoveNext_m9F65E2FE306240D5385DDF1C59E50F8B139AD844
                      ((Enumerator_tB70AE61864AD2008C8CDDE421848AD69E69AE525 *)&local_80,
                       *(MethodInfo **)puVar2);
    local_321 = bVar6 & 1;
    if ((bVar6 & 1) == 0) break;
    local_2b8 = (void *)Enumerator_get_Current_mB7757CAB14504096954228BA7CF5F646853128D4_inline
                                  ((Enumerator_tB70AE61864AD2008C8CDDE421848AD69E69AE525 *)&local_80
                                   ,*(MethodInfo **)puVar3);
    local_2b0 = local_28;
    local_298 = local_2b8;
    local_88 = local_2b8;
    NullCheck(local_28);
    bVar6 = EventBase_Skip_m63795C0012AD0F36A95467C55BC06931F98F7298(local_2b0,local_2b8,0);
    local_2b9 = bVar6 & 1;
    if ((bVar6 & 1) == 0) {
      local_2c8 = local_88;
      NullCheck(local_88);
      local_2d0 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_2c8,0);
      local_2d8 = local_48;
      local_f4 = (uint)(local_2d0 != local_48);
    }
    else {
      local_f4 = 1;
    }
    local_2d9 = local_f4 != 0;
    local_89 = local_2d9;
    if (!(bool)local_2d9) {
      local_2e8 = local_28;
      local_2f0 = local_88;
      NullCheck(local_28);
      EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(local_2e8,local_2f0,0);
      local_2f8 = local_28;
      local_300 = local_28;
      NullCheck(local_28);
      local_308 = (Il2CppObject *)
                  EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(local_300,0);
      NullCheck(local_2f8);
      VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,(Il2CppObject *)local_2f8,local_308);
      local_310 = local_28;
      NullCheck(local_28);
      local_318 = (Il2CppObject *)
                  VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,(Il2CppObject *)local_310);
      local_320 = local_28;
      NullCheck(local_318);
      InterfaceActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                (1,*(Il2CppClass **)puVar1,local_318,local_320);
    }
  }
  local_334 = 0x10;
  il2cpp::utils::
  FinallyHelper<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::$_13,false>
  ::~FinallyHelper(aFStack_288);
  local_340 = local_28;
  NullCheck(local_28);
  EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
            (local_340,5,(MethodInfo *)0x0);
  local_348 = local_40;
  NullCheck(local_40);
  local_350 = *(List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 **)(local_348 + 0x18);
  NullCheck(local_350);
  List_1_GetEnumerator_m57952DE1FACF2FE8083546945916B0B995290EAF(local_350,*(MethodInfo **)puVar4);
  uStack_368 = uStack_380;
  local_370 = local_388;
  local_360 = local_378;
  local_3a0 = &local_b0;
  local_a0 = local_378;
  il2cpp::utils::
  Finally<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::__14>
            ((utils *)&local_3a0,extraout_x1_00);
  while( true ) {
    bVar6 = Enumerator_MoveNext_m9F65E2FE306240D5385DDF1C59E50F8B139AD844
                      ((Enumerator_tB70AE61864AD2008C8CDDE421848AD69E69AE525 *)&local_b0,
                       *(MethodInfo **)puVar2);
    local_421 = bVar6 & 1;
    if ((bVar6 & 1) == 0) break;
    local_3b8 = (void *)Enumerator_get_Current_mB7757CAB14504096954228BA7CF5F646853128D4_inline
                                  ((Enumerator_tB70AE61864AD2008C8CDDE421848AD69E69AE525 *)&local_b0
                                   ,*(MethodInfo **)puVar3);
    local_3b0 = local_28;
    local_3a8 = local_3b8;
    local_b8 = local_3b8;
    NullCheck(local_28);
    bVar6 = EventBase_Skip_m63795C0012AD0F36A95467C55BC06931F98F7298(local_3b0,local_3b8,0);
    local_3b9 = bVar6 & 1;
    if ((bVar6 & 1) == 0) {
      local_3c8 = local_b8;
      NullCheck(local_b8);
      local_3d0 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_3c8,0);
      local_3d8 = local_48;
      local_f8 = (uint)(local_3d0 != local_48);
    }
    else {
      local_f8 = 1;
    }
    local_3d9 = local_f8 != 0;
    local_b9 = local_3d9;
    if (!(bool)local_3d9) {
      local_3e8 = local_28;
      local_3f0 = local_b8;
      NullCheck(local_28);
      EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(local_3e8,local_3f0,0);
      local_3f8 = local_28;
      local_400 = local_28;
      NullCheck(local_28);
      local_408 = (Il2CppObject *)
                  EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(local_400,0);
      NullCheck(local_3f8);
      VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,(Il2CppObject *)local_3f8,local_408);
      local_410 = local_28;
      NullCheck(local_28);
      local_418 = (Il2CppObject *)
                  VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,(Il2CppObject *)local_410);
      local_420 = local_28;
      NullCheck(local_418);
      InterfaceActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                (1,*(Il2CppClass **)puVar1,local_418,local_420);
    }
  }
  local_334 = 0x16;
  il2cpp::utils::
  FinallyHelper<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::$_14,false>
  ::~FinallyHelper(aFStack_398);
  local_438 = local_28;
  local_440 = local_28;
  NullCheck(local_28);
  local_448 = EventBase_get_leafTarget_m04359C6A144D1D92913C96EA6410ED01955D438E_inline
                        (local_440,(MethodInfo *)0x0);
  NullCheck(local_438);
  EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2(local_438,local_448,0);
  local_450 = local_28;
  NullCheck(local_28);
  local_452 = EventBase_get_bubbles_mE2783C986742080BD0744DAF34D367B72F85FFAE(local_450,0);
  local_452 = local_452 & 1;
  local_451 = local_452;
  local_ba = local_452;
  if (local_452 != 0) {
    local_460 = local_28;
    NullCheck(local_28);
    EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
              (local_460,3,(MethodInfo *)0x0);
    local_468 = local_40;
    NullCheck(local_40);
    local_470 = *(List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95 **)(local_468 + 0x20);
    NullCheck(local_470);
    List_1_GetEnumerator_m57952DE1FACF2FE8083546945916B0B995290EAF(local_470,*(MethodInfo **)puVar4)
    ;
    uStack_488 = uStack_4a0;
    local_490 = local_4a8;
    local_480 = local_498;
    local_4c0 = &local_e0;
    uStack_d8 = uStack_4a0;
    local_e0 = local_4a8;
    local_d0 = local_498;
    il2cpp::utils::
    Finally<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::__15>
              ((utils *)&local_4c0,extraout_x1_01);
    while (uVar7 = Enumerator_MoveNext_m9F65E2FE306240D5385DDF1C59E50F8B139AD844
                             ((Enumerator_tB70AE61864AD2008C8CDDE421848AD69E69AE525 *)&local_e0,
                              *(MethodInfo **)puVar2), (uVar7 & 1) != 0) {
      pIVar8 = (Il2CppObject *)
               Enumerator_get_Current_mB7757CAB14504096954228BA7CF5F646853128D4_inline
                         ((Enumerator_tB70AE61864AD2008C8CDDE421848AD69E69AE525 *)&local_e0,
                          *(MethodInfo **)puVar3);
      pEVar5 = local_28;
      local_e8 = pIVar8;
      NullCheck(local_28);
      uVar7 = EventBase_Skip_m63795C0012AD0F36A95467C55BC06931F98F7298(pEVar5,pIVar8,0);
      pIVar8 = local_e8;
      if ((uVar7 & 1) == 0) {
        NullCheck(local_e8);
        lVar9 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pIVar8,0);
        local_fc = (uint)(lVar9 != local_48);
      }
      else {
        local_fc = 1;
      }
      pEVar5 = local_28;
      pIVar8 = local_e8;
      local_e9 = local_fc != 0;
      if (!(bool)local_e9) {
        NullCheck(local_28);
        VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,(Il2CppObject *)pEVar5,pIVar8);
        pEVar5 = local_28;
        NullCheck(local_28);
        pIVar8 = (Il2CppObject *)
                 VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,(Il2CppObject *)pEVar5);
        pEVar5 = local_28;
        NullCheck(pIVar8);
        InterfaceActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
                  (1,*(Il2CppClass **)puVar1,pIVar8,pEVar5);
      }
    }
    local_334 = 0x1d;
    il2cpp::utils::
    FinallyHelper<EventDispatchUtilities_HandleEventAcrossPropagationPath_mD7B3ACF9C51C22AFBAEFE15570AF72F674125D25::$_15,false>
    ::~FinallyHelper(aFStack_4b8);
  }
  pEVar5 = local_28;
  NullCheck(local_28);
  EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
            (pEVar5,0,(MethodInfo *)0x0);
  pEVar5 = local_28;
  NullCheck(local_28);
  VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,(Il2CppObject *)pEVar5,(Il2CppObject *)0x0);
  return;
}


