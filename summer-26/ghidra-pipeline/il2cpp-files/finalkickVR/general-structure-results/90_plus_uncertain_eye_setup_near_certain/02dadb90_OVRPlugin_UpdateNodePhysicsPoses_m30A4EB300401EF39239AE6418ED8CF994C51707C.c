/*
FUNCTION_NAME: OVRPlugin_UpdateNodePhysicsPoses_m30A4EB300401EF39239AE6418ED8CF994C51707C
ENTRY_POINT: 02dadb90
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool OVRPlugin_UpdateNodePhysicsPoses_m30A4EB300401EF39239AE6418ED8CF994C51707C
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
  ;
  if ((OVRPlugin_UpdateNodePhysicsPoses_m30A4EB300401EF39239AE6418ED8CF994C51707C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_UpdateNodePhysicsPoses_m30A4EB300401EF39239AE6418ED8CF994C51707C::
    s_Il2CppMethodInitialized = 1;
  }
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
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_8_0_ovrp_Update2_m6756CC495662B84A6D60AA8642F74AE33E960C34(param_1,0,param_2,0);
    local_11 = iVar3 == 1;
  }
  return local_11;
}


