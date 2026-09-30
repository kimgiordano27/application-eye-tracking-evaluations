/*
FUNCTION_NAME: OVRManager_get_useDynamicFixedFoveatedRendering_m57B77674E15DB93717951E23515E8C28D13871D5
ENTRY_POINT: 02d8239c
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


byte OVRManager_get_useDynamicFixedFoveatedRendering_m57B77674E15DB93717951E23515E8C28D13871D5(void)

{
  byte bVar1;
  
  if ((OVRManager_get_useDynamicFixedFoveatedRendering_m57B77674E15DB93717951E23515E8C28D13871D5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_useDynamicFixedFoveatedRendering_m57B77674E15DB93717951E23515E8C28D13871D5::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_useDynamicFixedFoveatedRendering_m5BC239BD83D054F496B9FD8ED4AF3BA234BCBE06
                    (0);
  return bVar1 & 1;
}


