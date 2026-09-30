/*
FUNCTION_NAME: OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93
ENTRY_POINT: 02db75d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8
OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93
          (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_38;
  float local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_7F8D2CDC05A783F07FBA7F0747B676211007C66EE68019B05AC0DEA0CA6231C9
  ;
  local_28 = param_2;
  local_1c = param_1;
  if ((OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93::
    s_Il2CppMethodInitialized = 1;
  }
  local_2c = 0.0;
  local_38 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  uVar2 = local_1c;
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_initobj(&local_38,8);
    local_18 = local_38;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = OVRP_1_30_0_ovrp_GetPerfMetricsFloat_m0B7E9D2C4A6215A8AB59F691FC6E3A9BE16F80B0
                      (uVar2,&local_2c,0);
    if (iVar4 == 0) {
      local_18 = 0;
      Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420
                ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_18,local_2c,
                 *(MethodInfo **)Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
    }
    else {
      il2cpp_codegen_initobj(&local_38,8);
      local_18 = local_38;
    }
  }
  return local_18;
}


