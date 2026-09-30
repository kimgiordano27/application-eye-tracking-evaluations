/*
FUNCTION_NAME: OVRPlugin_IsPerfMetricsSupported_m7DCE58992D7B5C198BC293FFEEFF1137F8BE728E
ENTRY_POINT: 02db7494
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool OVRPlugin_IsPerfMetricsSupported_m7DCE58992D7B5C198BC293FFEEFF1137F8BE728E
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int local_24;
  undefined8 local_20;
  undefined4 local_18;
  bool local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_7F8D2CDC05A783F07FBA7F0747B676211007C66EE68019B05AC0DEA0CA6231C9
  ;
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRPlugin_IsPerfMetricsSupported_m7DCE58992D7B5C198BC293FFEEFF1137F8BE728E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_7F8D2CDC05A783F07FBA7F0747B676211007C66EE68019B05AC0DEA0CA6231C9
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_IsPerfMetricsSupported_m7DCE58992D7B5C198BC293FFEEFF1137F8BE728E::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  uVar2 = local_18;
  if ((bVar3 & 1) == 0) {
    local_11 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = OVRP_1_30_0_ovrp_IsPerfMetricsSupported_m525BD8F3F3C8623FDF17FBFCF0155675DDF875FC
                      (uVar2,&local_24,0);
    if (iVar4 == 0) {
      local_11 = local_24 == 1;
    }
    else {
      local_11 = false;
    }
  }
  return local_11;
}


