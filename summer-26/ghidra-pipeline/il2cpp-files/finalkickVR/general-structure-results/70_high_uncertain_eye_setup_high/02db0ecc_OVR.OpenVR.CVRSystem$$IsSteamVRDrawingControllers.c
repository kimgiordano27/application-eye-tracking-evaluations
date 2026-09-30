/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$IsSteamVRDrawingControllers
ENTRY_POINT: 02db0ecc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_CVRSystem__IsSteamVRDrawingControllers
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
  ;
  local_20 = param_4;
  local_18 = param_3;
  local_14 = param_2;
  if ((OVRPlugin_TestBoundaryNode_mA69B94641CE0ED776B3C41B3AC2B5F31ACF53CE6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_TestBoundaryNode_mA69B94641CE0ED776B3C41B3AC2B5F31ACF53CE6::s_Il2CppMethodInitialized
         = 1;
  }
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  local_30 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_48 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_50 = *puVar2;
  local_51 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_48,local_50,0);
  local_51 = local_51 & 1;
  if (local_51 == 0) {
    il2cpp_codegen_initobj(&local_40,0x20);
    param_1[1] = uStack_38;
    *param_1 = local_40;
    param_1[3] = uStack_28;
    param_1[2] = local_30;
  }
  else {
    local_58 = local_14;
    local_5c = local_18;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRP_1_8_0_ovrp_TestBoundaryNode_m15EA26FA5674AEF917A3F2380CF8EDC37A5EB0B1
              (&local_7c,local_58,local_5c,0);
    param_1[1] = uStack_74;
    *param_1 = local_7c;
    param_1[3] = uStack_64;
    param_1[2] = local_6c;
  }
  return;
}


