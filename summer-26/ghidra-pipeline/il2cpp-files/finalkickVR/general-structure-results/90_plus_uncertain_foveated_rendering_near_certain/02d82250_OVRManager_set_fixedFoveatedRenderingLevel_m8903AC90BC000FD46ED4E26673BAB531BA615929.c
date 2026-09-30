/*
FUNCTION_NAME: OVRManager_set_fixedFoveatedRenderingLevel_m8903AC90BC000FD46ED4E26673BAB531BA615929
ENTRY_POINT: 02d82250
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


void OVRManager_set_fixedFoveatedRenderingLevel_m8903AC90BC000FD46ED4E26673BAB531BA615929
               (undefined4 param_1)

{
  if ((OVRManager_set_fixedFoveatedRenderingLevel_m8903AC90BC000FD46ED4E26673BAB531BA615929::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_fixedFoveatedRenderingLevel_m8903AC90BC000FD46ED4E26673BAB531BA615929::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_set_fixedFoveatedRenderingLevel_m7621A311282BD1D71AB6EB9BE3F2C65D96DFFC5F(param_1,0);
  return;
}


