/*
FUNCTION_NAME: OVRPlugin_GetControllerState2_mF786249CBA5D0B982D07F2166DCF1DA9573B5E90
ENTRY_POINT: 02dafa48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_11;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_GetControllerState2_mF786249CBA5D0B982D07F2166DCF1DA9573B5E90
               (void *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_11c [48];
  undefined1 auStack_ec [48];
  undefined1 auStack_bc [48];
  undefined4 local_8c;
  undefined1 auStack_88 [64];
  undefined4 local_48;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_0F8A0D284F9079371DD7C0D2AD8115E2AB73E85DA6FBA43AF9D0FBBFE34AADB9
  ;
  local_24 = param_2;
  local_30 = param_3;
  if ((OVRPlugin_GetControllerState2_mF786249CBA5D0B982D07F2166DCF1DA9573B5E90::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_0F8A0D284F9079371DD7C0D2AD8115E2AB73E85DA6FBA43AF9D0FBBFE34AADB9
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetControllerState2_mF786249CBA5D0B982D07F2166DCF1DA9573B5E90::
    s_Il2CppMethodInitialized = 1;
  }
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
    local_8c = local_24;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    OVRP_1_1_0_ovrp_GetControllerState_m87FCF33583901F1E46033F0E8E03F947DD615D57(local_8c);
    memcpy(auStack_bc,auStack_ec,0x30);
    memset(param_1,0,0x40);
    memcpy(auStack_11c,auStack_bc,0x30);
    ControllerState2__ctor_mF402C28BA512FA2F2CCDA2F382DE0EF49B4698DA(param_1,auStack_11c,0);
  }
  else {
    local_48 = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRP_1_12_0_ovrp_GetControllerState2_mAF8D13828721E612D22DE5EC2CDF5DA41CADA23C(local_48,0);
    memcpy(param_1,auStack_88,0x40);
  }
  return;
}


