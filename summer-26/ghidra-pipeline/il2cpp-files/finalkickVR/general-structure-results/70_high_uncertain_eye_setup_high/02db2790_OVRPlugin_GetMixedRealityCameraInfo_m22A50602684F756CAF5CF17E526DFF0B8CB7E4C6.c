/*
FUNCTION_NAME: OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6
ENTRY_POINT: 02db2790
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


bool OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6
               (undefined4 param_1,void *param_2,void *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool local_11;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_552B0C4E510BE0FD990E7741B090FB92F729FE203A47053A0FF5756237CFD616
  ;
  puVar1 = 
  Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
  ;
  if ((OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_initobj(param_2,0x38);
  il2cpp_codegen_initobj(param_3,0x30);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  if ((bVar3 & 1) == 0) {
    local_11 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = OVRP_1_15_0_ovrp_GetExternalCameraExtrinsics_mA800E8A78F390F4CC2E5D3BF5E2DA396D9518C55
                      (param_1,param_2,0);
    local_11 = iVar4 == 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = OVRP_1_15_0_ovrp_GetExternalCameraIntrinsics_mB291B3A5B2D704241198D8AFAF9E42B1E7413228
                      (param_1,param_3,0);
    if (iVar4 != 0) {
      local_11 = false;
    }
  }
  return local_11;
}


