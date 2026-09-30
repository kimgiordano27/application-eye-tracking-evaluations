/*
FUNCTION_NAME: OVRPlugin_GetBoundaryGeometry_mC63FA471B107D38D532DEB22EAD559551EE565B6
ENTRY_POINT: 02db1164
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


void OVRPlugin_GetBoundaryGeometry_mC63FA471B107D38D532DEB22EAD559551EE565B6
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
  ;
  local_20 = param_3;
  local_14 = param_2;
  if ((OVRPlugin_GetBoundaryGeometry_mC63FA471B107D38D532DEB22EAD559551EE565B6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetBoundaryGeometry_mC63FA471B107D38D532DEB22EAD559551EE565B6::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_40 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_48 = *puVar2;
  local_49 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_40,local_48,0);
  local_49 = local_49 & 1;
  if (local_49 == 0) {
    il2cpp_codegen_initobj(&local_38,0x18);
    param_1[1] = uStack_30;
    *param_1 = local_38;
    param_1[2] = local_28;
  }
  else {
    local_50 = local_14;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRP_1_8_0_ovrp_GetBoundaryGeometry_m5F7B55C67FE61B4ECCA8C209E6086FC1051D9A11
              (&local_68,local_50,0);
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[2] = local_58;
  }
  return;
}


