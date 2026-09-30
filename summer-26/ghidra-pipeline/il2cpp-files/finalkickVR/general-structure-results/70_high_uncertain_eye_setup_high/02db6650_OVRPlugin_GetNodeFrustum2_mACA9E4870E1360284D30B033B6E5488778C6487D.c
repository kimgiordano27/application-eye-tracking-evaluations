/*
FUNCTION_NAME: OVRPlugin_GetNodeFrustum2_mACA9E4870E1360284D30B033B6E5488778C6487D
ENTRY_POINT: 02db6650
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


undefined1
OVRPlugin_GetNodeFrustum2_mACA9E4870E1360284D30B033B6E5488778C6487D
          (undefined4 param_1,void *param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
  ;
  if ((OVRPlugin_GetNodeFrustum2_mACA9E4870E1360284D30B033B6E5488778C6487D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetNodeFrustum2_mACA9E4870E1360284D30B033B6E5488778C6487D::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_initobj(param_2,0x18);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_15_0_ovrp_GetNodeFrustum2_m3B176797E52C4235C784B8BC76E6653FAC7A9C9A
                      (param_1,param_2,0);
    if (iVar3 == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  return local_11;
}


