/*
FUNCTION_NAME: OVRManager_get_fixedFoveatedRenderingSupported_m39647A33AEFE5A6129DE3290038E3F4D9F9BC6C1
ENTRY_POINT: 02d82184
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;strong_foveation_hits_5;functionality_foveated_rendering
*/


byte OVRManager_get_fixedFoveatedRenderingSupported_m39647A33AEFE5A6129DE3290038E3F4D9F9BC6C1(void)

{
  byte bVar1;
  
  if ((OVRManager_get_fixedFoveatedRenderingSupported_m39647A33AEFE5A6129DE3290038E3F4D9F9BC6C1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_fixedFoveatedRenderingSupported_m39647A33AEFE5A6129DE3290038E3F4D9F9BC6C1::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_fixedFoveatedRenderingSupported_mAA2ED8AD8AEF2EDAE1234213993594EEBDBD491D(0)
  ;
  return bVar1 & 1;
}


