/*
FUNCTION_NAME: Options_TryQuerySpaces_mC7BC25F63C67DCA8FD25772FCA7C232D637AA484
ENTRY_POINT: 02e01558
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte Options_TryQuerySpaces_mC7BC25F63C67DCA8FD25772FCA7C232D637AA484
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  undefined1 auStack_110 [71];
  byte local_c9;
  undefined8 local_c8;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [70];
  byte local_3a;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
  ;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((Options_TryQuerySpaces_mC7BC25F63C67DCA8FD25772FCA7C232D637AA484::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__);
    Options_TryQuerySpaces_mC7BC25F63C67DCA8FD25772FCA7C232D637AA484::s_Il2CppMethodInitialized = 1;
  }
  local_39 = 0;
  local_3a = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__);
  Options_ToQueryInfo_mF4763B5E0080C2C5439F038424B535C38BA4DFEE(local_28);
  memcpy(auStack_80,auStack_c0,0x40);
  local_c8 = local_30;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  memcpy(auStack_110,auStack_80,0x40);
  local_c9 = OVRPlugin_QuerySpaces_m3DF782A5086FFA9842F03A455BB969848CBF2560(auStack_110,local_c8,0)
  ;
  local_c9 = local_c9 & 1;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  pIVar3 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
  iVar2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(local_30,0);
  NullCheck(pIVar3);
  VirtualActionInvoker3<int,int,long>::Invoke(4,pIVar3,0x9b810ce,iVar2,-1);
  local_3a = local_c9;
  if ((local_c9 & 1) == 0) {
    local_3a = local_c9 & 1;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pIVar3 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1();
    iVar2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(local_30,0);
    NullCheck(pIVar3);
    VirtualActionInvoker4<int,short,int,long>::Invoke(7,pIVar3,0x9b810ce,3,iVar2,-1);
  }
  local_39 = local_3a & 1;
  return local_39;
}


