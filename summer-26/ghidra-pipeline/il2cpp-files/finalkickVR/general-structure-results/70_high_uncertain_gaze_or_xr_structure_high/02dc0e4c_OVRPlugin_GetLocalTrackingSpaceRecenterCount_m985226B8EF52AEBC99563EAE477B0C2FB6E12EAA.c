/*
FUNCTION_NAME: OVRPlugin_GetLocalTrackingSpaceRecenterCount_m985226B8EF52AEBC99563EAE477B0C2FB6E12EAA
ENTRY_POINT: 02dc0e4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_gaze_retrieval_or_extraction
*/


undefined4
OVRPlugin_GetLocalTrackingSpaceRecenterCount_m985226B8EF52AEBC99563EAE477B0C2FB6E12EAA
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
  Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
  local_20 = param_1;
  if ((OVRPlugin_GetLocalTrackingSpaceRecenterCount_m985226B8EF52AEBC99563EAE477B0C2FB6E12EAA::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetLocalTrackingSpaceRecenterCount_m985226B8EF52AEBC99563EAE477B0C2FB6E12EAA::
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
    local_14 = 0;
  }
  else {
    local_24 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_44_0_ovrp_GetLocalTrackingSpaceRecenterCount_m1135C34B2108953DE5CE78920E91AF368FFF65BB
                      (&local_24,0);
    if (iVar3 == 0) {
      local_14 = local_24;
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}


