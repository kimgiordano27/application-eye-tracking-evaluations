/*
FUNCTION_NAME: OVRManager_get_fixedFoveatedRenderingLevel_m50C462362955957310B24040F150D573CD565EAB
ENTRY_POINT: 02d821f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_4;functionality_foveated_rendering
*/


undefined4
OVRManager_get_fixedFoveatedRenderingLevel_m50C462362955957310B24040F150D573CD565EAB(void)

{
  undefined4 uVar1;
  
  if ((OVRManager_get_fixedFoveatedRenderingLevel_m50C462362955957310B24040F150D573CD565EAB::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_fixedFoveatedRenderingLevel_m50C462362955957310B24040F150D573CD565EAB::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVR_OpenVR_CVRCompositor__ForceReconnectProcess(0);
  return uVar1;
}


