/*
FUNCTION_NAME: OVRPlugin_SetInsightPassthroughKeyboardHandsIntensity_mBCD38A3B8B0B71126F1EEE96EAF5A90EA3FA3938
ENTRY_POINT: 02db40ec
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
OVRPlugin_SetInsightPassthroughKeyboardHandsIntensity_mBCD38A3B8B0B71126F1EEE96EAF5A90EA3FA3938
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_B3D3D4A10F76661CE83041738FC598097C7B3E13EC83565F57291BBA1647DE37
  ;
  if ((OVRPlugin_SetInsightPassthroughKeyboardHandsIntensity_mBCD38A3B8B0B71126F1EEE96EAF5A90EA3FA3938
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_B3D3D4A10F76661CE83041738FC598097C7B3E13EC83565F57291BBA1647DE37
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SetInsightPassthroughKeyboardHandsIntensity_mBCD38A3B8B0B71126F1EEE96EAF5A90EA3FA3938
    ::s_Il2CppMethodInitialized = 1;
  }
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
    iVar3 = OVRP_1_68_0_ovrp_SetInsightPassthroughKeyboardHandsIntensity_mB2C2DA3DCCF4BE268DB580D94FE7C3B24C9FBBC6
                      (param_1,param_2,param_3,0);
    if (iVar3 == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  return local_11;
}


