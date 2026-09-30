/*
FUNCTION_NAME: OVRPlugin_GetPerfMetricsInt_m2041024026E708EEEAC78795E45C2D747F26DC7C
ENTRY_POINT: 02db7734
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
OVRPlugin_GetPerfMetricsInt_m2041024026E708EEEAC78795E45C2D747F26DC7C
          (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_7F8D2CDC05A783F07FBA7F0747B676211007C66EE68019B05AC0DEA0CA6231C9
  ;
  local_28 = param_2;
  local_1c = param_1;
  if ((OVRPlugin_GetPerfMetricsInt_m2041024026E708EEEAC78795E45C2D747F26DC7C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<InputActionMap>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetPerfMetricsInt_m2041024026E708EEEAC78795E45C2D747F26DC7C::s_Il2CppMethodInitialized
         = 1;
  }
  local_2c = 0;
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
    iVar4 = OVRP_1_30_0_ovrp_GetPerfMetricsInt_m5E5C9DC918FC4083E8397C5BDC1F5621E4BAE323
                      (uVar2,&local_2c,0);
    if (iVar4 == 0) {
      local_18 = 0;
      Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703
                ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_18,local_2c,
                 *(MethodInfo **)Method_System_Collections_Generic_List<InputActionMap>_get_Item__);
    }
    else {
      il2cpp_codegen_initobj(&local_38,8);
      local_18 = local_38;
    }
  }
  return local_18;
}


