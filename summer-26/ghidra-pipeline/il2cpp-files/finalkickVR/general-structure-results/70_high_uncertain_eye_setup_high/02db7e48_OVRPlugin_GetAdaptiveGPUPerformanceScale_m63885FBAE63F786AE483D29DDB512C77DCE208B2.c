/*
FUNCTION_NAME: OVRPlugin_GetAdaptiveGPUPerformanceScale_m63885FBAE63F786AE483D29DDB512C77DCE208B2
ENTRY_POINT: 02db7e48
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


undefined4
OVRPlugin_GetAdaptiveGPUPerformanceScale_m63885FBAE63F786AE483D29DDB512C77DCE208B2
          (undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_EE82535FF25FB1E26FA74B5F2151F0F8EB0682F902A7C9B1140B7B204DBF349D
  ;
  local_20 = param_1;
  if ((OVRPlugin_GetAdaptiveGPUPerformanceScale_m63885FBAE63F786AE483D29DDB512C77DCE208B2::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_EE82535FF25FB1E26FA74B5F2151F0F8EB0682F902A7C9B1140B7B204DBF349D
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetAdaptiveGPUPerformanceScale_m63885FBAE63F786AE483D29DDB512C77DCE208B2::
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
    local_14 = 0x3f800000;
  }
  else {
    local_24 = 0x3f800000;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_42_0_ovrp_GetAdaptiveGpuPerformanceScale2_m68CA6CD3DF3EAC42AE43A105D776793B95C6FE59
                      (&local_24,0);
    if (iVar3 == 0) {
      local_14 = local_24;
    }
    else {
      local_14 = 0x3f800000;
    }
  }
  return local_14;
}


