/*
FUNCTION_NAME: OVRPlugin_get_suggestedCpuPerfLevel_m9499E63FC5C08EF4D1F38C494088FD3ADFAAFF9D
ENTRY_POINT: 02dab444
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


undefined4
OVRPlugin_get_suggestedCpuPerfLevel_m9499E63FC5C08EF4D1F38C494088FD3ADFAAFF9D(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_24;
  undefined8 local_20;
  
  puVar1 = 
  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_<WithUsages>b__14_0__
  ;
  local_20 = param_1;
  if ((OVRPlugin_get_suggestedCpuPerfLevel_m9499E63FC5C08EF4D1F38C494088FD3ADFAAFF9D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_<WithUsages>b__14_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_suggestedCpuPerfLevel_m9499E63FC5C08EF4D1F38C494088FD3ADFAAFF9D::
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
    iVar3 = OVRP_1_71_0_ovrp_GetSuggestedCpuPerformanceLevel_m0D4BC57B398B5EC5B3A80436F8C2B0509C39CEC1
                      (&local_24,0);
    if (iVar3 == 0) {
      return local_24;
    }
  }
  return 2;
}


