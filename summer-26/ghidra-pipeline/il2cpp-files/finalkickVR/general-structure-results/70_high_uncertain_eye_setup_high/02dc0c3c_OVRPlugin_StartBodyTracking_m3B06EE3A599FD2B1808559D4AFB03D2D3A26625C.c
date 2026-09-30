/*
FUNCTION_NAME: OVRPlugin_StartBodyTracking_m3B06EE3A599FD2B1808559D4AFB03D2D3A26625C
ENTRY_POINT: 02dc0c3c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool OVRPlugin_StartBodyTracking_m3B06EE3A599FD2B1808559D4AFB03D2D3A26625C(void)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool local_11;
  
  puVar1 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  if ((OVRPlugin_StartBodyTracking_m3B06EE3A599FD2B1808559D4AFB03D2D3A26625C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_StartBodyTracking_m3B06EE3A599FD2B1808559D4AFB03D2D3A26625C::s_Il2CppMethodInitialized
         = 1;
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
    iVar3 = OVRP_1_78_0_ovrp_StartBodyTracking_m02817F3EA9BA519B8AD9E49C7F288C7FB3E56810(0);
    local_11 = iVar3 == 0;
  }
  return local_11;
}


