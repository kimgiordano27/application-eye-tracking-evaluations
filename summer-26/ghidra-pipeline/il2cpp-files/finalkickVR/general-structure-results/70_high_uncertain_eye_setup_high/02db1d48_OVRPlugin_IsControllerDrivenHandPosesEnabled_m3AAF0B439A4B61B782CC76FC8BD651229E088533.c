/*
FUNCTION_NAME: OVRPlugin_IsControllerDrivenHandPosesEnabled_m3AAF0B439A4B61B782CC76FC8BD651229E088533
ENTRY_POINT: 02db1d48
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


bool OVRPlugin_IsControllerDrivenHandPosesEnabled_m3AAF0B439A4B61B782CC76FC8BD651229E088533
               (undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int local_24;
  undefined8 local_20;
  bool local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_73AFC669CF02B688881E9C200412901FB5897CB8998E93C20236DABC0F9CC5CA
  ;
  local_20 = param_1;
  if ((OVRPlugin_IsControllerDrivenHandPosesEnabled_m3AAF0B439A4B61B782CC76FC8BD651229E088533::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_73AFC669CF02B688881E9C200412901FB5897CB8998E93C20236DABC0F9CC5CA
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_IsControllerDrivenHandPosesEnabled_m3AAF0B439A4B61B782CC76FC8BD651229E088533::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar2 & 1) == 0) {
    local_11 = false;
  }
  else {
    local_24 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_86_0_ovrp_IsControllerDrivenHandPosesEnabled_m5C879A07DF58DA30CAA7907B052FB331C9BDF7C3
                      (&local_24,0);
    if (iVar3 == 0) {
      local_11 = local_24 == 1;
    }
    else {
      local_11 = false;
    }
  }
  return local_11;
}


