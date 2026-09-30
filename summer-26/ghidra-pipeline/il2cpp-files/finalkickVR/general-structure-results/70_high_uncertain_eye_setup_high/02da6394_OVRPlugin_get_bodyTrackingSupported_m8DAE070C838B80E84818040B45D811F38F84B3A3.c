/*
FUNCTION_NAME: OVRPlugin_get_bodyTrackingSupported_m8DAE070C838B80E84818040B45D811F38F84B3A3
ENTRY_POINT: 02da6394
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_15;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool OVRPlugin_get_bodyTrackingSupported_m8DAE070C838B80E84818040B45D811F38F84B3A3
               (undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int local_24;
  undefined8 local_20;
  
  puVar1 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  local_20 = param_1;
  if ((OVRPlugin_get_bodyTrackingSupported_m8DAE070C838B80E84818040B45D811F38F84B3A3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_bodyTrackingSupported_m8DAE070C838B80E84818040B45D811F38F84B3A3::
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
  if ((bVar2 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_78_0_ovrp_GetBodyTrackingSupported_m448B4106BAAECB841FDDED56D242AA43DD57AD87
                      (&local_24,0);
    if (iVar3 == 0) {
      return local_24 == 1;
    }
  }
  return false;
}


