/*
FUNCTION_NAME: OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05
ENTRY_POINT: 02db7f68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_15;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


bool OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05(undefined8 param_1)

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
  Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
  local_20 = param_1;
  if ((OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05::
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
    iVar3 = OVRP_1_44_0_ovrp_GetHandTrackingEnabled_mBEEA1EEDBC3FA02914EF6204A1BB8992A25D6530
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


