/*
FUNCTION_NAME: OVRPlugin_GetControllerIsInHand_mC53D39C08907EEE317F50430FD28E615AED06A43
ENTRY_POINT: 02daf394
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
OVRPlugin_GetControllerIsInHand_mC53D39C08907EEE317F50430FD28E615AED06A43
          (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_73AFC669CF02B688881E9C200412901FB5897CB8998E93C20236DABC0F9CC5CA
  ;
  local_28 = param_3;
  local_1c = param_2;
  local_18 = param_1;
  if ((OVRPlugin_GetControllerIsInHand_mC53D39C08907EEE317F50430FD28E615AED06A43::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_73AFC669CF02B688881E9C200412901FB5897CB8998E93C20236DABC0F9CC5CA
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetControllerIsInHand_mC53D39C08907EEE317F50430FD28E615AED06A43::
    s_Il2CppMethodInitialized = 1;
  }
  local_2c = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  uVar3 = local_18;
  uVar2 = local_1c;
  if ((bVar4 & 1) == 0) {
    local_11 = 1;
  }
  else {
    local_2c = 1;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar5 = OVRP_1_86_0_ovrp_GetControllerIsInHand_mAB45DF5926B18579ABE8F43EE80D5BC9497C8B3D
                      (uVar3,uVar2,&local_2c,0);
    if ((iVar5 == 0) && (local_2c == 0)) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  return local_11;
}


