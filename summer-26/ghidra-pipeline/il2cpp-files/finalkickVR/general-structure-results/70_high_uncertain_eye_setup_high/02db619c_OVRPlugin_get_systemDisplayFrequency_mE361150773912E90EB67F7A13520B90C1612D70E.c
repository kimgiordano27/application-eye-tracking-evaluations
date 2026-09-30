/*
FUNCTION_NAME: OVRPlugin_get_systemDisplayFrequency_mE361150773912E90EB67F7A13520B90C1612D70E
ENTRY_POINT: 02db619c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined4
OVRPlugin_get_systemDisplayFrequency_mE361150773912E90EB67F7A13520B90C1612D70E(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
  ;
  puVar2 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
                    /* try { // try from 02db61a4 to 02eb6257 has its CatchHandler @ 02db628c */
  local_20 = param_1;
  if ((OVRPlugin_get_systemDisplayFrequency_mE361150773912E90EB67F7A13520B90C1612D70E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_get_systemDisplayFrequency_mE361150773912E90EB67F7A13520B90C1612D70E::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  if ((bVar4 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0)
    ;
    if ((bVar4 & 1) == 0) {
      local_14 = 0;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_14 = OVRP_1_1_0_ovrp_GetSystemDisplayFrequency_m683D288B3E9A54A6C660310218DB16366CB3B2B3
                           (0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    iVar5 = OVRP_1_21_0_ovrp_GetSystemDisplayFrequency2_m559AA33BED026425684B1F5962D34EA783EE6770
                      (&local_24,0);
    if (iVar5 == 0) {
      local_14 = local_24;
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}


