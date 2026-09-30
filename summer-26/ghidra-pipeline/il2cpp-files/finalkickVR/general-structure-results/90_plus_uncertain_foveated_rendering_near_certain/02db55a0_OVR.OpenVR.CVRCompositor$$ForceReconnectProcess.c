/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$ForceReconnectProcess
ENTRY_POINT: 02db55a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_foveation_hits_3;functionality_foveated_rendering
*/


undefined4 OVR_OpenVR_CVRCompositor__ForceReconnectProcess(void)

{
  undefined4 uVar1;
  
  if ((OVRPlugin_get_fixedFoveatedRenderingLevel_mB47E89ECEE55C187A2A6BAD2ED96C6C562E7F3F8::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_get_fixedFoveatedRenderingLevel_mB47E89ECEE55C187A2A6BAD2ED96C6C562E7F3F8::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_get_foveatedRenderingLevel_m8B8134F1AE0303260244A9470036283CCEEBC2DB(0);
  return uVar1;
}


