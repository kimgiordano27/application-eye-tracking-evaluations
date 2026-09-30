/*
FUNCTION_NAME: OVRPlugin_set_fixedFoveatedRenderingLevel_m7621A311282BD1D71AB6EB9BE3F2C65D96DFFC5F
ENTRY_POINT: 02db5600
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_foveation_hits_5;functionality_foveated_rendering
*/


void OVRPlugin_set_fixedFoveatedRenderingLevel_m7621A311282BD1D71AB6EB9BE3F2C65D96DFFC5F
               (undefined4 param_1)

{
  if ((OVRPlugin_set_fixedFoveatedRenderingLevel_m7621A311282BD1D71AB6EB9BE3F2C65D96DFFC5F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_fixedFoveatedRenderingLevel_m7621A311282BD1D71AB6EB9BE3F2C65D96DFFC5F::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_set_foveatedRenderingLevel_m8330487C9D755477E59CE553A086D94A071C0C54(param_1,0);
  return;
}


