/*
FUNCTION_NAME: OVRPlugin_SuggestVirtualKeyboardLocation_mAE49FDC9E945E572C3B38D99248C55872BCDEF54
ENTRY_POINT: 02dbde58
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
OVRPlugin_SuggestVirtualKeyboardLocation_mAE49FDC9E945E572C3B38D99248C55872BCDEF54
          (void *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [39];
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72
  ;
  local_20 = param_2;
  if ((OVRPlugin_SuggestVirtualKeyboardLocation_mAE49FDC9E945E572C3B38D99248C55872BCDEF54::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SuggestVirtualKeyboardLocation_mAE49FDC9E945E572C3B38D99248C55872BCDEF54::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_28 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_30 = *puVar2;
  local_31 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_28,local_30,0);
  local_31 = local_31 & 1;
  if (local_31 == 0) {
    local_14 = 0xfffffc14;
  }
  else {
    memcpy(auStack_58,param_1,0x24);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    memcpy(auStack_80,auStack_58,0x24);
    local_14 = OVRP_1_74_0_ovrp_SuggestVirtualKeyboardLocation_m9054A6E540FCFC23DA3AEB6C61C57A1E279F6F0D
                         (auStack_80,0);
  }
  return local_14;
}


