/*
FUNCTION_NAME: OVR.OpenVR.IVRResources._LoadSharedResource$$EndInvoke
ENTRY_POINT: 02da98f4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVRResources__LoadSharedResource__EndInvoke(void)

{
  int iVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  OVRPlugin_get_positionTracked_m2CDA85E3B5D4C1672B87AA635F1A659E9B2BDB71::s_Il2CppMethodInitialized
       = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bStack000000000000000f = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    iVar1 = OVRP_1_1_0_ovrp_GetNodePositionTracked_m9FA9814BFF1D0FBB3A21C88222CDD0029F408381(2,0);
    *(bool *)(unaff_x29 + -1) = iVar1 == 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


