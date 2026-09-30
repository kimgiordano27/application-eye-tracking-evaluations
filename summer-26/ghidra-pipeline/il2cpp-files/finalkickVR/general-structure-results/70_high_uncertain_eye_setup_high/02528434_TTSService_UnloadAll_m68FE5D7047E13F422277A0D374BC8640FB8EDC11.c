/*
FUNCTION_NAME: TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11
ENTRY_POINT: 02528434
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11
               (Il2CppObject *param_1,undefined8 param_2)

{
  uint uVar1;
  __1 *extraout_x1;
  undefined8 *local_f0;
  FinallyHelper<TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11::__1,false>
  aFStack_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  HashSet_1_t7728EFA7297C4DCD03238E3251D0ACE444FD6C7A *local_a0;
  Il2CppObject *local_98;
  Il2CppObject *local_90;
  Il2CppObject *local_88;
  Il2CppObject *local_80;
  Il2CppObject *local_78;
  Il2CppObject *local_70;
  undefined8 local_68;
  Il2CppObject *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Il2CppObject *local_38;
  undefined8 local_30;
  Il2CppObject *local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  if ((TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_CopyTo__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_CopyTo__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_CreateInstance__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_CreateInstance__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_CreateInstance__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_GetValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
    TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11::s_Il2CppMethodInitialized = 1;
  }
  local_38 = (Il2CppObject *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_60 = (Il2CppObject *)0x0;
  local_68 = 0;
  local_70 = (Il2CppObject *)0x0;
  local_80 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,local_28);
  local_78 = local_80;
  if (local_80 == (Il2CppObject *)0x0) {
    local_70 = (Il2CppObject *)0x0;
    local_68 = 0;
  }
  else {
    local_60 = local_80;
    NullCheck(local_80);
    local_88 = (Il2CppObject *)
               InterfaceFuncInvoker0<TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*>::
               Invoke(4,*(Il2CppClass **)Method_System_Array_Resize<OVRPlugin_Quatf>__,local_60);
    local_70 = local_88;
  }
  local_38 = local_70;
  local_90 = local_70;
  if (local_70 != (Il2CppObject *)0x0) {
    local_98 = local_70;
    local_a0 = (HashSet_1_t7728EFA7297C4DCD03238E3251D0ACE444FD6C7A *)
               il2cpp_codegen_object_new(*(Il2CppClass **)Method_System_Array_GetValue__);
    HashSet_1__ctor_mCBAE373FB2CDDE221C881F00E106AB7F9DBC11E5
              (local_a0,local_98,*(MethodInfo **)Method_System_Array_CreateInstance__);
    NullCheck(local_a0);
    HashSet_1_GetEnumerator_mF00BB428515C3A62C6EB716A089B5B19AD098234
              (local_a0,*(MethodInfo **)Method_System_Array_CreateInstance__);
    uStack_b8 = uStack_d0;
    local_c0 = local_d8;
    local_b0 = local_c8;
    local_f0 = &local_50;
    uStack_48 = uStack_d0;
    local_50 = local_d8;
    local_40 = local_c8;
    il2cpp::utils::Finally<TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11::__1>
              ((utils *)&local_f0,extraout_x1);
    while (uVar1 = Enumerator_MoveNext_m2FAD64314E42C87F63DA89C50F63948A0B9D644A
                             ((Enumerator_t9919B2704FDC9E98AC2AB0671F2CDBCD9C34B996 *)&local_50,
                              *(MethodInfo **)Method_System_Array_CopyTo__), (uVar1 & 1) != 0) {
      local_58 = Enumerator_get_Current_m5F56F1F861E2DEF1CE2D1F4A128ED6CAC8E15013_inline
                           ((Enumerator_t9919B2704FDC9E98AC2AB0671F2CDBCD9C34B996 *)&local_50,
                            *(MethodInfo **)Method_System_Array_CreateInstance__);
      TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16(local_28,local_58,0);
    }
    il2cpp::utils::
    FinallyHelper<TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11::$_1,false>::
    ~FinallyHelper(aFStack_e8);
  }
  return;
}


