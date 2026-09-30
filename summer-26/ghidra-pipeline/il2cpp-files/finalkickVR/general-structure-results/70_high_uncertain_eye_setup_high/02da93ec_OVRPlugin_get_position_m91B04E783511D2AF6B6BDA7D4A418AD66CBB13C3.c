/*
FUNCTION_NAME: OVRPlugin_get_position_m91B04E783511D2AF6B6BDA7D4A418AD66CBB13C3
ENTRY_POINT: 02da93ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool OVRPlugin_get_position_m91B04E783511D2AF6B6BDA7D4A418AD66CBB13C3(void)

{
  byte bVar1;
  int iVar2;
  bool local_11;
  
  if ((OVRPlugin_get_position_m91B04E783511D2AF6B6BDA7D4A418AD66CBB13C3::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_position_m91B04E783511D2AF6B6BDA7D4A418AD66CBB13C3::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  if ((bVar1 & 1) == 0) {
    local_11 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    iVar2 = OVRP_1_1_0_ovrp_GetTrackingPositionEnabled_m4BA824BC01E6495E4AC588124155372CAFAFAAF4(0);
    local_11 = iVar2 == 1;
  }
  return local_11;
}


