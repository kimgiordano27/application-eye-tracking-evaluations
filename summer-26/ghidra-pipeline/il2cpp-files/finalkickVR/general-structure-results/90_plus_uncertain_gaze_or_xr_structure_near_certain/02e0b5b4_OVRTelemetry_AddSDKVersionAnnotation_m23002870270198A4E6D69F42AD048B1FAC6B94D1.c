/*
FUNCTION_NAME: OVRTelemetry_AddSDKVersionAnnotation_m23002870270198A4E6D69F42AD048B1FAC6B94D1
ENTRY_POINT: 02e0b5b4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_7
*/


void OVRTelemetry_AddSDKVersionAnnotation_m23002870270198A4E6D69F42AD048B1FAC6B94D1
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  void *local_38;
  Il2CppObject *local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
  ;
  local_18 = param_3;
  if ((OVRTelemetry_AddSDKVersionAnnotation_m23002870270198A4E6D69F42AD048B1FAC6B94D1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_211);
    OVRTelemetry_AddSDKVersionAnnotation_m23002870270198A4E6D69F42AD048B1FAC6B94D1::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_20 = *(undefined8 *)(lVar3 + 0x10);
  local_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(local_20,0);
  local_21 = local_21 & 1;
  if (local_21 != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_30 = (Il2CppObject *)OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
    NullCheck(local_30);
    local_38 = (void *)VirtualFuncInvoker0<String_t*>::Invoke(3,local_30);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pvVar2 = local_38;
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(void **)(lVar3 + 0x10) = pvVar2;
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x10),local_38);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_40 = *(undefined8 *)(lVar3 + 0x10);
  OVRTelemetryMarker_AddAnnotation_mE6F17914B4251FF7B6494169D68E9D5FEBAA927D
            (&local_58,param_2,*(undefined8 *)StringLiteral_211,local_40,0);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[2] = local_48;
  return;
}


