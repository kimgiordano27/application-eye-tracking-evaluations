/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$.ctor
ENTRY_POINT: 02db5aac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_foveation_hits_1;functionality_foveated_rendering
*/


void OVR_OpenVR_CVROverlay___ctor(undefined4 param_1)

{
  if ((OVRPlugin_set_tiledMultiResLevel_mF23599F1A1CE3E784EDB4D2224805E991FBEA65E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_tiledMultiResLevel_mF23599F1A1CE3E784EDB4D2224805E991FBEA65E::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_set_foveatedRenderingLevel_m8330487C9D755477E59CE553A086D94A071C0C54(param_1,0);
  return;
}


