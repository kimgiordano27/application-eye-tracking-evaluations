/*
FUNCTION_NAME: OVRManager_get_useDynamicFoveatedRendering_m18349DF2686AD7CD1FA5A01783CED4AECBDB896A
ENTRY_POINT: 02d822b8
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


byte OVRManager_get_useDynamicFoveatedRendering_m18349DF2686AD7CD1FA5A01783CED4AECBDB896A(void)

{
  byte bVar1;
  
  if ((OVRManager_get_useDynamicFoveatedRendering_m18349DF2686AD7CD1FA5A01783CED4AECBDB896A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_useDynamicFoveatedRendering_m18349DF2686AD7CD1FA5A01783CED4AECBDB896A::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_useDynamicFoveatedRendering_m75BB7EE36C28644F81D010752E987C5B4E41F095(0);
  return bVar1 & 1;
}


