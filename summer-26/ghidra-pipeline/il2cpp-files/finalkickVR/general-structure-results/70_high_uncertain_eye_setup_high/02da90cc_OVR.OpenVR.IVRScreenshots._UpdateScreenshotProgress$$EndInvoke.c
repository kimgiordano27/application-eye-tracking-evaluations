/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._UpdateScreenshotProgress$$EndInvoke
ENTRY_POINT: 02da90cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress__EndInvoke(void)

{
  int iVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  OVRPlugin_get_monoscopic_m1FB2A64C1DF99193B13E940E9DEDE96C3A9ABF64::s_Il2CppMethodInitialized = 1;
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
    iVar1 = OVRP_1_1_0_ovrp_GetAppMonoscopic_m0CD858529A993D1857B733F0D496B3AE0641B0D5(0);
    *(bool *)(unaff_x29 + -1) = iVar1 == 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


