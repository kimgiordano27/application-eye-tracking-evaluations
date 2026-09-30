/*
FUNCTION_NAME: OVRManager_set_useDynamicFixedFoveatedRendering_m2BBB38EA8596D5006096F25E2EDE0465713D9CEA
ENTRY_POINT: 02d82408
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


void OVRManager_set_useDynamicFixedFoveatedRendering_m2BBB38EA8596D5006096F25E2EDE0465713D9CEA
               (byte param_1)

{
  if ((OVRManager_set_useDynamicFixedFoveatedRendering_m2BBB38EA8596D5006096F25E2EDE0465713D9CEA::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_useDynamicFixedFoveatedRendering_m2BBB38EA8596D5006096F25E2EDE0465713D9CEA::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_set_useDynamicFixedFoveatedRendering_m0AA5406E21978CDD460C239831981EF6A21DCC09
            (param_1 & 1,0);
  return;
}


