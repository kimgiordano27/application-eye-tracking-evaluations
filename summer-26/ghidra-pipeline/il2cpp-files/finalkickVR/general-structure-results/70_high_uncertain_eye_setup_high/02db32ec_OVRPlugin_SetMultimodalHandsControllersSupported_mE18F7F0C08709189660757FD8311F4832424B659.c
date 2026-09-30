/*
FUNCTION_NAME: OVRPlugin_SetMultimodalHandsControllersSupported_mE18F7F0C08709189660757FD8311F4832424B659
ENTRY_POINT: 02db32ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_11;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined1
OVRPlugin_SetMultimodalHandsControllersSupported_mE18F7F0C08709189660757FD8311F4832424B659
          (byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 local_11;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_73AFC669CF02B688881E9C200412901FB5897CB8998E93C20236DABC0F9CC5CA
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRPlugin_SetMultimodalHandsControllersSupported_mE18F7F0C08709189660757FD8311F4832424B659::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_73AFC669CF02B688881E9C200412901FB5897CB8998E93C20236DABC0F9CC5CA
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_SetMultimodalHandsControllersSupported_mE18F7F0C08709189660757FD8311F4832424B659::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  if ((bVar3 & 1) == 0) {
    local_11 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar4 = OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0(param_1 & 1);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar5 = OVRP_1_86_0_ovrp_SetMultimodalHandsControllersSupported_m14945B27778A2E249554936760709D78A72886FA
                      (uVar4,0);
    if (iVar5 == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  return local_11;
}


