/*
FUNCTION_NAME: OVRPlugin_GetAppPerfStats_m6EFAAA8BDE8A02239502B151F481D813C73380E9
ENTRY_POINT: 02db13d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_GetAppPerfStats_m6EFAAA8BDE8A02239502B151F481D813C73380E9
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  byte local_35;
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_908D334519CD2058BD63EE5799AB533DCB4822C6671010C02AFA8C8F673DD8AF
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_18 = param_2;
  if ((OVRPlugin_GetAppPerfStats_m6EFAAA8BDE8A02239502B151F481D813C73380E9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_95935D91C1BC600A439AE06A1AADF71B12CC7F7B0B5504C6B727F0A32BADA6F5
              );
    OVRPlugin_GetAppPerfStats_m6EFAAA8BDE8A02239502B151F481D813C73380E9::s_Il2CppMethodInitialized =
         1;
  }
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_34 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if (local_34 == 3) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_35 = *(byte *)(lVar3 + 0x68) & 1;
    if (local_35 == 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Field_<PrivateImplementationDetails>_95935D91C1BC600A439AE06A1AADF71B12CC7F7B0B5504C6B727F0A32BADA6F5
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      *(undefined1 *)(lVar3 + 0x68) = 1;
    }
    il2cpp_codegen_initobj(&local_30,0x18);
    param_1[1] = uStack_28;
    *param_1 = local_30;
    param_1[2] = local_20;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_40 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_48 = *puVar4;
    local_49 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                         (local_40,local_48,0);
    local_49 = local_49 & 1;
    if (local_49 == 0) {
      il2cpp_codegen_initobj(&local_30,0x18);
      param_1[1] = uStack_28;
      *param_1 = local_30;
      param_1[2] = local_20;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      OVRP_1_9_0_ovrp_GetAppPerfStats_m95CEE562ED0E9D2F2B10600C9FFA57979D021973(&local_68,0);
      param_1[1] = uStack_60;
      *param_1 = local_68;
      param_1[2] = local_58;
    }
  }
  return;
}


