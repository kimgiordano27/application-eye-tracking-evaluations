/*
FUNCTION_NAME: OVRPlugin_CreateVirtualKeyboardSpace_m16BEA48C1D88C8F097AD290FC51721CE7BDBFB20
ENTRY_POINT: 02dbdd24
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
OVRPlugin_CreateVirtualKeyboardSpace_m16BEA48C1D88C8F097AD290FC51721CE7BDBFB20
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined4 local_14;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72
  ;
  local_28 = param_3;
  local_20 = param_2;
  if ((OVRPlugin_CreateVirtualKeyboardSpace_m16BEA48C1D88C8F097AD290FC51721CE7BDBFB20::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_CreateVirtualKeyboardSpace_m16BEA48C1D88C8F097AD290FC51721CE7BDBFB20::
    s_Il2CppMethodInitialized = 1;
  }
  local_30 = local_20;
  *local_20 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_38 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_40 = *puVar2;
  local_41 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_38,local_40,0);
  local_41 = local_41 & 1;
  if (local_41 == 0) {
    local_14 = 0xfffffc14;
  }
  else {
    uStack_68 = param_1[1];
    local_70 = *param_1;
    uStack_58 = param_1[3];
    local_60 = param_1[2];
    local_78 = local_20;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uStack_98 = uStack_68;
    local_a0 = local_70;
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_14 = OVRP_1_74_0_ovrp_CreateVirtualKeyboardSpace_m5C54BE01DE9DF3DD0393C4E7738DD7BB85B82B76
                         (&local_a0,local_78,0);
  }
  return local_14;
}


