/*
FUNCTION_NAME: OVRPlugin_get_tiledMultiResSupported_m96D9AD06A6D11CA28400DA480D72487566598F21
ENTRY_POINT: 02db59e0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;strong_foveation_hits_1;functionality_foveated_rendering
*/


byte OVRPlugin_get_tiledMultiResSupported_m96D9AD06A6D11CA28400DA480D72487566598F21(void)

{
  byte bVar1;
  
  if ((OVRPlugin_get_tiledMultiResSupported_m96D9AD06A6D11CA28400DA480D72487566598F21::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_tiledMultiResSupported_m96D9AD06A6D11CA28400DA480D72487566598F21::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_fixedFoveatedRenderingSupported_mAA2ED8AD8AEF2EDAE1234213993594EEBDBD491D(0)
  ;
  return bVar1 & 1;
}


