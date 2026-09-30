/*
FUNCTION_NAME: OVRPlugin_SendVirtualKeyboardInput_m68694A0A4A269D6BB9E02E8B4D80ABF511367AE5
ENTRY_POINT: 02dbdb00
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
OVRPlugin_SendVirtualKeyboardInput_m68694A0A4A269D6BB9E02E8B4D80ABF511367AE5
          (void *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_a0 [48];
  undefined8 local_70;
  undefined1 auStack_68 [47];
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72
  ;
  local_28 = param_3;
  local_20 = param_2;
  if ((OVRPlugin_SendVirtualKeyboardInput_m68694A0A4A269D6BB9E02E8B4D80ABF511367AE5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SendVirtualKeyboardInput_m68694A0A4A269D6BB9E02E8B4D80ABF511367AE5::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_30 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_38 = *puVar2;
  local_39 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_30,local_38,0);
  local_39 = local_39 & 1;
  if (local_39 == 0) {
    local_14 = 0xfffffc14;
  }
  else {
    memcpy(auStack_68,param_1,0x28);
    local_70 = local_20;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    memcpy(auStack_a0,auStack_68,0x28);
    local_14 = OVRP_1_74_0_ovrp_SendVirtualKeyboardInput_m403FEB8C7C624FC9000CDF186E7C03E3C7599916
                         (auStack_a0,local_70,0);
  }
  return local_14;
}


