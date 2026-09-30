/*
FUNCTION_NAME: OVRPlugin_GetDominantHand_m28AFC594B67C692D753781414C50839D323EAEBC
ENTRY_POINT: 02db6dc0
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


undefined4 OVRPlugin_GetDominantHand_m28AFC594B67C692D753781414C50839D323EAEBC(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_24;
  undefined8 local_20;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_3C2FB94F596BCF0F01FCC2342AD69E9889FAEABE83E1A47DCFE248CE54CAE0ED
  ;
  local_20 = param_1;
  if ((OVRPlugin_GetDominantHand_m28AFC594B67C692D753781414C50839D323EAEBC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_3C2FB94F596BCF0F01FCC2342AD69E9889FAEABE83E1A47DCFE248CE54CAE0ED
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetDominantHand_m28AFC594B67C692D753781414C50839D323EAEBC::s_Il2CppMethodInitialized =
         1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar2 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_28_0_ovrp_GetDominantHand_mBF97D609C7A2CD623960640D2B2A4A9E470B8313(&local_24,0);
    if (iVar3 == 0) {
      return local_24;
    }
  }
  return 0;
}


