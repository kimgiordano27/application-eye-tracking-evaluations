/*
FUNCTION_NAME: OVRManager_get_foveatedRenderingLevel_mC0439F24303091C23FB87FFCF3ECA01A8C07F60D
ENTRY_POINT: 02d820bc
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


undefined4 OVRManager_get_foveatedRenderingLevel_mC0439F24303091C23FB87FFCF3ECA01A8C07F60D(void)

{
  undefined4 uVar1;
  
  if ((OVRManager_get_foveatedRenderingLevel_mC0439F24303091C23FB87FFCF3ECA01A8C07F60D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_foveatedRenderingLevel_mC0439F24303091C23FB87FFCF3ECA01A8C07F60D::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_get_foveatedRenderingLevel_m8B8134F1AE0303260244A9470036283CCEEBC2DB(0);
  return uVar1;
}


